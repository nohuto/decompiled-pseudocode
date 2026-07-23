/*
 * XREFs of PiSwCompleteCreate @ 0x14074D850
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x14074F280 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     HalPutDmaAdapter @ 0x14023FBE0 (HalPutDmaAdapter.c)
 *     RtlStringCbLengthW @ 0x14024789C (RtlStringCbLengthW.c)
 *     RtlStringCbCopyW @ 0x140252F68 (RtlStringCbCopyW.c)
 *     RtlInitUnicodeString @ 0x14026A4C0 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     IofCompleteRequest @ 0x1402E7CE0 (IofCompleteRequest.c)
 *     ObfReferenceObject @ 0x140355F80 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     PnpFreeDevPropertyArray @ 0x140628848 (PnpFreeDevPropertyArray.c)
 *     PnpAllocatePWSTR @ 0x14062CF38 (PnpAllocatePWSTR.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x140632D04 (_CmGetDeviceInterfaceClassGuid.c)
 *     RtlFreeAnsiString @ 0x14063DA40 (RtlFreeAnsiString.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x14072B8B8 (_CmGetDeviceInterfaceReferenceString.c)
 *     PiSwPropertySet @ 0x140748518 (PiSwPropertySet.c)
 *     IoRegisterDeviceInterface @ 0x140749090 (IoRegisterDeviceInterface.c)
 *     PiSwInterfaceCreate @ 0x14074D6C4 (PiSwInterfaceCreate.c)
 *     PiSwFreeInterfaceList @ 0x14074DB04 (PiSwFreeInterfaceList.c)
 *     PnpCopyDevPropertyArray @ 0x14074E15C (PnpCopyDevPropertyArray.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 */

