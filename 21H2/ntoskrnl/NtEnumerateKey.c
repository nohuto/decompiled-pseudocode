/*
 * XREFs of NtEnumerateKey @ 0x1407C1130
 * Callers:
 *     AdtpObjsInitialize @ 0x14084CD18 (AdtpObjsInitialize.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8680 (ExpWatchLicenseInfoWork.c)
 *     ExpWatchProductTypeInitialization @ 0x140B1CC84 (ExpWatchProductTypeInitialization.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1402F1D50 (KiCheckForKernelApcDelivery.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     RtlpInterlockedPushEntrySList @ 0x1404298C0 (RtlpInterlockedPushEntrySList.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     CmEnumerateKey @ 0x1407C16A0 (CmEnumerateKey.c)
 *     CmpBounceContextStart @ 0x1407C1A00 (CmpBounceContextStart.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     ExRaiseAccessViolation @ 0x140A021F0 (ExRaiseAccessViolation.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtEnumerateKey(
        HANDLE Handle,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        size_t Size,
        _DWORD *a6)
{
  unsigned int v8; // r14d
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  unsigned int v15; // r14d
  int v16; // ebx
  unsigned int v17; // edi
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v23; // eax
  unsigned int v24; // eax
  __int64 v25; // rdi
  struct _KTHREAD *v26; // rcx
  void *v28; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  char v31; // [rsp+40h] [rbp-1A8h]
  char v32; // [rsp+41h] [rbp-1A7h]
  char v33; // [rsp+42h] [rbp-1A6h]
  PVOID Object; // [rsp+48h] [rbp-1A0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-198h]
  _DWORD v37[4]; // [rsp+58h] [rbp-190h] BYREF
  PVOID v38; // [rsp+68h] [rbp-180h] BYREF
  __int64 v39; // [rsp+70h] [rbp-178h]
  PVOID v40; // [rsp+78h] [rbp-170h] BYREF
  _QWORD v41[2]; // [rsp+80h] [rbp-168h] BYREF
  __int128 v42; // [rsp+90h] [rbp-158h] BYREF
  PVOID v43; // [rsp+A0h] [rbp-148h] BYREF
  int v44; // [rsp+A8h] [rbp-140h]
  int v45; // [rsp+ACh] [rbp-13Ch]
  _QWORD *v46; // [rsp+B0h] [rbp-138h]
  int v47; // [rsp+B8h] [rbp-130h]
  __int128 v48; // [rsp+BCh] [rbp-12Ch]
  __int64 v49; // [rsp+CCh] [rbp-11Ch]
  int v50; // [rsp+D4h] [rbp-114h]
  _QWORD v51[8]; // [rsp+E0h] [rbp-108h] BYREF
  void *Src[2]; // [rsp+120h] [rbp-C8h] BYREF
  char v53; // [rsp+130h] [rbp-B8h]
  _BYTE v54[71]; // [rsp+131h] [rbp-B7h] BYREF
  _OWORD v55[2]; // [rsp+180h] [rbp-68h] BYREF

  v8 = a2;
  v37[2] = a2;
  v42 = 0LL;
  LODWORD(v38) = 0;
  memset(v54, 0, sizeof(v54));
  memset(v55, 0, sizeof(v55));
  v36 = 0LL;
  v39 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((unsigned __int64)v55, 0x20000uLL);
  v31 = 0;
  v32 = 0;
  memset(v51, 0, sizeof(v51));
  Object = 0LL;
  v37[0] = 0;
  *(_OWORD *)Src = 0LL;
  v53 = 0;
  v41[1] = v41;
  v41[0] = v41;
  CmpInitializeThreadInfo((__int64)&v42);
  v40 = 0LL;
  v33 = CmpAcquireShutdownRundown(v11, v10, v12);
  if ( !v33 )
  {
    v16 = -1073741431;
LABEL_73:
    v25 = 0LL;
    goto LABEL_33;
  }
  if ( a3 > 2 )
  {
    if ( CmpTraceRoutine
      && Handle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v38 = 0LL,
          ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v38, 0LL) >= 0) )
    {
      v25 = *((_QWORD *)v38 + 1);
      ObfDereferenceObject(v38);
    }
    else
    {
      v25 = 0LL;
    }
    v16 = -1073741811;
    goto LABEL_33;
  }
  v15 = KeGetCurrentThread()->PreviousMode;
  v16 = CmObReferenceObjectByHandle((_DWORD)Handle, 8, v14, (unsigned __int8)v15, (__int64)&Object, 0LL);
  if ( v16 < 0 )
  {
    v8 = a2;
    goto LABEL_73;
  }
  if ( CmpTraceRoutine && Object )
  {
    v36 = *((_QWORD *)Object + 1);
    v39 = v36;
  }
  if ( (_BYTE)v15 == 1 )
  {
    v17 = Size;
    if ( (_DWORD)Size )
    {
      v18 = a4;
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      v19 = a4 + (unsigned int)Size - 1LL;
      if ( a4 > v19 || v19 >= 0x7FFFFFFF0000LL )
        ExRaiseAccessViolation();
      v20 = (v19 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      do
      {
        *(_BYTE *)v18 = *(_BYTE *)v18;
        v18 = (v18 & 0xFFFFFFFFFFFFF000uLL) + 4096;
      }
      while ( v18 != v20 );
    }
    v21 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v21 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v21 = *(_DWORD *)v21;
  }
  else
  {
    v17 = Size;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v32 = 1;
  if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
    goto LABEL_24;
  v51[0] = Object;
  v51[1] = __PAIR64__(a3, a2);
  v51[2] = a4;
  LODWORD(v51[3]) = v17;
  v51[4] = a6;
  v23 = CmpCallCallBacksEx(5u, (__int64)v51, 0LL, 1, 0x14u, (__int64)Object, (__int64)v41);
  v16 = v23;
  if ( v23 >= 0 )
  {
    v31 = 1;
LABEL_24:
    v16 = CmKeyBodyRemapToVirtualForEnum(&Object, (unsigned __int8)v15, 8LL, &v40);
    if ( v16 < 0 || (v16 = CmpBounceContextStart(Src, a4, v17, v15, 0), v16 < 0) )
    {
      v8 = a2;
      v25 = v36;
    }
    else
    {
      v8 = a2;
      v16 = CmEnumerateKey((_DWORD)Object, (_DWORD)v40, a2, a3, (__int64)Src[1], v17, (__int64)v37);
      if ( v16 >= 0 || v16 == -2147483643 || v16 == -1073741789 )
      {
        v24 = v37[0];
        *a6 = v37[0];
        if ( v16 != -1073741789 )
        {
          if ( v17 >= v24 )
            v17 = v24;
          if ( Src[0] != Src[1] )
            memmove(Src[0], Src[1], v17);
        }
        v25 = v36;
      }
      else
      {
        v25 = v36;
      }
    }
    goto LABEL_33;
  }
  v8 = a2;
  v25 = v36;
  if ( v23 == -1073740541 )
    v16 = 0;
LABEL_33:
  if ( v40 )
    ObfDereferenceObject(v40);
  if ( v31 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v41[0] != v41 )
  {
    v45 = 0;
    v48 = 0LL;
    v49 = 0LL;
    v50 = 0;
    v43 = Object;
    v44 = v16;
    v47 = v16;
    v46 = v51;
    CmpCallCallBacksEx(0x14u, (__int64)&v43, 0LL, 0, 0x14u, (__int64)Object, (__int64)v41);
    v16 = v47;
  }
  if ( v32 )
  {
    v26 = KeGetCurrentThread();
    if ( v26->KernelApcDisable++ == -1
      && ($CEA84C04E3712D858E5667A507841A2A *)v26->ApcState.ApcListHead[0].Flink != &v26->152
      && !v26->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
  if ( Object )
    ObfDereferenceObject(Object);
  v28 = Src[1];
  if ( Src[1] && Src[1] != Src[0] && Src[1] != v54 )
  {
    if ( (v53 & 1) != 0 )
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
    LOBYTE(v28) = 17;
    CmpTraceRoutine(v28, v55, (unsigned int)v16, v8, v25, 0LL);
  }
  if ( v33 )
    CmpReleaseShutdownRundown(v28, v13, v14);
  CmCleanupThreadInfo((__int64 *)&v42);
  return (unsigned int)v16;
}
