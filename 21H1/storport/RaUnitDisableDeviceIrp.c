/*
 * XREFs of RaUnitDisableDeviceIrp @ 0x1C0045F30
 * Callers:
 *     RaUnitRemoveDeviceIrp @ 0x1C0019C34 (RaUnitRemoveDeviceIrp.c)
 * Callees:
 *     RaidCompleteRequestEx @ 0x1C0009950 (RaidCompleteRequestEx.c)
 *     RaUnitReleaseRemoveLock @ 0x1C000BD50 (RaUnitReleaseRemoveLock.c)
 *     RaUnitWaitForRemoveLock @ 0x1C0016DEC (RaUnitWaitForRemoveLock.c)
 *     RaidRemoveIoQueue @ 0x1C0016EE8 (RaidRemoveIoQueue.c)
 *     RaidUnitUnRegisterInterfaces @ 0x1C001873C (RaidUnitUnRegisterInterfaces.c)
 *     RaidCancelIrp @ 0x1C00434BC (RaidCancelIrp.c)
 */

__int64 __fastcall RaUnitDisableDeviceIrp(__int64 a1, IRP *a2)
{
  unsigned int v3; // eax
  __int64 v5; // rax
  unsigned int v6; // eax

  v3 = *(_DWORD *)(a1 + 48) - 5;
  *(_DWORD *)(a1 + 48) = 7;
  if ( v3 > 1 )
    RaidUnitUnRegisterInterfaces(a1);
  *(_BYTE *)(a1 + 448) &= ~1u;
  while ( 1 )
  {
    v5 = RaidRemoveIoQueue(a1 + 640);
    if ( !v5 )
      break;
    RaidCancelIrp(a1, 8, v5);
  }
  RaUnitReleaseRemoveLock(a1);
  v6 = RaUnitWaitForRemoveLock(a1);
  return RaidCompleteRequestEx(a2, 0, v6);
}
