/*
 * XREFs of IopGetDeviceInterfaces @ 0x1407879A8
 * Callers:
 *     IoRegisterPlugPlayNotification @ 0x140768390 (IoRegisterPlugPlayNotification.c)
 *     PiCMGetDeviceInterfaceList @ 0x140788300 (PiCMGetDeviceInterfaceList.c)
 *     IoGetDeviceInterfaces @ 0x1407896A0 (IoGetDeviceInterfaces.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1407DDABC (PfSnOpenVolumesForPrefetch.c)
 *     IopOpenSystemVariableDevice @ 0x14093F56C (IopOpenSystemVariableDevice.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1402AE340 (ExAcquireResourceExclusiveLite.c)
 *     ExReleaseResourceLite @ 0x1402B0E80 (ExReleaseResourceLite.c)
 *     RtlInitUnicodeStringEx @ 0x1402DFB70 (RtlInitUnicodeStringEx.c)
 *     RtlStringCchCopyExW @ 0x1402E0340 (RtlStringCchCopyExW.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ZwClose @ 0x14041B940 (ZwClose.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     _PnpStringFromGuid @ 0x140773030 (_PnpStringFromGuid.c)
 *     PnpUnicodeStringToWstr @ 0x140779CA0 (PnpUnicodeStringToWstr.c)
 *     PnpUnicodeStringToWstrFree @ 0x14077BAB8 (PnpUnicodeStringToWstrFree.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x14077D454 (PiPnpRtlApplyMandatoryFilters.c)
 *     PnpGetObjectProperty @ 0x14077D91C (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x14077DA5C (_PnpGetObjectProperty.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x140784B14 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmOpenInterfaceClassRegKey @ 0x140787DE8 (_CmOpenInterfaceClassRegKey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x140787F7C (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x140788E8C (_CmSetDeviceInterfacePathFormat.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     RtlEqualUnicodeString @ 0x1407CD6A0 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePool2 @ 0x140A6E430 (ExAllocatePool2.c)
 */

