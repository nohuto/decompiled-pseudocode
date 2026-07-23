/*
 * XREFs of MiComputeMemoryNodeProcessorAssignments @ 0x140A6F2CC
 * Callers:
 *     MiZeroBootLargePages @ 0x1403CAD94 (MiZeroBootLargePages.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1402942D0 (KeQueryNodeActiveAffinity.c)
 */

__int64 __fastcall MiComputeMemoryNodeProcessorAssignments(__int64 a1)
{
  unsigned int v1; // r13d
  unsigned __int16 v2; // bp
  __int64 v3; // r15
  int v4; // esi
  unsigned int v5; // ebx
  __int64 v6; // rdx
  _WORD *v7; // rdi
  bool v8; // zf
  int v9; // ecx
  unsigned int v10; // edi
  unsigned int v12; // ecx
  __int64 v13; // rsi
  __int64 v14; // r10
  unsigned int *v15; // r8
  unsigned int *v16; // rbx
  __int64 v17; // r9
  unsigned int v18; // r11d
  __int64 v19; // rsi
  unsigned __int64 v20; // r14
  unsigned int v21; // r11d
  unsigned __int64 v22; // rdx
  __int16 v23; // ax

  v1 = dword_140C4DF24;
  v2 = 0;
  v3 = a1;
  v4 = 0;
  v5 = 0;
  if ( !KeNumberNodes )
    return 1LL;
  do
  {
    v6 = *(_QWORD *)(v3 + 16) + 4544LL * v5;
    v7 = (_WORD *)(v6 + 4488);
    KeQueryNodeActiveAffinity(v5, (PGROUP_AFFINITY)(v6 + 4472), (PUSHORT)(v6 + 4488));
    v8 = *v7 == 0;
    v9 = v4 + 1;
    v10 = (unsigned __int16)KeNumberNodes;
    if ( !v8 )
      v9 = v4;
    ++v5;
    v4 = v9;
  }
  while ( v5 < (unsigned __int16)KeNumberNodes );
  if ( !v9 )
    return 1LL;
  v12 = 0;
  if ( !KeNumberNodes )
    return 1LL;
  while ( 1 )
  {
    v13 = *(_QWORD *)(v3 + 16);
    v14 = v13 + 4544LL * v12;
    if ( !*(_WORD *)(v14 + 4488) )
    {
      v15 = (unsigned int *)(qword_140C4DED8 + 4LL * v12 * v10);
      v16 = &v15[(unsigned __int16)KeNumberNodes];
      while ( ++v15 < v16 )
      {
        v17 = v13 + 4544LL * *v15;
        v18 = *(unsigned __int16 *)(v17 + 4488) / v1;
        if ( v18 >= 2 )
        {
          v19 = 0LL;
          v20 = *(_QWORD *)(v17 + 4472);
          v21 = (v1 * v18) >> 1;
          if ( v21 )
          {
            do
            {
              _BitScanForward64(&v22, v20);
              ++v2;
              v19 |= 1LL << v22;
              v20 &= ~(1LL << v22);
            }
            while ( v2 < v21 );
            v3 = a1;
          }
          *(_QWORD *)(v17 + 4472) &= ~v19;
          *(_QWORD *)(v14 + 4472) = v19;
          v23 = *(_WORD *)(v17 + 4480);
          *(_WORD *)(v14 + 4488) = v2;
          *(_WORD *)(v14 + 4480) = v23;
          *(_WORD *)(v17 + 4488) -= v2;
          v2 = 0;
          break;
        }
      }
      if ( v15 == v16 )
        return 0LL;
    }
    if ( ++v12 >= v10 )
      return 1LL;
  }
}
