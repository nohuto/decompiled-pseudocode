/*
 * XREFs of ?SetCompositionInputWindowUIOwner@@YAHPEAUtagWND@@0@Z @ 0x1C01D87DC
 * Callers:
 *     EditionUpdateInputTransformFromHitTest @ 0x1C0002F00 (EditionUpdateInputTransformFromHitTest.c)
 * Callees:
 *     _GetTopLevelWindow @ 0x1C0046FE0 (_GetTopLevelWindow.c)
 *     ?IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z @ 0x1C004C75C (-IsComponent@CoreWindowProp@@SAHPEBUtagWND@@@Z.c)
 *     ??$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z @ 0x1C004C97C (--$GetProp@VCInputQueueProp@@@CWindowProp@@SAHPEBUtagWND@@PEAPEAVCInputQueueProp@@@Z.c)
 *     ?ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z @ 0x1C0240C94 (-ReferenceAndStoreUIOwnerPwnd@CInputQueueProp@@QEAAXPEAUtagWND@@@Z.c)
 */

__int64 __fastcall SetCompositionInputWindowUIOwner(struct tagWND *a1, struct tagWND *a2)
{
  unsigned int v3; // ebx
  CInputQueueProp *v5; // rbp
  const struct tagWND *TopLevelWindow; // rax
  struct tagWND *v7; // rsi
  CInputQueueProp *v9; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0;
  v9 = 0LL;
  if ( CWindowProp::GetProp<CInputQueueProp>((__int64)a1, (__int64 *)&v9) )
  {
    v5 = v9;
    if ( *((_DWORD *)v9 + 6) )
    {
      if ( (unsigned int)CoreWindowProp::IsComponent(a1) )
      {
        a2 = a1;
      }
      else
      {
        TopLevelWindow = (const struct tagWND *)GetTopLevelWindow((__int64)a1);
        v7 = TopLevelWindow;
        if ( TopLevelWindow && (unsigned int)CoreWindowProp::IsComponent(TopLevelWindow) )
          a2 = v7;
      }
      CInputQueueProp::ReferenceAndStoreUIOwnerPwnd(v5, a2);
      return 1;
    }
  }
  return v3;
}
