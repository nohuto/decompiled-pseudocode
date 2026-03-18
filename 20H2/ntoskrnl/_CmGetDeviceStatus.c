/*
 * XREFs of _CmGetDeviceStatus @ 0x1406EBDFC
 * Callers:
 *     PiCMGetDeviceStatus @ 0x1406D8D5C (PiCMGetDeviceStatus.c)
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406E9AEC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMValidateDeviceInstance @ 0x1406EC1AC (PiCMValidateDeviceInstance.c)
 *     PiCMDeleteDevice @ 0x140727D7C (PiCMDeleteDevice.c)
 *     PiCMQueryRemove @ 0x14072AD04 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14072AF5C (PiCMDeviceAction.c)
 *     PiCMSetProblem @ 0x14072B630 (PiCMSetProblem.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140766788 (_CmIsDeviceSafeRemovalRequired.c)
 *     PpDevCfgProcessDevices @ 0x140798D9C (PpDevCfgProcessDevices.c)
 *     PiCMGenerateDeviceInstance @ 0x1408B2FC0 (PiCMGenerateDeviceInstance.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140267E90 (RtlInitUnicodeStringEx.c)
 *     _CmGetDeviceRegProp @ 0x14066B77C (_CmGetDeviceRegProp.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1406EBF0C (_NtPlugPlayGetDeviceStatus.c)
 */

__int64 __fastcall CmGetDeviceStatus(
        __int64 a1,
        const WCHAR *a2,
        __int64 a3,
        int *a4,
        _DWORD *a5,
        _DWORD *a6,
        unsigned int a7)
{
  _DWORD *v7; // r14
  char v8; // bl
  _DWORD *v9; // r15
  NTSTATUS inited; // esi
  int v14; // edx
  int v16; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  int v19; // [rsp+B8h] [rbp+58h] BYREF

  v7 = a5;
  v8 = 0;
  v9 = a6;
  *a4 = 0;
  v19 = 0;
  *v7 = 0;
  *v9 = 0;
  DestinationString = 0LL;
  v16 = 0;
  inited = RtlInitUnicodeStringEx(&DestinationString, a2);
  if ( inited >= 0 )
  {
    inited = NtPlugPlayGetDeviceStatus(a1, (unsigned int)&DestinationString, (_DWORD)a4, (_DWORD)v7, (__int64)v9);
    if ( inited >= 0 )
    {
      a7 = 4;
      if ( !(unsigned int)CmGetDeviceRegProp(a1, (__int64)a2, a3, 11, (__int64)&v19, (__int64)&v16, (__int64)&a7, 0)
        && a7 >= 4
        && v19 == 4 )
      {
        v8 = v16;
      }
      v14 = *a4;
      if ( (v8 & 4) != 0 )
      {
        v14 |= 0x10u;
        *a4 = v14;
      }
      if ( (v14 & 0x400) == 0 && (v8 & 0x40) != 0 )
      {
        *a4 = v14 | 0x400;
        *v7 = 28;
      }
    }
  }
  return (unsigned int)inited;
}
