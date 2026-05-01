/*
 * XREFs of ?RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006E9D4
 * Callers:
 *     ?RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z @ 0x18006ED98 (-RmpGameModeDereferenceRemovedProcesses@@YAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18006FF20 (-RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180070B90 (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006ED18 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeCancelRecipientProcessThreadpoolWait(_QWORD *P)
{
  __int64 v1; // rdi
  char v3; // al

  v1 = P[4];
  TpSetWait(P[6], 0LL, 0LL);
  TpWaitForWait(P[6], 1LL);
  RtlAcquireSRWLockExclusive(v1 + 72);
  *(_DWORD *)(v1 + 80) = GetCurrentThreadId();
  v3 = *((_BYTE *)P + 170);
  if ( (v3 & 2) != 0 )
  {
    *((_BYTE *)P + 170) = v3 & 0xFD;
    RmpGameModeDereferenceRecipientProcess(P);
  }
  *(_DWORD *)(v1 + 80) = 0;
  RtlReleaseSRWLockExclusive(v1 + 72);
}
