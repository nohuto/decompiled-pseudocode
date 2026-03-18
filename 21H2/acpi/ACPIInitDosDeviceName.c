/*
 * XREFs of ACPIInitDosDeviceName @ 0x1C0022B6C
 * Callers:
 *     ACPIBusIrpQueryResources @ 0x1C00978C0 (ACPIBusIrpQueryResources.c)
 * Callees:
 *     WPP_RECORDER_SF_Dqss @ 0x1C0004A40 (WPP_RECORDER_SF_Dqss.c)
 *     AMLIGetNamedChild @ 0x1C000B060 (AMLIGetNamedChild.c)
 *     AMLIDereferenceHandleEx @ 0x1C000B860 (AMLIDereferenceHandleEx.c)
 *     AMLIEvalNameSpaceObject @ 0x1C000B894 (AMLIEvalNameSpaceObject.c)
 *     WPP_RECORDER_SF_Lqss @ 0x1C0010020 (WPP_RECORDER_SF_Lqss.c)
 *     FreeDataBuffs @ 0x1C0018A20 (FreeDataBuffs.c)
 *     WPP_RECORDER_SF_dqss @ 0x1C004DEE0 (WPP_RECORDER_SF_dqss.c)
 */

__int64 __fastcall ACPIInitDosDeviceName(__int64 a1)
{
  NTSTATUS v2; // r11d
  __int64 *v3; // rax
  volatile signed __int32 *v4; // rdi
  __int64 v6; // r8
  void *v7; // rcx
  void *v8; // r10
  int v9; // esi
  int v10; // edx
  __int64 v11; // r8
  void *v12; // rcx
  void *v13; // r10
  __int64 v14; // r8
  void *v15; // rcx
  void *v16; // r10
  NTSTATUS v17; // edi
  __int64 v18; // r8
  const char *v19; // rcx
  const char *v20; // r10
  NTSTATUS v21; // eax
  int v22; // edi
  __int64 v23; // r8
  void *v24; // rcx
  void *v25; // r10
  struct _UNICODE_STRING DestinationString; // [rsp+50h] [rbp-19h] BYREF
  struct _UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-9h] BYREF
  struct _STRING v28; // [rsp+70h] [rbp+7h] BYREF
  _OWORD v29[2]; // [rsp+80h] [rbp+17h] BYREF
  PCSZ SourceString; // [rsp+A0h] [rbp+37h]
  int Data; // [rsp+D0h] [rbp+67h] BYREF
  void *DeviceRegKey; // [rsp+D8h] [rbp+6Fh] BYREF

  DeviceRegKey = 0LL;
  SourceString = 0LL;
  v28 = 0LL;
  Data = 1;
  memset(v29, 0, sizeof(v29));
  DestinationString = 0LL;
  UnicodeString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"FirmwareIdentified");
  v2 = IoOpenDeviceRegistryKey(*(PDEVICE_OBJECT *)(a1 + 784), 1u, 0x20000u, &DeviceRegKey);
  if ( v2 < 0 )
  {
    v6 = *(_QWORD *)(a1 + 8);
    v7 = &unk_1C006FB8B;
    v8 = &unk_1C006FB8B;
    if ( (v6 & 0x200000000000LL) != 0 )
    {
      v7 = *(void **)(a1 + 608);
      if ( (v6 & 0x400000000000LL) != 0 )
        v8 = *(void **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xBu,
        (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
        v2,
        a1,
        (__int64)v7,
        (__int64)v8);
    return 0LL;
  }
  ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 4u, &Data, 4u);
  RtlInitUnicodeString(&DestinationString, L"DosDeviceName");
  v3 = AMLIGetNamedChild(*(__int64 **)(a1 + 760), 1313096799);
  v4 = (volatile signed __int32 *)v3;
  if ( !v3 )
    goto LABEL_3;
  v9 = AMLIEvalNameSpaceObject(v3, (__int64)v29, 0, 0LL);
  AMLIDereferenceHandleEx(v4);
  if ( v9 < 0 )
  {
    v11 = *(_QWORD *)(a1 + 8);
    v12 = &unk_1C006FB8B;
    v13 = &unk_1C006FB8B;
    if ( (v11 & 0x200000000000LL) != 0 )
    {
      v12 = *(void **)(a1 + 608);
      if ( (v11 & 0x400000000000LL) != 0 )
        v13 = *(void **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        4u,
        1u,
        0xCu,
        (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
        v9,
        a1,
        (__int64)v12,
        (__int64)v13);
LABEL_3:
    ZwClose(DeviceRegKey);
    return 0LL;
  }
  if ( WORD1(v29[0]) == 2 )
  {
    RtlInitAnsiString(&v28, SourceString);
    v17 = RtlAnsiStringToUnicodeString(&UnicodeString, &v28, 1u);
    if ( v17 >= 0 )
    {
      v21 = ZwSetValueKey(DeviceRegKey, &DestinationString, 0, 1u, UnicodeString.Buffer, UnicodeString.Length);
      dword_1C0081AC8 = 0;
      byte_1C0081ACC = 0;
      v22 = v21;
      FreeDataBuffs((__int64)v29, 1u);
      ZwClose(DeviceRegKey);
      RtlFreeUnicodeString(&UnicodeString);
      if ( v22 < 0 )
      {
        v23 = *(_QWORD *)(a1 + 8);
        v24 = &unk_1C006FB8B;
        v25 = &unk_1C006FB8B;
        if ( (v23 & 0x200000000000LL) != 0 )
        {
          v24 = *(void **)(a1 + 608);
          if ( (v23 & 0x400000000000LL) != 0 )
            v25 = *(void **)(a1 + 616);
        }
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          WPP_RECORDER_SF_Lqss(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            2u,
            1u,
            0xFu,
            (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
            v22,
            a1,
            (__int64)v24,
            (__int64)v25);
      }
      return 0LL;
    }
    v18 = *(_QWORD *)(a1 + 8);
    v19 = (const char *)&unk_1C006FB8B;
    v20 = (const char *)&unk_1C006FB8B;
    if ( (v18 & 0x200000000000LL) != 0 )
    {
      v19 = *(const char **)(a1 + 608);
      if ( (v18 & 0x400000000000LL) != 0 )
        v20 = *(const char **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Dqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        1u,
        0xEu,
        (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
        v17,
        a1,
        v19,
        v20);
  }
  else
  {
    v14 = *(_QWORD *)(a1 + 8);
    v15 = &unk_1C006FB8B;
    v16 = &unk_1C006FB8B;
    if ( (v14 & 0x200000000000LL) != 0 )
    {
      v15 = *(void **)(a1 + 608);
      if ( (v14 & 0x400000000000LL) != 0 )
        v16 = *(void **)(a1 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v10) = 4;
      WPP_RECORDER_SF_dqss(
        WPP_GLOBAL_Control->DeviceExtension,
        v10,
        1,
        13,
        (__int64)&WPP_786589887d18386d1941a386bf041506_Traceguids,
        SBYTE2(v29[0]),
        a1,
        (__int64)v15,
        (__int64)v16);
    }
    v17 = 0;
  }
  dword_1C0081AC8 = 0;
  byte_1C0081ACC = 0;
  FreeDataBuffs((__int64)v29, 1u);
  ZwClose(DeviceRegKey);
  return (unsigned int)v17;
}
