/*
 * XREFs of _RtlpHpVsSubsegmentCommitPages@24 @ 0x4B37FC3B
 * Callers:
 *     _RtlpHpVsChunkDecommit@20 @ 0x4B37EAB0 (_RtlpHpVsChunkDecommit@20.c)
 *     _RtlpHpVsChunkSplit@24 @ 0x4B37EE0F (_RtlpHpVsChunkSplit@24.c)
 * Callees:
 *     _RtlAcquireSRWLockExclusive@4 @ 0x4B2C22E0 (_RtlAcquireSRWLockExclusive@4.c)
 *     _RtlReleaseSRWLockExclusive@4 @ 0x4B2C2480 (_RtlReleaseSRWLockExclusive@4.c)
 *     _RtlpHpAppCompatDontChangePolicy@0 @ 0x4B2ED850 (_RtlpHpAppCompatDontChangePolicy@0.c)
 *     __allshl @ 0x4B2F65F0 (__allshl.c)
 */

int __fastcall RtlpHpVsSubsegmentCommitPages(int a1, int a2, unsigned int a3, unsigned int a4, unsigned int a5, int a6)
{
  bool v8; // zf
  int v9; // esi
  int v10; // esi
  int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // esi
  unsigned int v15; // ecx
  int v17; // [esp-Ch] [ebp-34h]
  int v18; // [esp-8h] [ebp-30h]
  int v19; // [esp+10h] [ebp-18h]
  __int64 v20; // [esp+18h] [ebp-10h]
  int v21; // [esp+20h] [ebp-8h]

  if ( a3 )
  {
    _BitScanForward((unsigned int *)&v10, a3);
  }
  else
  {
    v8 = !_BitScanForward((unsigned int *)&v9, a4);
    if ( v8 )
      v10 = v21;
    else
      v10 = v9 + 32;
  }
  if ( a4 )
  {
    v8 = !_BitScanReverse((unsigned int *)&v11, a4);
    if ( v8 )
      v12 = v21;
    else
      v12 = v11 + 32;
  }
  else
  {
    _BitScanReverse((unsigned int *)&v12, a3);
  }
  v13 = v12 - v10 + 1;
  v19 = v13 << 12;
  v20 = ((1LL << v13) - 1) << v10;
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a2 + 16));
  v18 = a2 + (v10 << 12);
  v17 = a1 ^ *(_DWORD *)(a1 + 128);
  if ( !a6 )
  {
    ((void (__thiscall *)(int, int, int, int))(a1 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a1 + 144)))(
      a1 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a1 + 144),
      v17,
      v18,
      v19);
    *(_QWORD *)(a2 + 8) &= ~v20;
    v15 = -a5;
    goto LABEL_15;
  }
  v14 = ((int (__thiscall *)(int, int, int, int))(a1 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a1 + 140)))(
          a1 ^ RtlpHpHeapGlobals ^ *(_DWORD *)(a1 + 140),
          v17,
          v18,
          v19);
  if ( v14 >= 0 )
  {
    *(_QWORD *)(a2 + 8) |= v20;
    v15 = a5;
LABEL_15:
    _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 24), v15);
    v14 = 0;
  }
  RtlReleaseSRWLockExclusive((volatile signed __int32 *)(a2 + 16));
  return v14;
}
