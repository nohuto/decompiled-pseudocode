/*
 * XREFs of MiFreeRotateView @ 0x1408C4F7C
 * Callers:
 *     MiDeletePartialVad @ 0x140251734 (MiDeletePartialVad.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140221C10 (MiGetVadWakeList.c)
 *     MiFreeRotateVadEvent @ 0x14070F0C0 (MiFreeRotateVadEvent.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 */

void __fastcall MiFreeRotateView(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  __int64 *VadWakeList; // rax
  __int64 *v5; // rbx

  VadWakeList = MiGetVadWakeList(a1, 8, a3, a4);
  v5 = VadWakeList;
  if ( VadWakeList )
  {
    MiFreeRotateVadEvent((__int64)VadWakeList);
    ExFreePoolWithTag(v5, 0);
  }
}
