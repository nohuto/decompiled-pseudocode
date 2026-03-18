/*
 * XREFs of ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C004903C
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C0098260 (DrvSetDisplayConfig.c)
 *     DrvChangeDisplaySettings @ 0x1C009C4A0 (DrvChangeDisplaySettings.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AUTO_STATUS_CHANGE_NOTIFY<2,3>::NotifyStatusChange(__int64 *a1, int a2)
{
  __int64 result; // rax
  __int64 v3; // rax
  _DWORD v4[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v5; // [rsp+28h] [rbp-10h]

  v4[0] = a2;
  v4[1] = 0;
  v5 = *a1;
  result = ((__int64 (__fastcall *)(_DWORD *))qword_1C02529E0)(v4);
  if ( (int)result < 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    return WdLogEvent5_WdAssertion(v3);
  }
  return result;
}
