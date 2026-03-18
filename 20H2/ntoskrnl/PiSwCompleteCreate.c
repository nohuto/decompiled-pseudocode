/*
 * XREFs of PiSwCompleteCreate @ 0x140746764
 * Callers:
 *     PiSwPdoPnPDispatch @ 0x140748500 (PiSwPdoPnPDispatch.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140210D50 (RtlInitUnicodeString.c)
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     HalPutDmaAdapter @ 0x1402211F0 (HalPutDmaAdapter.c)
 *     ObfReferenceObject @ 0x140221300 (ObfReferenceObject.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     RtlStringCbCopyW @ 0x14023FDE8 (RtlStringCbCopyW.c)
 *     IofCompleteRequest @ 0x140292560 (IofCompleteRequest.c)
 *     RtlStringCbLengthW @ 0x140312FE0 (RtlStringCbLengthW.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     PnpAllocatePWSTR @ 0x140640358 (PnpAllocatePWSTR.c)
 *     PnpFreeDevPropertyArray @ 0x140641CA0 (PnpFreeDevPropertyArray.c)
 *     _CmGetDeviceInterfaceClassGuid @ 0x1406EB528 (_CmGetDeviceInterfaceClassGuid.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140727B18 (_CmGetDeviceInterfaceReferenceString.c)
 *     IoRegisterDeviceInterface @ 0x140744320 (IoRegisterDeviceInterface.c)
 *     PiSwInterfaceCreate @ 0x1407465D8 (PiSwInterfaceCreate.c)
 *     PiSwFreeInterfaceList @ 0x140746A18 (PiSwFreeInterfaceList.c)
 *     PnpCopyDevPropertyArray @ 0x1407473E0 (PnpCopyDevPropertyArray.c)
 *     PiSwPropertySet @ 0x14076851C (PiSwPropertySet.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
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
  unsigned __int16 *v9; // rdi
  const wchar_t *v10; // rcx
  size_t v11; // rdx
  int PWSTR; // edi
  __int64 v13; // rcx
  __int64 v14; // r15
  __int64 *v15; // r15
  __int64 *i; // rsi
  __int64 v17; // rcx
  char *v18; // r15
  __int64 **j; // rsi
  __int64 **v20; // rcx
  __int64 **v21; // rax
  __int64 v22; // rcx
  int DeviceInterfaceReferenceString; // eax
  char v24; // di
  __int64 *v25; // [rsp+40h] [rbp-C8h] BYREF
  __int64 **v26; // [rsp+48h] [rbp-C0h]
  __int64 v27; // [rsp+50h] [rbp-B8h] BYREF
  PCWSTR SourceString; // [rsp+58h] [rbp-B0h] BYREF
  __int64 ***v29; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v30; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int16 *v31; // [rsp+70h] [rbp-98h]
  size_t pcbLength[3]; // [rsp+78h] [rbp-90h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+90h] [rbp-78h] BYREF
  GUID InterfaceClassGuid; // [rsp+A0h] [rbp-68h] BYREF
  WCHAR v35[264]; // [rsp+B8h] [rbp-50h] BYREF

  v1 = 0LL;
  v26 = &v25;
  v31 = 0LL;
  v25 = (__int64 *)&v25;
  InterfaceClassGuid = 0LL;
  CurrentThread = KeGetCurrentThread();
  v4 = 0LL;
  v30 = 0LL;
  v5 = 0LL;
  LODWORD(v27) = 0;
  --CurrentThread->KernelApcDisable;
  memset(pcbLength, 0, sizeof(pcbLength));
  v29 = 0LL;
  UnicodeString = 0LL;
  ExAcquireResourceExclusiveLite(&PiSwLockObj, 1u);
  DeviceExtension = Object->DeviceExtension;
  v7 = *(_QWORD *)DeviceExtension;
  if ( *(_QWORD *)DeviceExtension )
  {
    DeviceExtension[2] &= 0xFFFFFFF9;
    v8 = *(void **)(v7 + 80);
    v9 = (unsigned __int16 *)((char *)Object->DeviceObjectExtension->DeviceNode + 40);
    v31 = v9;
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0x57706E50u);
      *(_OWORD *)(v7 + 72) = 0LL;
    }
    v10 = (const wchar_t *)*((_QWORD *)v9 + 1);
    v11 = ((unsigned __int64)*v9 >> 1) + 1;
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
          PWSTR = PnpCopyDevPropertyArray(*(unsigned int *)(v7 + 176), (__int64)&v30);
          if ( PWSTR >= 0 )
          {
            v15 = (__int64 *)(v7 + 184);
            for ( i = *(__int64 **)(v7 + 184); i != v15; i = (__int64 *)*i )
            {
              PWSTR = PiSwInterfaceCreate((NTSTRSAFE_PCWSTR)i[2], i[3], *((_DWORD *)i + 8), (PVOID *)&v29);
              if ( PWSTR < 0 )
                goto LABEL_15;
              v20 = v26;
              if ( *v26 != (__int64 *)&v25 )
                __fastfail(3u);
              v21 = (__int64 **)v29;
              *v29 = &v25;
              v21[1] = (__int64 *)v20;
              *v20 = (__int64 *)v21;
              v26 = v21;
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
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  v18 = (char *)v30;
  if ( PWSTR >= 0 )
  {
    if ( !v30 || (PWSTR = PiSwPropertySet(*((_QWORD *)v31 + 1), 1LL, v30, 0LL), PWSTR >= 0) )
    {
      for ( j = (__int64 **)v25; j != &v25; j = (__int64 **)*j )
      {
        PWSTR = CmGetDeviceInterfaceClassGuid(v17, (__int64)j[2], &InterfaceClassGuid);
        if ( PWSTR < 0 )
          break;
        DeviceInterfaceReferenceString = CmGetDeviceInterfaceReferenceString(
                                           v22,
                                           (const WCHAR *)j[2],
                                           v35,
                                           0x104u,
                                           &v27);
        PWSTR = DeviceInterfaceReferenceString;
        if ( DeviceInterfaceReferenceString == -1073741772 )
        {
          v24 = 0;
        }
        else
        {
          if ( DeviceInterfaceReferenceString < 0 )
            break;
          v24 = 1;
          RtlInitUnicodeString((PUNICODE_STRING)&pcbLength[1], v35);
        }
        PWSTR = IoRegisterDeviceInterface(
                  v5,
                  &InterfaceClassGuid,
                  (PUNICODE_STRING)((unsigned __int64)&pcbLength[1] & -(__int64)(v24 != 0)),
                  &UnicodeString);
        if ( PWSTR < 0 )
          break;
        PWSTR = PiSwPropertySet(j[2], 3LL, j[3], *((unsigned int *)j + 8));
        if ( PWSTR < 0 )
          break;
      }
    }
  }
  if ( v5 )
    HalPutDmaAdapter((PADAPTER_OBJECT)v5);
  if ( v18 )
    PnpFreeDevPropertyArray(0, v18, 0x57706E50u);
  PiSwFreeInterfaceList(&v25);
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
