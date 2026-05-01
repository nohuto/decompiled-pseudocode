/*
 * XREFs of ?RmpGameModeRundownRecipientProcessTreeCallback@@YAXPEAU_RTL_BALANCED_NODE@@PEAX@Z @ 0x18006F550
 * Callers:
 *     ?RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x18006F434 (-RmpGameModeRundown@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 * Callees:
 *     ?RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006E004 (-RmpGameModeCancelRecipientProcessThreadpoolWait@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 *     ?RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z @ 0x18006E160 (-RmpGameModeClearPairingTree@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_LIST_ENTRY@@@Z.c)
 *     ?RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006E348 (-RmpGameModeDereferenceRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 */

void __fastcall RmpGameModeRundownRecipientProcessTreeCallback(struct _RTL_BALANCED_NODE *a1, void *a2)
{
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *v2; // rbx
  struct _RTL_BALANCED_NODE *v3; // rdi
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *v4; // rax
  ULONG_PTR ParentValue; // rcx
  union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E **v6; // rdx

  v2 = &a1[-1].16;
  v3 = a1[1].Children[0];
  RtlAcquireSRWLockExclusive(&v3[3]);
  LODWORD(v3[3].Right) = GetCurrentThreadId();
  if ( (*(_BYTE *)&v2[18] & 1) != 0 )
  {
    v4 = v2 + 7;
    ParentValue = v2[7].ParentValue;
    if ( *(union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E **)(ParentValue + 8) != &v2[7]
      || (v6 = (union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E **)v2[8].ParentValue, *v6 != v4) )
    {
      __fastfail(3u);
    }
    *v6 = (union _RTL_BALANCED_NODE::$9BF36C84E3411792BEB9166F3629864E *)ParentValue;
    *(_QWORD *)(ParentValue + 8) = v6;
    *(_OWORD *)v4 = 0LL;
    RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v2);
    if ( (*((_BYTE *)&v2[21] + 2) & 8) != 0 )
      RmpGameModeClearPairingTree((struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v2, 0LL);
  }
  *((_BYTE *)&v2[21] + 2) &= ~1u;
  LODWORD(v3[3].Right) = 0;
  RtlReleaseSRWLockExclusive(&v3[3]);
  RmpGameModeCancelRecipientProcessThreadpoolWait(v2);
  RmpGameModeDereferenceRecipientProcess((volatile signed __int64 *)v2);
}
