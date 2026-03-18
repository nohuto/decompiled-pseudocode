/*
 * XREFs of HvlMapGpaPages @ 0x1405C3E64
 * Callers:
 *     VmpFillSlat @ 0x14059D8CC (VmpFillSlat.c)
 *     VmpFlushTbVaRange @ 0x14059DBF0 (VmpFlushTbVaRange.c)
 * Callees:
 *     HvcallInitiateHypercall @ 0x14038CF90 (HvcallInitiateHypercall.c)
 *     memmove @ 0x140408CC0 (memmove.c)
 *     HvlpAcquireHypercallPage @ 0x1404ECDE0 (HvlpAcquireHypercallPage.c)
 *     HvlpReleaseHypercallPage @ 0x1404ED9E0 (HvlpReleaseHypercallPage.c)
 *     HvlpHvToNtStatus @ 0x1404F5274 (HvlpHvToNtStatus.c)
 */

__int64 __fastcall HvlMapGpaPages(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, __int64 a5, __int64 *a6)
{
  unsigned int v6; // esi
  unsigned __int64 v7; // rdi
  __int64 v10; // r9
  _QWORD *v11; // r15
  __int64 v12; // r14
  int v13; // r13d
  int v14; // ebp
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned __int16 v17; // bx
  __int128 v19; // [rsp+20h] [rbp-58h] BYREF
  __int128 v20; // [rsp+30h] [rbp-48h]

  v6 = 0;
  v7 = a4;
  *a6 = 0LL;
  v19 = 0LL;
  v20 = 0LL;
  v11 = HvlpAcquireHypercallPage((PHYSICAL_ADDRESS *)&v19, 1, 0LL, 0LL);
  v11[1] = 0LL;
  *((_DWORD *)v11 + 5) = 0;
  v12 = *a6;
  *((_DWORD *)v11 + 4) = a3;
  v13 = a3 & 0x700;
  *v11 = a1;
  v14 = 0;
  do
  {
    if ( v7 >= 0x1FD )
      v7 = 509LL;
    if ( !v13 )
      memmove(v11 + 3, (const void *)(a5 + 8 * v12), 8 * v7);
    v15 = *((_QWORD *)&v20 + 1);
    v11[1] = v12 + a2;
    v14 ^= ((unsigned __int16)v14 ^ (unsigned __int16)v7) & 0xFFF;
    v16 = HvcallInitiateHypercall(75, v15, 0LL, v10);
    v17 = v16;
    if ( (_WORD)v16 )
      break;
    v12 = *a6 + (WORD2(v16) & 0xFFF);
    *a6 = v12;
    v7 = a4 - v12;
  }
  while ( a4 != v12 );
  HvlpReleaseHypercallPage((__int64)&v19);
  if ( v17 )
    return (unsigned int)HvlpHvToNtStatus(v17);
  return v6;
}
