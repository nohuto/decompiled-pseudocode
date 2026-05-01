/*
 * XREFs of ?_GetNullableNumericValue@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJAEBV?$ComPtr@U?$IReference@H@Foundation@Windows@@@WRL@Microsoft@@PEAPEAU?$IReference@H@Foundation@5@@Z @ 0x18003997C
 * Callers:
 *     ?get_PercentGpuTimeAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@5@@Z @ 0x180039D00 (-get_PercentGpuTimeAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@W.c)
 *     ?get_PercentGpuMemoryAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@5@@Z @ 0x180039D40 (-get_PercentGpuMemoryAllocatedToGame@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming.c)
 *     ?get_PercentGpuMemoryAllocatedToSystemCompositor@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@5@@Z @ 0x180039D80 (-get_PercentGpuMemoryAllocatedToSystemCompositor@GameModeConfigurationServer@GamesEnumeration@Pr.c)
 *     ?get_MaxCpuCount@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@5@@Z @ 0x180039DC0 (-get_MaxCpuCount@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPE.c)
 *     ?get_CpuExclusivityMaskLow@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@5@@Z @ 0x180039E80 (-get_CpuExclusivityMaskLow@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@.c)
 *     ?get_CpuExclusivityMaskHigh@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IReference@H@Foundation@5@@Z @ 0x18003A030 (-get_CpuExclusivityMaskHigh@GameModeConfigurationServer@GamesEnumeration@Preview@Gaming@Windows@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180045FD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Gaming::Preview::GamesEnumeration::GameModeConfigurationServer::_GetNullableNumericValue(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v3; // rbx

  *a3 = 0LL;
  v3 = (struct _RTL_CRITICAL_SECTION *)(a1 + 168);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 168));
  if ( *a2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 8LL))(*a2);
    *a3 = *a2;
  }
  if ( v3 )
    LeaveCriticalSection(v3);
  return 0LL;
}
