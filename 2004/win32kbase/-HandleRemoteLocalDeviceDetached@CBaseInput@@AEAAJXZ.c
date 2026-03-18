/*
 * XREFs of ?HandleRemoteLocalDeviceDetached@CBaseInput@@AEAAJXZ @ 0x1C0019F30
 * Callers:
 *     <none>
 * Callees:
 *     ?ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ @ 0x1C001A058 (-ExecutingInSensorHostingProcess@CBaseInput@@IEBA_NXZ.c)
 *     RawInputManagerObjectCreateKernelHandle @ 0x1C001A0D0 (RawInputManagerObjectCreateKernelHandle.c)
 *     RIMDirectStopDeviceClassNotifications @ 0x1C00AF0F0 (RIMDirectStopDeviceClassNotifications.c)
 */

__int64 __fastcall CBaseInput::HandleRemoteLocalDeviceDetached(CBaseInput *this)
{
  unsigned int v2; // edi
  void *v3; // rcx
  __int64 v5; // rcx
  HANDLE Handle; // [rsp+48h] [rbp+10h]

  Handle = 0LL;
  v2 = -1073741823;
  if ( CBaseInput::ExecutingInSensorHostingProcess(this) )
  {
    v3 = (void *)*((_QWORD *)this + 1);
    Handle = v3;
  }
  else
  {
    v5 = *((_QWORD *)this + 2);
    if ( v5 )
      RawInputManagerObjectCreateKernelHandle(v5, 3LL, 0LL);
    v3 = 0LL;
  }
  if ( v3 )
  {
    v2 = RIMDirectStopDeviceClassNotifications();
    if ( Handle != *((HANDLE *)this + 1) )
      ZwClose(Handle);
  }
  return v2;
}
