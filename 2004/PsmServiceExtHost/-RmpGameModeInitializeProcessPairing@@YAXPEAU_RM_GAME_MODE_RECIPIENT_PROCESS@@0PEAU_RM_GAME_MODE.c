/*
 * XREFs of ?RmpGameModeInitializeProcessPairing@@YAXPEAU_RM_GAME_MODE_RECIPIENT_PROCESS@@0PEAU_RM_GAME_MODE_PROCESS_PAIRING@@@Z @ 0x18006E6F4
 * Callers:
 *     ?RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_REQUEST@@1@Z @ 0x18006EF94 (-RmpGameModeRegisterPairedProcess@@YAJPEAU_RM_GAME_MODE_CONTEXT@@PEAXPEAU_RM_GAME_MODE_RESOURCE_.c)
 * Callees:
 *     <none>
 */

void __fastcall RmpGameModeInitializeProcessPairing(
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a1,
        struct _RM_GAME_MODE_RECIPIENT_PROCESS *a2,
        struct _RM_GAME_MODE_PROCESS_PAIRING *a3)
{
  *((_QWORD *)a3 + 6) = 0LL;
  *((_QWORD *)a3 + 7) = 0LL;
  *(_QWORD *)a3 = 0LL;
  *((_QWORD *)a3 + 1) = 0LL;
  *((_QWORD *)a3 + 2) = -1LL;
  *(_OWORD *)((char *)a3 + 24) = 0LL;
  *((_QWORD *)a3 + 5) = -1LL;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a1) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a3 + 6) = a1;
  if ( _InterlockedIncrement64((volatile signed __int64 *)a2) <= 1 )
    __fastfail(0xEu);
  *((_QWORD *)a3 + 7) = a2;
}
