/*
 * XREFs of NtSetInformationKey @ 0x1407C0160
 * Callers:
 *     <none>
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmDoVirtualTest @ 0x14023BD3C (CmDoVirtualTest.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     ObReferenceObjectByHandle @ 0x140732D00 (ObReferenceObjectByHandle.c)
 *     CmPostCallbackNotification @ 0x1407C04B4 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1407C0568 (CmpCallCallBacks.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     CmSetKeyFlags @ 0x140913964 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140913E28 (CmSetLastWriteTimeKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140915D20 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14091607C (CmKeyBodyReplicateToVirtual.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtSetInformationKey(void *a1, int a2, const void *a3, int a4)
{
  char v6; // r13
  _QWORD *v7; // rdi
  char v8; // r12
  char v9; // r15
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  KPROCESSOR_MODE PreviousMode; // di
  unsigned __int64 v15; // rdx
  ACCESS_MASK v16; // edx
  NTSTATUS v17; // ebx
  struct _KTHREAD *CurrentThread; // rax
  int v19; // r8d
  char v20; // r14
  __int64 v21; // r12
  KPROCESSOR_MODE v23; // r9
  KPROCESSOR_MODE v24; // r9
  int v25; // r14d
  int v26; // r14d
  int v27; // r14d
  __int64 v28; // r8
  __int64 v29; // rdx
  NTSTATUS v30; // eax
  char v31; // [rsp+40h] [rbp-128h]
  unsigned __int8 v32; // [rsp+41h] [rbp-127h]
  PVOID Object; // [rsp+48h] [rbp-120h] BYREF
  char v34; // [rsp+53h] [rbp-115h]
  __int64 v35; // [rsp+58h] [rbp-110h]
  HANDLE Handle; // [rsp+60h] [rbp-108h] BYREF
  __int64 v37; // [rsp+68h] [rbp-100h] BYREF
  int v38; // [rsp+70h] [rbp-F8h]
  int v39; // [rsp+74h] [rbp-F4h] BYREF
  _QWORD v40[2]; // [rsp+78h] [rbp-F0h] BYREF
  int v41; // [rsp+88h] [rbp-E0h]
  __int128 v42; // [rsp+98h] [rbp-D0h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A8h] [rbp-C0h] BYREF
  __int128 v44; // [rsp+C8h] [rbp-A0h] BYREF
  __int128 v45; // [rsp+D8h] [rbp-90h]
  __int128 v46; // [rsp+E8h] [rbp-80h]
  __int64 v47; // [rsp+F8h] [rbp-70h]
  _OWORD v48[2]; // [rsp+100h] [rbp-68h] BYREF

  v38 = a4;
  Handle = a1;
  v42 = 0LL;
  v41 = 0;
  v37 = 0LL;
  memset(v48, 0, sizeof(v48));
  v35 = 0LL;
  if ( CmpTraceRoutine )
    EtwGetKernelTraceTimestamp((unsigned __int64)v48, 0x20000uLL);
  v6 = 0;
  v7 = 0LL;
  Object = 0LL;
  v8 = 0;
  v44 = 0LL;
  v45 = 0LL;
  v46 = 0LL;
  v47 = 0LL;
  v40[1] = v40;
  v40[0] = v40;
  CmpInitializeThreadInfo((__int64)&v42);
  v39 = 0;
  v9 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v34 = CmpAcquireShutdownRundown(v11, v10, v12);
  if ( !v34 )
  {
    v17 = -1073741431;
    goto LABEL_42;
  }
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v32 = PreviousMode;
  if ( a2 == 5 )
    goto LABEL_5;
  if ( a2 )
  {
    if ( a2 != 1 )
    {
      if ( a2 == 2 || (v13 = (unsigned int)(a2 - 3), a2 == 3) )
      {
LABEL_5:
        v31 = 0;
LABEL_6:
        v13 = 4LL;
        goto LABEL_7;
      }
      if ( a2 != 4 )
      {
        if ( CmpTraceRoutine
          && (v13 = (__int64)Handle) != 0
          && (v23 = KeGetCurrentThread()->PreviousMode,
              Handle = 0LL,
              ObReferenceObjectByHandle((HANDLE)v13, 0, (POBJECT_TYPE)CmKeyObjectType, v23, &Handle, 0LL) >= 0) )
        {
          v21 = *((_QWORD *)Handle + 1);
          ObfDereferenceObject(Handle);
        }
        else
        {
          v21 = 0LL;
        }
        v17 = -1073741821;
        v7 = Object;
        v20 = 0;
        goto LABEL_27;
      }
    }
    v31 = 1;
    goto LABEL_6;
  }
  v13 = 8LL;
  v31 = 1;
LABEL_7:
  if ( v38 != (_DWORD)v13 )
  {
    if ( CmpTraceRoutine
      && (v13 = (__int64)Handle) != 0
      && (v24 = KeGetCurrentThread()->PreviousMode,
          Handle = 0LL,
          ObReferenceObjectByHandle((HANDLE)v13, 0, (POBJECT_TYPE)CmKeyObjectType, v24, &Handle, 0LL) >= 0) )
    {
      v21 = *((_QWORD *)Handle + 1);
      ObfDereferenceObject(Handle);
    }
    else
    {
      v21 = 0LL;
    }
    v17 = -1073741820;
    v7 = Object;
    v20 = 0;
    goto LABEL_27;
  }
  if ( PreviousMode )
  {
    v15 = (unsigned __int64)a3 + (unsigned int)v13;
    if ( v15 > 0x7FFFFFFF0000LL || v15 < (unsigned __int64)a3 )
      MEMORY[0x7FFFFFFF0000] = 0;
  }
  memmove(&v37, a3, (unsigned int)v13);
  if ( a2 == 5 )
    v16 = 0;
  else
    v16 = 2;
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(Handle, v16, (POBJECT_TYPE)CmKeyObjectType, PreviousMode, &Object, 0LL);
  v7 = Object;
  if ( v17 != -1073741790 )
  {
LABEL_15:
    v9 = v8;
    if ( v17 >= 0 )
    {
      if ( CmpTraceRoutine && v7 )
        v35 = v7[1];
      if ( a2 != 5 )
      {
        v13 = v7[1];
        if ( (*(_DWORD *)(v13 + 8) & 0x80u) != 0 )
        {
          v17 = -1073741790;
          v20 = 0;
          goto LABEL_26;
        }
        if ( (*(_DWORD *)(*(_QWORD *)(v13 + 32) + 160LL) & 0x100000) != 0 )
        {
          v17 = -1073741790;
          v20 = 0;
          goto LABEL_26;
        }
      }
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->KernelApcDisable;
      if ( !CmpCallBackCount || CmpIsRegistryLockAcquired() )
      {
        v7 = Object;
      }
      else
      {
        v7 = Object;
        *(_QWORD *)&v44 = Object;
        DWORD2(v44) = a2;
        *(_QWORD *)&v45 = &v37;
        DWORD2(v45) = v38;
        v17 = CmpCallCallBacks(3, (unsigned int)&v44, v19, 18, (__int64)Object, (__int64)v40);
        if ( v17 < 0 )
        {
          if ( v17 == -1073740541 )
            v17 = 0;
          goto LABEL_25;
        }
        v6 = 1;
      }
      if ( !v8 || (v17 = CmKeyBodyReplicateToVirtual(&Object, v32, 2LL, &SubjectContext, &v39), v7 = Object, v17 >= 0) )
      {
        v9 = v8;
        if ( a2 != 5 )
        {
          if ( a2 )
          {
            v25 = a2 - 1;
            if ( v25 )
            {
              v26 = v25 - 1;
              if ( v26 )
              {
                v27 = v26 - 1;
                if ( v27 )
                {
                  if ( v27 != 1 )
                    goto LABEL_25;
                  v28 = (unsigned int)v37;
                  v29 = 4LL;
                }
                else
                {
                  v28 = (unsigned int)v37;
                  v29 = 3LL;
                }
              }
              else
              {
                v28 = (unsigned int)v37;
                v29 = 2LL;
              }
            }
            else
            {
              v28 = (unsigned int)v37;
              v29 = 1LL;
            }
            v30 = CmSetKeyFlags(v7, v29, v28);
          }
          else
          {
            v30 = CmSetLastWriteTimeKey(v7, &v37);
          }
          v17 = v30;
          goto LABEL_25;
        }
        *((_WORD *)v7 + 25) = v37;
        v17 = 0;
      }
LABEL_25:
      v20 = 1;
LABEL_26:
      v21 = v35;
      goto LABEL_27;
    }
    goto LABEL_42;
  }
  if ( !v31 )
  {
    v17 = -1073741790;
    v20 = 0;
    v21 = 0LL;
    goto LABEL_27;
  }
  SeCaptureSubjectContext(&SubjectContext);
  v9 = 1;
  if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v39) )
  {
    v17 = -1073741790;
    v20 = 0;
    v21 = 0LL;
    goto LABEL_27;
  }
  Object = 0LL;
  v17 = ObReferenceObjectByHandle(Handle, 0x20019u, (POBJECT_TYPE)CmKeyObjectType, v32, &Object, 0LL);
  v7 = Object;
  if ( v17 < 0 )
  {
LABEL_42:
    v20 = 0;
    v21 = 0LL;
    goto LABEL_27;
  }
  if ( (unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
  {
    v17 = 0;
    v8 = 1;
    goto LABEL_15;
  }
  v17 = -1073741790;
  v20 = 0;
  v21 = 0LL;
LABEL_27:
  if ( v9 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v6 )
    v17 = CmPostCallbackNotification(18, (_DWORD)v7, v17, (unsigned int)&v44, (__int64)v40);
  if ( v20 )
    KeLeaveCriticalRegion();
  if ( v7 )
    ObfDereferenceObject(v7);
  if ( CmpTraceRoutine )
  {
    LOBYTE(v13) = 20;
    CmpTraceRoutine(v13, v48, (unsigned int)v17, 0LL, v21, 0LL);
  }
  if ( v34 )
    CmpReleaseShutdownRundown();
  CmCleanupThreadInfo((__int64 *)&v42);
  return (unsigned int)v17;
}
