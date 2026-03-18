/*
 * XREFs of PopUpdateExternalDisplayState @ 0x1407C0198
 * Callers:
 *     PopPowerInformationInternal @ 0x14064B1E4 (PopPowerInformationInternal.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14026C434 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     PopQueueWorkItem @ 0x140360AC4 (PopQueueWorkItem.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     PopReleasePolicyLock @ 0x14098C4B8 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14098C4F8 (PopAcquirePolicyLock.c)
 */

__int64 __fastcall PopUpdateExternalDisplayState(int a1)
{
  char v1; // bl
  __int64 v2; // rdx
  __int64 v3; // rcx
  char v5; // [rsp+30h] [rbp-48h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v6; // [rsp+38h] [rbp-40h] BYREF
  char *v7; // [rsp+58h] [rbp-20h]
  int v8; // [rsp+60h] [rbp-18h]
  int v9; // [rsp+64h] [rbp-14h]

  v1 = a1;
  PopAcquirePolicyLock(a1);
  PopConsoleExternalDisplayConnected = v1;
  if ( (unsigned int)dword_140C021E8 > 5 )
  {
    v9 = 0;
    v7 = &v5;
    v5 = v1;
    v8 = 1;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140C021E8, (unsigned __int8 *)byte_140026AF5, 0LL, 0LL, 3u, &v6);
  }
  PopQueueWorkItem((__int64)&PopExternalMonitorUpdatedWorkItem, DelayedWorkQueue);
  return PopReleasePolicyLock(v3, v2);
}
