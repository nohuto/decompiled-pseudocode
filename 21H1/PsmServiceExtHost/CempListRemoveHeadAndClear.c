/*
 * XREFs of CempListRemoveHeadAndClear @ 0x18003713C
 * Callers:
 *     RmpWnfCleanupPendingCallbackList @ 0x1800273A4 (RmpWnfCleanupPendingCallbackList.c)
 *     ?RmpWnfPublishMessageToClientStateNameWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z @ 0x180037040 (-RmpWnfPublishMessageToClientStateNameWorker@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WORK@@@Z.c)
 *     ?RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z @ 0x18006DF4C (-RmpGameModeApplyNewRecipientPolicies@@YAXPEAU_RM_GAME_MODE_CONTEXT@@PEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall CempListRemoveHeadAndClear(_QWORD **a1)
{
  _QWORD *result; // rax
  _QWORD *v2; // rdx

  result = *a1;
  if ( *a1 == a1 || (_QWORD **)result[1] != a1 || (v2 = (_QWORD *)*result, *(_QWORD **)(*result + 8LL) != result) )
    __fastfail(3u);
  *a1 = v2;
  v2[1] = a1;
  *(_OWORD *)result = 0LL;
  return result;
}
