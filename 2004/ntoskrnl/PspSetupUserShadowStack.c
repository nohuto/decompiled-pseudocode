/*
 * XREFs of PspSetupUserShadowStack @ 0x14090720C
 * Callers:
 *     PspAllocateThread @ 0x1406AF6DC (PspAllocateThread.c)
 * Callees:
 *     KiUnstackDetachProcess @ 0x140205370 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14024F890 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     RtlLocateExtendedFeature @ 0x14058A0E0 (RtlLocateExtendedFeature.c)
 *     MmFreeVirtualMemory @ 0x1405F9180 (MmFreeVirtualMemory.c)
 *     PspReserveAndCommitUserShadowStack @ 0x140906F48 (PspReserveAndCommitUserShadowStack.c)
 *     RtlCalculateUserShadowStackSizes @ 0x14090CB24 (RtlCalculateUserShadowStackSizes.c)
 */

__int64 __fastcall PspSetupUserShadowStack(
        _KPROCESS *BugCheckParameter1,
        _DWORD *a2,
        __int64 a3,
        _BYTE *a4,
        unsigned int a5)
{
  __int64 result; // rax
  int v10; // esi
  char *ExtendedFeature; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // [rsp+30h] [rbp-31h] BYREF
  __int64 v14; // [rsp+38h] [rbp-29h] BYREF
  __int64 v15; // [rsp+40h] [rbp-21h] BYREF
  ULONG_PTR v16; // [rsp+48h] [rbp-19h] BYREF
  _OWORD v17[3]; // [rsp+50h] [rbp-11h] BYREF

  v14 = 0LL;
  v16 = 0LL;
  v13 = 0LL;
  memset(v17, 0, sizeof(v17));
  result = RtlCalculateUserShadowStackSizes(a3, &v13, &v16);
  if ( (int)result >= 0 )
  {
    KiStackAttachProcess(BugCheckParameter1, 0LL, (__int64)v17);
    v15 = 0LL;
    v10 = PspReserveAndCommitUserShadowStack(v13, v16, a5, &v15, &v14);
    if ( v10 < 0 )
    {
      v12 = v15;
    }
    else
    {
      if ( (a2[12] & 0x100040) == 0x100040 )
      {
        ExtendedFeature = RtlLocateExtendedFeature(a2 + 308, 0xBu, 0LL);
        if ( ExtendedFeature )
        {
          *(_QWORD *)((char *)a2 + a2[312] + 1232) |= 0x800uLL;
          *((_QWORD *)ExtendedFeature + 1) = v14;
          *(_QWORD *)ExtendedFeature = 1LL;
        }
      }
      *(_QWORD *)(a3 + 64) = v15;
      *a4 |= 8u;
      v12 = 0LL;
    }
    if ( v12 )
    {
      v14 = 0LL;
      v13 = v12;
      MmFreeVirtualMemory(0xFFFFFFFFFFFFFFFFuLL, &v13, &v14, 0x8000, 0, 0x40000000);
    }
    KiUnstackDetachProcess((__int64)v17, 0LL);
    return (unsigned int)v10;
  }
  return result;
}
