/*
 * XREFs of RtlpHpVaMgrRangeCreate @ 0x1800060D0
 * Callers:
 *     RtlpHpVaMgrAlloc @ 0x180005BCC (RtlpHpVaMgrAlloc.c)
 *     RtlpHpVaMgrRegionAllocate @ 0x180006040 (RtlpHpVaMgrRegionAllocate.c)
 * Callees:
 *     RtlCSparseBitmapBitsClear @ 0x180004C10 (RtlCSparseBitmapBitsClear.c)
 *     RtlpCSparseBitmapUnlock @ 0x18000643C (RtlpCSparseBitmapUnlock.c)
 *     RtlpCSparseBitmapPageCommit @ 0x180006458 (RtlpCSparseBitmapPageCommit.c)
 *     memmove @ 0x1800A4480 (memmove.c)
 */

_BYTE *__fastcall RtlpHpVaMgrRangeCreate(__int64 a1, __int64 a2, unsigned __int16 *a3)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 v7; // r14
  __int64 v8; // r8
  int v9; // r12d
  unsigned __int64 v10; // rdx
  _BYTE *v11; // rsi
  __int64 v12; // rbp
  __int64 v13; // r8
  int v14; // r13d
  unsigned __int64 v15; // rdx
  void *v16; // r12
  __int64 v18; // rax
  _BYTE v19[16]; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v20[16]; // [rsp+30h] [rbp-38h] BYREF

  v3 = 0LL;
  if ( (*(_BYTE *)a3 & 4) != 0 )
    v7 = *((_QWORD *)a3 + 3);
  else
    v7 = a3[12];
  v8 = *(_QWORD *)(a1 + 24);
  v9 = *(_DWORD *)(v8 + 24);
  v10 = (unsigned __int64)(a2 - *(_QWORD *)(v8 + 8)) >> 20 << v9;
  v11 = (_BYTE *)(v10 + *(_QWORD *)(v8 + 40));
  if ( (int)RtlpCSparseBitmapPageCommit(v8 + 32, (8 * v10) >> 15, v19, v20) >= 0
    && (memmove(v11, a3, (unsigned int)(1 << v9)), RtlpCSparseBitmapUnlock(v19), v11) )
  {
    if ( (*v11 & 4) != 0 )
      return v11;
    *(_BYTE *)a3 |= 2u;
    v3 = 1LL;
    v12 = a2 + 0x100000;
    *((_BYTE *)a3 + 1) = *(_BYTE *)(a1 + 44);
    *(_OWORD *)(a3 + 4) = 0LL;
    *((_QWORD *)a3 + 3) = 2309737967LL;
    if ( v7 <= 1 )
      return v11;
    do
    {
      v13 = *(_QWORD *)(a1 + 24);
      v14 = *(_DWORD *)(v13 + 24);
      v15 = (unsigned __int64)(v12 - *(_QWORD *)(v13 + 8)) >> 20 << v14;
      v16 = (void *)(v15 + *(_QWORD *)(v13 + 40));
      if ( (int)RtlpCSparseBitmapPageCommit(v13 + 32, (8 * v15) >> 15, v19, v20) < 0 )
        break;
      memmove(v16, a3, (unsigned int)(1 << v14));
      RtlpCSparseBitmapUnlock(v19);
      if ( !v16 )
        break;
      ++v3;
      v12 += 0x100000LL;
    }
    while ( v3 < v7 );
  }
  else
  {
    v11 = 0LL;
  }
  if ( v3 < v7 )
  {
    for ( ; v3; --v3 )
    {
      v18 = *(_QWORD *)(a1 + 24);
      RtlCSparseBitmapBitsClear(
        v18 + 32,
        8 * ((unsigned __int64)&v11[-*(_QWORD *)(v18 + 40)] >> *(_DWORD *)(v18 + 24) << *(_DWORD *)(v18 + 24)),
        8 * (1LL << *(_DWORD *)(v18 + 24)));
      v11 += 32;
    }
    return 0LL;
  }
  return v11;
}
