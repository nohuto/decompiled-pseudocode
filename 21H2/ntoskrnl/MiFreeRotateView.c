/*
 * XREFs of MiFreeRotateView @ 0x1408C857C
 * Callers:
 *     MiDeletePartialVad @ 0x1402FD8DC (MiDeletePartialVad.c)
 * Callees:
 *     MiGetVadWakeList @ 0x140318020 (MiGetVadWakeList.c)
 *     MiFreeRotateVadEvent @ 0x1406C1A28 (MiFreeRotateVadEvent.c)
 *     ExFreePoolWithTag @ 0x1409B4010 (ExFreePoolWithTag.c)
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
