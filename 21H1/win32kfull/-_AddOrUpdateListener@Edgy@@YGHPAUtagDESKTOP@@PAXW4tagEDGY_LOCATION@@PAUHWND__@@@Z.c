/*
 * XREFs of ?_AddOrUpdateListener@Edgy@@YGHPAUtagDESKTOP@@PAXW4tagEDGY_LOCATION@@PAUHWND__@@@Z @ 0x16E23D
 * Callers:
 *     _EdgyRegisterListener@4 @ 0x16F0BE (_EdgyRegisterListener@4.c)
 * Callees:
 *     ?_AllocListener@Edgy@@YGPAUtagEDGY_LISTENER@@AAUtagEDGY_DATA@@PAXW4tagEDGY_LOCATION@@@Z @ 0x16E2E5 (-_AllocListener@Edgy@@YGPAUtagEDGY_LISTENER@@AAUtagEDGY_DATA@@PAXW4tagEDGY_LOCATION@@@Z.c)
 *     ?_FindListener@Edgy@@YGPAUtagEDGY_LISTENER@@AAUtagEDGY_DATA@@PAXW4tagEDGY_LOCATION@@@Z @ 0x16E31F (-_FindListener@Edgy@@YGPAUtagEDGY_LISTENER@@AAUtagEDGY_DATA@@PAXW4tagEDGY_LOCATION@@@Z.c)
 *     ?_InitializeData@Edgy@@YGPAUtagEDGY_DATA@@PAUtagDESKTOP@@@Z @ 0x16EB64 (-_InitializeData@Edgy@@YGPAUtagEDGY_DATA@@PAUtagDESKTOP@@@Z.c)
 */

int __fastcall Edgy::_AddOrUpdateListener(int a1, int a2, int a3, int a4)
{
  struct tagEDGY_DATA *v4; // esi
  int Listener; // ecx
  Edgy *v8; // [esp+0h] [ebp-8h]
  struct tagDESKTOP *v9; // [esp+4h] [ebp-4h]

  v4 = *(struct tagEDGY_DATA **)(a1 + 140);
  if ( !v4 )
  {
    v4 = Edgy::_InitializeData(v8, v9);
    if ( !v4 )
      return 0;
  }
  Listener = Edgy::_FindListener(v4, a2, a3);
  if ( !Listener )
  {
    Listener = Edgy::_AllocListener(v4, a3);
    if ( !Listener )
      return 0;
  }
  *(_DWORD *)(Listener + 4) = a4;
  return 1;
}
