/*
 * XREFs of HvlQueryVsmProtectionInfo @ 0x14088E5A4
 * Callers:
 *     ExpQuerySystemInformation @ 0x140645E90 (ExpQuerySystemInformation.c)
 * Callees:
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     HvlpProcessIommu @ 0x1404F9758 (HvlpProcessIommu.c)
 *     HviGetHardwareFeatures @ 0x1405BF1A0 (HviGetHardwareFeatures.c)
 */

__int64 __fastcall HvlQueryVsmProtectionInfo(__int64 a1, __int64 Size, unsigned int *a3, __int64 a4)
{
  void *v5; // r14
  unsigned int v6; // ebx
  unsigned int v8; // edi
  char v9; // al
  _DWORD Src[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int *v11; // [rsp+28h] [rbp-40h]
  __int128 v12; // [rsp+30h] [rbp-38h] BYREF

  v5 = (void *)a1;
  v11 = a3;
  v12 = 0LL;
  v6 = 0;
  if ( (unsigned int)Size >= 3 )
  {
    v8 = 4;
    if ( (unsigned int)Size < 4 )
      v8 = Size;
    Src[1] = v8;
    Src[0] = 0;
    LOBYTE(a1) = HvlHypervisorConnected;
    if ( !HvlHypervisorConnected )
      goto LABEL_15;
    if ( (HvlpFlags & 2) == 0 )
    {
      if ( (HvlpFlags & 0x40) != 0 || HvlpProcessIommu(a1, Size) )
        LOBYTE(Src[0]) = 1;
      BYTE1(Src[0]) = (HvlpFlags & 0x40) != 0;
      goto LABEL_17;
    }
    if ( HvlHypervisorConnected && (HvlpFlags & 2) != 0 )
    {
      HviGetHardwareFeatures((__int64)&v12, Size, (__int64)a3, a4);
      v9 = (unsigned __int8)v12 >> 7;
      BYTE1(Src[0]) = (unsigned __int8)v12 >> 7;
    }
    else
    {
LABEL_15:
      v9 = HvlpProcessIommu(a1, Size);
      BYTE1(Src[0]) = 0;
    }
    LOBYTE(Src[0]) = v9;
LABEL_17:
    BYTE2(Src[0]) = (HvlpFlags & 0x20000) != 0;
    HIBYTE(Src[0]) = HIBYTE(HvlpFlags) & 1;
    memmove(v5, Src, v8);
    *a3 = v8;
    return v6;
  }
  v6 = -1073741584;
  *a3 = 0;
  return v6;
}
