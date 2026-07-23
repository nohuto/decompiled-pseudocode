/*
 * XREFs of _RtlWaitForWnfMetaNotification@24 @ 0x4B33C0B0
 * Callers:
 *     <none>
 * Callees:
 *     _RtlUnsubscribeWnfNotificationWaitForCompletion@4 @ 0x4B2DE9B0 (_RtlUnsubscribeWnfNotificationWaitForCompletion@4.c)
 *     _ZwWaitForSingleObject@12 @ 0x4B2F29A0 (_ZwWaitForSingleObject@12.c)
 *     _NtClose@4 @ 0x4B2F2A50 (_NtClose@4.c)
 *     _NtCreateEvent@20 @ 0x4B2F2E00 (_NtCreateEvent@20.c)
 *     _NtQueryWnfStateNameInformation@20 @ 0x4B2F3FC0 (_NtQueryWnfStateNameInformation@20.c)
 *     @__security_check_cookie@4 @ 0x4B2F4B20 (@__security_check_cookie@4.c)
 *     __allmul @ 0x4B2F6490 (__allmul.c)
 *     _RtlRegisterForWnfMetaNotification@24 @ 0x4B33BF80 (_RtlRegisterForWnfMetaNotification@24.c)
 */

int __stdcall RtlWaitForWnfMetaNotification(unsigned int a1, unsigned int a2, int a3, unsigned int a4, int a5, int *a6)
{
  NTSTATUS v6; // esi
  int v7; // edi
  int result; // eax
  HANDLE EventHandle; // [esp+Ch] [ebp-34h] BYREF
  int InfoBuffer; // [esp+10h] [ebp-30h] BYREF
  int *v11; // [esp+14h] [ebp-2Ch]
  PVOID v12; // [esp+18h] [ebp-28h] BYREF
  _DWORD v13[3]; // [esp+1Ch] [ebp-24h] BYREF
  LARGE_INTEGER Timeout; // [esp+28h] [ebp-18h] BYREF
  WNF_STATE_NAME StateName; // [esp+30h] [ebp-10h] BYREF

  EventHandle = 0;
  StateName.Data[0] = a1;
  StateName.Data[1] = a2;
  *a6 = 0;
  v11 = a6;
  if ( a4 > 0x7FFFFFFF || (a3 & 0x11) != 0 )
  {
    v6 = -1073741811;
    goto LABEL_25;
  }
  if ( (a3 & 0xFFFFFFF1) == 0 )
  {
    v7 = 0;
    if ( (a3 & 8) != 0 )
    {
      v6 = NtQueryWnfStateNameInformation(&StateName, WnfInfoIsQuiescent, 0, &InfoBuffer, 4u);
      if ( v6 )
        goto LABEL_25;
      if ( InfoBuffer )
        v7 = 8;
    }
    if ( (a3 & 6) == 0 )
    {
LABEL_17:
      if ( v7 )
      {
        result = 0;
        *v11 = v7;
        return result;
      }
      v6 = NtCreateEvent(&EventHandle, 0x1F0003u, 0, NotificationEvent, 0);
      if ( v6 >= 0 )
      {
        v13[1] = EventHandle;
        v13[2] = 0;
        v13[0] = 0;
        v6 = RtlRegisterForWnfMetaNotification(
               &v12,
               StateName.Data[0],
               StateName.Data[1],
               a3,
               (int)RtlpWnfMetaCallbackProc,
               (int)v13);
        if ( v6 >= 0 )
        {
          Timeout.QuadPart = -10000LL * a4;
          v6 = ZwWaitForSingleObject(EventHandle, 0, &Timeout);
          if ( !v6 )
            *v11 = v13[0];
          RtlUnsubscribeWnfNotificationWaitForCompletion(v12);
        }
      }
      goto LABEL_25;
    }
    v6 = NtQueryWnfStateNameInformation(&StateName, WnfInfoSubscribersPresent, 0, &InfoBuffer, 4u);
    if ( !v6 )
    {
      if ( (a3 & 2) != 0 && InfoBuffer )
        v7 |= 2u;
      if ( (a3 & 4) != 0 && !InfoBuffer )
        v7 |= 4u;
      goto LABEL_17;
    }
LABEL_25:
    if ( EventHandle )
      NtClose(EventHandle);
    return v6;
  }
  return -1073741811;
}
