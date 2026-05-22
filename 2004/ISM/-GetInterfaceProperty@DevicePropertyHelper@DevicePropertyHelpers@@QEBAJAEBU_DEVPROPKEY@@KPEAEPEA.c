/*
 * XREFs of ?GetInterfaceProperty@DevicePropertyHelper@DevicePropertyHelpers@@QEBAJAEBU_DEVPROPKEY@@KPEAEPEAK@Z @ 0x18009352C
 * Callers:
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x180091FDC (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035770 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     DevicePropertyHelpers::MapCrToHResult @ 0x180093D50 (DevicePropertyHelpers--MapCrToHResult.c)
 */

__int64 __fastcall DevicePropertyHelpers::DevicePropertyHelper::GetInterfaceProperty(
        DevicePropertyHelpers::DevicePropertyHelper *this,
        const struct _DEVPROPKEY *a2,
        DEVPROPTYPE a3,
        unsigned __int8 *a4,
        PULONG PropertyBufferSize)
{
  char *v6; // rcx
  CONFIGRET Device_Interface_PropertyW; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  DEVPROPTYPE PropertyType; // [rsp+50h] [rbp+18h] BYREF

  PropertyType = a3;
  if ( *(_DWORD *)this )
  {
    v6 = (char *)this + 8;
    if ( *((_QWORD *)v6 + 3) >= 8uLL )
      v6 = *(char **)v6;
    Device_Interface_PropertyW = CM_Get_Device_Interface_PropertyW(
                                   (LPCWSTR)v6,
                                   &DEVPKEY_DeviceInterface_ClassGuid,
                                   &PropertyType,
                                   a4,
                                   PropertyBufferSize,
                                   0);
    if ( Device_Interface_PropertyW )
      return DevicePropertyHelpers::MapCrToHResult(Device_Interface_PropertyW);
    else
      return PropertyType != 13 ? 0x8007070C : 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x5C,
      (__int64)"onecoreuap\\internal\\analog\\inc\\input\\common\\DevicePropertyHelpers.h",
      (const char *)0x8007139FLL);
    return 2147947423LL;
  }
}
