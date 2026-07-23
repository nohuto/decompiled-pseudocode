/*
 * XREFs of EtwpRegisterProvider @ 0x14075E530
 * Callers:
 *     EtwRegisterClassicProvider @ 0x14075E470 (EtwRegisterClassicProvider.c)
 *     EtwRegister @ 0x14075E4C0 (EtwRegister.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140220A40 (ExAcquirePushLockExclusiveEx.c)
 *     ExReleasePushLockEx @ 0x140220F40 (ExReleasePushLockEx.c)
 *     KeLeaveCriticalRegion @ 0x140221480 (KeLeaveCriticalRegion.c)
 *     EtwEventEnabled @ 0x14027E3D0 (EtwEventEnabled.c)
 *     __security_check_cookie @ 0x1403CFAF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     EtwpGetSchematizedFilterSize @ 0x1405F37C8 (EtwpGetSchematizedFilterSize.c)
 *     EtwpUnreferenceGuidEntry @ 0x1405F494C (EtwpUnreferenceGuidEntry.c)
 *     EtwpFindGuidEntryByGuid @ 0x1405F4A40 (EtwpFindGuidEntryByGuid.c)
 *     EtwpTrackProviderRegistration @ 0x1405F4B80 (EtwpTrackProviderRegistration.c)
 *     EtwpUpdateEnableMask @ 0x140669514 (EtwpUpdateEnableMask.c)
 *     EtwpComputeRegEntryEnableInfo @ 0x14066A398 (EtwpComputeRegEntryEnableInfo.c)
 *     EtwpAddGuidEntry @ 0x14071A098 (EtwpAddGuidEntry.c)
 *     EtwpAddKmRegEntry @ 0x14075E820 (EtwpAddKmRegEntry.c)
 *     EtwpEventWriteTemplateSessAndProv @ 0x14093C5D0 (EtwpEventWriteTemplateSessAndProv.c)
 *     EtwpCopySchematizedFilters @ 0x1409432B4 (EtwpCopySchematizedFilters.c)
 *     ExAllocatePoolWithTag @ 0x1409B7010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1409B70B0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall EtwpRegisterProvider(
        __int64 a1,
        __int64 a2,
        int a3,
        void (__fastcall *a4)(_QWORD *, __int64, __int16 *, __int64),
        __int64 a5,
        __int64 a6,
        _QWORD *a7)
{
  bool v10; // zf
  __int64 v11; // rax
  _QWORD *GuidEntryByGuid; // rbx
  struct _KTHREAD *v13; // rax
  ULONG_PTR v14; // rsi
  int v15; // r13d
  _BYTE *v16; // rdi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  PVOID PoolWithTag; // rsi
  unsigned int SchematizedFilterSize; // eax
  __int64 v25; // r8
  unsigned int v26; // r12d
  struct _KTHREAD *CurrentThread; // rax
  __int64 v28; // [rsp+40h] [rbp-51h] BYREF
  __int64 v29; // [rsp+48h] [rbp-49h]
  __int128 v30; // [rsp+50h] [rbp-41h] BYREF
  __int128 v31; // [rsp+60h] [rbp-31h]
  __int16 v32; // [rsp+70h] [rbp-21h] BYREF
  char v33; // [rsp+72h] [rbp-1Fh]
  char v34; // [rsp+73h] [rbp-1Eh]
  int v35; // [rsp+74h] [rbp-1Dh]
  int v36; // [rsp+78h] [rbp-19h]
  int v37; // [rsp+7Ch] [rbp-15h]
  __int128 v38; // [rsp+80h] [rbp-11h] BYREF

  v28 = 0LL;
  v29 = a5;
  *a7 = 0LL;
  v11 = *(_QWORD *)a2 - *(_QWORD *)&SecurityProviderGuid.Data1;
  v10 = *(_QWORD *)a2 == *(_QWORD *)&SecurityProviderGuid.Data1;
  v30 = 0LL;
  v31 = 0LL;
  if ( v10 )
    v11 = *(_QWORD *)(a2 + 8) - *(_QWORD *)SecurityProviderGuid.Data4;
  if ( !v11 )
    return 3221225506LL;
  if ( !a4 && a5 || a3 != 3 && (a3 != 2 || !a4) )
    return 3221225485LL;
  GuidEntryByGuid = EtwpFindGuidEntryByGuid(a1, (_DWORD *)a2, 0);
  if ( GuidEntryByGuid || (GuidEntryByGuid = EtwpAddGuidEntry(a1, (_DWORD *)a2, 0)) != 0LL )
  {
    if ( GuidEntryByGuid[50] )
    {
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      ExAcquirePushLockExclusiveEx(GuidEntryByGuid[50] + 408LL, 0LL);
      *(_QWORD *)(GuidEntryByGuid[50] + 416LL) = KeGetCurrentThread();
    }
    v13 = KeGetCurrentThread();
    --v13->KernelApcDisable;
    v14 = (ULONG_PTR)(GuidEntryByGuid + 51);
    ExAcquirePushLockExclusiveEx((ULONG_PTR)(GuidEntryByGuid + 51), 0LL);
    GuidEntryByGuid[52] = KeGetCurrentThread();
    v15 = EtwpAddKmRegEntry((ULONG_PTR)GuidEntryByGuid, (__int64)&v28);
    if ( v15 >= 0 )
    {
      v16 = (_BYTE *)v28;
      *(_QWORD *)(v28 + 48) = a6;
      *a7 = v16;
      if ( *((_DWORD *)GuidEntryByGuid + 24) )
        EtwpUpdateEnableMask((__int64)GuidEntryByGuid, (v16[98] & 8) != 0, 0, 0, v16 + 100);
      v17 = GuidEntryByGuid[50];
      if ( v17 && *(_DWORD *)(v17 + 96) )
        EtwpUpdateEnableMask(v17, (v16[98] & 8) != 0, 1, 0, v16 + 102);
      EtwpComputeRegEntryEnableInfo((__int64)v16, (__int64)&v30);
      EtwpTrackProviderRegistration((__int64)v16);
      if ( a4 )
      {
        if ( (v16[98] & 8) != 0 )
        {
          if ( (*((_BYTE *)GuidEntryByGuid + 91) & 1) != 0 )
          {
            v32 = *((_WORD *)GuidEntryByGuid + 44);
            LOBYTE(v18) = 1;
            v33 = *((_BYTE *)GuidEntryByGuid + 90);
            v35 = *((_DWORD *)GuidEntryByGuid + 20);
            v36 = *((_DWORD *)GuidEntryByGuid + 21);
            v34 = 0;
            v37 = 0;
            a4(GuidEntryByGuid + 5, v18, &v32, v29);
          }
        }
        else if ( (_DWORD)v30 )
        {
          v28 = 0LL;
          v38 = 0LL;
          PoolWithTag = 0LL;
          SchematizedFilterSize = EtwpGetSchematizedFilterSize((__int64)GuidEntryByGuid, v16[100]);
          v26 = SchematizedFilterSize;
          if ( SchematizedFilterSize )
          {
            PoolWithTag = ExAllocatePoolWithTag(PagedPool, SchematizedFilterSize, 0x46777445u);
            if ( PoolWithTag )
            {
              *(_QWORD *)&v38 = PoolWithTag;
              *((_QWORD *)&v38 + 1) = v26 | 0x8000000000000000uLL;
              v28 = (__int64)&v38;
              EtwpCopySchematizedFilters(PoolWithTag);
            }
          }
          LOBYTE(v25) = BYTE4(v30);
          ((void (__fastcall *)(GUID *, __int64, __int64, _QWORD, _QWORD, __int64, __int64))a4)(
            &NullGuid,
            1LL,
            v25,
            v31,
            *((_QWORD *)&v31 + 1),
            v28,
            v29);
          if ( PoolWithTag )
            ExFreePoolWithTag(PoolWithTag, 0);
          v14 = (ULONG_PTR)(GuidEntryByGuid + 51);
        }
      }
      if ( EtwEventEnabled(EtwpEventTracingProvRegHandle, &ETW_EVENT_PROVIDER_REGISTER) )
        EtwpEventWriteTemplateSessAndProv(v19, &ETW_EVENT_PROVIDER_REGISTER, v20, 1LL, 0LL, a2);
    }
    GuidEntryByGuid[52] = 0LL;
    ExReleasePushLockEx(v14, 0LL);
    KeLeaveCriticalRegion();
    v21 = GuidEntryByGuid[50];
    if ( v21 )
    {
      *(_QWORD *)(v21 + 416) = 0LL;
      ExReleasePushLockEx(GuidEntryByGuid[50] + 408LL, 0LL);
      KeLeaveCriticalRegion();
    }
    EtwpUnreferenceGuidEntry(GuidEntryByGuid);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v15;
}
