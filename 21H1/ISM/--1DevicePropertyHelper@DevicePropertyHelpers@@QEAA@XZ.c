/*
 * XREFs of ??1DevicePropertyHelper@DevicePropertyHelpers@@QEAA@XZ @ 0x180092A30
 * Callers:
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$5 @ 0x180092677 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_180092677.c)
 * Callees:
 *     <none>
 */

void __fastcall DevicePropertyHelpers::DevicePropertyHelper::~DevicePropertyHelper(
        DevicePropertyHelpers::DevicePropertyHelper *this)
{
  std::wstring::_Tidy_deallocate((__int64)this + 8);
}
