/*
 * XREFs of NtEnumerateValueKey @ 0x1406A1370
 * Callers:
 *     AdtpObjsInitialize @ 0x14084CD18 (AdtpObjsInitialize.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402F9540 (KiLeaveCriticalRegionUnsafe.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140435E00 (memset.c)
 *     CmpBounceContextCleanup @ 0x1406A185C (CmpBounceContextCleanup.c)
 *     CmEnumerateValueKey @ 0x1406A18C0 (CmEnumerateValueKey.c)
 *     CmpBounceContextCopyDataToCallerBuffer @ 0x1406A1AB8 (CmpBounceContextCopyDataToCallerBuffer.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     CmpCallCallBacksEx @ 0x140735760 (CmpCallCallBacksEx.c)
 *     CmpBounceContextStart @ 0x1407C1A00 (CmpBounceContextStart.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1407CA1C0 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x140915854 (CmEnumerateValueKeyFromMergedView.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtEnumerateValueKey(
        HANDLE Handle,
        unsigned int a2,
        unsigned int a3,
        unsigned __int64 a4,
        unsigned int a5,
        _DWORD *a6)
{
  unsigned int v8; // r14d
  int v10; // r8d
  unsigned int v11; // r14d
  int v12; // ebx
  unsigned int v13; // edi
  __int64 v14; // rcx
  struct _KTHREAD *CurrentThread; // rax
  int v16; // r9d
  int v17; // eax
  unsigned int v18; // eax
  __int64 v19; // rdi
  __int64 v20; // rcx
  KPROCESSOR_MODE PreviousMode; // r9
  char v23; // [rsp+50h] [rbp-1D8h]
  char v24; // [rsp+51h] [rbp-1D7h]
  char v25; // [rsp+52h] [rbp-1D6h]
  PVOID Object; // [rsp+58h] [rbp-1D0h] BYREF
  __int64 v28; // [rsp+60h] [rbp-1C8h] BYREF
  __int64 v29; // [rsp+68h] [rbp-1C0h]
  unsigned int v30; // [rsp+70h] [rbp-1B8h]
  PVOID v31; // [rsp+78h] [rbp-1B0h] BYREF
  PVOID v32; // [rsp+80h] [rbp-1A8h] BYREF
  __int64 v33; // [rsp+88h] [rbp-1A0h]
  _QWORD v34[2]; // [rsp+90h] [rbp-198h] BYREF
  __int128 v35; // [rsp+A0h] [rbp-188h] BYREF
  PVOID v36; // [rsp+B0h] [rbp-178h] BYREF
  int v37; // [rsp+B8h] [rbp-170h]
  int v38; // [rsp+BCh] [rbp-16Ch]
  _QWORD *v39; // [rsp+C0h] [rbp-168h]
  int v40; // [rsp+C8h] [rbp-160h]
  __int128 v41; // [rsp+CCh] [rbp-15Ch]
  __int64 v42; // [rsp+DCh] [rbp-14Ch]
  int v43; // [rsp+E4h] [rbp-144h]
  _QWORD v44[8]; // [rsp+F0h] [rbp-138h] BYREF
  _OWORD v45[2]; // [rsp+130h] [rbp-F8h] BYREF
  _OWORD v46[3]; // [rsp+150h] [rbp-D8h] BYREF
  size_t v47[2]; // [rsp+180h] [rbp-A8h] BYREF
  char v48; // [rsp+190h] [rbp-98h]
  _BYTE v49[71]; // [rsp+191h] [rbp-97h] BYREF

  v8 = a2;
  v30 = a2;
  v35 = 0LL;
  LODWORD(v32) = 0;
  memset(v46, 0, sizeof(v46));
  memset(v49, 0, sizeof(v49));
  memset(v45, 0, sizeof(v45));
  v29 = 0LL;
  v33 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((unsigned __int64)v45, 0x20000uLL);
  v23 = 0;
  v24 = 0;
  memset(v44, 0, sizeof(v44));
  Object = 0LL;
  LODWORD(v28) = 0;
  *(_OWORD *)v47 = 0LL;
  v48 = 0;
  v34[1] = v34;
  v34[0] = v34;
  CmpInitializeThreadInfo((__int64)&v35);
  v31 = 0LL;
  v25 = CmpAcquireShutdownRundown();
  if ( !v25 )
  {
    v12 = -1073741431;
    v19 = 0LL;
    goto LABEL_32;
  }
  if ( a3 > 2 )
  {
    if ( CmpTraceRoutine
      && Handle
      && (PreviousMode = KeGetCurrentThread()->PreviousMode,
          v32 = 0LL,
          ObReferenceObjectByHandle(Handle, 0, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &v32, 0LL) >= 0) )
    {
      v19 = *((_QWORD *)v32 + 1);
      ObfDereferenceObject(v32);
    }
    else
    {
      v19 = 0LL;
    }
    v12 = -1073741811;
    goto LABEL_32;
  }
  v11 = KeGetCurrentThread()->PreviousMode;
  v12 = CmObReferenceObjectByHandle((_DWORD)Handle, 1, v10, (unsigned __int8)v11, (__int64)&Object, 0LL);
  if ( v12 < 0 )
  {
    v8 = a2;
    v19 = 0LL;
    goto LABEL_32;
  }
  if ( CmpTraceRoutine && Object )
  {
    v29 = *((_QWORD *)Object + 1);
    v33 = v29;
  }
  if ( (_BYTE)v11 == 1 )
  {
    v13 = a5;
    if ( a5 )
    {
      if ( (a4 & 3) != 0 )
        ExRaiseDatatypeMisalignment();
      if ( a4 + a5 > 0x7FFFFFFF0000LL || a4 + a5 < a4 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
    v14 = (__int64)a6;
    if ( (unsigned __int64)a6 >= 0x7FFFFFFF0000LL )
      v14 = 0x7FFFFFFF0000LL;
    *(_DWORD *)v14 = *(_DWORD *)v14;
  }
  else
  {
    v13 = a5;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v24 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    v44[0] = Object;
    v44[1] = __PAIR64__(a3, a2);
    v44[2] = a4;
    LODWORD(v44[3]) = v13;
    v44[4] = a6;
    LOBYTE(v16) = 1;
    v17 = CmpCallCallBacksEx(6, (unsigned int)v44, 0, v16, 21, (__int64)Object, (__int64)v34);
    v12 = v17;
    if ( v17 < 0 )
    {
      v8 = a2;
      v19 = v29;
      if ( v17 == -1073740541 )
        v12 = 0;
      goto LABEL_32;
    }
    v23 = 1;
  }
  v12 = CmKeyBodyRemapToVirtualForEnum(&Object, (unsigned __int8)v11, 1LL, &v31);
  if ( v12 < 0 || (v12 = CmpBounceContextStart(v47, a4, v13, v11, 1), v12 < 0) )
  {
    v8 = a2;
LABEL_50:
    v19 = v29;
    goto LABEL_32;
  }
  if ( v31 )
  {
    CmpAttachToRegistryProcess(v46);
    v8 = a2;
    v12 = CmEnumerateValueKeyFromMergedView((int)Object, (int)v31, 0, a2, a3, v47[1], v13, (__int64)&v28, 0LL);
    CmpDetachFromRegistryProcess(v46);
  }
  else
  {
    v8 = a2;
    v12 = CmEnumerateValueKey(Object, a2, a3, v47[1], v13, &v28);
  }
  if ( v12 < 0 && v12 != -2147483643 && v12 != -1073741789 )
    goto LABEL_50;
  v18 = v28;
  *a6 = v28;
  if ( v12 != -1073741789 )
  {
    if ( v13 >= v18 )
      v13 = v18;
    CmpBounceContextCopyDataToCallerBuffer(v47, v13);
  }
  v19 = v29;
LABEL_32:
  if ( v31 )
    ObfDereferenceObject(v31);
  if ( v23 && CmpCallBackCount && !CmpIsRegistryLockAcquired() && (_QWORD *)v34[0] != v34 )
  {
    v38 = 0;
    v41 = 0LL;
    v42 = 0LL;
    v43 = 0;
    v36 = Object;
    v37 = v12;
    v40 = v12;
    v39 = v44;
    CmpCallCallBacksEx(21, (unsigned int)&v36, 0, 0, 21, (__int64)Object, (__int64)v34);
    v12 = v40;
  }
  if ( v24 )
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  if ( Object )
    ObfDereferenceObject(Object);
  CmpBounceContextCleanup(v47);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v20) = 18;
    CmpTraceRoutine(v20, v45, (unsigned int)v12, v8, v19, 0LL);
  }
  if ( v25 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v35);
  return (unsigned int)v12;
}
