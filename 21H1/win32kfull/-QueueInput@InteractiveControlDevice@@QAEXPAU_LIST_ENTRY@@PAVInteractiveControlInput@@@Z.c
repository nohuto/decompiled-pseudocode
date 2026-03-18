/*
 * XREFs of ?QueueInput@InteractiveControlDevice@@QAEXPAU_LIST_ENTRY@@PAVInteractiveControlInput@@@Z @ 0x1B265C
 * Callers:
 *     ?QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z @ 0x1B24C8 (-QueueAndGenerateInput@InteractiveControlDevice@@QAEJPAXK@Z.c)
 *     ?SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z @ 0x1B2B32 (-SetFocus@InteractiveControlDevice@@QAEXPAUtagWND@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@H@Z.c)
 * Callees:
 *     ?CleanQueue@InteractiveControlDevice@@QAEXK@Z @ 0x1B17C4 (-CleanQueue@InteractiveControlDevice@@QAEXK@Z.c)
 */

void __thiscall InteractiveControlDevice::QueueInput(
        InteractiveControlDevice *this,
        struct _LIST_ENTRY *a2,
        struct _LIST_ENTRY *a3)
{
  struct _LIST_ENTRY *v3; // edx
  struct _LIST_ENTRY *Flink; // esi

  v3 = a2;
  if ( !a2 )
    v3 = (struct _LIST_ENTRY *)((char *)this + 8);
  Flink = v3->Flink;
  if ( v3->Flink->Blink != v3 )
    __fastfail(3u);
  a3->Flink = Flink;
  a3->Blink = v3;
  Flink->Blink = a3;
  v3->Flink = a3;
  ++*((_DWORD *)this + 4);
  if ( !*((_DWORD *)this + 72) )
    InteractiveControlDevice::CleanQueue(this, (unsigned int)this);
}
