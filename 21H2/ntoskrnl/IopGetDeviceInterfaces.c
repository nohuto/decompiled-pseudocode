/*
 * XREFs of IopGetDeviceInterfaces @ 0x14062F318
 * Callers:
 *     PiCMGetDeviceInterfaceList @ 0x14060B478 (PiCMGetDeviceInterfaceList.c)
 *     IoRegisterPlugPlayNotification @ 0x140673180 (IoRegisterPlugPlayNotification.c)
 *     IoGetDeviceInterfaces @ 0x1406754B0 (IoGetDeviceInterfaces.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140676358 (PfSnOpenVolumesForPrefetch.c)
 *     IopOpenSystemVariableDevice @ 0x14089ABCC (IopOpenSystemVariableDevice.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x140253448 (RtlStringCchCopyExW.c)
 *     RtlInitUnicodeStringEx @ 0x140253A90 (RtlInitUnicodeStringEx.c)
 *     KeLeaveCriticalRegionThread @ 0x1402AB8C0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x140356140 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1403568F0 (ExAcquireResourceExclusiveLite.c)
 *     __security_check_cookie @ 0x1403D05D0 (__security_check_cookie.c)
 *     ZwClose @ 0x1403FA760 (ZwClose.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x140610B90 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     PnpUnicodeStringToWstrFree @ 0x14062A5A4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x14062C36C (PnpUnicodeStringToWstr.c)
 *     PnpGetObjectProperty @ 0x14062C84C (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x14062C98C (_PnpGetObjectProperty.c)
 *     _PnpStringFromGuid @ 0x14062D230 (_PnpStringFromGuid.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x14062F75C (_CmSetDeviceInterfacePathFormat.c)
 *     _CmOpenInterfaceClassRegKey @ 0x14062F7A4 (_CmOpenInterfaceClassRegKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140632654 (_CmOpenDeviceInterfaceRegKey.c)
 *     SeCaptureSubjectContext @ 0x14064A950 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x14064B710 (SeReleaseSubjectContext.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14068FB00 (PiPnpRtlApplyMandatoryFilters.c)
 *     RtlEqualUnicodeString @ 0x1406F0B70 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall IopGetDeviceInterfaces(int *a1, const UNICODE_STRING *a2, int a3, char a4, _QWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // r15
  PCUNICODE_STRING v7; // r13
  PVOID v8; // r14
  char v9; // si
  WCHAR *v10; // r12
  _WORD *v11; // rdi
  int MatchingFilteredDeviceInterfaceList; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  int ObjectProperty; // eax
  int v18; // r9d
  PVOID v19; // r15
  PACCESS_TOKEN ClientToken; // rax
  unsigned int v21; // eax
  unsigned int v22; // r12d
  wchar_t *v23; // rax
  unsigned int v24; // r14d
  size_t v25; // rcx
  wchar_t *v26; // r14
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  _WORD *i; // rsi
  __int64 v34; // rax
  _WORD *PoolWithTag; // rax
  WCHAR *v36; // rax
  int v37; // ebx
  unsigned int v38; // r14d
  unsigned int cchDest; // [rsp+60h] [rbp-A0h] BYREF
  char cchDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  char cchDest_5; // [rsp+65h] [rbp-9Bh] BYREF
  char cchDest_6; // [rsp+66h] [rbp-9Ah]
  PCUNICODE_STRING String1; // [rsp+68h] [rbp-98h]
  __int64 v44; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v45; // [rsp+78h] [rbp-88h]
  __int64 v46; // [rsp+80h] [rbp-80h]
  __int64 v47; // [rsp+88h] [rbp-78h] BYREF
  WCHAR *v48; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  int v50; // [rsp+A0h] [rbp-60h]
  HANDLE v51; // [rsp+A8h] [rbp-58h] BYREF
  size_t pcchRemaining; // [rsp+B0h] [rbp-50h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-40h] BYREF
  __int16 *v55; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD *v56; // [rsp+D0h] [rbp-30h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v58; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v60; // [rsp+110h] [rbp+10h] BYREF
  wchar_t v61[40]; // [rsp+130h] [rbp+30h] BYREF

  v6 = a6;
  v7 = a2;
  String1 = a2;
  v50 = a3;
  v58 = 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  cchDest_6 = a4;
  v9 = 0;
  v56 = a5;
  v10 = 0LL;
  v46 = (__int64)a6;
  v11 = 0LL;
  P = 0LL;
  LODWORD(v47) = 0;
  v55 = 0LL;
  cchDest_4 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  Handle = 0LL;
  v51 = 0LL;
  v48 = 0LL;
  cchDest = 0;
  v44 = 0LL;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v45 = 0;
  DestinationString = 0LL;
  MatchingFilteredDeviceInterfaceList = PnpStringFromGuid(a1, v61);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_87;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v16 = CmOpenInterfaceClassRegKey(PiPnpRtlCtx, (unsigned int)v61, v14, v15, 983103, 0, (__int64)&Handle, 0LL);
  MatchingFilteredDeviceInterfaceList = v16;
  if ( v16 == -1073741772 || v16 == -1073741766 )
  {
    cchDest = 1;
    PoolWithTag = ExAllocatePoolWithTag(PagedPool, 2uLL, 0x20207050u);
    v11 = PoolWithTag;
    if ( PoolWithTag )
    {
      *PoolWithTag = 0;
      MatchingFilteredDeviceInterfaceList = 0;
    }
    else
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
    }
    goto LABEL_28;
  }
  if ( v16 < 0 )
    goto LABEL_28;
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     0x400uLL,
                     (int)v61,
                     4,
                     (__int64)Handle,
                     0LL,
                     (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
                     (__int64)&v44,
                     &P,
                     &v47,
                     0);
  MatchingFilteredDeviceInterfaceList = ObjectProperty;
  if ( ObjectProperty < 0 || (_DWORD)v44 != 18 )
  {
    if ( ObjectProperty != -1073741275 && ObjectProperty != -1073741772 && ObjectProperty != -1073741766 )
    {
      if ( ObjectProperty >= 0 )
        MatchingFilteredDeviceInterfaceList = -1073741823;
      goto LABEL_27;
    }
    v19 = P;
    goto LABEL_8;
  }
  v19 = P;
  if ( (int)CmOpenDeviceInterfaceRegKey(PiPnpRtlCtx, (_DWORD)P, 48, v18, 131097, 0, (__int64)&v51, 0LL) >= 0 )
  {
    if ( !String1 )
      goto LABEL_91;
    HIDWORD(v44) = 400;
    v36 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
    v48 = v36;
    v10 = v36;
    if ( !v36 )
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
      goto LABEL_26;
    }
    if ( (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v19,
                3LL,
                (__int64)v51,
                0LL,
                (__int64)&DEVPKEY_Device_InstanceId,
                (__int64)&v44,
                (__int64)v36,
                SHIDWORD(v44),
                (__int64)&v44 + 4,
                0) >= 0
      && (_DWORD)v44 == 18
      && RtlInitUnicodeStringEx(&DestinationString, v10) >= 0
      && RtlEqualUnicodeString(String1, &DestinationString, 1u) )
    {
LABEL_91:
      if ( (v50 & 1) != 0
        || (HIDWORD(v44) = 1,
            (int)PnpGetObjectProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   (__int64)v19,
                   3LL,
                   (__int64)v51,
                   0LL,
                   (__int64)&DEVPKEY_DeviceInterface_Enabled,
                   (__int64)&v44,
                   (__int64)&cchDest_4,
                   1,
                   (__int64)&v44 + 4,
                   0) >= 0)
        && v44 == 0x100000011LL
        && cchDest_4 == -1 )
      {
        cchDest_5 = 0;
        memset(&v60, 0, sizeof(v60));
        SeCaptureSubjectContext(&v60);
        v37 = PiPnpRtlApplyMandatoryFilters(PiPnpRtlCtx, (int)v19, 3, (int)v51, (ULONG)&v60, (__int64)&cchDest_5);
        SeReleaseSubjectContext(&v60);
        if ( v37 < 0 || (v9 = 1, !cchDest_5) )
          v9 = 0;
      }
    }
    ZwClose(v51);
    if ( v9 )
    {
LABEL_8:
      LODWORD(v8) = v47;
      goto LABEL_9;
    }
  }
  ExFreePoolWithTag(v19, 0);
  v19 = 0LL;
  P = 0LL;
LABEL_9:
  if ( String1 )
  {
    MatchingFilteredDeviceInterfaceList = PnpUnicodeStringToWstr(&v55, 0LL, &String1->Length);
    if ( MatchingFilteredDeviceInterfaceList < 0 )
      goto LABEL_26;
  }
  ClientToken = SubjectContext.ClientToken;
  if ( v9 )
    ClientToken = v19;
  SubjectContext.ClientToken = ClientToken;
  SeCaptureSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
  v21 = 4096;
  cchDest = 4096;
  if ( v9 )
  {
    v38 = (unsigned int)v8 >> 1;
    if ( v38 >= 0x1000 )
    {
      v21 = v38 + 1;
      cchDest = v38 + 1;
    }
  }
  MatchingFilteredDeviceInterfaceList = -1073741789;
  v22 = 0;
  while ( 1 )
  {
    if ( v22 >= 5 )
      goto LABEL_21;
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      v21 = cchDest;
    }
    v23 = (wchar_t *)ExAllocatePoolWithTag(PagedPool, 2LL * v21, 0x20207050u);
    v11 = v23;
    if ( !v23 )
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
LABEL_21:
      v24 = v45;
      goto LABEL_22;
    }
    v24 = cchDest;
    v45 = cchDest;
    v25 = cchDest;
    if ( v9 )
      break;
    v26 = v23;
LABEL_20:
    pcchRemaining = v25;
    ppszDestEnd = v26;
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            *(__int64 *)&PiPnpRtlCtx,
                                            (__int64)v61,
                                            (__int64)v55,
                                            (v50 & 1) == 0,
                                            (__int64)IopDeviceInterfaceFilterCallback,
                                            (__int64)&SubjectContext,
                                            (__int64)v26,
                                            v25,
                                            (__int64)&cchDest,
                                            0);
    ++v22;
    v21 = v26 - v11 + cchDest;
    cchDest = v21;
    if ( MatchingFilteredDeviceInterfaceList != -1073741789 )
      goto LABEL_21;
  }
  MatchingFilteredDeviceInterfaceList = RtlStringCchCopyExW(
                                          v23,
                                          cchDest,
                                          (NTSTRSAFE_PCWSTR)v19,
                                          &ppszDestEnd,
                                          &pcchRemaining,
                                          0x800u);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_22;
  if ( pcchRemaining )
  {
    v25 = pcchRemaining - 1;
    v26 = ppszDestEnd + 1;
    goto LABEL_20;
  }
  MatchingFilteredDeviceInterfaceList = -1073741823;
LABEL_22:
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
  {
    v10 = v48;
  }
  else
  {
    if ( cchDest )
      goto LABEL_24;
    cchDest = 1;
    if ( v24 || (ExFreePoolWithTag(v11, 0), (v11 = ExAllocatePoolWithTag(PagedPool, 2LL * cchDest, 0x20207050u)) != 0LL) )
    {
      *v11 = 0;
LABEL_24:
      if ( !cchDest_6 )
      {
        for ( i = v11; *i; i += v34 + 1 )
        {
          LOBYTE(v28) = 1;
          MatchingFilteredDeviceInterfaceList = CmSetDeviceInterfacePathFormat(v27, i, v28);
          if ( MatchingFilteredDeviceInterfaceList < 0 )
            break;
          v34 = -1LL;
          do
            ++v34;
          while ( i[v34] );
        }
      }
    }
    else
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
    }
    v10 = v48;
  }
LABEL_26:
  v6 = (_DWORD *)v46;
LABEL_27:
  v7 = String1;
LABEL_28:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread(), v29, v30, v31);
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    *v56 = v11;
    if ( v6 )
      *v6 = 2 * cchDest;
    v11 = 0LL;
    v8 = P;
    goto LABEL_32;
  }
  v8 = P;
LABEL_87:
  *v56 = 0LL;
  if ( v6 )
    *v6 = 0;
LABEL_32:
  if ( Handle )
    ZwClose(Handle);
  PnpUnicodeStringToWstrFree(v55, (__int64)v7);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
