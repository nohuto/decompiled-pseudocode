/*
 * XREFs of ?GetInstance@RootSynthesizedMouseList@InputVirtualization@@SAAEAV12@XZ @ 0x1C01B1010
 * Callers:
 *     UnInitializeInputComponents @ 0x1C001EB24 (UnInitializeInputComponents.c)
 *     InitializeInputComponents @ 0x1C0023A2C (InitializeInputComponents.c)
 *     ChildProcessRootSynthesizedMouseInput @ 0x1C01B11A0 (ChildProcessRootSynthesizedMouseInput.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1C01B69B8 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

struct InputVirtualization::RootSynthesizedMouseList *InputVirtualization::RootSynthesizedMouseList::GetInstance(void)
{
  if ( (`InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::`local static guard' & 1) == 0 )
  {
    `InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::`local static guard' |= 1u;
    qword_1C02568B8 = (__int64)&CPushLock::`vftable';
    xmmword_1C02568C0 = 0LL;
  }
  return (struct InputVirtualization::RootSynthesizedMouseList *)&`InputVirtualization::RootSynthesizedMouseList::GetInstance'::`2'::inst;
}
