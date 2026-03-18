/*
 * XREFs of KzRaiseIrql @ 0x1402AD500
 * Callers:
 *     KiVirtualizationException @ 0x140432080 (KiVirtualizationException.c)
 * Callees:
 *     <none>
 */

KIRQL __stdcall KzRaiseIrql(KIRQL NewIrql)
{
  KIRQL result; // al
  _DWORD *SchedulerAssist; // r10

  result = KeGetCurrentIrql();
  __writecr8(NewIrql);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && result <= 0xFu && (unsigned __int8)(NewIrql - 2) <= 0xDu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ((1LL << (NewIrql + 1)) - 1) & ~((1LL << (result + 1)) - 1) & 0xFFFFFFFC;
  }
  return result;
}
