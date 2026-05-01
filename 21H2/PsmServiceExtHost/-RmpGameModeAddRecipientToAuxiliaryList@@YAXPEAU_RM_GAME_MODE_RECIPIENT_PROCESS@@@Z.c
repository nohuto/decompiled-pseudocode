/*
 * XREFs of ?RmpGameModeAddRecipientToAuxiliaryList@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006E70C
 * Callers:
 *     ?RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z @ 0x18006F2F8 (-RmpGameModeInsertRecipientProcess@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpGameModeAddRecipientToAuxiliaryList(struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1)
{
  __int64 v1; // r8
  _QWORD *v2; // rax
  _QWORD *v3; // rdx

  v1 = *((_QWORD *)a1 + 4);
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1) <= 1 )
    __fastfail(0xEu);
  v2 = (_QWORD *)((char *)a1 + 56);
  v3 = *(_QWORD **)(v1 + 32);
  if ( *v3 != v1 + 24 )
    __fastfail(3u);
  *v2 = v1 + 24;
  *((_QWORD *)a1 + 8) = v3;
  *v3 = v2;
  *(_QWORD *)(v1 + 32) = v2;
}
