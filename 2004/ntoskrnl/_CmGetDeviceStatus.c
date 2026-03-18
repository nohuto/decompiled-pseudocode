/*
 * XREFs of _CmGetDeviceStatus @ 0x1406C1928
 * Callers:
 *     _CmGetDeviceMappedPropertyFromComposite @ 0x1406BF1AC (_CmGetDeviceMappedPropertyFromComposite.c)
 *     PiCMValidateDeviceInstance @ 0x1406C1CD8 (PiCMValidateDeviceInstance.c)
 *     PiCMGetDeviceStatus @ 0x140705D6C (PiCMGetDeviceStatus.c)
 *     PiCMDeleteDevice @ 0x140719D8C (PiCMDeleteDevice.c)
 *     PiCMQueryRemove @ 0x14071CE68 (PiCMQueryRemove.c)
 *     PiCMDeviceAction @ 0x14071D0C0 (PiCMDeviceAction.c)
 *     PiCMSetProblem @ 0x14071D794 (PiCMSetProblem.c)
 *     _CmIsDeviceSafeRemovalRequired @ 0x140757B48 (_CmIsDeviceSafeRemovalRequired.c)
 *     PpDevCfgProcessDevices @ 0x14078C65C (PpDevCfgProcessDevices.c)
 *     PiCMGenerateDeviceInstance @ 0x1408AD490 (PiCMGenerateDeviceInstance.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     _CmGetDeviceRegProp @ 0x1405E046C (_CmGetDeviceRegProp.c)
 *     _NtPlugPlayGetDeviceStatus @ 0x1406C1A38 (_NtPlugPlayGetDeviceStatus.c)
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
