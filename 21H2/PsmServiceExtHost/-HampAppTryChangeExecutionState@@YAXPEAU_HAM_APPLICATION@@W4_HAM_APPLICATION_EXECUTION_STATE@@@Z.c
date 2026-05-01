/*
 * XREFs of ?HampAppTryChangeExecutionState@@YAXPEAU_HAM_APPLICATION@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180025BAC
 * Callers:
 *     ?HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECUTION_STATE@@@Z @ 0x180025B68 (-HampHostChangeApplicationExecutionState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_APPLICATION_EXECU.c)
 * Callees:
 *     CempLockTrackerMarkReleased @ 0x18001E700 (CempLockTrackerMarkReleased.c)
 *     ?HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z @ 0x180023910 (-HampAppCommitStateSummary@@YAXPEAU_HAM_APPLICATION@@PEAT_HAM_EXTERNAL_STATE_SUMMARY@@@Z.c)
 */

__int64 __fastcall HampAppTryChangeExecutionState(__int64 a1, int a2)
{
  DWORD v2; // esi
  _QWORD *Value; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  int v9; // [rsp+38h] [rbp+10h] BYREF

  v2 = HampLockTrackerId;
  if ( HampLockTrackerId != -1 )
  {
    Value = TlsGetValue(HampLockTrackerId);
    if ( (*(_QWORD *)TlsGetValue(v2) & 0xFFFFFFFFFFFFFFE0uLL) != 0 )
      __int2c();
    *Value |= 0x20uLL;
    ++Value[6];
  }
  RtlAcquireSRWLockExclusive(a1 + 576);
  *(_DWORD *)(a1 + 584) = GetCurrentThreadId();
  v7 = (*(_DWORD *)(a1 + 616) >> 5) & 7;
  if ( (_DWORD)v7 != a2 && ((_DWORD)v7 != 4 || !a2) )
  {
    if ( a2 )
    {
      v6 = (unsigned int)(a2 - 1);
      if ( a2 == 1 || (v6 = (unsigned int)(a2 - 2), a2 == 2) )
      {
        if ( (_DWORD)v7 == 3 )
          goto LABEL_9;
      }
      else if ( a2 != 3 )
      {
        goto LABEL_9;
      }
    }
    v9 = *(_DWORD *)(a1 + 616) ^ ((unsigned __int8)*(_DWORD *)(a1 + 616) ^ (unsigned __int8)(32 * a2)) & 0xE0;
    HampAppCommitStateSummary((struct _HAM_APPLICATION *)a1, (union _HAM_EXTERNAL_STATE_SUMMARY *)&v9);
  }
LABEL_9:
  CempLockTrackerMarkReleased(v6, v7, 5u);
  *(_DWORD *)(a1 + 584) = 0;
  return RtlReleaseSRWLockExclusive(a1 + 576);
}
