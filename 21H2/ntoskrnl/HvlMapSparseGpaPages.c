/*
 * XREFs of HvlMapSparseGpaPages @ 0x140654038
 * Callers:
 *     VmpFillSlat @ 0x140629A00 (VmpFillSlat.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039D8F0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF00 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14039DF90 (HvlpAcquireHypercallPage.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     HvlpHvToNtStatus @ 0x14054CA70 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlMapSparseGpaPages(__int64 a1, int a2, unsigned __int64 a3, __int64 a4, __int64 *a5)
{
  unsigned int v9; // esi
  _QWORD *v10; // rax
  int v11; // r15d
  void *v12; // r13
  __int64 v13; // rcx
  unsigned __int64 v14; // rdi
  __int64 v15; // rax
  unsigned __int16 v16; // bx
  __int128 v18; // [rsp+20h] [rbp-48h] BYREF
  __int64 v19; // [rsp+30h] [rbp-38h]
  __int64 v20; // [rsp+38h] [rbp-30h]

  v9 = 0;
  v18 = 0LL;
  v19 = 0LL;
  LODWORD(v20) = 0;
  *a5 = 0LL;
  v10 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v18, 1, 0LL, 0LL);
  v11 = 0;
  *((_DWORD *)v10 + 3) = 0;
  v12 = v10 + 2;
  v13 = *a5;
  *((_DWORD *)v10 + 2) = a2;
  v14 = a3;
  *v10 = a1;
  do
  {
    if ( v14 >= 0xFF )
      v14 = 255LL;
    memmove(v12, (const void *)(a4 + 16 * v13), 16 * v14);
    v11 ^= ((unsigned __int16)v11 ^ (unsigned __int16)v14) & 0xFFF;
    v15 = HvcallInitiateHypercall(110);
    v16 = v15;
    if ( (_WORD)v15 )
      break;
    v13 = *a5 + (WORD2(v15) & 0xFFF);
    *a5 = v13;
    v14 = a3 - v13;
  }
  while ( a3 != v13 );
  HvlpReleaseHypercallPage((__int64)&v18);
  if ( v16 )
    return (unsigned int)HvlpHvToNtStatus(v16);
  return v9;
}
