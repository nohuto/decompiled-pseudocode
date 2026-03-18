/*
 * XREFs of IopGetDeviceInterfaces @ 0x1406BE69C
 * Callers:
 *     PfSnOpenVolumesForPrefetch @ 0x1406BD56C (PfSnOpenVolumesForPrefetch.c)
 *     IoGetDeviceInterfaces @ 0x1406BDF50 (IoGetDeviceInterfaces.c)
 *     PiCMGetDeviceInterfaceList @ 0x1406BDFC8 (PiCMGetDeviceInterfaceList.c)
 *     IoRegisterPlugPlayNotification @ 0x1406C5580 (IoRegisterPlugPlayNotification.c)
 *     IopOpenSystemVariableDevice @ 0x1408977EC (IopOpenSystemVariableDevice.c)
 * Callees:
 *     RtlInitUnicodeStringEx @ 0x140202C20 (RtlInitUnicodeStringEx.c)
 *     ExReleaseResourceLite @ 0x140208540 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x140208CF0 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14020B010 (KeLeaveCriticalRegionThread.c)
 *     RtlStringCchCopyExW @ 0x1402FF324 (RtlStringCchCopyExW.c)
 *     __security_check_cookie @ 0x1403CCE60 (__security_check_cookie.c)
 *     ZwClose @ 0x1403F37A0 (ZwClose.c)
 *     _PnpStringFromGuid @ 0x1405D750C (_PnpStringFromGuid.c)
 *     PiPnpRtlApplyMandatoryFilters @ 0x1405D7C84 (PiPnpRtlApplyMandatoryFilters.c)
 *     PnpUnicodeStringToWstrFree @ 0x1405D90E4 (PnpUnicodeStringToWstrFree.c)
 *     PnpUnicodeStringToWstr @ 0x1405DAEAC (PnpUnicodeStringToWstr.c)
 *     PnpGetObjectProperty @ 0x1405DB38C (PnpGetObjectProperty.c)
 *     _PnpGetObjectProperty @ 0x1405DB4CC (_PnpGetObjectProperty.c)
 *     RtlEqualUnicodeString @ 0x140681E80 (RtlEqualUnicodeString.c)
 *     SeCaptureSubjectContext @ 0x1406944B0 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x140695270 (SeReleaseSubjectContext.c)
 *     _CmSetDeviceInterfacePathFormat @ 0x1406BEAE0 (_CmSetDeviceInterfacePathFormat.c)
 *     _CmOpenInterfaceClassRegKey @ 0x1406BEB28 (_CmOpenInterfaceClassRegKey.c)
 *     _CmOpenDeviceInterfaceRegKey @ 0x1406C0244 (_CmOpenDeviceInterfaceRegKey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceList @ 0x1406C17B8 (_CmGetMatchingFilteredDeviceInterfaceList.c)
 *     ExFreePoolWithTag @ 0x1409B1140 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1160 (ExAllocatePoolWithTag.c)
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
  _WORD *i; // rsi
  __int64 v31; // rax
  _WORD *PoolWithTag; // rax
  WCHAR *v33; // rax
  int v34; // ebx
  unsigned int v35; // r14d
  unsigned int cchDest; // [rsp+60h] [rbp-A0h] BYREF
  char cchDest_4; // [rsp+64h] [rbp-9Ch] BYREF
  char cchDest_5; // [rsp+65h] [rbp-9Bh] BYREF
  char cchDest_6; // [rsp+66h] [rbp-9Ah]
  PCUNICODE_STRING String1; // [rsp+68h] [rbp-98h]
  __int64 v41; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v42; // [rsp+78h] [rbp-88h]
  __int64 v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h] BYREF
  WCHAR *v45; // [rsp+90h] [rbp-70h]
  PVOID P; // [rsp+98h] [rbp-68h] BYREF
  int v47; // [rsp+A0h] [rbp-60h]
  HANDLE v48; // [rsp+A8h] [rbp-58h] BYREF
  size_t pcchRemaining; // [rsp+B0h] [rbp-50h] BYREF
  NTSTRSAFE_PWSTR ppszDestEnd; // [rsp+B8h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+C0h] [rbp-40h] BYREF
  __int16 *v52; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD *v53; // [rsp+D0h] [rbp-30h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v55; // [rsp+F8h] [rbp-8h]
  UNICODE_STRING DestinationString; // [rsp+100h] [rbp+0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT v57; // [rsp+110h] [rbp+10h] BYREF
  wchar_t v58[40]; // [rsp+130h] [rbp+30h] BYREF

  v6 = a6;
  v7 = a2;
  String1 = a2;
  v47 = a3;
  v55 = 0LL;
  v8 = 0LL;
  *a5 = 0LL;
  cchDest_6 = a4;
  v9 = 0;
  v53 = a5;
  v10 = 0LL;
  v43 = (__int64)a6;
  v11 = 0LL;
  P = 0LL;
  LODWORD(v44) = 0;
  v52 = 0LL;
  cchDest_4 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  Handle = 0LL;
  v48 = 0LL;
  v45 = 0LL;
  cchDest = 0;
  v41 = 0LL;
  ppszDestEnd = 0LL;
  pcchRemaining = 0LL;
  v42 = 0;
  DestinationString = 0LL;
  MatchingFilteredDeviceInterfaceList = PnpStringFromGuid(a1, v58);
  if ( MatchingFilteredDeviceInterfaceList < 0 )
    goto LABEL_87;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(&PnpRegistryDeviceResource, 1u);
  v16 = CmOpenInterfaceClassRegKey(PiPnpRtlCtx, (unsigned int)v58, v14, v15, 983103, 0, (__int64)&Handle, 0LL);
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
                     (int)v58,
                     4,
                     (__int64)Handle,
                     0LL,
                     (__int64)&DEVPKEY_DeviceInterfaceClass_DefaultInterface,
                     (__int64)&v41,
                     &P,
                     &v44,
                     0);
  MatchingFilteredDeviceInterfaceList = ObjectProperty;
  if ( ObjectProperty < 0 || (_DWORD)v41 != 18 )
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
  if ( (int)CmOpenDeviceInterfaceRegKey(PiPnpRtlCtx, (_DWORD)P, 48, v18, 131097, 0, (__int64)&v48, 0LL) >= 0 )
  {
    if ( !String1 )
      goto LABEL_91;
    HIDWORD(v41) = 400;
    v33 = (WCHAR *)ExAllocatePoolWithTag(PagedPool, 0x190uLL, 0x20207050u);
    v45 = v33;
    v10 = v33;
    if ( !v33 )
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
      goto LABEL_26;
    }
    if ( (int)PnpGetObjectProperty(
                *(__int64 *)&PiPnpRtlCtx,
                (__int64)v19,
                3LL,
                (__int64)v48,
                0LL,
                (__int64)&DEVPKEY_Device_InstanceId,
                (__int64)&v41,
                (__int64)v33,
                SHIDWORD(v41),
                (__int64)&v41 + 4,
                0) >= 0
      && (_DWORD)v41 == 18
      && RtlInitUnicodeStringEx(&DestinationString, v10) >= 0
      && RtlEqualUnicodeString(String1, &DestinationString, 1u) )
    {
LABEL_91:
      if ( (v47 & 1) != 0
        || (HIDWORD(v41) = 1,
            (int)PnpGetObjectProperty(
                   *(__int64 *)&PiPnpRtlCtx,
                   (__int64)v19,
                   3LL,
                   (__int64)v48,
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
        memset(&v57, 0, sizeof(v57));
        SeCaptureSubjectContext(&v57);
        v34 = PiPnpRtlApplyMandatoryFilters(*(__int64 *)&PiPnpRtlCtx, (__int64)v19, 3, (__int64)v48, &v57, &cchDest_5);
        SeReleaseSubjectContext(&v57);
        if ( v34 < 0 || (v9 = 1, !cchDest_5) )
          v9 = 0;
      }
    }
    ZwClose(v48);
    if ( v9 )
    {
LABEL_8:
      LODWORD(v8) = v44;
      goto LABEL_9;
    }
  }
  ExFreePoolWithTag(v19, 0);
  v19 = 0LL;
  P = 0LL;
LABEL_9:
  if ( String1 )
  {
    MatchingFilteredDeviceInterfaceList = PnpUnicodeStringToWstr(&v52, 0LL, &String1->Length);
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
    v35 = (unsigned int)v8 >> 1;
    if ( v35 >= 0x1000 )
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
      v24 = v42;
      goto LABEL_22;
    }
    v24 = cchDest;
    v42 = cchDest;
    v25 = cchDest;
    if ( v9 )
      break;
    v26 = v23;
LABEL_20:
    pcchRemaining = v25;
    ppszDestEnd = v26;
    MatchingFilteredDeviceInterfaceList = CmGetMatchingFilteredDeviceInterfaceList(
                                            PiPnpRtlCtx,
                                            (unsigned int)v58,
                                            (_DWORD)v52,
                                            (v47 & 1) == 0,
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
    v10 = v45;
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
      }
    }
    else
    {
      MatchingFilteredDeviceInterfaceList = -1073741670;
    }
    v10 = v45;
  }
LABEL_26:
  v6 = (_DWORD *)v43;
LABEL_27:
  v7 = String1;
LABEL_28:
  ExReleaseResourceLite(&PnpRegistryDeviceResource);
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  if ( MatchingFilteredDeviceInterfaceList >= 0 )
  {
    *v53 = v11;
    if ( v6 )
      *v6 = 2 * cchDest;
    v11 = 0LL;
    v8 = P;
    goto LABEL_32;
  }
  v8 = P;
LABEL_87:
  *v53 = 0LL;
  if ( v6 )
    *v6 = 0;
LABEL_32:
  if ( Handle )
    ZwClose(Handle);
  PnpUnicodeStringToWstrFree(v52, (__int64)v7);
  if ( v8 )
    ExFreePoolWithTag(v8, 0);
  if ( v11 )
    ExFreePoolWithTag(v11, 0);
  if ( v10 )
    ExFreePoolWithTag(v10, 0);
  return (unsigned int)MatchingFilteredDeviceInterfaceList;
}
