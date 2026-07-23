/*
 * XREFs of RtlpHpLfhContextInitialize @ 0x1800086EC
 * Callers:
 *     RtlpHpHeapCreate @ 0x18000821C (RtlpHpHeapCreate.c)
 * Callees:
 *     RtlQueryResourcePolicy @ 0x180044700 (RtlQueryResourcePolicy.c)
 *     memset @ 0x1800A4740 (memset.c)
 */

__int64 __fastcall RtlpHpLfhContextInitialize(
        unsigned __int64 a1,
        __int64 a2,
        unsigned int a3,
        char a4,
        __int64 a5,
        __int16 a6,
        _DWORD *a7)
{
  __int64 v11; // rax
  __int128 v12; // xmm1
  __int64 v13; // xmm0_8
  _DWORD *v14; // rax
  __int64 i; // rcx
  __int64 v16; // rax
  int v18; // [rsp+40h] [rbp+18h] BYREF

  memset((void *)a1, 0, 0x4C0uLL);
  v11 = a5;
  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 57) = a4;
  v12 = *(_OWORD *)(v11 + 16);
  *(_OWORD *)(a1 + 8) = *(_OWORD *)v11;
  v13 = *(_QWORD *)(v11 + 32);
  *(_WORD *)(a1 + 58) = a6 - a1;
  v14 = a7;
  *(_OWORD *)(a1 + 24) = v12;
  *(_QWORD *)(a1 + 40) = v13;
  *(_DWORD *)(a1 + 60) = *v14;
  for ( i = 0LL; i < 4; ++i )
    *(_QWORD *)(a1 + 8 * i + 8) ^= a1 ^ RtlpHpHeapGlobals;
  v16 = *(_QWORD *)(a1 + 40);
  if ( v16 )
    *(_QWORD *)(a1 + 40) = a1 ^ RtlpHpHeapGlobals ^ v16;
  if ( (int)RtlQueryResourcePolicy(0LL, 0LL, &v18, 4LL) >= 0 && v18 <= 10 )
    a3 = 1;
  if ( a3 > 0x40 )
    LOBYTE(a3) = 64;
  *(_BYTE *)(a1 + 56) = a3;
  if ( (unsigned __int8)a3 > 1u )
    *(_QWORD *)(a1 + 48) = (char *)&unk_180121900
                         + ((unsigned __int64)((62 - (64 - (unsigned __int8)a3))
                                             * (64 - (unsigned int)(unsigned __int8)a3 + 61)) >> 1);
  a5 = 1LL;
  memset64((void *)(a1 + 128), 1uLL, 0x81uLL);
  return RtlpInitializeLfhRandomDataArray(0LL);
}
