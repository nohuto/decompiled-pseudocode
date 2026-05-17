/*
 * XREFs of LdrpSendDllNotifications @ 0x18003DD70
 * Callers:
 *     LdrpSendPostSnapNotifications @ 0x18003DC0C (LdrpSendPostSnapNotifications.c)
 *     LdrpUnloadNode @ 0x18006B528 (LdrpUnloadNode.c)
 *     LdrpCorProcessImports @ 0x180084C94 (LdrpCorProcessImports.c)
 * Callees:
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 *     _guard_dispatch_icall_nop @ 0x1800A1160 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall LdrpSendDllNotifications(__int64 a1, unsigned int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  _UNKNOWN **i; // rbx
  int v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+28h] [rbp-30h]
  __int64 v9; // [rsp+30h] [rbp-28h]
  __int64 v10; // [rsp+38h] [rbp-20h]
  int v11; // [rsp+40h] [rbp-18h]

  v7 = 0;
  v8 = a1 + 72;
  v9 = a1 + 88;
  v10 = *(_QWORD *)(a1 + 48);
  v11 = *(_DWORD *)(a1 + 64);
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  for ( i = (_UNKNOWN **)LdrpDllNotificationList; i != &LdrpDllNotificationList; i = (_UNKNOWN **)*i )
    ((void (__fastcall *)(_QWORD, int *, void *))i[2])(a2, &v7, i[3]);
  return RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock, v3, v4);
}
