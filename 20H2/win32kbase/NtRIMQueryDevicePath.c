/*
 * XREFs of NtRIMQueryDevicePath @ 0x1C0154AB0
 * Callers:
 *     <none>
 * Callees:
 *     Win32AllocPool @ 0x1C003C610 (Win32AllocPool.c)
 *     Win32FreePool @ 0x1C0057A50 (Win32FreePool.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall NtRIMQueryDevicePath(ULONG64 a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int *v5; // rdx
  __int64 v6; // rcx
  WCHAR *v7; // rdx
  ULONG64 v8; // r8
  _BYTE **v9; // rax
  NTSTATUS v10; // ebx
  __int64 i; // rdi
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-50h] BYREF
  UNICODE_STRING SourceString; // [rsp+58h] [rbp-40h] BYREF
  int v15; // [rsp+B0h] [rbp+18h]
  void *Handle; // [rsp+B8h] [rbp+20h] BYREF

  v5 = (unsigned int *)a1;
  Handle = 0LL;
  DestinationString = 0LL;
  SourceString = 0LL;
  if ( a1 >= MmUserProbeAddress )
    v5 = (unsigned int *)MmUserProbeAddress;
  v6 = *v5;
  v15 = *v5;
  *(_DWORD *)&SourceString.Length = *v5;
  v7 = (WCHAR *)*((_QWORD *)v5 + 1);
  SourceString.Buffer = v7;
  if ( ((unsigned __int8)v7 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v8 = (ULONG64)v7 + (unsigned __int16)v6 + 2;
  v9 = (_BYTE **)MmUserProbeAddress;
  if ( v8 >= MmUserProbeAddress || (unsigned __int16)v6 > HIWORD(v15) )
    goto LABEL_9;
  if ( (v6 & 1) != 0 )
    goto LABEL_10;
  if ( v8 <= (unsigned __int64)v7 )
  {
LABEL_9:
    if ( (v6 & 1) == 0 )
    {
LABEL_11:
      **v9 = 0;
      goto LABEL_12;
    }
LABEL_10:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v6, v7, v8, a4);
    v9 = (_BYTE **)MmUserProbeAddress;
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
    Win32FreePool((__int64)DestinationString.Buffer);
  return (unsigned int)v10;
}
