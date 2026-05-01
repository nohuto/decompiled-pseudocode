/*
 * XREFs of ?RmpGameModeFindRecipientProcessById@@YAPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAU_RM_GAME_MODE_CONTEXT@@K@Z @ 0x18006F040
 * Callers:
 *     ?RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18006EDFC (-RmpGameModeDisableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@PEAPEAU2@@Z @ 0x18006EED4 (-RmpGameModeFindProcessOrCompleteInsertion@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_.c)
 *     ?RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x18006F88C (-RmpGameModeReenableForRegisteredProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x18006F964 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 *     ?RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z @ 0x180070B90 (-RmpGameModeUnregisterProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

struct _RM_GAME_MODE_RECIPIENT_PROCESS *__fastcall RmpGameModeFindRecipientProcessById(
        struct _RM_GAME_MODE_CONTEXT *a1,
        unsigned int a2)
{
  __int64 v2; // r8
  unsigned __int64 v3; // rcx
  __int64 v5; // rax
  int v6; // edx
  __int64 v7; // rcx

  v2 = 0LL;
  v3 = (unsigned __int64)a1 + 8;
  v5 = *(_QWORD *)v3;
  if ( (*(_BYTE *)(v3 + 8) & 1) != 0 )
  {
    if ( v5 )
      v5 ^= v3;
    else
      v5 = 0LL;
  }
  v6 = *(_BYTE *)(v3 + 8) & 1;
  while ( v5 )
  {
    if ( a2 < *(_DWORD *)(v5 + 100) )
    {
      v7 = *(_QWORD *)v5;
    }
    else
    {
      if ( a2 <= *(_DWORD *)(v5 + 100) )
      {
        v2 = v5 - 8;
        if ( _InterlockedIncrement64((volatile signed __int64 *)(v5 - 8)) <= 1 )
          __fastfail(0xEu);
        return (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v2;
      }
      v7 = *(_QWORD *)(v5 + 8);
    }
    if ( v6 && v7 )
      v5 ^= v7;
    else
      v5 = v7;
  }
  return (struct _RM_GAME_MODE_RECIPIENT_PROCESS *)v2;
}
