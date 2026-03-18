/*
 * XREFs of NtQueryKey @ 0x1407333B0
 * Callers:
 *     PiDevCfgConfigureDeviceLocation @ 0x1406E6424 (PiDevCfgConfigureDeviceLocation.c)
 *     IopLoadDriver @ 0x14074A178 (IopLoadDriver.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14094B864 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14094D4C8 (PiDevCfgQueryPolicyStringList.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8680 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140B1CC84 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     _tlgWriteAgg @ 0x1402A1A20 (_tlgWriteAgg.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140367AF0 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlpInterlockedPopEntrySList @ 0x140429880 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     CmQueryKey @ 0x1407C1B70 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpIsBufferGloballyVisible @ 0x1407D557C (CmpIsBufferGloballyVisible.c)
 *     ExRaiseAccessViolation @ 0x140A021F0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtQueryKey(HANDLE Handle, unsigned int a2, PSLIST_ENTRY a3, unsigned int a4, _DWORD *a5)
{
  size_t v5; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  KPROCESSOR_MODE v12; // cl
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  __int64 v16; // rcx
  NTSTATUS Key; // ebx
  _QWORD *v18; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v20; // r9d
  unsigned __int16 *v21; // r15
  int v22; // eax
  __int64 v24; // rcx
  __int64 v25; // r8
  unsigned int v26; // eax
  KPROCESSOR_MODE PreviousMode; // r9
  unsigned int v28; // edx
  char v29; // cl
  struct _SLIST_ENTRY *TransientPoolWithQuotaTag; // rax
  __int64 v31; // rcx
  unsigned __int8 v32; // [rsp+40h] [rbp-218h]
  char v33; // [rsp+41h] [rbp-217h]
  char v34; // [rsp+42h] [rbp-216h]
  char v35; // [rsp+43h] [rbp-215h] BYREF
  char v36; // [rsp+44h] [rbp-214h]
  unsigned int v37; // [rsp+48h] [rbp-210h]
  int v38; // [rsp+50h] [rbp-208h]
  PVOID v39; // [rsp+58h] [rbp-200h] BYREF
  unsigned int v40; // [rsp+60h] [rbp-1F8h] BYREF
  PVOID Object; // [rsp+68h] [rbp-1F0h] BYREF
  PVOID v42; // [rsp+70h] [rbp-1E8h] BYREF
  PVOID v43; // [rsp+78h] [rbp-1E0h] BYREF
  __int64 v44; // [rsp+80h] [rbp-1D8h]
  _QWORD v45[2]; // [rsp+88h] [rbp-1D0h] BYREF
  struct _OBJECT_HANDLE_INFORMATION HandleInformation; // [rsp+98h] [rbp-1C0h] BYREF
  __int64 v47; // [rsp+A0h] [rbp-1B8h] BYREF
  __int64 v48; // [rsp+A8h] [rbp-1B0h] BYREF
  __int128 v49; // [rsp+B0h] [rbp-1A8h] BYREF
  PVOID v50; // [rsp+C0h] [rbp-198h] BYREF
  NTSTATUS v51; // [rsp+C8h] [rbp-190h]
  int v52; // [rsp+CCh] [rbp-18Ch]
  __int128 *v53; // [rsp+D0h] [rbp-188h]
  NTSTATUS v54; // [rsp+D8h] [rbp-180h]
  __int128 v55; // [rsp+DCh] [rbp-17Ch]
  __int64 v56; // [rsp+ECh] [rbp-16Ch]
  int v57; // [rsp+F4h] [rbp-164h]
  __int128 v58; // [rsp+100h] [rbp-158h] BYREF
  __int128 v59; // [rsp+110h] [rbp-148h]
  __int128 v60; // [rsp+120h] [rbp-138h]
  __int128 v61; // [rsp+130h] [rbp-128h]
  void *Src[2]; // [rsp+140h] [rbp-118h]
  char v63; // [rsp+150h] [rbp-108h]
  _OWORD v64[4]; // [rsp+151h] [rbp-107h] BYREF
  int v65; // [rsp+191h] [rbp-C7h]
  __int16 v66; // [rsp+195h] [rbp-C3h]
  char v67; // [rsp+197h] [rbp-C1h]
  struct _EVENT_DATA_DESCRIPTOR v68[2]; // [rsp+1A0h] [rbp-B8h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v69; // [rsp+1C0h] [rbp-98h] BYREF
  __int64 *v70; // [rsp+1E0h] [rbp-78h]
  __int64 v71; // [rsp+1E8h] [rbp-70h]
  char *v72; // [rsp+1F0h] [rbp-68h]
  __int64 v73; // [rsp+1F8h] [rbp-60h]
  __int64 *v74; // [rsp+200h] [rbp-58h]
  __int64 v75; // [rsp+208h] [rbp-50h]

  v5 = a4;
  v37 = a2;
  v39 = a5;
  v49 = 0LL;
  HandleInformation = 0LL;
  LODWORD(Object) = 0;
  v40 = 0;
  memset(v64, 0, sizeof(v64));
  v65 = 0;
  v66 = 0;
  v67 = 0;
  memset(v68, 0, sizeof(v68));
  v44 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((unsigned __int64)v68, 0x20000uLL);
  v33 = 0;
  v34 = 0;
  v42 = 0LL;
  v58 = 0LL;
  v59 = 0LL;
  v60 = 0LL;
  v61 = 0LL;
  *(_OWORD *)Src = 0LL;
  v63 = 0;
  v45[1] = v45;
  v45[0] = v45;
  CmpInitializeThreadInfo((__int64)&v49);
  v43 = 0LL;
  v36 = CmpAcquireShutdownRundown(v10, v9, v11);
  if ( !v36 )
  {
    Key = -1073741431;
    goto LABEL_33;
  }
  if ( a2 > 8 )
  {
    if ( CmpTraceRoutine )
    {
      if ( Handle )
      {
        PreviousMode = KeGetCurrentThread()->PreviousMode;
        v39 = 0LL;
        if ( ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v39, 0LL) >= 0 )
        {
          v44 = *((_QWORD *)v39 + 1);
          ObfDereferenceObject(v39);
        }
      }
    }
    Key = -1073741811;
    goto LABEL_33;
  }
  v12 = KeGetCurrentThread()->PreviousMode;
  v32 = v12;
  if ( v12 == 1 )
  {
    if ( (_DWORD)v5 )
    {
      v13 = (unsigned __int64)a3;
      if ( ((unsigned __int8)a3 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v14 = (unsigned __int64)&a3[-1].Next + v5 + 15;
      if ( (unsigned __int64)a3 > v14 || v14 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v15 = (v14 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v13 = *(_BYTE *)v13;
        v13 = (v13 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v13 != v15 );
    }
    v16 = (__int64)a5;
    if ( (unsigned __int64)a5 >= 0x7FFFFFFF0000LL )
      v16 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v16 = *(_DWORD *)v16;
    v12 = 1;
  }
  Object = 0LL;
  Key = ObReferenceObjectByHandle(
          Handle,
          ((a2 - 3) & 0xFFFFFFFB) != 0,
          (POBJECT_TYPE)CmKeyObjectType,
          v12,
          &Object,
          &HandleInformation);
  v18 = Object;
  v42 = Object;
  if ( Key < 0 )
    goto LABEL_33;
  if ( *(_DWORD *)Object != 1803104306 )
  {
    if ( a2 != 4 )
    {
      Key = -1073741816;
      goto LABEL_33;
    }
    *a5 = 40;
    if ( (unsigned int)v5 < 0x28 )
    {
      Key = -1073741789;
      v38 = -1073741789;
      goto LABEL_33;
    }
    *a3 = 0LL;
    a3[1] = 0LL;
    a3[2].Next = 0LL;
    HIDWORD(a3[1].Next) = *(_DWORD *)(v18[1] + 96LL);
    goto LABEL_32;
  }
  if ( CmpTraceRoutine )
    v44 = *((_QWORD *)Object + 1);
  if ( ((a2 - 3) & 0xFFFFFFFB) == 0 && !HandleInformation.GrantedAccess )
  {
    Key = -1073741790;
    goto LABEL_33;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v34 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    v21 = (unsigned __int16 *)Object;
    *(_QWORD *)&v58 = Object;
    DWORD2(v58) = a2;
    *(_QWORD *)&v59 = a3;
    DWORD2(v59) = v5;
    *(_QWORD *)&v60 = v39;
    LOBYTE(v20) = 1;
    v22 = CmpCallCallBacksEx(7, (unsigned int)&v58, 0, v20, 22, (__int64)Object, (__int64)v45);
    Key = v22;
    if ( v22 >= 0 )
    {
      v33 = 1;
      goto LABEL_28;
    }
    if ( v22 != -1073740541 )
      goto LABEL_33;
LABEL_32:
    Key = 0;
    goto LABEL_33;
  }
  v21 = (unsigned __int16 *)Object;
LABEL_28:
  if ( a2 == 7 )
  {
    *(_DWORD *)v39 = 4;
    if ( (unsigned int)v5 < 4 )
    {
      Key = -1073741789;
      v38 = -1073741789;
      goto LABEL_33;
    }
    LODWORD(a3->Next) = v21[25];
    goto LABEL_32;
  }
  Key = CmKeyBodyRemapToVirtualForEnum(&v42, v32, ((a2 - 3) & 0xFFFFFFFB) != 0, &v43);
  if ( Key >= 0 )
  {
    Src[0] = a3;
    if ( !(_DWORD)v5 )
    {
      Src[1] = 0LL;
      goto LABEL_63;
    }
    if ( *((_QWORD *)&CmpRegistryProcess + 1) && (v32 || !(unsigned __int8)CmpIsBufferGloballyVisible(a3)) )
    {
      if ( (unsigned int)dword_140C03868 > 5 && (byte_140C03878 & 4) != 0 && (qword_140C03880 & 4) == qword_140C03880 )
      {
        v47 = 1LL;
        v70 = &v47;
        v71 = 8LL;
        v35 = 2;
        v72 = &v35;
        v73 = 1LL;
        v28 = v5;
        if ( (((_DWORD)v5 - 1) & (unsigned int)v5) != 0 )
        {
          v29 = -1;
          do
          {
            ++v29;
            v28 >>= 1;
          }
          while ( v28 );
          v28 = 1 << (v29 + 1);
        }
        v48 = v28;
        v74 = &v48;
        v75 = 8LL;
        tlgWriteAgg((__int64)&dword_140C03868, (unsigned __int8 *)&dword_14002988C, v25, 5u, &v69);
      }
      if ( v5 <= 0x40 )
      {
        memset(v64, 0, v5);
        Src[1] = v64;
        goto LABEL_63;
      }
      if ( v5 > 0x1000 )
        goto LABEL_105;
      ++dword_140CE2414;
      a3 = RtlpInterlockedPopEntrySList(&CmpBounceBufferLookaside);
      if ( !a3 )
      {
        ++dword_140CE2418;
        a3 = (PSLIST_ENTRY)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, union _SLIST_HEADER *))qword_140CE2430)(
                             (unsigned int)dword_140CE2424,
                             (unsigned int)dword_140CE242C,
                             (unsigned int)dword_140CE2428,
                             &CmpBounceBufferLookaside);
      }
      if ( a3 )
      {
        memset(a3, 0, v5);
        v63 |= 1u;
      }
      else
      {
LABEL_105:
        TransientPoolWithQuotaTag = (struct _SLIST_ENTRY *)CmpAllocateTransientPoolWithQuotaTag(v24, v5, 0x42424D43u);
        a3 = TransientPoolWithQuotaTag;
        if ( !TransientPoolWithQuotaTag )
        {
          Key = -1073741670;
LABEL_64:
          if ( Key >= 0 )
          {
            Key = CmQueryKey((_DWORD)v42, (_DWORD)v43, v5, (__int64)&v40);
            if ( Key >= 0 || Key == -2147483643 || Key == -1073741789 )
            {
              v26 = v40;
              *(_DWORD *)v39 = v40;
              if ( Key != -1073741789 )
              {
                if ( (unsigned int)v5 >= v26 )
                  LODWORD(v5) = v26;
                if ( Src[0] != Src[1] )
                  memmove(Src[0], Src[1], (unsigned int)v5);
              }
            }
          }
          goto LABEL_33;
        }
        memset(TransientPoolWithQuotaTag, 0, v5);
      }
    }
    Src[1] = a3;
LABEL_63:
    Key = 0;
    goto LABEL_64;
  }
LABEL_33:
  if ( v43 )
    ObfDereferenceObject(v43);
  if ( v33 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v45[0] != v45 )
  {
    v52 = 0;
    v55 = 0LL;
    v56 = 0LL;
    v57 = 0;
    v50 = v42;
    v51 = Key;
    v54 = Key;
    v53 = &v58;
    CmpCallCallBacksEx(22, (unsigned int)&v50, 0, 0, 22, (__int64)v42, (__int64)v45);
    Key = v54;
  }
  if ( v34 )
    KeLeaveCriticalRegion();
  if ( v42 )
    ObfDereferenceObject(v42);
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v64 )
  {
    if ( (v63 & 1) != 0 )
    {
      ++dword_140CE241C;
      if ( LOWORD(CmpBounceBufferLookaside.Alignment) >= (unsigned __int16)word_140CE2410 )
      {
        ++dword_140CE2420;
        ((void (__fastcall *)(void *, union _SLIST_HEADER *))qword_140CE2438)(Src[1], &CmpBounceBufferLookaside);
      }
      else
      {
        RtlpInterlockedPushEntrySList(&CmpBounceBufferLookaside, (PSLIST_ENTRY)Src[1]);
      }
    }
    else
    {
      CmSiFreeMemory((PPRIVILEGE_SET)Src[1]);
    }
  }
  if ( CmpTraceRoutine )
  {
    v31 = v44;
    LOBYTE(v31) = 13;
    CmpTraceRoutine(v31, v68, (unsigned int)Key, a2, v44, 0LL);
  }
  if ( v36 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v49);
  return (unsigned int)Key;
}
