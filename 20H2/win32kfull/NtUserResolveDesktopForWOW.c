/*
 * XREFs of NtUserResolveDesktopForWOW @ 0x1C0200E10
 * Callers:
 *     <none>
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C00B9A60 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C00B9AE0 (PushW32ThreadLock.c)
 *     memmove @ 0x1C015F5C0 (memmove.c)
 *     xxxResolveDesktopForWOW @ 0x1C01E9404 (xxxResolveDesktopForWOW.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02DE410 (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtUserResolveDesktopForWOW(struct _UNICODE_STRING *a1)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int *p_Length; // rax
  __int64 v5; // rcx
  WCHAR *Buffer; // rdi
  ULONG64 v7; // rdx
  _BYTE **v8; // rax
  unsigned __int16 epi16; // ax
  WCHAR *v10; // rax
  __int64 v11; // rcx
  int v12; // edi
  int v14; // [rsp+20h] [rbp-68h]
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-38h] BYREF
  __int128 v17; // [rsp+60h] [rbp-28h] BYREF
  __int64 v18; // [rsp+70h] [rbp-18h]
  int v19; // [rsp+98h] [rbp+10h]

  SourceString = 0LL;
  DestinationString = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  v14 = 0;
  EnterCrit(0LL, 1LL);
  p_Length = (unsigned int *)&a1->Length;
  if ( (unsigned __int64)a1 >= MmUserProbeAddress )
    p_Length = (unsigned int *)MmUserProbeAddress;
  v5 = *p_Length;
  v19 = *p_Length;
  *(_DWORD *)&SourceString.Length = *p_Length;
  Buffer = (WCHAR *)*((_QWORD *)p_Length + 1);
  SourceString.Buffer = Buffer;
  if ( ((unsigned __int8)Buffer & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v7 = (ULONG64)Buffer + HIWORD(v19);
  v8 = (_BYTE **)MmUserProbeAddress;
  if ( v7 < MmUserProbeAddress && (unsigned __int16)v5 <= HIWORD(v19) )
  {
    if ( (v5 & 1) != 0 )
    {
LABEL_10:
      MicrosoftTelemetryAssertTriggeredNoArgsKM(v5, v7, v2, v3);
      v8 = (_BYTE **)MmUserProbeAddress;
      goto LABEL_11;
    }
    if ( v7 > (unsigned __int64)Buffer )
      goto LABEL_12;
  }
  if ( (v5 & 1) != 0 )
    goto LABEL_10;
LABEL_11:
  **v8 = 0;
  Buffer = SourceString.Buffer;
LABEL_12:
  DestinationString = SourceString;
  epi16 = _mm_extract_epi16((__m128i)SourceString, 1);
  if ( epi16 )
  {
    v10 = (WCHAR *)Win32AllocPoolWithQuota(epi16, 2037674837LL);
    SourceString.Buffer = v10;
    if ( !v10 )
      ExRaiseStatus(-1073741801);
    v14 = 1;
    PushW32ThreadLock((__int64)v10, &v17, (__int64)Win32FreePool);
    memmove(SourceString.Buffer, Buffer, SourceString.Length);
  }
  else
  {
    SourceString.Buffer = 0LL;
  }
  v12 = xxxResolveDesktopForWOW(&SourceString);
  if ( v12 >= 0 )
  {
    RtlCopyUnicodeString(&DestinationString, &SourceString);
    *a1 = DestinationString;
  }
  if ( v14 )
    PopAndFreeAlwaysW32ThreadLock((__int64)&v17);
  UserSessionSwitchLeaveCrit(v11);
  return (unsigned int)v12;
}
