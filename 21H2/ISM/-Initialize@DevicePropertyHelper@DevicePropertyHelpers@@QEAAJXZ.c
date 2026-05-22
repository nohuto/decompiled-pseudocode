/*
 * XREFs of ?Initialize@DevicePropertyHelper@DevicePropertyHelpers@@QEAAJXZ @ 0x180093C10
 * Callers:
 *     ??0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z @ 0x18009239C (--0SpatialInputTelemetryProperties@RawInputProvidersTracing@@QEAA@QEBG@Z.c)
 *     ?OpenHardwareKey@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHKEY__@@@Z @ 0x1800C680C (-OpenHardwareKey@SpatialInteractionDevices@@YAJPEB_WPEAPEAUHKEY__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180035760 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003C220 (__security_check_cookie.c)
 *     DevicePropertyHelpers::MapCrToHResult @ 0x180094110 (DevicePropertyHelpers--MapCrToHResult.c)
 */

__int64 __fastcall DevicePropertyHelpers::DevicePropertyHelper::Initialize(DEVNODE *this)
{
  char *v2; // rcx
  CONFIGRET Device_Interface_PropertyW; // eax
  __int64 result; // rax
  CONFIGRET DevNodeW; // eax
  ULONG PropertyBufferSize; // [rsp+30h] [rbp-1B8h] BYREF
  DEVPROPTYPE PropertyType[3]; // [rsp+34h] [rbp-1B4h] BYREF
  WCHAR PropertyBuffer[200]; // [rsp+40h] [rbp-1A8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1E8h] [rbp+0h]

  PropertyBufferSize = 400;
  v2 = (char *)(this + 2);
  if ( *((_QWORD *)v2 + 3) >= 8uLL )
    v2 = *(char **)v2;
  Device_Interface_PropertyW = CM_Get_Device_Interface_PropertyW(
                                 (LPCWSTR)v2,
                                 &DEVPKEY_Device_InstanceId,
                                 PropertyType,
                                 (PBYTE)PropertyBuffer,
                                 &PropertyBufferSize,
                                 0);
  result = DevicePropertyHelpers::MapCrToHResult(Device_Interface_PropertyW);
  if ( (int)result >= 0 )
  {
    if ( PropertyType[0] == 18 )
    {
      DevNodeW = CM_Locate_DevNodeW(this + 10, PropertyBuffer, 0);
      result = DevicePropertyHelpers::MapCrToHResult(DevNodeW);
      if ( (int)result >= 0 )
      {
        *this = 1;
        return 0LL;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x4B,
        (__int64)"onecoreuap\\internal\\analog\\inc\\input\\common\\DevicePropertyHelpers.h",
        (const char *)0x8000FFFFLL);
      return 2147549183LL;
    }
  }
  return result;
}
