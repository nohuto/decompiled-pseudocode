/*
 * XREFs of ?GetSpriteFillColor@@YAKXZ @ 0x1C00CE2E4
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00BFFB4 (xxxInitProcessInfo.c)
 * Callees:
 *     ?RtlStringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x1C0032934 (-RtlStringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C00C9AD4 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 GetSpriteFillColor(void)
{
  unsigned int v0; // edi
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 CurrentProcess; // rax
  __int64 ProcessPeb; // rdx
  __int64 v5; // r9
  ULONG64 v6; // r8
  int v7; // esi
  ULONG64 v8; // r14
  ULONG64 v9; // rcx
  _BYTE **v10; // rax
  int v11; // eax
  size_t *v12; // r8
  size_t *v13; // rcx
  int v15; // [rsp+30h] [rbp-2B8h]
  ULONG ResultLength; // [rsp+3Ch] [rbp-2ACh] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-2A8h] BYREF
  size_t *v18; // [rsp+48h] [rbp-2A0h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-298h] BYREF
  __int128 v20; // [rsp+60h] [rbp-288h]
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-278h] BYREF
  char KeyValueInformation[4]; // [rsp+A8h] [rbp-240h] BYREF
  int v23; // [rsp+ACh] [rbp-23Ch]
  int v24; // [rsp+B0h] [rbp-238h]
  unsigned int v25; // [rsp+B4h] [rbp-234h]
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-228h] BYREF

  v0 = 0;
  RtlStringCchCopyW(
    SourceString,
    0x104uLL,
    (size_t *)L"\\Registry\\Machine\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Image File Execution Options\\");
  v20 = 0LL;
  v18 = 0LL;
  CurrentProcess = PsGetCurrentProcess(v2, v1);
  ProcessPeb = PsGetProcessPeb(CurrentProcess);
  v6 = *(_QWORD *)(ProcessPeb + 32) + 96LL;
  if ( v6 >= MmUserProbeAddress )
    v6 = MmUserProbeAddress;
  v7 = *(_DWORD *)v6;
  v15 = *(_DWORD *)v6;
  LODWORD(v20) = *(_DWORD *)v6;
  v8 = *(_QWORD *)(v6 + 8);
  *((_QWORD *)&v20 + 1) = v8;
  LOBYTE(ProcessPeb) = 1;
  if ( (v8 & 1) != 0 )
    ExRaiseDatatypeMisalignment();
  v9 = v8 + (unsigned __int16)v7 + 2LL;
  v10 = (_BYTE **)MmUserProbeAddress;
  if ( v9 >= MmUserProbeAddress || (unsigned __int16)v7 > HIWORD(v15) )
    goto LABEL_9;
  if ( (v7 & 1) != 0 )
    goto LABEL_10;
  if ( v9 <= v8 )
  {
LABEL_9:
    if ( (v7 & 1) == 0 )
    {
LABEL_11:
      **v10 = 0;
      goto LABEL_12;
    }
LABEL_10:
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v9, ProcessPeb, v6, v5);
    v10 = (_BYTE **)MmUserProbeAddress;
    goto LABEL_11;
  }
LABEL_12:
  v11 = (unsigned __int16)v7;
  v12 = (size_t *)(v8 + (unsigned __int16)v7);
  v18 = v12;
  while ( v11 )
  {
    v13 = (size_t *)((char *)v12 - 2);
    if ( *((_WORD *)v12 - 1) == 92 )
      break;
    v12 = (size_t *)((char *)v12 - 2);
    v18 = v13;
    v11 -= 2;
  }
  if ( (int)RtlStringCchCatW(SourceString, 260LL, v12) >= 0 )
  {
    DestinationString = 0LL;
    *(&ObjectAttributes.Length + 1) = 0;
    *(&ObjectAttributes.Attributes + 1) = 0;
    KeyHandle = 0LL;
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.Length = 48;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    ObjectAttributes.ObjectName = &DestinationString;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
    {
      ResultLength = 0;
      RtlInitUnicodeString(&DestinationString, L"SpriteFillColor");
      if ( ZwQueryValueKey(
             KeyHandle,
             &DestinationString,
             KeyValuePartialInformation,
             KeyValueInformation,
             0x14u,
             &ResultLength) >= 0
        && v23 == 4
        && v24 == 4 )
      {
        v0 = v25;
      }
      ZwClose(KeyHandle);
    }
  }
  return v0;
}
