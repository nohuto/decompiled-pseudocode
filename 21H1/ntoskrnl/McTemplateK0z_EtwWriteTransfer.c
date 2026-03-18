/*
 * XREFs of McTemplateK0z_EtwWriteTransfer @ 0x140508004
 * Callers:
 *     PnpLogActionQueueEvent @ 0x14036C3A8 (PnpLogActionQueueEvent.c)
 *     PnpInsertEventInQueue @ 0x14070AC58 (PnpInsertEventInQueue.c)
 *     PiCMQueryRemove @ 0x14071AEE8 (PiCMQueryRemove.c)
 *     PipProcessDevNodeTree @ 0x140726894 (PipProcessDevNodeTree.c)
 *     PnpProcessTargetDeviceEvent @ 0x140730A0C (PnpProcessTargetDeviceEvent.c)
 *     PiUEventSendDeviceInstallNotification @ 0x14089E8BC (PiUEventSendDeviceInstallNotification.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x14036CD94 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0z_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        const wchar_t *a4)
{
  __int64 v4; // rax
  int v5; // ecx
  struct _EVENT_DATA_DESCRIPTOR v7; // [rsp+30h] [rbp-38h] BYREF
  const wchar_t *v8; // [rsp+40h] [rbp-28h]
  int v9; // [rsp+48h] [rbp-20h]
  int v10; // [rsp+4Ch] [rbp-1Ch]

  if ( a4 )
  {
    v4 = -1LL;
    do
      ++v4;
    while ( a4[v4] );
    v5 = 2 * v4 + 2;
  }
  else
  {
    v5 = 10;
  }
  v9 = v5;
  v10 = 0;
  if ( !a4 )
    a4 = L"NULL";
  v8 = a4;
  return McGenEventWrite_EtwWriteTransfer(MS_KernelPnP_Provider_Context, a2, 0LL, 2u, &v7);
}
