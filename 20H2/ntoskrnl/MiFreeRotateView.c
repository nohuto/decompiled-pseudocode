/*
 * XREFs of MiFreeRotateView @ 0x1408CADBC
 * Callers:
 *     MiDeletePartialVad @ 0x14024FC00 (MiDeletePartialVad.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140230080 (MiGetVadWakeList.c)
 *     MiFreeRotateVadEvent @ 0x1406E15D8 (MiFreeRotateVadEvent.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRotateView(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *VadWakeList; // rax
  __int64 *v4; // rbx

  VadWakeList = MiGetVadWakeList(a1, 8, a3);
  v4 = VadWakeList;
  if ( VadWakeList )
  {
    MiFreeRotateVadEvent((__int64)VadWakeList);
    ExFreePoolWithTag(v4, 0);
  }
}
