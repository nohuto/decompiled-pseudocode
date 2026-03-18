/*
 * XREFs of ?InsertToPenaltyBox@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@W4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C001145C
 * Callers:
 *     ?MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z @ 0x1C0069EC0 (-MoveToPenaltyBoxBandNoLock@VIDMM_DEVICE@@IEAAXW4VIDMM_PENALTY_BOX_BAND@@@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0075620 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall VIDMM_GLOBAL::InsertToPenaltyBox(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 *result; // rax
  __int64 **v9; // rcx
  _QWORD *v10; // rax

  if ( a3 == 4 )
  {
    v6 = *(unsigned int *)(a2 + 64);
    if ( (_DWORD)v6 )
    {
      if ( *(_DWORD *)(a1 + 8) != 213 )
      {
        v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(a1, a2);
        v10[7] = 0LL;
        v10[3] = 270LL;
        v10[4] = 57LL;
        v10[5] = a2;
        v10[6] = v6;
        WdLogEvent5_WdCriticalError(v10);
      }
    }
  }
  v7 = 16LL * (unsigned int)(a3 - 1) + a1 + 44504;
  result = (__int64 *)(a2 + 184);
  v9 = *(__int64 ***)(v7 + 8);
  if ( *v9 != (__int64 *)v7 )
    __fastfail(3u);
  *result = v7;
  *(_QWORD *)(a2 + 192) = v9;
  *v9 = result;
  *(_QWORD *)(v7 + 8) = result;
  return result;
}
