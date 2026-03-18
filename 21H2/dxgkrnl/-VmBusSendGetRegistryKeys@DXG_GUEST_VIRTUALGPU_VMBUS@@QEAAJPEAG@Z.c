/*
 * XREFs of ?VmBusSendGetRegistryKeys@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAG@Z @ 0x1C03788C4
 * Callers:
 *     ?CopyRegistryKeys@DXGADAPTER@@QEAAJXZ @ 0x1C02B9D58 (-CopyRegistryKeys@DXGADAPTER@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1C001A56C (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     DpiGetRegistryPathFromPDO @ 0x1C0026EE8 (DpiGetRegistryPathFromPDO.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ?RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z @ 0x1C0051240 (-RtlUnicodeStringCat@@YAJPEAU_UNICODE_STRING@@PEBU1@@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x1C005CCCC (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     ?RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z @ 0x1C005D068 (-RtlUnicodeStringCchCatStringN@@YAJPEAU_UNICODE_STRING@@PEBG_K@Z.c)
 *     ?OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z @ 0x1C01D6784 (-OpenRegistrySubkey@@YAJPEAPEAXKPEAXAEBU_UNICODE_STRING@@PEAK@Z.c)
 *     ?TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z @ 0x1C02D01D0 (-TranslateUmdFileNameToVm@@YAJPEAGIPEAK@Z.c)
 *     ?TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z @ 0x1C02D02E0 (-TranslateUmdFileNameToVmMultiString@@YAJPEAGIPEAK@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1C0364EA8 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 *     ?VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z @ 0x1C037E5E0 (-VmBusSendSyncMessage@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@PEAXPEAI@Z.c)
 */

