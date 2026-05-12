/*
 * XREFs of RaidAdapterDeleteChildren @ 0x1C002C1F4
 * Callers:
 *     RaidAdapterRemoveDeviceIrp @ 0x1C0079054 (RaidAdapterRemoveDeviceIrp.c)
 * Callees:
 *     RaidAdapterRemoveNormalChildren @ 0x1C002DD38 (RaidAdapterRemoveNormalChildren.c)
 *     RaidAdapterRemoveZombieChildren @ 0x1C002DE58 (RaidAdapterRemoveZombieChildren.c)
 */

__int64 __fastcall RaidAdapterDeleteChildren(__int64 a1)
{
  RaidAdapterRemoveNormalChildren(a1, RaUnitAdapterRemove);
  return RaidAdapterRemoveZombieChildren(a1, RaUnitAdapterRemove);
}
