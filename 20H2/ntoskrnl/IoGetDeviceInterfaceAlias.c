/*
 * XREFs of IoGetDeviceInterfaceAlias @ 0x140727720
 * Callers:
 *     PiCMGetDeviceInterfaceAlias @ 0x140727544 (PiCMGetDeviceInterfaceAlias.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x14021EB00 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x1402214C0 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140221C70 (ExAcquireResourceExclusiveLite.c)
 *     RtlInitUnicodeStringEx @ 0x140267E90 (RtlInitUnicodeStringEx.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F8350 (ZwClose.c)
 *     SeCaptureSubjectContext @ 0x14060C950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14060D710 (SeReleaseSubjectContext.c)
 *     RtlFreeAnsiString @ 0x140632500 (RtlFreeAnsiString.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14063BC00 (PiPnpRtlApplyMandatoryFilters.c)
 *     PnpUnicodeStringToWstrFree @ 0x14063D9C4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14063F78C (PnpUnicodeStringToWstr.c)
 *     _PnpGetObjectProperty @ 0x14063FDAC (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x1406413C4 (_PnpStringFromGuid.c)
 *     _CmValidateDeviceInterfaceName @ 0x14066BCDC (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1406EAB84 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x140727A84 (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x140727B18 (_CmGetDeviceInterfaceReferenceString.c)
 *     _CmGetDeviceInterfaceName @ 0x140744F1C (_CmGetDeviceInterfaceName.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaceAlias(
        PUNICODE_STRING SymbolicLinkName,
        const GUID *AliasInterfaceClassGuid,
        PUNICODE_STRING AliasSymbolicLinkName)
{
  void *v6; // r14
  PVOID v7; // rsi
  WCHAR *v8; // rdi
  int v9; // eax
  __int64 v10; // rcx
  NTSTATUS ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  PVOID PoolWithTag; // rax
  const WCHAR *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // rcx
  WCHAR *v18; // rdi
  char v19; // r12
  __int64 v20; // r9
  __int64 v22; // rcx
  unsigned int v23; // ebx
  __int64 v24; // rcx
  int SessionId; // [rsp+20h] [rbp-E0h]
  int SessionIda; // [rsp+20h] [rbp-E0h]
  _WORD v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v28; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int v29; // [rsp+68h] [rbp-98h] BYREF
  int v30; // [rsp+6Ch] [rbp-94h] BYREF
  int v31[2]; // [rsp+70h] [rbp-90h] BYREF
  int v32; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  wchar_t v35[40]; // [rsp+B0h] [rbp-50h] BYREF

  v27[0] = 0;
  Handle = 0LL;
  v30 = 0;
  v6 = 0LL;
  v32 = 0;
  v7 = 0LL;
  *(_QWORD *)v31 = 0LL;
  v8 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !SymbolicLinkName || !SymbolicLinkName->Buffer || !SymbolicLinkName->Length )
  {
    ObjectProperty = -1073741811;
    goto LABEL_25;
  }
  v9 = PnpUnicodeStringToWstr((__int16 **)v31, 0LL, &SymbolicLinkName->Length);
  v8 = *(WCHAR **)v31;
  ObjectProperty = v9;
  if ( v9 >= 0 )
  {
    if ( (int)CmValidateDeviceInterfaceName(v10, *(const WCHAR **)v31) < 0 )
    {
      ObjectProperty = -1073741811;
      goto LABEL_29;
    }
    SeCaptureSubjectContext(&SubjectContext);
    ObjectProperty = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, (__int64)v8, 3, 0, &SubjectContext, v27);
    SeReleaseSubjectContext(&SubjectContext);
    if ( ObjectProperty >= 0 )
    {
      if ( !LOBYTE(v27[0]) )
      {
        ObjectProperty = -1073741790;
        goto LABEL_29;
      }
      ObjectProperty = PnpStringFromGuid((int *)AliasInterfaceClassGuid, v35);
      if ( ObjectProperty >= 0 )
      {
        CurrentThread = KeGetCurrentThread();
        --CurrentThread->KernelApcDisable;
        ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
        PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
        v6 = PoolWithTag;
        if ( PoolWithTag )
        {
          v14 = *(const WCHAR **)v31;
          ObjectProperty = PnpGetObjectProperty(
                             *(__int64 *)&PiPnpRtlCtx,
                             *(__int64 *)v31,
                             3LL,
                             0LL,
                             0LL,
                             (__int64)&DEVPKEY_Device_InstanceId,
                             (__int64)&v30,
                             (__int64)PoolWithTag,
                             400,
                             (__int64)&v32,
                             0);
          if ( ObjectProperty < 0 )
          {
LABEL_24:
            ExReleaseResourceLite(&PnpRegistryDeviceResource);
            KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
            v8 = *(WCHAR **)v31;
LABEL_25:
            if ( v7 )
              ExFreePoolWithTag(v7, 0);
            if ( v6 )
              ExFreePoolWithTag(v6, 0);
            goto LABEL_29;
          }
          if ( v30 != 18 )
          {
            ObjectProperty = -1073741585;
            goto LABEL_24;
          }
          v28 = 128;
          v7 = ExAllocatePoolWithTag(PagedPool, 0x100uLL, 0x20207050u);
          if ( v7 )
          {
            ObjectProperty = CmGetDeviceInterfaceReferenceString(v15, v14, v7, 128LL, &v28);
            if ( ObjectProperty != -1073741789 )
              goto LABEL_14;
            ExFreePoolWithTag(v7, 0);
            v7 = ExAllocatePoolWithTag(PagedPool, 2LL * v28, 0x20207050u);
            if ( v7 )
            {
              ObjectProperty = CmGetDeviceInterfaceReferenceString(v22, v14, v7, v28, &v28);
LABEL_14:
              if ( ObjectProperty == -1073741772 )
              {
                ObjectProperty = 0;
                ExFreePoolWithTag(v7, 0);
                v7 = 0LL;
              }
              if ( ObjectProperty < 0 )
                goto LABEL_24;
              ObjectProperty = CmGetDeviceInterfacePathFormat(v16, v14, (char *)v27 + 1);
              if ( ObjectProperty < 0 )
                goto LABEL_24;
              v29 = 512;
              v18 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x400uLL, 0x20207050u);
              if ( v18 )
              {
                v19 = HIBYTE(v27[0]);
                LOBYTE(SessionId) = HIBYTE(v27[0]);
                ObjectProperty = CmGetDeviceInterfaceName(v17, v35, v6, v7, SessionId, v18, 512, &v29);
                if ( ObjectProperty != -1073741789 )
                {
LABEL_20:
                  if ( ObjectProperty >= 0 )
                  {
                    ObjectProperty = RtlInitUnicodeStringEx(AliasSymbolicLinkName, v18);
                    if ( ObjectProperty >= 0 )
                    {
                      ObjectProperty = CmOpenDeviceInterfaceRegKey(
                                         *(__int64 *)&PiPnpRtlCtx,
                                         (__int64)v18,
                                         0x30u,
                                         v20,
                                         131097,
                                         0,
                                         (__int64)&Handle,
                                         0LL);
                      if ( ObjectProperty < 0 )
                        RtlFreeAnsiString(AliasSymbolicLinkName);
                      else
                        ZwClose(Handle);
                    }
                  }
                  goto LABEL_24;
                }
                ExFreePoolWithTag(v18, 0);
                v23 = v29;
                v18 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 2LL * v29, 0x20207050u);
                if ( v18 )
                {
                  LOBYTE(SessionIda) = v19;
                  ObjectProperty = CmGetDeviceInterfaceName(v24, v35, v6, v7, SessionIda, v18, v23, &v29);
                  goto LABEL_20;
                }
              }
            }
          }
        }
        ObjectProperty = -1073741670;
        goto LABEL_24;
      }
    }
  }
LABEL_29:
  PnpUnicodeStringToWstrFree(v8, (__int64)SymbolicLinkName);
  return ObjectProperty;
}
