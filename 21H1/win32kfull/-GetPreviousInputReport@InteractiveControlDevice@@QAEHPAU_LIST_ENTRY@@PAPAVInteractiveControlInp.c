/*
 * XREFs of ?GetPreviousInputReport@InteractiveControlDevice@@QAEHPAU_LIST_ENTRY@@PAPAVInteractiveControlInput@@@Z @ 0x1B1F2D
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z @ 0x1B24C8 (-QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1B2B32 (-SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall InteractiveControlDevice::GetPreviousInputReport(
        InteractiveControlDevice *this,
        struct _LIST_ENTRY *a2,
        struct InteractiveControlInput **a3)
{
  struct InteractiveControlInput **v3; // eax
  struct InteractiveControlInput **v5; // ecx

  v3 = (struct InteractiveControlInput **)((char *)this + 8);
  if ( *v3 == (struct InteractiveControlInput *)v3 )
    return 0;
  v5 = (struct InteractiveControlInput **)a2;
  if ( !a2 )
    v5 = v3;
  *a3 = *v5;
  return 1;
}
