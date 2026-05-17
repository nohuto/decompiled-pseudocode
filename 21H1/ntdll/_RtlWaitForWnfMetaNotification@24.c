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

int __stdcall RtlWaitForWnfMetaNotification(int a1, int a2, int a3, unsigned int a4, int a5, int *a6)
{
  int WnfStateNameInformation; // esi
  int v7; // edi
  int result; // eax
  HANDLE Handle; // [esp+Ch] [ebp-34h] BYREF
  int v10; // [esp+10h] [ebp-30h] BYREF
  int *v11; // [esp+14h] [ebp-2Ch]
  int v12; // [esp+18h] [ebp-28h] BYREF
  _DWORD v13[3]; // [esp+1Ch] [ebp-24h] BYREF
  __int64 v14; // [esp+28h] [ebp-18h] BYREF
  int v15; // [esp+30h] [ebp-10h] BYREF
  int v16; // [esp+34h] [ebp-Ch]

  Handle = 0;
  v15 = a1;
  v16 = a2;
  *a6 = 0;
  v11 = a6;
  if ( a4 > 0x7FFFFFFF || (a3 & 0x11) != 0 )
  {
    WnfStateNameInformation = -1073741811;
    goto LABEL_25;
  }
  if ( (a3 & 0xFFFFFFF1) == 0 )
  {
    v7 = 0;
    if ( (a3 & 8) != 0 )
    {
      WnfStateNameInformation = NtQueryWnfStateNameInformation((int)&v15, 2, 0, (int)&v10, 4);
      if ( WnfStateNameInformation )
        goto LABEL_25;
      if ( v10 )
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
      WnfStateNameInformation = NtCreateEvent((int)&Handle, 2031619, 0, 0, 0);
      if ( WnfStateNameInformation >= 0 )
      {
        v13[1] = Handle;
        v13[2] = 0;
        v13[0] = 0;
        WnfStateNameInformation = RtlRegisterForWnfMetaNotification(
                                    &v12,
                                    v15,
                                    v16,
                                    a3,
                                    (int)RtlpWnfMetaCallbackProc,
                                    (int)v13);
        if ( WnfStateNameInformation >= 0 )
        {
          v14 = -10000LL * a4;
          WnfStateNameInformation = ZwWaitForSingleObject((int)Handle, 0, (int)&v14);
          if ( !WnfStateNameInformation )
            *v11 = v13[0];
          RtlUnsubscribeWnfNotificationWaitForCompletion(v12);
        }
      }
      goto LABEL_25;
    }
    WnfStateNameInformation = NtQueryWnfStateNameInformation((int)&v15, 1, 0, (int)&v10, 4);
    if ( !WnfStateNameInformation )
    {
      if ( (a3 & 2) != 0 && v10 )
        v7 |= 2u;
      if ( (a3 & 4) != 0 && !v10 )
        v7 |= 4u;
      goto LABEL_17;
    }
LABEL_25:
    if ( Handle )
      NtClose(Handle);
    return WnfStateNameInformation;
  }
  return -1073741811;
}
