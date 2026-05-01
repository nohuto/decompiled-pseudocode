/*
 * XREFs of ?RmpGameModeRemoveRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006FD6C
 * Callers:
 *     ?RmpGameModeCheckRemovePairedAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006EA78 (-RmpGameModeCheckRemovePairedAuxiliary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@@J@Z @ 0x18006F6A0 (-RmpGameModeRecipientProcessTerminationCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_WAIT@.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180070B90 (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006ED18 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006F40C (-RmpGameModeIsProcessPrimary@@YAEPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeRemoveRecipientProcess(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1)
{
  __int64 v1; // rdi
  _OWORD *v3; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rdx
  volatile signed __int64 *v6; // rcx

  v1 = *((_QWORD *)a1 + 4);
  RtlRbRemoveNode(v1 + 8, (char *)a1 + 8);
  if ( (*((_BYTE *)a1 + 144) & 1) != 0 )
  {
    v3 = (_OWORD *)((char *)a1 + 56);
    v4 = *((_QWORD *)a1 + 7);
    if ( *(struct _RM_GAME_MODE_RECIPIENT_PROCESS **)(v4 + 8) != (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)((char *)a1 + 56)
      || (v5 = (_QWORD *)*((_QWORD *)a1 + 8), (_OWORD *)*v5 != v3) )
    {
      __fastfail(3u);
    }
    *v5 = v4;
    *(_QWORD *)(v4 + 8) = v5;
    *v3 = 0LL;
    RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)a1);
  }
  *((_BYTE *)a1 + 170) &= ~1u;
  if ( RmpGameModeIsProcessPrimary(a1) )
    --*(_DWORD *)(v1 + 136);
  RmpGameModeDereferenceRecipientProcess(v6);
  RmpGameModeQueuePolicyWorkerWithLock((struct _RM_GAME_MODE_CONTEXT *)v1);
}
