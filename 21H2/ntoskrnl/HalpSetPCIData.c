/*
 * XREFs of HalpSetPCIData @ 0x14039E9F4
 * Callers:
 *     HalSetBusDataByOffset @ 0x14039E9B0 (HalSetBusDataByOffset.c)
 * Callees:
 *     HalpWritePCIConfig @ 0x14039E92C (HalpWritePCIConfig.c)
 *     HalpReadPCIConfig @ 0x14039EC44 (HalpReadPCIConfig.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     memmove @ 0x140414040 (memmove.c)
 */

__int64 __fastcall HalpSetPCIData(__int64 a1, __int64 a2, __int64 a3, char *a4, unsigned int a5, unsigned int a6)
{
  unsigned int v6; // r15d
  unsigned int v7; // esi
  char *v8; // rdi
  unsigned int v9; // ebx
  __int64 v10; // r14
  unsigned __int8 v11; // r13
  unsigned __int16 v12; // r12
  unsigned int v14; // eax
  _OWORD v16[4]; // [rsp+40h] [rbp-89h] BYREF
  _OWORD v17[4]; // [rsp+80h] [rbp-49h] BYREF

  v6 = a5;
  v7 = 4096;
  v8 = a4;
  v9 = a3;
  if ( a6 <= 0x1000 )
    v7 = a6;
  LODWORD(v10) = 0;
  v11 = a2;
  v12 = a1;
  if ( a5 < 0x40 )
  {
    HalpReadPCIConfig(a1, a2, a3, v16, 0, 64);
    if ( LOWORD(v16[0]) == 0xFFFF || (BYTE14(v16[0]) & 0x7F) != 0 )
      return 0LL;
    v17[0] = v16[0];
    v14 = v7;
    if ( 64 - a5 <= v7 )
      v14 = 64 - a5;
    v17[1] = v16[1];
    v17[2] = v16[2];
    v17[3] = v16[3];
    v10 = v14;
    memmove((char *)v17 + a5, a4, v14);
    HalpWritePCIConfig(v12, v11, v9, (char *)v17 + a5, a5, v10);
    v6 = v10 + a5;
    v8 = &a4[v10];
    v7 -= v10;
  }
  else
  {
    HalpReadPCIConfig(a1, a2, a3, v16, 0, 4);
    if ( LOWORD(v16[0]) == 0xFFFF )
      return 0LL;
  }
  if ( v7 )
  {
    if ( v6 >= 0x40 )
    {
      HalpWritePCIConfig(v12, v11, v9, v8, v6, v7);
      LODWORD(v10) = v7 + v10;
    }
  }
  return (unsigned int)v10;
}