__int64 __fastcall IopGetDeviceInterfaces(int *a1, const UNICODE_STRING *a2, int a3, char a4, _QWORD *a5, _DWORD *a6)
{
  _DWORD *v6; // r12
  PCUNICODE_STRING v7; // r13
  PVOID v8; // r14
  bool v9; // si
  WCHAR *v10; // r15
  _WORD *v11; // rdi
  int MatchingFilteredDeviceInterfaceList; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v14; // r8d
  int v15; // r9d
  int v16; // eax
  int ObjectProperty; // eax
  __int64 v18; // r9
  wchar_t *v19; // r14
  PACCESS_TOKEN ClientToken; // rax
  unsigned int v21; // eax
  unsigned int v22; // r12d
  wchar_t *v23; // rax
  unsigned int v24; // r15d
  size_t v25; // rcx
  wchar_t *v26; // r15
  __int64 v27; // rcx
  __int64 v28; // r8
  _WORD *i; // rsi
  __int64 v31; // rax
  _WORD *Pool2; // rax
  __int64 v33; // rax
  int v34; // ebx
  unsigned int v35; // ecx
  unsigned int cchDest; // [rsp+60h] [rbp-A0h] BYREF
  char cchDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  char cchDest_5; // [rsp+65h] [rbp-9Bh] BYREF
  char cchDest_6; // [rsp+66h] [rbp-9Ah]
  PCUNICODE_STRING String1; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v42; // [rsp+78h] [rbp-88h]
  unsigned int v43[3]; // [rsp+7Ch] [rbp-84h] BYREF
  PVOID P; // [rsp+88h] [rbp-78h] BYREF
  __int64 v45; // [rsp+90h] [rbp-70h]
  int v46; // [rsp+98h] [rbp-68h]
  HANDLE v47; // [rsp+A0h] [rbp-60h] BYREF
  size_t pcchRemaining; // [rsp+A8h] [rbp-58h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B0h] [rbp-50h] BYREF
  HANDLE Handle; // [rsp+B8h] [rbp-48h] BYREF
  __int16 *v51; // [rsp+C0h] [rbp-40h] BYREF
  _QWORD *v52; // [rsp+C8h] [rbp-38h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v54; // [rsp+F0h] [rbp-10h]
  UNICODE_STRING DestinationString; // [rsp+F8h] [rbp-8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v56; // [rsp+108h] [rbp+8h] BYREF
  wchar_t v57[40]; // [rsp+130h] [rbp+30h] BYREF

  v6 = a6;
  v7 = a2;
  String1 = a2;
  v46 = a3;
  v54 = 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  cchDest_6 = a4;
  v9 = 0;
  v52 = a5;
  v10 = 0LL;
  v45 = (__int64)a6;
  v11 = 0LL;
  P = 0LL;
  memset(v43, 0, sizeof(v43));
  v51 = 0LL;
  cchDest_4 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  Handle = 0LL;
  v47 = 0LL;
  cchDest = 0;
  v41 = 0LL;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v42 = 0;
  DestinationString = 0LL;
  MatchingFilteredDeviceInterfaceList = PnpStringFromGuid(a1, v57);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_85;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v16 = CmOpenInterfaceClassRegKey(PiPnpRtlCtx, (unsigned int)v57, v14, v15, 983103, 0, (__int64)&Handle, 0LL);
  MatchingFilteredDeviceInterfaceList = v16;
  if ( v16 == -1073741772 || v16 == -1073741766 )
  {
    cchDest = 1;
    Pool2 = (_WORD *)ExAllocatePool2(256LL, 2LL, 538996816LL);
    v11 = Pool2;
    if ( Pool2 )
    {
      *Pool2 = 0;
      MatchingFilteredDeviceInterfaceList = 0;
    }
    else
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
    }
    goto LABEL_26;
  }
  if ( v16 < 0 )
    goto LABEL_26;
  ObjectProperty = PnpGetObjectProperty(
                     0x47706E50u,
                     0x400u,
                     (int)v57,
                     4,
                     (__int64)Handle,
                     0LL,
                     (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
                     (__int64)&v41,
                     &P,
                     v43,
                     0);
  MatchingFilteredDeviceInterfaceList = ObjectProperty;
  if ( ObjectProperty < 0 )
  {
    if ( ObjectProperty != -1073741275 && ObjectProperty != -1073741772 && ObjectProperty != -1073741766 )
      goto LABEL_45;
    v19 = (wchar_t *)P;
    goto LABEL_8;
  }
  v9 = 0;
  if ( (_DWORD)v41 != 18 )
  {
    MatchingFilteredDeviceInterfaceList = -1073741823;
    goto LABEL_25;
  }
  v19 = (wchar_t *)P;
  if ( (int)CmOpenDeviceInterfaceRegKey(
              *(__int64 *)&PiPnpRtlCtx,
              (const wchar_t *)P,
              0x30u,
              v18,
              131097,
              0,
              (__int64)&v47,
              0LL) < 0 )
    goto LABEL_69;
  if ( !String1 )
    goto LABEL_89;
  HIDWORD(v41) = 400;
  v33 = ExAllocatePool2(256LL, 400LL, 538996816LL);
  *(_QWORD *)&v43[1] = v33;
  v10 = (WCHAR *)v33;
  if ( !v33 )
  {
    MatchingFilteredDeviceInterfaceList = -1073741670;
LABEL_25:
    v7 = String1;
    goto LABEL_26;
  }
  if ( (int)PnpGetObjectProperty(
              *(__int64 *)&PiPnpRtlCtx,
              (__int64)v19,
              3LL,
              (__int64)v47,
              0LL,
              (__int64)&DEVPKEY_Device_InstanceId,
              (__int64)&v41,
              v33,
              SHIDWORD(v41),
              (__int64)&v41 + 4,
              0) >= 0
    && (_DWORD)v41 == 18
    && RtlInitUnicodeStringEx(&DestinationString, v10) >= 0
    && RtlEqualUnicodeString(String1, &DestinationString, 1u) )
  {
LABEL_89:
    if ( (v46 & 1) != 0
      || (HIDWORD(v41) = 1,
          (int)PnpGetObjectProperty(
                 *(__int64 *)&PiPnpRtlCtx,
                 (__int64)v19,
                 3LL,
                 (__int64)v47,
                 0LL,
                 (__int64)&DEVPKEY_DeviceInterface_Enabled,
                 (__int64)&v41,
                 (__int64)&cchDest_4,
                 1,
                 (__int64)&v41 + 4,
                 0) >= 0)
      && v41 == 0x100000011LL
      && cchDest_4 == -1 )
    {
      cchDest_5 = 0;
      memset(&v56, 0, sizeof(v56));
      SeCaptureSubjectContext(&v56);
      v34 = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, v19, 3, (__int64)v47, &v56, &cchDest_5);
      SeReleaseSubjectContext(&v56);
      if ( v34 >= 0 )
        v9 = cchDest_5 != 0;
    }
  }
  ZwClose(v47);
  if ( !v9 )
  {
LABEL_69:
    ExFreePoolWithTag(v19, 0);
    v19 = 0LL;
    v43[0] = 0;
    P = 0LL;
  }
