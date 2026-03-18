/*
 * XREFs of MiFreeRotateView @ 0x14096D000
 * Callers:
 *     MiInitializePartialVad @ 0x14079D7A8 (MiInitializePartialVad.c)
 *     MiDeleteNewlyCreatedPartialVads @ 0x14097ECFC (MiDeleteNewlyCreatedPartialVads.c)
 * Callees:
 *     MiGetVadWakeList @ 0x14030E280 (MiGetVadWakeList.c)
 *     MiFreeRotateVadEvent @ 0x1406EB238 (MiFreeRotateVadEvent.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRotateView(__int64 a1)
{
  unsigned __int64 VadWakeList; // rax
  void *v2; // rbx

  VadWakeList = MiGetVadWakeList(a1, 8);
  v2 = (void *)VadWakeList;
  if ( VadWakeList )
  {
    MiFreeRotateVadEvent(VadWakeList);
    ExFreePoolWithTag(v2, 0);
  }
}
