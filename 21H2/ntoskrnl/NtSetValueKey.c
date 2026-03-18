/*
 * XREFs of NtSetValueKey @ 0x14071FAA0
 * Callers:
 *     ExpWatchProductTypeWork @ 0x1406A5770 (ExpWatchProductTypeWork.c)
 *     ExpWatchLicenseInfoWork @ 0x1409F8680 (ExpWatchLicenseInfoWork.c)
 *     IopStoreSystemPartitionInformation @ 0x140B0E88C (IopStoreSystemPartitionInformation.c)
 *     CmpAddDockingInfo @ 0x140B18840 (CmpAddDockingInfo.c)
 *     ExpUpdateProductSuiteTypeInRegistry @ 0x140B1D10C (ExpUpdateProductSuiteTypeInRegistry.c)
 *     InitSafeBoot @ 0x140B4B918 (InitSafeBoot.c)
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmDoVirtualTest @ 0x14023BD3C (CmDoVirtualTest.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     RtlInitUnicodeString @ 0x140347630 (RtlInitUnicodeString.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140367AF0 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmPostCallbackNotificationEx @ 0x14067FF60 (CmPostCallbackNotificationEx.c)
 *     CmpDoesBufferRequireCapturing @ 0x140720224 (CmpDoesBufferRequireCapturing.c)
 *     CmSetValueKey @ 0x140720260 (CmSetValueKey.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140915D20 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14091607C (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtSetValueKey(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned int a4,
        void *a5,
        size_t Size)
{
  char v7; // r14
  char v8; // r15
  char v9; // r13
  unsigned __int8 PreviousMode; // bl
  char v11; // si
  int v12; // r8d
  signed int v13; // ebx
  signed __int8 v14; // al
  unsigned __int16 Length; // bx
  unsigned int v16; // edi
  void *v17; // r12
  unsigned int v18; // r15d
  unsigned int v19; // r14d
  unsigned int v20; // esi
  unsigned int v21; // r13d
  __int64 v22; // rcx
  PPRIVILEGE_SET v23; // rsi
  size_t v24; // r8
  wchar_t *v25; // rbx
  struct _KTHREAD *CurrentThread; // rax
  int v27; // r9d
  unsigned int v28; // r13d
  int v29; // r14d
  int v31; // r8d
  bool v32; // zf
  __int64 v33; // rcx
  unsigned __int8 v34; // [rsp+40h] [rbp-1B8h]
  char v35; // [rsp+41h] [rbp-1B7h]
  char v36; // [rsp+43h] [rbp-1B5h]
  int v37; // [rsp+44h] [rbp-1B4h]
  char v38; // [rsp+49h] [rbp-1AFh]
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-1A8h] BYREF
  PVOID Object; // [rsp+60h] [rbp-198h] BYREF
  void *Src; // [rsp+68h] [rbp-190h]
  void *v42; // [rsp+70h] [rbp-188h]
  unsigned int v43; // [rsp+78h] [rbp-180h]
  int v44; // [rsp+7Ch] [rbp-17Ch] BYREF
  PPRIVILEGE_SET Privileges; // [rsp+80h] [rbp-178h]
  unsigned int v46; // [rsp+88h] [rbp-170h]
  __int64 v47; // [rsp+90h] [rbp-168h] BYREF
  __int64 v48; // [rsp+98h] [rbp-160h]
  __int64 v49; // [rsp+A0h] [rbp-158h]
  _QWORD v50[2]; // [rsp+A8h] [rbp-150h] BYREF
  int v51; // [rsp+B8h] [rbp-140h]
  struct _PRIVILEGE_SET *v52; // [rsp+C0h] [rbp-138h]
  __int128 v53; // [rsp+D0h] [rbp-128h]
  __int128 v54; // [rsp+E0h] [rbp-118h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+F0h] [rbp-108h] BYREF
  _QWORD v56[8]; // [rsp+110h] [rbp-E8h] BYREF
  _OWORD v57[2]; // [rsp+150h] [rbp-A8h] BYREF
  _BYTE v58[64]; // [rsp+170h] [rbp-88h] BYREF

  v43 = a4;
  v46 = a3;
  v48 = a1;
  Src = a5;
  v54 = 0LL;
  DestinationString = 0LL;
  v47 = 0LL;
  memset(v57, 0, sizeof(v57));
  v49 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((unsigned __int64)v57, 0x20000uLL);
  CmpInitializeThreadInfo((__int64)&v54);
  v7 = 0;
  v36 = 0;
  v8 = 0;
  Object = 0LL;
  v9 = 0;
  v35 = 0;
  v51 = -1;
  v50[1] = v50;
  v50[0] = v50;
  memset(v56, 0, sizeof(v56));
  RtlInitUnicodeString(&DestinationString, 0LL);
  v42 = 0LL;
  v52 = 0LL;
  v44 = 0;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v34 = PreviousMode;
  v11 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v38 = CmpAcquireShutdownRundown();
  if ( !v38 )
  {
    v13 = -1073741431;
    v37 = -1073741431;
    goto LABEL_72;
  }
  v13 = CmObReferenceObjectByHandle(v48, 2, v12, PreviousMode, (__int64)&Object, (__int64)&v47);
  v37 = v13;
  if ( v13 != -1073741790 )
    goto LABEL_5;
  SeCaptureSubjectContext(&SubjectContext);
  v11 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v44) )
  {
    v13 = -1073741790;
    v37 = -1073741790;
    goto LABEL_72;
  }
  v13 = CmObReferenceObjectByHandle(v48, 131097, v31, v34, (__int64)&Object, (__int64)&v47);
  v37 = v13;
  if ( v13 >= 0 )
  {
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
      v13 = -1073741790;
      v37 = -1073741790;
      goto LABEL_72;
    }
    v9 = 1;
    v35 = 1;
LABEL_5:
    v11 = v9;
    if ( v13 < 0 )
      goto LABEL_72;
    if ( CmpTraceRoutine && Object )
      v49 = *((_QWORD *)Object + 1);
    v14 = v34;
    if ( v34 == 1 )
    {
      v53 = 0LL;
      if ( a2 >= 0x7FFFFFFF0000LL )
        a2 = 0x7FFFFFFF0000LL;
      LODWORD(v53) = *(_DWORD *)a2;
      *((_QWORD *)&v53 + 1) = *(_QWORD *)(a2 + 8);
      DestinationString = (UNICODE_STRING)v53;
      DestinationString.MaximumLength = v53;
      Length = v53;
      if ( (_WORD)v53 )
      {
        if ( ((__int64)DestinationString.Buffer & 1) != 0 )
          ExRaiseDatatypeMisalignment();
        if ( (wchar_t *)((char *)DestinationString.Buffer + (unsigned __int16)v53) > (wchar_t *)0x7FFFFFFF0000LL
          || (char *)DestinationString.Buffer + (unsigned __int16)v53 < (char *)DestinationString.Buffer )
        {
          MEMORY[0x7FFFFFFF0000] = 0;
          Length = DestinationString.Length;
        }
      }
      v16 = Size;
      v17 = Src;
      if ( (_DWORD)Size
        && ((unsigned __int64)Src + (unsigned int)Size > 0x7FFFFFFF0000LL || (char *)Src + (unsigned int)Size < Src) )
      {
        MEMORY[0x7FFFFFFF0000] = 0;
        Length = DestinationString.Length;
      }
    }
    else
    {
      DestinationString = *(UNICODE_STRING *)a2;
      v42 = 0LL;
      v16 = Size;
      if ( !(_DWORD)Size )
      {
        Length = DestinationString.Length;
        v17 = Src;
LABEL_18:
        if ( Length > 0x7FFFu || (DestinationString.Length & 1) != 0 || v16 > 0x7FFFF000 )
        {
          v13 = -1073741811;
          v37 = -1073741811;
          v11 = v9;
          goto LABEL_72;
        }
        v18 = Length;
        v19 = (Length + 7) & 0xFFFFFFF8;
        v20 = v19 + v16;
        if ( v19 + v16 < v16 )
        {
          v13 = -1073741811;
          v37 = -1073741811;
          v11 = v9;
          v7 = 0;
          v8 = 0;
          goto LABEL_72;
        }
        v21 = v14;
        if ( (unsigned __int8)CmpDoesBufferRequireCapturing((unsigned int)v14, DestinationString.Buffer)
          || (unsigned __int8)CmpDoesBufferRequireCapturing(v21, v17) )
        {
          if ( v20 )
          {
            if ( v20 <= 0x40 )
              goto LABEL_25;
            if ( v16 <= 0x40 )
            {
              if ( Length <= 0x40u && v16 < Length )
                v18 = v16;
            }
            else
            {
              v18 = Length > 0x40u ? v19 + v16 : v16;
            }
            if ( v18 )
            {
              Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v22, v18, 0x6E566D43u);
              if ( !Privileges )
              {
                v13 = -1073741670;
                v37 = -1073741670;
                v11 = v35;
                v7 = 0;
                v8 = 0;
                goto LABEL_72;
              }
              Length = DestinationString.Length;
              if ( v18 == v16 )
              {
                v42 = v58;
                v23 = Privileges;
              }
              else
              {
                v42 = Privileges;
                if ( v18 == DestinationString.Length )
                  v23 = (PPRIVILEGE_SET)v58;
                else
                  v23 = (PPRIVILEGE_SET)((char *)Privileges + v19);
              }
            }
            else
            {
LABEL_25:
              v42 = v58;
              v23 = (PPRIVILEGE_SET)&v58[v19];
            }
          }
          else
          {
            v23 = v52;
          }
          if ( Length )
          {
            v24 = Length;
            v25 = (wchar_t *)v42;
            memmove(v42, DestinationString.Buffer, v24);
            DestinationString.Buffer = v25;
            Length = DestinationString.Length;
          }
          else
          {
            DestinationString.Buffer = 0LL;
          }
          if ( v16 )
          {
            memmove(v23, v17, v16);
            Src = v23;
            Length = DestinationString.Length;
          }
          else
          {
            Src = 0LL;
          }
        }
        if ( Length )
        {
          do
          {
            if ( DestinationString.Buffer[((unsigned __int64)Length >> 1) - 1] )
              break;
            v32 = Length == 2;
            Length -= 2;
            DestinationString.Length = Length;
          }
          while ( !v32 );
        }
        if ( (*(_DWORD *)(*((_QWORD *)Object + 1) + 8LL) & 0x80u) == 0 )
        {
          CurrentThread = KeGetCurrentThread();
          --CurrentThread->KernelApcDisable;
          if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
          {
            v29 = (int)Src;
            v28 = v43;
          }
          else
          {
            v56[0] = Object;
            v56[1] = &DestinationString;
            v56[2] = __PAIR64__(v43, v46);
            v28 = v43;
            v29 = (int)Src;
            v56[3] = Src;
            LODWORD(v56[4]) = v16;
            LOBYTE(v27) = 1;
            v13 = CmpCallCallBacksEx(1, (unsigned int)v56, 0, v27, 16, (__int64)Object, (__int64)v50);
            if ( v13 < 0 )
            {
              if ( v13 == -1073740541 )
                v13 = 0;
              v37 = v13;
              v11 = v35;
              v7 = 0;
              goto LABEL_71;
            }
            v36 = 1;
          }
          if ( !v35
            || (v13 = CmKeyBodyReplicateToVirtual(&Object, v34, 2LL, &SubjectContext, &v44),
                v37 = v13,
                v11 = v35,
                v13 >= 0) )
          {
            v13 = CmSetValueKey((_DWORD)Object, (unsigned int)&DestinationString, v28, v29, v16, v48, (v47 & 4) != 0);
            v37 = v13;
            v11 = v35;
          }
          v7 = v36;
LABEL_71:
          v8 = 1;
          goto LABEL_72;
        }
        v13 = -1073741790;
        v37 = -1073741790;
        v11 = v35;
        v7 = 0;
        v8 = 0;
        goto LABEL_72;
      }
      Length = DestinationString.Length;
      v17 = Src;
    }
    v14 = v34;
    goto LABEL_18;
  }
LABEL_72:
  if ( v11 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v7 )
  {
    v13 = CmPostCallbackNotificationEx(16, (__int64)Object, v13, (__int64)v56, 0LL, v50);
    v37 = v13;
  }
  if ( v8 )
  {
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
    v13 = v37;
  }
  if ( Object )
    ObfDereferenceObject(Object);
  if ( CmpTraceRoutine )
  {
    v33 = v49;
    LOBYTE(v33) = 14;
    CmpTraceRoutine(v33, v57, (unsigned int)v13, 0LL, v49, &DestinationString);
  }
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v38 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v54);
  return (unsigned int)v13;
}
