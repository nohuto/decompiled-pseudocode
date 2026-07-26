/*
 * XREFs of ndisDriverReinit @ 0x1C0039D30
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisAoAcInitDisconnectedStandby@@YAXXZ @ 0x1C005A004 (-ndisAoAcInitDisconnectedStandby@@YAXXZ.c)
 *     ?ndisIfEnsureNsiInitialized@@YAJXZ @ 0x1C01068A0 (-ndisIfEnsureNsiInitialized@@YAJXZ.c)
 */

void __fastcall ndisDriverReinit(struct _DRIVER_OBJECT *DriverObject, PVOID Context, ULONG Count)
{
  ndisIfEnsureNsiInitialized();
  if ( (ndisAoAcCapable || ndisAoAcTest) && !ndisEnforceDisconnectedStandby )
    ndisAoAcInitDisconnectedStandby();
  ndisBootFinishedTime.QuadPart = MEMORY[0xFFFFF78000000014];
}
