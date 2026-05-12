/*
 * XREFs of RaidAdapterDeleteChildren @ 0x1C002B3A0
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0077B5C (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x1C002CED8 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterRemoveZombieChildren @ 0x1C002CFF0 (RaidAdapterRemoveZombieChildren.c)
 */

__int64 __fastcall RaidAdapterDeleteChildren(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, RaUnitAdapterRemove);
  return RaidAdapterRemoveZombieChildren(a1, RaUnitAdapterRemove);
}
