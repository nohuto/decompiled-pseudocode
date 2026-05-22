/*
 * XREFs of ??1DevicePropertyHelper@DevicePropertyHelpers@@QEAA@XZ @ 0x1800924D0
 * Callers:
 *     _RawInputProvidersTracing::SpatialInputTelemetryProperties::SpatialInputTelemetryProperties_::_1_::dtor$5 @ 0x180092117 (_RawInputProvidersTracing--SpatialInputTelemetryProperties--SpatialInputTelemetryPr_ea_180092117.c)
 * Callees:
 *     <none>
 */

void __fastcall DevicePropertyHelpers::DevicePropertyHelper::~DevicePropertyHelper(
        DevicePropertyHelpers::DevicePropertyHelper *this)
{
  std::wstring::_Tidy_deallocate((__int64)this + 8);
}
