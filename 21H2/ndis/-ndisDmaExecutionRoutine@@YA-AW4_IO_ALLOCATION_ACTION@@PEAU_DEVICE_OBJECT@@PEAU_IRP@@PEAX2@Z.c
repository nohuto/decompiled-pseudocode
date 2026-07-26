/*
 * XREFs of ?ndisDmaExecutionRoutine@@YA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C006B2F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ndisDmaExecutionRoutine(struct _DEVICE_OBJECT *a1, struct _IRP *a2, void *a3, char *a4)
{
  *(_QWORD *)a4 = a3;
  KeSetEvent((PRKEVENT)(a4 + 8), 0, 0);
  return 1LL;
}
