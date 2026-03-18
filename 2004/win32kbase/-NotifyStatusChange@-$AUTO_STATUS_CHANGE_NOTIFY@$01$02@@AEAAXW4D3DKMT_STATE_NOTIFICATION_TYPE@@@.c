/*
 * XREFs of ?NotifyStatusChange@?$AUTO_STATUS_CHANGE_NOTIFY@$01$02@@AEAAXW4D3DKMT_STATE_NOTIFICATION_TYPE@@@Z @ 0x1C0056A0C
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C00B1024 (DrvChangeDisplaySettings.c)
 *     DrvSetDisplayConfig @ 0x1C00B1BD0 (DrvSetDisplayConfig.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
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
  result = ((__int64 (__fastcall *)(_DWORD *))qword_1C024C9C0)(v4);
  if ( (int)result < 0 )
  {
    v3 = WdLogNewEntry5_WdAssertion();
    return WdLogEvent5_WdAssertion(v3);
  }
  return result;
}