__int64 __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetRegistryKeys(DXG_GUEST_VIRTUALGPU_VMBUS *this, size_t *a2)
{
  __int64 v4; // rcx
  NTSTATUS v5; // eax
  __int64 v6; // r9
  __int64 RegistryPathFromPDO; // rdi
  _DWORD *v8; // rax
  _DWORD *v9; // r14
  const wchar_t *v10; // r9
  struct _DEVICE_OBJECT *DeviceAttachmentBaseRef; // rbx
  int v12; // eax
  int v13; // r12d
  __int64 Data; // rbx
  int v15; // r13d
  wchar_t v16; // ax
  wchar_t *v17; // r15
  NTSTATUS v18; // eax
  int v19; // eax
  NTSTATUS v20; // eax
  __int64 v21; // r9
  ULONG *v22; // r15
  int v23; // ecx
  int v24; // eax
  int v25; // eax
  unsigned int v27; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v28; // [rsp+54h] [rbp-ACh] BYREF
  HANDLE Handle; // [rsp+58h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-A0h] BYREF
  UNICODE_STRING SourceString; // [rsp+70h] [rbp-90h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+80h] [rbp-80h] BYREF
  struct _UNICODE_STRING v33; // [rsp+90h] [rbp-70h] BYREF
  __int128 v34; // [rsp+A0h] [rbp-60h] BYREF
  int v35; // [rsp+B0h] [rbp-50h]
  char v36; // [rsp+1C0h] [rbp+C0h] BYREF
  char v37; // [rsp+3D0h] [rbp+2D0h] BYREF
  char v38; // [rsp+5E0h] [rbp+4E0h] BYREF

  v35 = 0;
  v34 = 0LL;
  DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v34, this, 0x220u, 0LL, 0LL, 0LL);
  v4 = v34;
  if ( !(_QWORD)v34 )
    goto LABEL_6;
  *(_BYTE *)(v34 + 12) = 0;
  *(_DWORD *)(v4 + 12) &= 0x1FFu;
  *(_QWORD *)v4 = 0LL;
  *(_DWORD *)(v4 + 8) = 0;
  *(_QWORD *)(v4 + 16) = 63LL;
  SourceString.Buffer = (wchar_t *)&v36;
  DestinationString.Buffer = (wchar_t *)&v37;
  ValueName.Buffer = (wchar_t *)&v38;
  Handle = 0LL;
  v27 = 1;
  *(_QWORD *)&SourceString.Length = 34078720LL;
  *(_QWORD *)&DestinationString.Length = 34078720LL;
  *(_QWORD *)&ValueName.Length = 34078720LL;
  v5 = RtlStringCbCopyW((unsigned __int16 *)(v4 + 24), 0x208uLL, a2);
  RegistryPathFromPDO = v5;
  if ( v5 < 0 )
  {
    WdLogSingleEntry1(2LL, v5);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to copy RegPathIn to VMBus Command for VmBusGetRegistryKeys (status = 0x%I64x).",
      RegistryPathFromPDO,
      0LL,
      0LL,
      0LL,
      0LL);
    goto LABEL_51;
  }
  v28 = 130040;
  v8 = (_DWORD *)operator new[](0x1FBF8uLL, 0x4B677844u, 64LL, v6);
  v9 = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(6LL, 12342LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Cannot allocate memory for DXGKVMB_COMMAND_GETREGISTRYKEYS_RETURN",
      12342LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_6:
    LODWORD(RegistryPathFromPDO) = -1073741801;
    goto LABEL_51;
  }
  RegistryPathFromPDO = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendSyncMessage(this, (struct DXGVMBUSMESSAGE *)&v34, v8, &v28);
  if ( !v28 )
  {
    RegistryPathFromPDO = -1073741823LL;
    WdLogSingleEntry1(2LL, -1073741823LL);
    v10 = L"VmBusSendSyncMessage failed for VmBusGetRegistryKeys (status = 0x%I64x).";
LABEL_47:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, RegistryPathFromPDO, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_48;
  }
  if ( (int)v9[1] < 0 )
  {
    RegistryPathFromPDO = (int)v9[1];
    WdLogSingleEntry1(2LL, RegistryPathFromPDO);
    v10 = L"VmBusSendSyncMessage Output failed for VmBusGetRegistryKeys (status = 0x%I64x).";
    goto LABEL_47;
  }
  if ( (int)RegistryPathFromPDO < 0 )
  {
    WdLogSingleEntry1(2LL, RegistryPathFromPDO);
    v10 = L"VmBusSendReadRegistryKeys failed: 0x%I64x";
    goto LABEL_47;
  }
  if ( *v9 )
  {
    DeviceAttachmentBaseRef = IoGetDeviceAttachmentBaseRef(*(PDEVICE_OBJECT *)(*((_QWORD *)this + 9) + 216LL));
    RegistryPathFromPDO = (int)DpiGetRegistryPathFromPDO(DeviceAttachmentBaseRef, 0, &SourceString.Length);
    ObfDereferenceObject(DeviceAttachmentBaseRef);
    if ( (int)RegistryPathFromPDO < 0 )
    {
      WdLogSingleEntry1(2LL, RegistryPathFromPDO);
      v10 = L"Failed to read PnP registry key name for VmBusGetRegistryKeys (status = 0x%I64x).";
      goto LABEL_47;
    }
    v28 = *(_DWORD *)L"\\";
    *(_QWORD *)&v33.Length = 262146LL;
    v33.Buffer = (wchar_t *)&v28;
    v12 = RtlUnicodeStringCat(&SourceString, &v33);
    RegistryPathFromPDO = v12;
    if ( v12 < 0 )
    {
      WdLogSingleEntry1(2LL, v12);
      v10 = L"Failed to concat \\ to RegPathRoot for VmBusGetRegistryKeys (status = 0x%I64x).";
      goto LABEL_47;
    }
    v13 = 0;
    if ( *v9 )
    {
      while ( 1 )
      {
        Data = (__int64)&v9[774 * v13 + 2];
        RtlCopyUnicodeString(&DestinationString, &SourceString);
        v15 = 0;
        v16 = *(_WORD *)(Data + 2048);
        if ( v16 )
          break;
LABEL_28:
        v27 = 1;
        v20 = OpenRegistrySubkey(&Handle, 0x20006u, 0LL, &DestinationString, &v27);
        RegistryPathFromPDO = v20;
        if ( v20 < 0 )
        {
          WdLogSingleEntry1(2LL, v20);
          v10 = L"Failed to create registry subkey for VmBusGetRegistryKeys (status = 0x%I64x).";
          goto LABEL_47;
        }
        v22 = (ULONG *)(Data + 3092);
        if ( Data != -2568 || *v22 )
        {
          v23 = *(_DWORD *)(Data + 3088);
          if ( (unsigned int)(v23 - 1) <= 1 )
          {
            v25 = TranslateUmdFileNameToVm((size_t *)Data, 0x400u, (unsigned int *)(Data + 3092));
            RegistryPathFromPDO = v25;
            if ( v25 < 0 )
            {
              WdLogSingleEntry1(2LL, v25);
              v10 = L"Failed to translate UmdFileName to VM namespace for VmBusGetRegistryKeys (status = 0x%I64x).";
              goto LABEL_47;
            }
          }
          else if ( v23 == 7 )
          {
            v24 = TranslateUmdFileNameToVmMultiString(
                    (unsigned __int16 *)Data,
                    1024,
                    (unsigned int *)(Data + 3092),
                    v21);
            RegistryPathFromPDO = v24;
            if ( v24 < 0 )
            {
              WdLogSingleEntry1(2LL, v24);
              v10 = L"Failed to translate UmdFileNames in Multi String Type to VM namespace for VmBusGetRegistryKeys (status = 0x%I64x).";
              goto LABEL_47;
            }
          }
          RtlInitUnicodeString(&ValueName, (PCWSTR)(Data + 2568));
          RegistryPathFromPDO = ZwSetValueKey(Handle, &ValueName, 0, *(_DWORD *)(Data + 3088), (PVOID)Data, *v22);
          if ( Handle )
            ZwClose(Handle);
          Handle = 0LL;
          if ( (int)RegistryPathFromPDO < 0 )
          {
            WdLogSingleEntry1(2LL, RegistryPathFromPDO);
            v10 = L"Failed to set value of reg key for VmBusGetRegistryKeys (status = 0x%I64x).";
            goto LABEL_47;
          }
        }
        if ( (unsigned int)++v13 >= *v9 )
          goto LABEL_48;
      }
      v17 = (wchar_t *)(Data + 2048);
      while ( 1 )
      {
        if ( v16 == 92 )
        {
          v27 = 1;
          v18 = OpenRegistrySubkey(&Handle, 0x20006u, 0LL, &DestinationString, &v27);
          RegistryPathFromPDO = v18;
          if ( v18 < 0 )
          {
            WdLogSingleEntry1(2LL, v18);
            v10 = L"Failed to create registry key for VmBusGetRegistryKeys (status = 0x%I64x).";
            goto LABEL_47;
          }
          if ( Handle )
            ZwClose(Handle);
          Handle = 0LL;
        }
        v19 = RtlUnicodeStringCchCatStringN(&DestinationString, v17);
        RegistryPathFromPDO = v19;
        if ( v19 < 0 )
          break;
        v17 = (wchar_t *)(Data + 2 * ((unsigned int)++v15 + 1024LL));
        v16 = *v17;
        if ( !*v17 )
          goto LABEL_28;
      }
      WdLogSingleEntry1(2LL, v19);
      v10 = L"Failed to build registry subkey for VmBusGetRegistryKeys (status = 0x%I64x).";
      goto LABEL_47;
    }
  }
  else
  {
    WdLogSingleEntry1(3LL, 12367LL);
  }
LABEL_48:
  if ( Handle )
    ZwClose(Handle);
  operator delete[](v9);
LABEL_51:
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v34);
  return (unsigned int)RegistryPathFromPDO;
}
