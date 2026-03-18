/*
 * XREFs of IoGetDeviceInterfaceAlias @ 0x1406DB590
 * Callers:
 *     PiCMGetDeviceInterfaceAlias @ 0x1406DB388 (PiCMGetDeviceInterfaceAlias.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     _CmGetDeviceInterfacePathFormat @ 0x1406DBA7C (_CmGetDeviceInterfacePathFormat.c)
 *     _CmGetDeviceInterfaceReferenceString @ 0x1406DBB10 (_CmGetDeviceInterfaceReferenceString.c)
 *     RtlFreeUnicodeString @ 0x1407023F0 (RtlFreeUnicodeString.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     _PnpStringFromGuid @ 0x140773030 (_PnpStringFromGuid.c)
 *     PnpUnicodeStringToWstr @ 0x140779CA0 (PnpUnicodeStringToWstr.c)
 *     PnpUnicodeStringToWstrFree @ 0x14077BAB8 (PnpUnicodeStringToWstrFree.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14077D454 (PiPnpRtlApplyMandatoryFilters.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _CmValidateDeviceInterfaceName @ 0x14077F150 (_CmValidateDeviceInterfaceName.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140784B14 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetDeviceInterfaceName @ 0x140789718 (_CmGetDeviceInterfaceName.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

NTSTATUS __stdcall IoGetDeviceInterfaceAlias(
        PUNICODE_STRING SymbolicLinkName,
        const GUID *AliasInterfaceClassGuid,
        PUNICODE_STRING AliasSymbolicLinkName)
{
  void *v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rcx
  int ObjectProperty; // ebx
  struct _KTHREAD *CurrentThread; // rax
  __int64 Pool2; // rax
  void *v12; // r14
  __int64 v13; // rdi
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  WCHAR *v17; // rdi
  char v18; // r12
  int v19; // r9d
  __int64 v21; // rcx
  unsigned int v22; // ebx
  __int64 v23; // rcx
  int SessionId; // [rsp+20h] [rbp-E0h]
  int SessionIda; // [rsp+20h] [rbp-E0h]
  _WORD v26[2]; // [rsp+60h] [rbp-A0h] BYREF
  unsigned int v27; // [rsp+64h] [rbp-9Ch] BYREF
  int v28; // [rsp+68h] [rbp-98h] BYREF
  int v29[2]; // [rsp+70h] [rbp-90h] BYREF
  int v30; // [rsp+78h] [rbp-88h] BYREF
  HANDLE Handle; // [rsp+80h] [rbp-80h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v33[80]; // [rsp+B0h] [rbp-50h] BYREF

  v26[0] = 0;
  Handle = 0LL;
  v28 = 0;
  v6 = 0LL;
  v30 = 0;
  v7 = 0LL;
  *(_QWORD *)v29 = 0LL;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  if ( !SymbolicLinkName || !SymbolicLinkName->Buffer || !SymbolicLinkName->Length )
    goto LABEL_29;
  ObjectProperty = PnpUnicodeStringToWstr(v29, 0LL, SymbolicLinkName);
  if ( ObjectProperty < 0 )
  {
LABEL_27:
    v7 = *(_QWORD *)v29;
    goto LABEL_28;
  }
  v7 = *(_QWORD *)v29;
  if ( (int)CmValidateDeviceInterfaceName(v8, *(_QWORD *)v29) < 0 )
  {
LABEL_29:
    ObjectProperty = -1073741811;
    goto LABEL_28;
  }
  SeCaptureSubjectContext(&SubjectContext);
  ObjectProperty = PiPnpRtlApplyMandatoryFilters(PiPnpRtlCtx, v7, 3, 0, (ULONG)&SubjectContext, (__int64)v26);
  SeReleaseSubjectContext(&SubjectContext);
  if ( ObjectProperty >= 0 )
  {
    if ( !LOBYTE(v26[0]) )
    {
      ObjectProperty = -1073741790;
      goto LABEL_28;
    }
    ObjectProperty = PnpStringFromGuid(AliasInterfaceClassGuid, v33);
    if ( ObjectProperty >= 0 )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
      Pool2 = ExAllocatePool2(256LL, 400LL, 538996816LL);
      v12 = (void *)Pool2;
      if ( Pool2 )
      {
        v13 = *(_QWORD *)v29;
        ObjectProperty = PnpGetObjectProperty(
                           PiPnpRtlCtx,
                           v29[0],
                           3,
                           0,
                           0LL,
                           (__int64)&DEVPKEY_Device_InstanceId,
                           (__int64)&v28,
                           Pool2,
                           400,
                           (__int64)&v30,
                           0);
        if ( ObjectProperty < 0 )
          goto LABEL_23;
        if ( v28 != 18 )
        {
          ObjectProperty = -1073741585;
          goto LABEL_23;
        }
        v27 = 128;
        v6 = (void *)ExAllocatePool2(256LL, 256LL, 538996816LL);
        if ( !v6 )
          goto LABEL_32;
        ObjectProperty = CmGetDeviceInterfaceReferenceString(v14, v13, v6, 128LL, &v27);
        if ( ObjectProperty != -1073741789 )
        {
LABEL_14:
          if ( ObjectProperty == -1073741772 )
          {
            ExFreePoolWithTag(v6, 0);
            v6 = 0LL;
          }
          else if ( ObjectProperty < 0 )
          {
            goto LABEL_23;
          }
          ObjectProperty = CmGetDeviceInterfacePathFormat(v15, v13, (char *)v26 + 1);
          if ( ObjectProperty >= 0 )
          {
            v27 = 512;
            v17 = (WCHAR *)ExAllocatePool2(256LL, 1024LL, 538996816LL);
            if ( v17 )
            {
              v18 = HIBYTE(v26[0]);
              LOBYTE(SessionId) = HIBYTE(v26[0]);
              ObjectProperty = CmGetDeviceInterfaceName(v16, v33, v12, v6, SessionId, v17, 512, &v27);
              if ( ObjectProperty != -1073741789 )
              {
LABEL_19:
                if ( ObjectProperty >= 0 )
                {
                  ObjectProperty = RtlInitUnicodeStringEx(AliasSymbolicLinkName, v17);
                  if ( ObjectProperty >= 0 )
                  {
                    ObjectProperty = CmOpenDeviceInterfaceRegKey(
                                       PiPnpRtlCtx,
                                       (_DWORD)v17,
                                       48,
                                       v19,
                                       131097,
                                       0,
                                       (__int64)&Handle,
                                       0LL);
                    if ( ObjectProperty < 0 )
                      RtlFreeUnicodeString(AliasSymbolicLinkName);
                    else
                      ZwClose(Handle);
                  }
                }
                goto LABEL_23;
              }
              ExFreePoolWithTag(v17, 0);
              v22 = v27;
              v17 = (WCHAR *)ExAllocatePool2(256LL, 2LL * v27, 538996816LL);
              if ( v17 )
              {
                LOBYTE(SessionIda) = v18;
                ObjectProperty = CmGetDeviceInterfaceName(v23, v33, v12, v6, SessionIda, v17, v22, &v27);
                goto LABEL_19;
              }
            }
            goto LABEL_32;
          }
LABEL_23:
          ExReleaseResourceLite(&PnpRegistryDeviceResource);
          KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
          if ( v6 )
            ExFreePoolWithTag(v6, 0);
          if ( v12 )
            ExFreePoolWithTag(v12, 0);
          goto LABEL_27;
        }
        ExFreePoolWithTag(v6, 0);
        v6 = (void *)ExAllocatePool2(256LL, 2LL * v27, 538996816LL);
        if ( v6 )
        {
          ObjectProperty = CmGetDeviceInterfaceReferenceString(v21, v13, v6, v27, &v27);
          goto LABEL_14;
        }
      }
LABEL_32:
      ObjectProperty = -1073741670;
      goto LABEL_23;
    }
  }
LABEL_28:
  PnpUnicodeStringToWstrFree(v7, SymbolicLinkName);
  return ObjectProperty;
}
