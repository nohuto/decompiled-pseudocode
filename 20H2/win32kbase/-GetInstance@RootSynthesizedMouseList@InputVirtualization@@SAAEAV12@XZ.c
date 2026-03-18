/*
 * XREFs of ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01A8F30
 * Callers:
 *     UnInitializeInputComponents @ 0x1C0007ED8 (UnInitializeInputComponents.c)
 *     InitializeInputComponents @ 0x1C009C80C (InitializeInputComponents.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C01A90C0 (ChildProcessRootSynthesizedMouseInput.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01AE8D8 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

struct InputVirtualization::RootSynthesizedMouseList *InputVirtualization::RootSynthesizedMouseList::GetInstance(void)
{
  if ( (`InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::`local static guard' & 1) == 0 )
  {
    `InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::`local static guard' |= 1u;
    qword_1C024E8F8 = (__int64)&CPushLock::`vftable';
    xmmword_1C024E900 = 0LL;
  }
  return (struct InputVirtualization::RootSynthesizedMouseList *)&`InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::inst;
}
