/*
 * XREFs of UsbDevice_DeviceNotificationEventHandler @ 0x1C0045FCC
 * Callers:
 *     Interrupter_DeferredWorkProcessor @ 0x1C0002BB0 (Interrupter_DeferredWorkProcessor.c)
 * Callees:
 *     WPP_RECORDER_SF_dqd @ 0x1C0018BD4 (WPP_RECORDER_SF_dqd.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall UsbDevice_DeviceNotificationEventHandler(_QWORD *a1, __int64 a2)
{
  char result; // al
  int v5; // [rsp+28h] [rbp-20h]
  int v6; // [rsp+38h] [rbp-10h]

  result = *(_DWORD *)a2 & 0xF0;
  if ( result == 16 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v6 = *(unsigned __int8 *)(a2 + 1);
      v5 = *((unsigned __int8 *)a1 + 135);
      WPP_RECORDER_SF_dqd(
        *(_QWORD *)(a1[1] + 72LL),
        4u,
        0xCu,
        0x44u,
        (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
        v5,
        *a1,
        v6);
    }
    return ((__int64 (__fastcall *)(__int64, _QWORD, _QWORD))qword_1C00627E8)(
             UcxDriverGlobals,
             *a1,
             *(unsigned __int8 *)(a2 + 1));
  }
  return result;
}
