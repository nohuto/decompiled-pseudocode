/*
 * XREFs of RaidNtStatusToStorStatus @ 0x1C00191FC
 * Callers:
 *     StorPortExtendedFunction @ 0x1C000D810 (StorPortExtendedFunction.c)
 *     RaidAdapterQueryDeviceRelationsIrp @ 0x1C0013C54 (RaidAdapterQueryDeviceRelationsIrp.c)
 *     StorAdapterDeviceRegistryKeyProxy @ 0x1C0036BF8 (StorAdapterDeviceRegistryKeyProxy.c)
 *     StorEtwMiniportEventProxy @ 0x1C0036FA0 (StorEtwMiniportEventProxy.c)
 *     StorPortpInvokeAcpiMethod @ 0x1C0038DB4 (StorPortpInvokeAcpiMethod.c)
 *     StorpBuildScatterGatherList @ 0x1C0039C20 (StorpBuildScatterGatherList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RaidNtStatusToStorStatus(int a1)
{
  switch ( a1 )
  {
    case -2147483643:
      return 3238002692LL;
    case -1073741822:
      return 3238002690LL;
    case -1073741811:
      return 3238002694LL;
    case -1073741670:
      return 3238002691LL;
    case -1073741496:
      return 3238002696LL;
  }
  if ( a1 < 0 )
    return 3238002689LL;
  return 0LL;
}
