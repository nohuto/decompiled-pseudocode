/*
 * XREFs of KeRaiseIrqlToDpcLevel @ 0x14021E580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

KIRQL KeRaiseIrqlToDpcLevel(void)
{
  KIRQL result; // al
  _DWORD *SchedulerAssist; // r9

  result = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && result <= 0xFu )
  {
    SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
    SchedulerAssist[5] |= ~((unsigned __int8)(1LL << (result + 1)) - 1) & 4;
  }
  return result;
}
