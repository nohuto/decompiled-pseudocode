/*
 * XREFs of _NtUserResolveDesktopForWOW@4 @ 0x168441
 * Callers:
 *     <none>
 * Callees:
 *     _PopAndFreeAlwaysW32ThreadLock@4 @ 0x6F960 (_PopAndFreeAlwaysW32ThreadLock@4.c)
 *     _PushW32ThreadLock@12 @ 0x6F9A0 (_PushW32ThreadLock@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _xxxResolveDesktopForWOW@4 @ 0x154BAD (_xxxResolveDesktopForWOW@4.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall NtUserResolveDesktopForWOW(struct _UNICODE_STRING *a1)
{
  struct _UNICODE_STRING *v2; // edx
  WCHAR *Buffer; // edi
  ULONG v4; // ebx
  WCHAR *v5; // eax
  _DWORD v7[3]; // [esp+10h] [ebp-40h] BYREF
  struct _UNICODE_STRING DestinationString; // [esp+1Ch] [ebp-34h] BYREF
  UNICODE_STRING SourceString; // [esp+24h] [ebp-2Ch] BYREF
  int v10; // [esp+34h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+38h] [ebp-18h]
  int v12; // [esp+58h] [ebp+8h]

  *(_DWORD *)&SourceString.Length = 0;
  SourceString.Buffer = 0;
  *(_DWORD *)&DestinationString.Length = 0;
  DestinationString.Buffer = 0;
  memset(v7, 0, sizeof(v7));
  v10 = 0;
  EnterCrit(0, 1);
  ms_exc.registration.TryLevel = 0;
  v2 = a1;
  if ( (unsigned int)a1 >= _MmUserProbeAddress )
    v2 = (struct _UNICODE_STRING *)_MmUserProbeAddress;
  *(_DWORD *)&SourceString.Length = *(_DWORD *)&v2->Length;
  Buffer = v2->Buffer;
  SourceString.Buffer = Buffer;
  v4 = (ULONG)Buffer + SourceString.MaximumLength;
  if ( v4 <= (unsigned int)Buffer || v4 >= _MmUserProbeAddress )
LABEL_16:
    ExRaiseAccessViolation();
  if ( SourceString.Length > SourceString.MaximumLength )
  {
    if ( (SourceString.Length & 1) == 0 )
      goto LABEL_16;
    goto LABEL_15;
  }
  if ( (SourceString.Length & 1) != 0 )
  {
LABEL_15:
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
    goto LABEL_16;
  }
  *(_DWORD *)&DestinationString.Length = *(_DWORD *)&SourceString.Length;
  DestinationString.Buffer = Buffer;
  if ( SourceString.MaximumLength )
  {
    v5 = (WCHAR *)Win32AllocPoolWithQuota(SourceString.MaximumLength, 2037674837);
    SourceString.Buffer = v5;
    if ( !v5 )
      ExRaiseStatus(-1073741801);
    v10 = 1;
    PushW32ThreadLock((int)v5, v7, (int)Win32FreePool);
    memcpy(SourceString.Buffer, Buffer, SourceString.Length);
  }
  else
  {
    SourceString.Buffer = 0;
  }
  ms_exc.registration.TryLevel = -2;
  v12 = xxxResolveDesktopForWOW(&SourceString);
  if ( v12 >= 0 )
  {
    ms_exc.registration.TryLevel = 1;
    RtlCopyUnicodeString(&DestinationString, &SourceString);
    *a1 = DestinationString;
    ms_exc.registration.TryLevel = -2;
  }
  if ( v10 )
    PopAndFreeAlwaysW32ThreadLock((int)v7);
  UserSessionSwitchLeaveCrit();
  return v12;
}
