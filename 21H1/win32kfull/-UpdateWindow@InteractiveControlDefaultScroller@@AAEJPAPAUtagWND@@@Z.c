/*
 * XREFs of ?UpdateWindow@InteractiveControlDefaultScroller@@AAEJPAPAUtagWND@@@Z @ 0x1B3F0A
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x1B369E (-GenerateMessages@InteractiveControlDefaultScroller@@QAEJPAUtagINTERACTIVECTRL_INFO@@W4tagINTERA.c)
 * Callees:
 *     <none>
 */

int __thiscall InteractiveControlDefaultScroller::UpdateWindow(
        InteractiveControlDefaultScroller *this,
        struct tagWND **a2)
{
  struct tagWND *v2; // edx

  if ( _gpqForeground )
    v2 = *(struct tagWND **)(_gpqForeground + 60);
  else
    v2 = 0;
  *a2 = v2;
  return v2 != 0 ? 0 : -1073741816;
}
