/*
 * XREFs of HvlMapSparseGpaPages @ 0x1405C3FB8
 * Callers:
 *     VmpFillSlat @ 0x14059D8CC (VmpFillSlat.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404F5274 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlMapSparseGpaPages(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v5; // esi
  _QWORD *v10; // rax
  void *v11; // r13
  __int64 v12; // rcx
  unsigned __int64 v13; // rdi
  int v14; // r15d
  __int64 v15; // rax
  unsigned __int16 v16; // bx
  PHYSICAL_ADDRESS v18[4]; // [rsp+20h] [rbp-48h] BYREF

  v5 = 0;
  *a5 = 0LL;
  memset(v18, 0, sizeof(v18));
  v10 = HvlpAcquireHypercallPage(v18, 1, 0LL, 0LL);
  *((_DWORD *)v10 + 3) = 0;
  v11 = v10 + 2;
  v12 = *a5;
  *((_DWORD *)v10 + 2) = a2;
  v13 = a3;
  *v10 = a1;
  v14 = 0;
  do
  {
    if ( v13 >= 0xFF )
      v13 = 255LL;
    memmove(v11, (const void *)(a4 + 16 * v12), 16 * v13);
    v14 ^= ((unsigned __int16)v14 ^ (unsigned __int16)v13) & 0xFFF;
    v15 = HvcallInitiateHypercall(110);
    v16 = v15;
    if ( (_WORD)v15 )
      break;
    v12 = *a5 + (WORD2(v15) & 0xFFF);
    *a5 = v12;
    v13 = a3 - v12;
  }
  while ( a3 != v12 );
  HvlpReleaseHypercallPage((__int64)v18);
  if ( v16 )
    return (unsigned int)HvlpHvToNtStatus(v16);
  return v5;
}
