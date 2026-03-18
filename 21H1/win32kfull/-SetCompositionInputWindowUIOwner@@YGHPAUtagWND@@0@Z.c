/*
 * XREFs of ?SetCompositionInputWindowUIOwner@@YGHPAUtagWND@@0@Z @ 0x11AF6
 * Callers:
 *     _EditionUpdateInputTransformFromHitTest@24 @ 0x11A3E (_EditionUpdateInputTransformFromHitTest@24.c)
 * Callees:
 *     ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QAEXPAUtagWND@@@Z @ 0x11B5A (-ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QAEXPAUtagWND@@@Z.c)
 *     ?IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z @ 0x26A8A (-IsComponent@CoreWindowProp@@SGHPBUtagWND@@@Z.c)
 *     __GetTopLevelWindow@4 @ 0x313A0 (__GetTopLevelWindow@4.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCInputQueueProp@@@Z @ 0x6ECB4 (--$GetProp@VCInputQueueProp@@@CWindowProp@@SGHPBUtagWND@@PAPAVCInputQueueProp@@@Z.c)
 */

int __fastcall SetCompositionInputWindowUIOwner(struct tagWND *a1, struct tagWND *a2)
{
  int v3; // esi
  struct tagWND *TopLevelWindow; // esi
  const struct tagWND *v7; // [esp+0h] [ebp-10h]
  const struct tagWND *v8; // [esp+0h] [ebp-10h]
  CInputQueueProp *v9; // [esp+Ch] [ebp-4h] BYREF

  v3 = 0;
  v9 = 0;
  if ( CWindowProp::GetProp<CInputQueueProp>(a1, &v9) && *((_DWORD *)v9 + 3) )
  {
    if ( CoreWindowProp::IsComponent(v7) )
    {
      a2 = a1;
    }
    else
    {
      TopLevelWindow = (struct tagWND *)_GetTopLevelWindow(a1);
      if ( TopLevelWindow && CoreWindowProp::IsComponent(v8) )
        a2 = TopLevelWindow;
    }
    CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(v9, a2);
    return 1;
  }
  return v3;
}
