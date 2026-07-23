/*
 * XREFs of HvlMapGpaPages @ 0x1405C9C84
 * Callers:
 *     VmpFillSlat @ 0x1405A36BC (VmpFillSlat.c)
 *     VmpFlushTbVaRange @ 0x1405A39E0 (VmpFlushTbVaRange.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x140390610 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140414040 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1404F27C0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404F33B0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404FAC74 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlMapGpaPages(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, __int64 a5, __int64 *a6)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rdi
  _QWORD *v10; // r15
  __int64 v11; // r14
  int v12; // r13d
  int v13; // ebp
  __int64 v14; // rax
  unsigned __int16 v15; // bx
  PHYSICAL_ADDRESS v17[11]; // [rsp+20h] [rbp-58h] BYREF

  v6 = 0;
  v7 = a4;
  *a6 = 0LL;
  memset(v17, 0, 32);
  v10 = HvlpAcquireHypercallPage(v17, 1, 0LL, 0LL);
  v10[1] = 0LL;
  *((_DWORD *)v10 + 5) = 0;
  v11 = *a6;
  *((_DWORD *)v10 + 4) = a3;
  v12 = a3 & 0x700;
  *v10 = a1;
  v13 = 0;
  do
  {
    if ( v7 >= 0x1FD )
      v7 = 509LL;
    if ( !v12 )
      memmove(v10 + 3, (const void *)(a5 + 8 * v11), 8 * v7);
    v10[1] = v11 + a2;
    v13 ^= ((unsigned __int16)v13 ^ (unsigned __int16)v7) & 0xFFF;
    v14 = HvcallInitiateHypercall(75);
    v15 = v14;
    if ( (_WORD)v14 )
      break;
    v11 = *a6 + (WORD2(v14) & 0xFFF);
    *a6 = v11;
    v7 = a4 - v11;
  }
  while ( a4 != v11 );
  HvlpReleaseHypercallPage((__int64)v17);
  if ( v15 )
    return (unsigned int)HvlpHvToNtStatus(v15);
  return v6;
}
