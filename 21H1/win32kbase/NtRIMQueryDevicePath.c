/*
 * XREFs of NtRIMQueryDevicePath @ 0x1C015D360
 * Callers:
 *     <none>
 * Callees:
 *     Win32FreePool @ 0x1C008C9A0 (Win32FreePool.c)
 *     Win32AllocPool @ 0x1C008D7C0 (Win32AllocPool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtRIMQueryDevicePath(ULONG64 a1, _QWORD *a2)
{
  unsigned int *v3; // rdx
  __int64 v4; // rcx
  WCHAR *v5; // rdx
  ULONG64 v6; // r8
  _BYTE **v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  NTSTATUS v10; // ebx
  __int64 i; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF
  UNICODE_STRING SourceString; // [rsp+58h] [rbp-40h] BYREF
  int v15; // [rsp+B0h] [rbp+18h]
  void *Handle; // [rsp+B8h] [rbp+20h] BYREF

  v3 = (unsigned int *)a1;
  Handle = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( a1 >= MmUserProbeAddress )
    v3 = (unsigned int *)MmUserProbeAddress;
  v4 = *v3;
  v15 = *v3;
  *(_DWORD *)&SourceString.Length = *v3;
  v5 = (WCHAR *)*((_QWORD *)v3 + 1);
  SourceString.Buffer = v5;
  if ( ((unsigned __int8)v5 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v6 = (ULONG64)v5 + (unsigned __int16)v4 + 2;
  v7 = (_BYTE **)MmUserProbeAddress;
  if ( v6 >= MmUserProbeAddress || (unsigned __int16)v4 > HIWORD(v15) )
    goto LABEL_9;
  if ( (v4 & 1) != 0 )
    goto LABEL_10;
  if ( v6 <= (unsigned __int64)v5 )
  {
LABEL_9:
    if ( (v4 & 1) == 0 )
    {
LABEL_11:
      **v7 = 0;
      goto LABEL_12;
    }
LABEL_10:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v4);
    v7 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_11;
  }
LABEL_12:
  DestinationString.MaximumLength = SourceString.Length;
  DestinationString.Length = SourceString.Length;
  DestinationString.Buffer = (PWSTR)Win32AllocPool(SourceString.Length, 0x706D7452u);
  if ( DestinationString.Buffer )
  {
    RtlCopyUnicodeString(&DestinationString, &SourceString);
    v10 = 0;
  }
  else
  {
    v10 = -1073741670;
  }
  if ( v10 >= 0 )
  {
    if ( DestinationString.Length < 3u
      || *DestinationString.Buffer != 92
      || DestinationString.Buffer[1] != 92
      || DestinationString.Buffer[2] != 63 )
    {
      v10 = -1073741811;
    }
    DestinationString.Buffer[1] = 63;
    if ( v10 >= 0 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockSharedEx(&gObListLock, 0LL);
      v10 = -1073741275;
      for ( i = gObRimDevList; (__int64 *)i != &gObRimDevList; i = *(_QWORD *)i )
      {
        if ( (*(_DWORD *)(i + 256) & 0x400) == 0
          && RtlEqualUnicodeString(&DestinationString, (PCUNICODE_STRING)(i + 280), 0) )
        {
          v10 = ObOpenObjectByPointer((PVOID)(i - 16), 0, 0LL, 1u, ExRawInputManagerObjectType, 0, &Handle);
          break;
        }
      }
      ExReleasePushLockSharedEx(&gObListLock, 0LL);
      KeLeaveCriticalRegion();
      if ( v10 >= 0 )
      {
        if ( (unsigned __int64)a2 >= MmUserProbeAddress )
          a2 = (_QWORD *)MmUserProbeAddress;
        *a2 = Handle;
      }
    }
  }
  if ( DestinationString.Buffer )
    Win32FreePool((__int64)DestinationString.Buffer, v8, v9);
  return (unsigned int)v10;
}
