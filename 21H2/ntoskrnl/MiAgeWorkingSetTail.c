/*
 * XREFs of MiAgeWorkingSetTail @ 0x1402D2CB0
 * Callers:
 *     MiAgePte @ 0x140344190 (MiAgePte.c)
 * Callees:
 *     KeFlushTb @ 0x1402D4970 (KeFlushTb.c)
 *     MiFreeWsleList @ 0x140332070 (MiFreeWsleList.c)
 *     KeFlushMultipleRangeTb @ 0x140346370 (KeFlushMultipleRangeTb.c)
 *     KeFlushCurrentTbOnly @ 0x1403B7608 (KeFlushCurrentTbOnly.c)
 *     KeFlushMultipleRangeCurrentTb @ 0x1403C96BC (KeFlushMultipleRangeCurrentTb.c)
 *     MiProcessVmAccessedInfo @ 0x14053BB70 (MiProcessVmAccessedInfo.c)
 *     MiQueryEPTAccessedState @ 0x14053BC40 (MiQueryEPTAccessedState.c)
 */

__int64 __fastcall MiAgeWorkingSetTail(__int64 a1)
{
  __int64 v1; // rbx
  int i; // r14d
  unsigned int *v4; // rdi
  __int64 v5; // rcx
  _DWORD *v6; // rdx
  __int64 v8; // r8
  unsigned __int64 v9; // r9
  unsigned int v10; // eax
  _KPROCESS *Process; // rdx
  __int64 v12; // rdx

  v1 = *(_QWORD *)(a1 + 168);
  for ( i = 0; ; i = 1 )
  {
    v4 = *(unsigned int **)(v1 + 56);
    if ( !v4 )
      goto LABEL_4;
    v5 = v4[3];
    if ( !(_DWORD)v5 )
      goto LABEL_4;
    v8 = *((unsigned __int8 *)v4 + 4);
    v9 = qword_140C4DFD0;
    if ( (v8 & 2) == 0 )
    {
      v10 = *v4;
      if ( *v4 != 1 )
        goto LABEL_24;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( Process[2].Affinity.Bitmap[5] || Process->SecureState.SecureHandle )
        v9 = -1LL;
    }
    v10 = *v4;
    if ( *v4 != 1 )
    {
LABEL_24:
      v12 = 1LL;
      if ( (v8 & 8) != 0 )
        v12 = 2LL;
      goto LABEL_16;
    }
    v12 = 0LL;
LABEL_16:
    if ( *((_BYTE *)v4 + 5) || *((_QWORD *)v4 + 2) > v9 )
    {
      if ( (v8 & 1) != 0 )
        KeFlushCurrentTbOnly(v10, v12, v8, v9);
      else
        KeFlushTb(v10);
      *((_BYTE *)v4 + 5) = 0;
    }
    else if ( (v8 & 1) != 0 )
    {
      KeFlushMultipleRangeCurrentTb(v5, v4 + 6, v10);
    }
    else
    {
      KeFlushMultipleRangeTb(v5, v4 + 6, v10, (unsigned int)v12);
    }
    *((_BYTE *)v4 + 4) &= ~8u;
    v4[3] = 0;
    *((_QWORD *)v4 + 2) = 0LL;
LABEL_4:
    if ( *(_DWORD *)(v1 + 76) )
      MiFreeWsleList(*(_QWORD *)(a1 + 24), v1 + 64, 0LL);
    v6 = *(_DWORD **)(v1 + 248);
    if ( !v6 || !*v6 || !(unsigned int)MiQueryEPTAccessedState(a1, v6, (*(_DWORD *)v1 & 3) != 0) )
      break;
    MiProcessVmAccessedInfo(a1, *(_QWORD *)(v1 + 248), MiAgeWorkingSetEPTCallback, v1);
  }
  if ( (*(_BYTE *)(a1 + 2) & 2) != 0 || i )
    *(_BYTE *)(v1 + 6) = 1;
  return 0LL;
}
