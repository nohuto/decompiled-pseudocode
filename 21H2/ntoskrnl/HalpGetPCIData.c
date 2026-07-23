/*
 * XREFs of HalpGetPCIData @ 0x14039EB24
 * Callers:
 *     HalGetBusDataByOffset @ 0x14039EAD0 (HalGetBusDataByOffset.c)
 *     HalpPciReadSecondaryBusNumber @ 0x1404CC85C (HalpPciReadSecondaryBusNumber.c)
 * Callees:
 *     HalpReadPCIConfig @ 0x14039EC44 (HalpReadPCIConfig.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall HalpGetPCIData(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // ebp
  unsigned int v7; // edi
  unsigned int v9; // ebx
  char v10; // r15
  __int64 v11; // rsi
  unsigned __int16 v12; // r14
  unsigned int v13; // ecx
  unsigned int v14; // ecx
  unsigned int v15; // eax
  __int64 v16; // rdx
  _WORD v18[32]; // [rsp+30h] [rbp-98h] BYREF

  v6 = a5;
  v7 = 4096;
  v9 = a3;
  if ( a6 <= 0x1000 )
    v7 = a6;
  v10 = a2;
  LODWORD(v11) = 0;
  v12 = a1;
  if ( a5 < 0x40 )
  {
    HalpReadPCIConfig(a1, a2, a3, v18, 0, 64);
    v13 = 2;
    if ( v18[0] != 0xFFFF )
      v13 = 64;
    if ( v13 >= a5 )
    {
      v14 = v13 - a5;
      v15 = v7;
      if ( v14 <= v7 )
        v15 = v14;
      v11 = v15;
      memmove(a4, (char *)v18 + a5, v15);
      v6 = v11 + a5;
      a4 += v11;
      v7 -= v11;
      goto LABEL_10;
    }
    return 0LL;
  }
  HalpReadPCIConfig(a1, a2, a3, v18, 0, 4);
  if ( v18[0] == 0xFFFF )
    return 0LL;
LABEL_10:
  if ( v7 )
  {
    if ( v6 >= 0x40 )
    {
      LOBYTE(v16) = v10;
      HalpReadPCIConfig(v12, v16, v9, a4, v6, v7);
      LODWORD(v11) = v7 + v11;
    }
  }
  return (unsigned int)v11;
}
