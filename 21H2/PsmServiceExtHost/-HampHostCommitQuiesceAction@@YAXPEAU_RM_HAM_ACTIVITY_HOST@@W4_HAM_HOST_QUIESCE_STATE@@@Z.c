/*
 * XREFs of ?HampHostCommitQuiesceAction@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_HOST_QUIESCE_STATE@@@Z @ 0x18002A6D4
 * Callers:
 *     ?HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z @ 0x180029FAC (-HampHostUpdateQuiesceState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEA_K1@Z.c)
 * Callees:
 *     ?HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE_REASON@@PEAU_HAM_CLIENT_CONTEXT@@W4_HAM_ROUTINE_DEP_WORK_POLICY@@K@Z @ 0x180004E10 (-HampHostQueueTerminateEx@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_TERMINATE_TYPE@@W4_HAM_TERMINATE.c)
 *     ?HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REASON@@K@Z @ 0x180037FD4 (-HampHostRevokeQuiesceExtension@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@W4_HAM_ACTIVITY_STOP_REQUEST_REAS.c)
 */

unsigned __int64 __fastcall HampHostCommitQuiesceAction(__int64 a1, char a2)
{
  unsigned __int64 result; // rax

  if ( a2 == 3 )
  {
    HampHostRevokeQuiesceExtension(a1, 6LL);
  }
  else if ( a2 == 4 && (*(_QWORD *)(a1 + 648) & 0xE0000000LL) != 0x80000000LL )
  {
    HampHostQueueTerminateEx((struct _RM_HAM_ACTIVITY_HOST *)a1, (*(_QWORD *)(a1 + 648) >> 44) & 1 | 2, 3584, 0LL, 3, 0);
  }
  *(_QWORD *)(a1 + 648) &= 0xFFFFFFFF1FFFFFFFuLL;
  result = (unsigned __int64)(a2 & 7) << 29;
  *(_QWORD *)(a1 + 648) |= result;
  return result;
}
