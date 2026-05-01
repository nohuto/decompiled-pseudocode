/*
 * XREFs of ?ArOnCsExit@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x18008471C
 * Callers:
 *     ?ArCsStateChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x1800841A0 (-ArCsStateChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z.c)
 * Callees:
 *     CemRcTableGetFirst @ 0x1800255D4 (CemRcTableGetFirst.c)
 *     CemRcTableGetNext @ 0x180027304 (CemRcTableGetNext.c)
 *     ?ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180084980 (-ArActClearChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 *     ?ArActRestart@@YAJPEAU_AR_ACTIVITY@@W4_AR_STATE_CHANGE_EVENT@@@Z @ 0x180084B40 (-ArActRestart@@YAJPEAU_AR_ACTIVITY@@W4_AR_STATE_CHANGE_EVENT@@@Z.c)
 *     ?ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z @ 0x180084BB0 (-ArActWaitNoChangeInProgress@@YAXPEAU_AR_ACTIVITY@@@Z.c)
 */

void __fastcall ArOnCsExit(struct _ACTIVITY_RESTARTER *a1)
{
  struct _AR_ACTIVITY *i; // rax
  struct _AR_ACTIVITY *v3; // rbx

  RtlAcquireSRWLockExclusive((char *)a1 + 48);
  GetCurrentThreadId();
  *((_BYTE *)a1 + 64) &= ~1u;
  *((_DWORD *)a1 + 14) = 0;
  RtlReleaseSRWLockExclusive((char *)a1 + 48);
  for ( i = (struct _AR_ACTIVITY *)CemRcTableGetFirst((__int64)a1); ; i = (struct _AR_ACTIVITY *)CemRcTableGetNext(v3) )
  {
    v3 = i;
    if ( !i )
      break;
    ArActWaitNoChangeInProgress(i);
    ArActRestart(v3);
    ArActClearChangeInProgress(v3);
  }
}
