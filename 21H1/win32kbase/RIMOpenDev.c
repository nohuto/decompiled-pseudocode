/*
 * XREFs of RIMOpenDev @ 0x1C005A5A8
 * Callers:
 *     rimOnPnpArrived @ 0x1C0059E98 (rimOnPnpArrived.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x1C004813C (RimDeviceTypeToRimInputTypeString.c)
 *     ApiSetGetMaxOpenRetries @ 0x1C005A704 (ApiSetGetMaxOpenRetries.c)
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ApiSetIsRemoteConnection @ 0x1C00A160C (ApiSetIsRemoteConnection.c)
 *     RimDeviceTypeToRimInputType @ 0x1C00A30BC (RimDeviceTypeToRimInputType.c)
 *     ?DbgPrintGDI@@YAXPEADZZ @ 0x1C0145230 (-DbgPrintGDI@@YAXPEADZZ.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U1@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@3AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x1C015855C (--$Write@U-$_tlgWrapSz@G@@U1@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvide.c)
 *     WPP_RECORDER_SF_qdDSd @ 0x1C01599E0 (WPP_RECORDER_SF_qdDSd.c)
 *     ApiSetGetgfSwitchInProgress @ 0x1C01D1B6C (ApiSetGetgfSwitchInProgress.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMOpenDev(__int64 a1, struct _OBJECT_ATTRIBUTES *a2, ACCESS_MASK a3, ULONG a4, NTSTATUS a5)
{
  struct _OBJECT_ATTRIBUTES *v7; // rdi
  unsigned int MaxOpenRetries; // esi
  int v10; // ebp
  NTSTATUS File; // eax
  __int64 v12; // r8
  __int64 v13; // r9
  NTSTATUS v14; // edi
  void *v15; // rcx
  __int64 v17; // rcx
  char v18; // al
  int v19; // edx
  int v20; // r8d
  unsigned int v21; // eax
  __int64 v22; // r8
  int v23; // edx
  __int64 v24; // rcx
  char v25; // al
  int v26; // edx
  int v27; // r8d
  PVOID *Object; // [rsp+20h] [rbp-88h]
  __int64 v29; // [rsp+28h] [rbp-80h]
  const wchar_t *v30; // [rsp+68h] [rbp-40h] BYREF
  PVOID v31; // [rsp+B0h] [rbp+8h] BYREF
  struct _OBJECT_ATTRIBUTES *v32; // [rsp+B8h] [rbp+10h]

  v32 = a2;
  v7 = a2;
  MaxOpenRetries = ApiSetGetMaxOpenRetries();
  if ( *(_BYTE *)(a1 + 48) == 2 && (unsigned int)ApiSetIsRemoteConnection() )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v17);
  *(_DWORD *)(a1 + 184) |= 0x100u;
  v10 = 0;
  if ( !MaxOpenRetries )
    goto LABEL_9;
  while ( 1 )
  {
    File = ZwCreateFile((PHANDLE)(a1 + 224), a3, v7, (PIO_STATUS_BLOCK)(a1 + 256), 0LL, 0, a4, 3u, 0, 0LL, 0);
    *(_DWORD *)(a1 + 288) = File;
    v14 = File;
    if ( File != -1073741757 && File != -1073741790 )
      break;
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) == 0 && !(unsigned int)ApiSetGetgfSwitchInProgress() )
      break;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      WPP_RECORDER_SF_qdDSd(
        *(_QWORD *)(a1 + 216),
        v19,
        v20,
        17,
        (_DWORD)Object,
        a1,
        v20,
        v18,
        *(_QWORD *)(a1 + 216),
        v14);
    }
    v21 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
    LODWORD(v29) = v14;
    DbgPrintGDI(
      "RIMOpenDev[%p, type(%d) dwRimInputType(%08x)], (%ws) failed with status: %X..retry after 100ms",
      a1,
      v22,
      v21,
      *(_QWORD *)(a1 + 216),
      v29);
    v31 = (PVOID)-1000000LL;
    KeDelayExecutionThread(1, 0, (PLARGE_INTEGER)&v31);
    if ( ++v10 >= MaxOpenRetries )
      goto LABEL_8;
    v7 = v32;
  }
  if ( (unsigned int)dword_1C024B170 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C024B170, 0x400000000000LL, v12, v13) )
  {
    v23 = *(unsigned __int8 *)(a1 + 48);
    a5 = v14;
    v30 = RimDeviceTypeToRimInputTypeString(a1, v23);
    Object = (PVOID *)&v30;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
      v24,
      &unk_1C021B499);
  }
  if ( v14 == -1073741757 || v14 == -1073741790 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v25 = RimDeviceTypeToRimInputType(a1, *(unsigned __int8 *)(a1 + 48));
      WPP_RECORDER_SF_qdDSd(
        *(_QWORD *)(a1 + 216),
        v26,
        v27,
        18,
        (_DWORD)Object,
        a1,
        v27,
        v25,
        *(_QWORD *)(a1 + 216),
        v14);
    }
    if ( (*(_DWORD *)(a1 + 200) & 0x80u) != 0 )
      KeBugCheckEx(0x164u, 5uLL, a1 + 208, 0LL, 0LL);
  }
LABEL_8:
  if ( v14 >= 0 )
  {
LABEL_9:
    v15 = *(void **)(a1 + 224);
    v31 = 0LL;
    v14 = ObReferenceObjectByHandle(v15, 0, (POBJECT_TYPE)IoFileObjectType, 0, &v31, 0LL);
    *(_QWORD *)(a1 + 232) = v31;
  }
  return (unsigned int)v14;
}
