/*
 * XREFs of RtlWaitForWnfMetaNotification @ 0x1800639B0
 * Callers:
 *     <none>
 * Callees:
 *     RtlUnsubscribeWnfNotificationWaitForCompletion @ 0x180063B70 (RtlUnsubscribeWnfNotificationWaitForCompletion.c)
 *     RtlRegisterForWnfMetaNotification @ 0x180065170 (RtlRegisterForWnfMetaNotification.c)
 *     __security_check_cookie @ 0x18008C940 (__security_check_cookie.c)
 *     NtWaitForSingleObject @ 0x18009D680 (NtWaitForSingleObject.c)
 *     NtClose @ 0x18009D7E0 (NtClose.c)
 *     ZwCreateEvent @ 0x18009DF00 (ZwCreateEvent.c)
 *     NtQueryWnfStateNameInformation @ 0x1800A0290 (NtQueryWnfStateNameInformation.c)
 */

__int64 __fastcall RtlWaitForWnfMetaNotification(WNF_STATE_NAME a1, int a2, unsigned int a3, __int64 a4, int *a5)
{
  __int64 v6; // r15
  int v7; // edi
  NTSTATUS v8; // ebx
  int InfoBuffer; // [rsp+30h] [rbp-50h] BYREF
  HANDLE EventHandle; // [rsp+38h] [rbp-48h] BYREF
  LARGE_INTEGER Timeout; // [rsp+40h] [rbp-40h] BYREF
  PVOID v13; // [rsp+48h] [rbp-38h] BYREF
  int v14; // [rsp+50h] [rbp-30h] BYREF
  HANDLE v15; // [rsp+58h] [rbp-28h]
  int v16; // [rsp+60h] [rbp-20h]
  WNF_STATE_NAME StateName; // [rsp+68h] [rbp-18h] BYREF

  EventHandle = 0LL;
  v6 = a3;
  StateName = a1;
  *a5 = 0;
  if ( a3 > 0x7FFFFFFF || (a2 & 0x11) != 0 )
  {
    v8 = -1073741811;
    goto LABEL_16;
  }
  if ( (a2 & 0xFFFFFFF1) == 0 )
  {
    v7 = 0;
    if ( (a2 & 8) != 0 )
    {
      v8 = NtQueryWnfStateNameInformation(&StateName, WnfInfoIsQuiescent, 0LL, &InfoBuffer, 4u);
      if ( v8 )
        goto LABEL_16;
      if ( InfoBuffer )
        v7 = 8;
    }
    if ( (a2 & 6) == 0 )
    {
LABEL_9:
      if ( v7 )
      {
        *a5 = v7;
        return 0LL;
      }
      v8 = ZwCreateEvent(&EventHandle, 0x1F0003u, 0LL, NotificationEvent, 0);
      if ( v8 >= 0 )
      {
        v16 = 0;
        v14 = 0;
        v15 = EventHandle;
        v8 = RtlRegisterForWnfMetaNotification(
               (unsigned int)&v13,
               StateName.Data[0],
               a2,
               (unsigned int)RtlpWnfMetaCallbackProc,
               (__int64)&v14);
        if ( v8 >= 0 )
        {
          Timeout.QuadPart = -10000 * v6;
          v8 = NtWaitForSingleObject(EventHandle, 0, &Timeout);
          if ( !v8 )
            *a5 = v14;
          RtlUnsubscribeWnfNotificationWaitForCompletion(v13);
        }
      }
      goto LABEL_16;
    }
    v8 = NtQueryWnfStateNameInformation(&StateName, WnfInfoSubscribersPresent, 0LL, &InfoBuffer, 4u);
    if ( !v8 )
    {
      if ( (a2 & 2) != 0 && InfoBuffer )
        v7 |= 2u;
      if ( (a2 & 4) != 0 && !InfoBuffer )
        v7 |= 4u;
      goto LABEL_9;
    }
LABEL_16:
    if ( EventHandle )
      NtClose(EventHandle);
    return (unsigned int)v8;
  }
  return (unsigned int)-1073741811;
}
