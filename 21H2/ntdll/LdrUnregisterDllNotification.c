/*
 * XREFs of LdrUnregisterDllNotification @ 0x1800CE6E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap @ 0x180024760 (RtlFreeHeap.c)
 *     RtlLeaveCriticalSection @ 0x18002F230 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x18002FAA0 (RtlEnterCriticalSection.c)
 */

__int64 __fastcall LdrUnregisterDllNotification(_QWORD *a1)
{
  __int64 v2; // rdi
  int v3; // ebx
  __int64 v4; // r8
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  _QWORD *v7; // rcx

  v2 = 0LL;
  v3 = -1073741515;
  RtlEnterCriticalSection((__int64)&LdrpDllNotificationLock);
  v5 = LdrpDllNotificationList;
  v6 = &LdrpDllNotificationList;
  if ( LdrpDllNotificationList != (_UNKNOWN *)&LdrpDllNotificationList )
  {
    while ( 1 )
    {
      v7 = (_QWORD *)*v5;
      v2 = (__int64)v5;
      if ( v5 == a1 )
        break;
      v5 = (_QWORD *)*v5;
      if ( v7 == &LdrpDllNotificationList )
        goto LABEL_4;
    }
    if ( (_QWORD *)v7[1] != v5 || (v6 = (_QWORD *)v5[1], (_QWORD *)*v6 != v5) )
      __fastfail(3u);
    *v6 = v7;
    v3 = 0;
    v7[1] = v6;
  }
LABEL_4:
  RtlLeaveCriticalSection((__int64)&LdrpDllNotificationLock, (__int64)v6, v4);
  if ( v3 >= 0 )
    RtlFreeHeap(LdrpHeap, 0, v2);
  return (unsigned int)v3;
}
