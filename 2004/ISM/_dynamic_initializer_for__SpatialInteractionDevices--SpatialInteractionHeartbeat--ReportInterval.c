/*
 * XREFs of _dynamic_initializer_for__SpatialInteractionDevices::SpatialInteractionHeartbeat::ReportIntervalTickCount64__ @ 0x180001810
 * Callers:
 *     <none>
 * Callees:
 *     ?GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z @ 0x18003A7B0 (-GetDwordWithDefault@RegistryHelpers@@YAIPEAUHKEY__@@PEB_W1I@Z.c)
 */

__int64 __fastcall dynamic_initializer_for__SpatialInteractionDevices::SpatialInteractionHeartbeat::ReportIntervalTickCount64__(
        RegistryHelpers *a1)
{
  __int64 result; // rax
  unsigned int v2; // [rsp+20h] [rbp-8h]

  result = RegistryHelpers::GetDwordWithDefault(
             a1,
             (HKEY)&stru_1801C0A30,
             L"SpatialInteractionHeartbeatReportIntervalMsec",
             (const wchar_t *)0x493E0,
             v2);
  SpatialInteractionDevices::SpatialInteractionHeartbeat::ReportIntervalTickCount64 = (unsigned int)result;
  return result;
}
