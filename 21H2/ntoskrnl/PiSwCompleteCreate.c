/*
 * XREFs of PiSwCompleteCreate @ 0x14076426C
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x140763800 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     IofCompleteRequest @ 0x1402B59A0 (IofCompleteRequest.c)
 *     RtlStringCbLengthW @ 0x1402DCD64 (RtlStringCbLengthW.c)
 *     RtlStringCbCopyW @ 0x1402E0978 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     ObfReferenceObject @ 0x140347CF0 (ObfReferenceObject.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     McTemplateK0zzd_EtwWriteTransfer @ 0x1405637DC (McTemplateK0zzd_EtwWriteTransfer.c)
 *     McTemplateK0zzz_EtwWriteTransfer @ 0x140563B98 (McTemplateK0zzz_EtwWriteTransfer.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406DBB10 (_CmGetDeviceInterfaceReferenceString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     PiSwInterfaceCreate @ 0x140763500 (PiSwInterfaceCreate.c)
 *     PiSwFreeInterfaceList @ 0x1407645E0 (PiSwFreeInterfaceList.c)
 *     PnpCopyDevPropertyArray @ 0x140764604 (PnpCopyDevPropertyArray.c)
 *     IoRegisterDeviceInterface @ 0x140769AD0 (IoRegisterDeviceInterface.c)
 *     PiSwPropertySet @ 0x14076E714 (PiSwPropertySet.c)
 *     PnpFreeDevPropertyArray @ 0x140779620 (PnpFreeDevPropertyArray.c)
 *     PnpAllocatePWSTR @ 0x14077DE70 (PnpAllocatePWSTR.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140787558 (_CmGetDeviceInterfaceClassGuid.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwCompleteCreate(_QWORD *Object)
{
  __int64 v2; // r14
  __int64 v3; // r15
  struct _KTHREAD *CurrentThread; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 *v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  void *v10; // rcx
  const wchar_t *v11; // rcx
  int PWSTR; // ebx
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 *i; // rsi
  __int64 v17; // rcx
  __int64 v18; // r12
  _QWORD *v19; // rsi
  __int64 v20; // rcx
  __int64 v21; // r8
  size_t v22; // rax
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  struct _DEVICE_OBJECT *v25; // r15
  __int64 v26; // rcx
  NTSTATUS DeviceInterfaceReferenceString; // eax
  char v28; // bl
  __int64 v29; // [rsp+38h] [rbp-D0h] BYREF
  _QWORD *v30; // [rsp+40h] [rbp-C8h] BYREF
  _QWORD **v31; // [rsp+48h] [rbp-C0h]
  __int64 v32; // [rsp+50h] [rbp-B8h] BYREF
  PVOID Objecta; // [rsp+58h] [rbp-B0h]
  PCWSTR SourceString; // [rsp+60h] [rbp-A8h]
  _QWORD *v35; // [rsp+68h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-98h] BYREF
  size_t pcbLength[3]; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-78h] BYREF
  __int128 v39; // [rsp+A0h] [rbp-68h] BYREF
  __int128 v40; // [rsp+B0h] [rbp-58h]
  __int128 v41; // [rsp+C0h] [rbp-48h]
  GUID InterfaceClassGuid; // [rsp+D0h] [rbp-38h] BYREF
  WCHAR v43[264]; // [rsp+E8h] [rbp-20h] BYREF

  v31 = &v30;
  v30 = &v30;
  InterfaceClassGuid = 0LL;
  v2 = 0LL;
  v39 = 0LL;
  v3 = 0LL;
  v36 = 0LL;
  v40 = 0LL;
  v29 = 0LL;
  v41 = 0LL;
  CurrentThread = KeGetCurrentThread();
  LODWORD(v32) = 0;
  pcbLength[0] = 0LL;
  v35 = 0LL;
  --CurrentThread->KernelApcDisable;
  *(_OWORD *)&pcbLength[1] = 0LL;
  Objecta = 0LL;
  UnicodeString = 0LL;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  v7 = (__int64 *)Object[8];
  v8 = *v7;
  if ( *v7 )
  {
    *((_DWORD *)v7 + 2) &= 0xFFFFFFF9;
    v9 = Object[39];
    v3 = *(_QWORD *)(v9 + 40) + 40LL;
    if ( (byte_140C0DD4C & 2) != 0 )
      McTemplateK0zzz_EtwWriteTransfer(
        v5,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_DeviceEnumerated,
        v6,
        *(const wchar_t **)(v8 + 8),
        *(const wchar_t **)(v8 + 16),
        *(const wchar_t **)(*(_QWORD *)(v9 + 40) + 48LL));
    v10 = *(void **)(v8 + 80);
    if ( v10 )
    {
      ExFreePoolWithTag(v10, 0x57706E50u);
      *(_OWORD *)(v8 + 72) = 0LL;
    }
    v11 = *(const wchar_t **)(v3 + 8);
    SourceString = 0LL;
    PWSTR = PnpAllocatePWSTR(v11);
    if ( PWSTR >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v8 + 72), SourceString);
      *(_DWORD *)(v8 + 4) |= 4u;
      if ( !*(_QWORD *)(v8 + 88) )
      {
        v14 = *(_QWORD *)(v8 + 144);
        if ( !v14
          || !_InterlockedExchange64((volatile __int64 *)(v14 + 104), 0LL)
          || (v2 = *(_QWORD *)(v8 + 144), *(_QWORD *)(v8 + 144) = 0LL, !v2)
          || (PWSTR = RtlStringCbCopyW(
                        *(NTSTRSAFE_PWSTR *)(v2 + 24),
                        *(unsigned int *)(*(_QWORD *)(v2 + 184) + 8LL),
                        *(NTSTRSAFE_PCWSTR *)(v8 + 80)),
              PWSTR >= 0)
          && (PWSTR = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(v2 + 24), *(unsigned int *)(v15 + 8), pcbLength),
              PWSTR >= 0) )
        {
          HIDWORD(v29) = *(_DWORD *)(v8 + 164);
          v40 = 0x19uLL;
          *((_QWORD *)&v41 + 1) = (char *)&v29 + 4;
          v39 = DEVPKEY_Device_CreatorProcessId;
          *(_QWORD *)&v41 = 0x400000007LL;
          PWSTR = PnpCopyDevPropertyArray(
                    *(_DWORD *)(v8 + 176),
                    *(_QWORD *)(v8 + 168),
                    v13,
                    (unsigned int)&v29,
                    (__int64)&v36);
          if ( PWSTR >= 0 )
          {
            for ( i = *(__int64 **)(v8 + 184); i != (__int64 *)(v8 + 184); i = (__int64 *)*i )
            {
              PWSTR = PiSwInterfaceCreate((NTSTRSAFE_PCWSTR)i[2], i[3], *((_DWORD *)i + 8), (PVOID *)&v35);
              if ( PWSTR < 0 )
                goto LABEL_17;
              v23 = v31;
              if ( *v31 != &v30 )
                __fastfail(3u);
              v24 = v35;
              *v35 = &v30;
              v24[1] = v23;
              *v23 = v24;
              v31 = (_QWORD **)v24;
            }
            Objecta = Object;
            ObfReferenceObject(Object);
          }
        }
      }
    }
  }
  else
  {
    PWSTR = -1073741811;
  }
LABEL_17:
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegion();
  v18 = v36;
  if ( PWSTR >= 0 )
  {
    if ( !*((_QWORD *)&v41 + 1) || (PWSTR = PiSwPropertySet(*(_QWORD *)(v3 + 8), 1LL, &v39, 1LL), PWSTR >= 0) )
    {
      if ( !v18 || (PWSTR = PiSwPropertySet(*(_QWORD *)(v3 + 8), 1LL, v18, (unsigned int)v29), PWSTR >= 0) )
      {
        v19 = v30;
        if ( v30 != &v30 )
        {
          v25 = (struct _DEVICE_OBJECT *)Objecta;
          do
          {
            PWSTR = CmGetDeviceInterfaceClassGuid(v17, v19[2], &InterfaceClassGuid);
            if ( PWSTR < 0 )
              break;
            DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(v26, v19[2], v43, 0x104u, &v32);
            PWSTR = DeviceInterfaceReferenceString;
            if ( DeviceInterfaceReferenceString == -1073741772 )
            {
              v28 = 0;
            }
            else
            {
              if ( DeviceInterfaceReferenceString < 0 )
                break;
              v28 = 1;
              RtlInitUnicodeString((PUNICODE_STRING)&pcbLength[1], v43);
            }
            PWSTR = IoRegisterDeviceInterface(
                      v25,
                      &InterfaceClassGuid,
                      (PUNICODE_STRING)((unsigned __int64)&pcbLength[1] & -(__int64)(v28 != 0)),
                      &UnicodeString);
            if ( PWSTR < 0 )
              break;
            PWSTR = PiSwPropertySet(v19[2], 3LL, v19[3], *((unsigned int *)v19 + 8));
            if ( PWSTR < 0 )
              break;
            v19 = (_QWORD *)*v19;
          }
          while ( v19 != &v30 );
        }
      }
    }
  }
  if ( Objecta )
    ObfDereferenceObject(Objecta);
  if ( v18 )
    PnpFreeDevPropertyArray((unsigned int)v29, v18, 1466986064LL);
  PiSwFreeInterfaceList(&v30);
  RtlFreeUnicodeString(&UnicodeString);
  if ( v2 )
  {
    if ( PWSTR < 0 )
      v22 = 0LL;
    else
      v22 = pcbLength[0] + 2;
    *(_QWORD *)(v2 + 56) = v22;
    *(_DWORD *)(v2 + 48) = PWSTR;
    IofCompleteRequest((PIRP)v2, 0);
  }
  if ( v8 )
  {
    if ( (byte_140C0DD4C & 2) != 0 )
      McTemplateK0zzd_EtwWriteTransfer(
        v20,
        (const EVENT_DESCRIPTOR *)KMPnPEvt_SwDevice_DeviceEnumerated_Status,
        v21,
        *(const wchar_t **)(v8 + 8),
        *(const wchar_t **)(v8 + 16),
        PWSTR);
  }
}