void __fastcall PiSwCompleteCreate(struct _DEVICE_OBJECT *Object)
{
  size_t v1; // rbx
  struct _KTHREAD *CurrentThread; // rax
  __int64 v4; // r14
  struct _DEVICE_OBJECT *v5; // r12
  _DWORD *DeviceExtension; // rax
  __int64 v7; // rsi
  void *v8; // rcx
  const WCHAR **v9; // rdi
  const wchar_t *v10; // rcx
  size_t v11; // rdx
  int PWSTR; // edi
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 *v15; // r15
  __int64 *i; // rsi
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rcx
  char *v21; // r15
  __int64 *j; // rsi
  __int64 **v23; // rcx
  __int64 **v24; // rax
  __int64 v25; // rcx
  int DeviceInterfaceReferenceString; // eax
  char v27; // di
  __int64 *v28; // [rsp+40h] [rbp-C8h] BYREF
  __int64 **v29; // [rsp+48h] [rbp-C0h]
  __int64 v30; // [rsp+50h] [rbp-B8h] BYREF
  PCWSTR SourceString; // [rsp+58h] [rbp-B0h] BYREF
  __int64 ***v32; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v33; // [rsp+68h] [rbp-A0h] BYREF
  const WCHAR **v34; // [rsp+70h] [rbp-98h]
  size_t pcbLength[3]; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-78h] BYREF
  GUID InterfaceClassGuid; // [rsp+A0h] [rbp-68h] BYREF
  WCHAR v38[264]; // [rsp+B8h] [rbp-50h] BYREF

  v1 = 0LL;
  v29 = &v28;
  v34 = 0LL;
  v28 = (__int64 *)&v28;
  InterfaceClassGuid = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v33 = 0LL;
  v5 = 0LL;
  LODWORD(v30) = 0;
  --CurrentThread->KernelApcDisable;
  memset(pcbLength, 0, sizeof(pcbLength));
  v32 = 0LL;
  UnicodeString = 0LL;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  DeviceExtension = Object->DeviceExtension;
  v7 = *(_QWORD *)DeviceExtension;
  if ( *(_QWORD *)DeviceExtension )
  {
    DeviceExtension[2] &= 0xFFFFFFF9;
    v8 = *(void **)(v7 + 80);
    v9 = (const WCHAR **)((char *)Object->DeviceObjectExtension->DeviceNode + 40);
    v34 = v9;
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x57706E50u);
      *(_OWORD *)(v7 + 72) = 0LL;
    }
    v10 = v9[1];
    v11 = ((unsigned __int64)*(unsigned __int16 *)v9 >> 1) + 1;
    SourceString = 0LL;
    PWSTR = PnpAllocatePWSTR(v10, v11, 0x57706E50u, (PVOID *)&SourceString);
    if ( PWSTR >= 0 )
    {
      RtlInitUnicodeString((PUNICODE_STRING)(v7 + 72), SourceString);
      *(_DWORD *)(v7 + 4) |= 4u;
      if ( !*(_QWORD *)(v7 + 88) )
      {
        v13 = *(_QWORD *)(v7 + 144);
        if ( !v13
          || !_InterlockedExchange64((volatile __int64 *)(v13 + 104), 0LL)
          || (v4 = *(_QWORD *)(v7 + 144), *(_QWORD *)(v7 + 144) = 0LL, !v4)
          || (v14 = *(_QWORD *)(v4 + 184),
              PWSTR = RtlStringCbCopyW(
                        *(NTSTRSAFE_PWSTR *)(v4 + 24),
                        *(unsigned int *)(v14 + 8),
                        *(NTSTRSAFE_PCWSTR *)(v7 + 80)),
              PWSTR >= 0)
          && (PWSTR = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(v4 + 24), *(unsigned int *)(v14 + 8), pcbLength),
              PWSTR >= 0) )
        {
          PWSTR = PnpCopyDevPropertyArray(*(unsigned int *)(v7 + 176), (__int64)&v33);
          if ( PWSTR >= 0 )
          {
            v15 = (__int64 *)(v7 + 184);
            for ( i = *(__int64 **)(v7 + 184); i != v15; i = (__int64 *)*i )
            {
              PWSTR = PiSwInterfaceCreate((NTSTRSAFE_PCWSTR)i[2], i[3], *((_DWORD *)i + 8), (PVOID *)&v32);
              if ( PWSTR < 0 )
                goto LABEL_15;
              v23 = v29;
              if ( *v29 != (__int64 *)&v28 )
                __fastfail(3u);
              v24 = (__int64 **)v32;
              *v32 = &v28;
              v24[1] = (__int64 *)v23;
              *v23 = (__int64 *)v24;
              v29 = v24;
            }
            v5 = Object;
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
LABEL_15:
  ExReleaseResourceLite(&PiSwLockObj);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v17, v18, v19);
  v21 = (char *)v33;
  if ( PWSTR >= 0 )
  {
    if ( !v33 || (PWSTR = PiSwPropertySet(v34[1], 1u, v33, 0), PWSTR >= 0) )
    {
      for ( j = v28; j != (__int64 *)&v28; j = (__int64 *)*j )
      {
        PWSTR = CmGetDeviceInterfaceClassGuid(v20, j[2], &InterfaceClassGuid);
        if ( PWSTR < 0 )
          break;
        DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(
                                           v25,
                                           (const WCHAR *)j[2],
                                           v38,
                                           0x104u,
                                           &v30);
        PWSTR = DeviceInterfaceReferenceString;
        if ( DeviceInterfaceReferenceString == -1073741772 )
        {
          v27 = 0;
        }
        else
        {
          if ( DeviceInterfaceReferenceString < 0 )
            break;
          v27 = 1;
          RtlInitUnicodeString((PUNICODE_STRING)&pcbLength[1], v38);
        }
        PWSTR = IoRegisterDeviceInterface(
                  v5,
                  &InterfaceClassGuid,
                  (PUNICODE_STRING)((unsigned __int64)&pcbLength[1] & -(__int64)(v27 != 0)),
                  &UnicodeString);
        if ( PWSTR < 0 )
          break;
        PWSTR = PiSwPropertySet((const WCHAR *)j[2], 3u, j[3], *((_DWORD *)j + 8));
        if ( PWSTR < 0 )
          break;
      }
    }
  }
  if ( v5 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v5);
  if ( v21 )
    PnpFreeDevPropertyArray(0, v21, 0x57706E50u);
  PiSwFreeInterfaceList(&v28);
  RtlFreeAnsiString(&UnicodeString);
  if ( v4 )
  {
    if ( PWSTR >= 0 )
      v1 = pcbLength[0] + 2;
    *(_QWORD *)(v4 + 56) = v1;
    *(_DWORD *)(v4 + 48) = PWSTR;
    IofCompleteRequest((PIRP)v4, 0);
  }
}