LABEL_8:
  if ( String1 )
  {
    MatchingFilteredDeviceInterfaceList = PnpUnicodeStringToWstr(&v51, 0LL, &String1->Length);
    if ( MatchingFilteredDeviceInterfaceList < 0 )
      goto LABEL_45;
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
    v35 = v43[0] >> 1;
    if ( v43[0] >> 1 >= 0x1000 )
    {
      v21 = v35 + 1;
      cchDest = v35 + 1;
    }
  }
  MatchingFilteredDeviceInterfaceList = -1073741789;
  v22 = 0;
  while ( 1 )
  {
    if ( v22 >= 5 )
      goto LABEL_20;
    if ( v11 )
    {
      ExFreePoolWithTag(v11, 0);
      v21 = cchDest;
    }
    v23 = (wchar_t *)ExAllocatePool2(256LL, 2LL * v21, 538996816LL);
    v11 = v23;
    if ( !v23 )
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
LABEL_20:
      v24 = v42;
      goto LABEL_21;
    }
    v24 = cchDest;
    v42 = cchDest;
    v25 = cchDest;
    if ( v9 )
      break;
    v26 = v23;
LABEL_19:
    pcchRemaining = v25;
    ppszDestEnd = v26;
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            PiPnpRtlCtx,
                                            (unsigned int)v57,
                                            (_DWORD)v51,
                                            (v46 & 1) == 0,
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
      goto LABEL_20;
  }
  MatchingFilteredDeviceInterfaceList = RtlStringCchCopyExW(v23, cchDest, v19, &ppszDestEnd, &pcchRemaining, 0x800u);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_21;
  if ( pcchRemaining )
  {
    v25 = pcchRemaining - 1;
    v26 = ppszDestEnd + 1;
    goto LABEL_19;
  }
  MatchingFilteredDeviceInterfaceList = -1073741823;
LABEL_21:
  SeReleaseSubjectContext((PSECURITY_SUBJECT_CONTEXT)&SubjectContext.ImpersonationLevel);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_24;
  if ( cchDest )
    goto LABEL_23;
  cchDest = 1;
  if ( !v24 )
  {
    ExFreePoolWithTag(v11, 0);
    v11 = (_WORD *)ExAllocatePool2(256LL, 2LL * cchDest, 538996816LL);
    if ( !v11 )
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
      goto LABEL_24;
    }
  }
  *v11 = 0;
LABEL_23:
  if ( cchDest_6 )
  {
LABEL_24:
    v10 = *(WCHAR **)&v43[1];
    v6 = (_DWORD *)v45;
    goto LABEL_25;
  }
  for ( i = v11; *i; i += v31 + 1 )
  {
    LOBYTE(v28) = 1;
    MatchingFilteredDeviceInterfaceList = CmSetDeviceInterfacePathFormat(v27, i, v28);
    if ( MatchingFilteredDeviceInterfaceList < 0 )
      break;
    v31 = -1LL;
    do
      ++v31;
    while ( i[v31] );
  }
  v10 = *(WCHAR **)&v43[1];
  v6 = (_DWORD *)v45;
LABEL_45:
  v7 = String1;
LABEL_26:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    *v52 = v11;
    if ( v6 )
      *v6 = 2 * cchDest;
    v8 = P;
    v11 = 0LL;
    goto LABEL_30;
  }
  v8 = P;
LABEL_85:
  *v52 = 0LL;
  if ( v6 )
    *v6 = 0;
LABEL_30:
  if ( Handle )
    ZwClose(Handle);
  PnpUnicodeStringToWstrFree(v51, (__int64)v7);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
