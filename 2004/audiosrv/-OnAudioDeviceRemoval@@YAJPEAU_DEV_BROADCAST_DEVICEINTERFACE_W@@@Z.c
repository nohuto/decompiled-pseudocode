/*
 * XREFs of ?OnAudioDeviceRemoval@@YAJPEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x1801165DC
 * Callers:
 *     ServiceDeviceEvent @ 0x180116738 (ServiceDeviceEvent.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006DF3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z @ 0x180116640 (-PostDeviceEvent@@YAJW4DeviceEventType@@PEAU_DEV_BROADCAST_DEVICEINTERFACE_W@@@Z.c)
 */

__int64 __fastcall OnAudioDeviceRemoval(struct _DEV_BROADCAST_DEVICEINTERFACE_W *a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v2 = PostDeviceEvent(1LL, a1);
  v3 = v2;
  if ( v2 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      562LL,
      (__int64)"avcore\\audiocore\\server\\lib\\audioserviceutil\\audioservice.cpp",
      (const char *)(unsigned int)v2);
  (*(void (__fastcall **)(unsigned __int64, struct _DEV_BROADCAST_DEVICEINTERFACE_W *))(*(_QWORD *)g_AudioService + 72LL))(
    g_AudioService,
    a1);
  return v3;
}
