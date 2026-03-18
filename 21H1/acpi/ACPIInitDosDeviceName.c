/*
 * XREFs of ACPIInitDosDeviceName @ 0x1C0016808
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C009BDB0 (ACPIBusIrpQueryResources.c)
 * Callees:
 *     FreeDataBuffs @ 0x1C0002F90 (FreeDataBuffs.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B8AC (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B8E0 (AMLIEvalNameSpaceObject.c)
 *     WPP_RECORDER_SF_Dqss @ 0x1C001D994 (WPP_RECORDER_SF_Dqss.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0020750 (WPP_RECORDER_SF_Lqss.c)
 *     AMLIGetNamedChild @ 0x1C0020AF0 (AMLIGetNamedChild.c)
 */

__int64 __fastcall ACPIInitDosDeviceName(__int64 a1)
{
  NTSTATUS v2; // r11d
  __int64 v3; // r8
  __int64 v4; // r9
  unsigned __int64 *v5; // rax
  __int64 v6; // rdi
  __int64 v8; // r8
  void *v9; // rcx
  int v10; // edx
  void *v11; // r10
  int v12; // r9d
  int v13; // esi
  __int64 v14; // r8
  void *v15; // rcx
  int v16; // edx
  void *v17; // r10
  __int64 v18; // r8
  void *v19; // rcx
  int v20; // edx
  void *v21; // r10
  NTSTATUS v22; // edi
  __int64 v23; // r8
  void *v24; // rcx
  int v25; // edx
  void *v26; // r10
  NTSTATUS v27; // eax
  int v28; // edi
  __int64 v29; // r8
  void *v30; // rcx
  void *v31; // r10
  char DataSize; // [rsp+28h] [rbp-41h]
  char v33; // [rsp+30h] [rbp-39h]
  __int64 v34; // [rsp+38h] [rbp-31h]
  __int64 v35; // [rsp+40h] [rbp-29h]
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-9h] BYREF
  struct _STRING v38; // [rsp+70h] [rbp+7h] BYREF
  _OWORD v39[2]; // [rsp+80h] [rbp+17h] BYREF
  PCSZ SourceString; // [rsp+A0h] [rbp+37h]
  int Data; // [rsp+D0h] [rbp+67h] BYREF
  void *DeviceRegKey; // [rsp+D8h] [rbp+6Fh] BYREF

  DeviceRegKey = 0LL;
  SourceString = 0LL;
  v38 = 0LL;
  Data = 1;
  memset(v39, 0, sizeof(v39));
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"FirmwareIdentified");
  v2 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 744), 1u, 0x20000u, &DeviceRegKey);
  if ( v2 < 0 )
  {
    v8 = *(_QWORD *)(a1 + 8);
    v9 = &unk_1C00701BA;
    v10 = 0;
    v11 = &unk_1C00701BA;
    if ( (v8 & 0x200000000000LL) != 0 )
    {
      v9 = *(void **)(a1 + 568);
      if ( (v8 & 0x400000000000LL) != 0 )
        v11 = *(void **)(a1 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v35 = (__int64)v11;
    v12 = 11;
    v34 = (__int64)v9;
    v33 = a1;
    DataSize = v2;
    goto LABEL_36;
  }
  ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &Data, 4u);
  RtlInitUnicodeString(&DestinationString, L"DosDeviceName");
  v5 = (unsigned __int64 *)AMLIGetNamedChild(*(_QWORD *)(a1 + 720), 1313096799LL, v3, v4);
  v6 = (__int64)v5;
  if ( !v5 )
  {
LABEL_3:
    ZwClose(DeviceRegKey);
    return 0LL;
  }
  v13 = AMLIEvalNameSpaceObject(v5, (__int64)v39, 0, 0LL);
  AMLIDereferenceHandleEx(v6);
  if ( v13 < 0 )
  {
    v14 = *(_QWORD *)(a1 + 8);
    v15 = &unk_1C00701BA;
    v16 = 0;
    v17 = &unk_1C00701BA;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v15 = *(void **)(a1 + 568);
      if ( (v14 & 0x400000000000LL) != 0 )
        v17 = *(void **)(a1 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v16) = 4;
      WPP_RECORDER_SF_Lqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v16,
        1,
        12,
        (__int64)&WPP_6388804bb8c533865278dc0c88026078_Traceguids,
        v13,
        a1,
        (__int64)v15,
        (__int64)v17);
    }
    goto LABEL_3;
  }
  if ( WORD1(v39[0]) == 2 )
  {
    RtlInitAnsiString(&v38, SourceString);
    v22 = RtlAnsiStringToUnicodeString(&UnicodeString, &v38, 1u);
    if ( v22 < 0 )
    {
      v23 = *(_QWORD *)(a1 + 8);
      v24 = &unk_1C00701BA;
      v25 = 0;
      v26 = &unk_1C00701BA;
      if ( (v23 & 0x200000000000LL) != 0 )
      {
        v24 = *(void **)(a1 + 568);
        if ( (v23 & 0x400000000000LL) != 0 )
          v26 = *(void **)(a1 + 576);
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v25) = 2;
        WPP_RECORDER_SF_Dqss(
          WPP_GLOBAL_Control->DeviceExtension,
          v25,
          1,
          14,
          (__int64)&WPP_6388804bb8c533865278dc0c88026078_Traceguids,
          v22,
          a1,
          (__int64)v24,
          (__int64)v26);
      }
      goto LABEL_29;
    }
    v27 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length);
    dword_1C0082908 = 0;
    pszDest = 0;
    v28 = v27;
    FreeDataBuffs((__int64)v39, 1u);
    ZwClose(DeviceRegKey);
    RtlFreeUnicodeString(&UnicodeString);
    if ( v28 >= 0 )
      return 0LL;
    v29 = *(_QWORD *)(a1 + 8);
    v30 = &unk_1C00701BA;
    v10 = 0;
    v31 = &unk_1C00701BA;
    if ( (v29 & 0x200000000000LL) != 0 )
    {
      v30 = *(void **)(a1 + 568);
      if ( (v29 & 0x400000000000LL) != 0 )
        v31 = *(void **)(a1 + 576);
    }
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      return 0LL;
    v35 = (__int64)v31;
    v12 = 15;
    v34 = (__int64)v30;
    v33 = a1;
    DataSize = v28;
LABEL_36:
    LOBYTE(v10) = 2;
    WPP_RECORDER_SF_Lqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v10,
      1,
      v12,
      (__int64)&WPP_6388804bb8c533865278dc0c88026078_Traceguids,
      DataSize,
      v33,
      v34,
      v35);
    return 0LL;
  }
  v18 = *(_QWORD *)(a1 + 8);
  v19 = &unk_1C00701BA;
  v20 = 0;
  v21 = &unk_1C00701BA;
  if ( (v18 & 0x200000000000LL) != 0 )
  {
    v19 = *(void **)(a1 + 568);
    if ( (v18 & 0x400000000000LL) != 0 )
      v21 = *(void **)(a1 + 576);
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v20) = 4;
    WPP_RECORDER_SF_Dqss(
      WPP_GLOBAL_Control->DeviceExtension,
      v20,
      1,
      13,
      (__int64)&WPP_6388804bb8c533865278dc0c88026078_Traceguids,
      SBYTE2(v39[0]),
      a1,
      (__int64)v19,
      (__int64)v21);
  }
  v22 = 0;
LABEL_29:
  dword_1C0082908 = 0;
  pszDest = 0;
  FreeDataBuffs((__int64)v39, 1u);
  ZwClose(DeviceRegKey);
  return (unsigned int)v22;
}
