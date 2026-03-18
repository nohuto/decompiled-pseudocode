/*
 * XREFs of NtRenameKey @ 0x14090EF60
 * Callers:
 *     <none>
 * Callees:
 *     CmSiFreeMemory @ 0x140208AC0 (CmSiFreeMemory.c)
 *     CmCleanupThreadInfo @ 0x14022EA30 (CmCleanupThreadInfo.c)
 *     CmDoVirtualTest @ 0x14023BD3C (CmDoVirtualTest.c)
 *     CmpIsRegistryLockAcquired @ 0x1402ACD00 (CmpIsRegistryLockAcquired.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     ObfDereferenceObject @ 0x1402AD3E0 (ObfDereferenceObject.c)
 *     KeEnterCriticalRegion @ 0x1403468F0 (KeEnterCriticalRegion.c)
 *     CmpInitializeThreadInfo @ 0x140347770 (CmpInitializeThreadInfo.c)
 *     CmpAllocateTransientPoolWithQuotaTag @ 0x140367AF0 (CmpAllocateTransientPoolWithQuotaTag.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     memmove @ 0x140435B40 (memmove.c)
 *     CmpDoesBufferRequireCapturing @ 0x140720224 (CmpDoesBufferRequireCapturing.c)
 *     SeCaptureSubjectContext @ 0x14072A600 (SeCaptureSubjectContext.c)
 *     CmPostCallbackNotification @ 0x1407C04B4 (CmPostCallbackNotification.c)
 *     CmpCallCallBacks @ 0x1407C0568 (CmpCallCallBacks.c)
 *     SeReleaseSubjectContext @ 0x1407CA9B0 (SeReleaseSubjectContext.c)
 *     CmRenameKey @ 0x140912608 (CmRenameKey.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x140915D20 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14091607C (CmKeyBodyReplicateToVirtual.c)
 *     ExRaiseDatatypeMisalignment @ 0x140A02210 (ExRaiseDatatypeMisalignment.c)
 *     CmpReleaseShutdownRundown @ 0x140AB42A0 (CmpReleaseShutdownRundown.c)
 *     CmpAttachToRegistryProcess @ 0x140AB4550 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140AB4580 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByHandle @ 0x140AB4630 (CmObReferenceObjectByHandle.c)
 *     CmpAcquireShutdownRundown @ 0x140AB46D0 (CmpAcquireShutdownRundown.c)
 */

__int64 __fastcall NtRenameKey(__int64 a1, _OWORD *a2)
{
  char v3; // r13
  int PreviousMode; // r12d
  char v5; // r15
  char v6; // r14
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  unsigned __int64 v10; // rdx
  __int64 v11; // r8
  signed int v12; // ebx
  char v13; // si
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  unsigned __int16 v16; // bx
  PPRIVILEGE_SET v17; // rsi
  __int64 v18; // rcx
  int v19; // r9d
  unsigned int v20; // eax
  int v21; // esi
  int v22; // r9d
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // r8
  PVOID v26; // rcx
  char v28; // [rsp+33h] [rbp-135h]
  PVOID Object; // [rsp+38h] [rbp-130h] BYREF
  void *Src[2]; // [rsp+40h] [rbp-128h] BYREF
  int v31; // [rsp+50h] [rbp-118h] BYREF
  int v32; // [rsp+54h] [rbp-114h]
  PPRIVILEGE_SET Privileges; // [rsp+58h] [rbp-110h]
  _QWORD v34[2]; // [rsp+60h] [rbp-108h] BYREF
  int v35; // [rsp+70h] [rbp-F8h]
  __int64 v36; // [rsp+78h] [rbp-F0h]
  __int128 v37; // [rsp+80h] [rbp-E8h]
  __int128 v38; // [rsp+90h] [rbp-D8h] BYREF
  struct _SECURITY_SUBJECT_CONTEXT SubjectContext; // [rsp+A0h] [rbp-C8h] BYREF
  _OWORD v40[2]; // [rsp+C0h] [rbp-A8h] BYREF
  __int64 v41; // [rsp+E0h] [rbp-88h]
  __int128 v42; // [rsp+F0h] [rbp-78h] BYREF
  _BYTE v43[48]; // [rsp+100h] [rbp-68h] BYREF

  v36 = a1;
  v38 = 0LL;
  *(_OWORD *)Src = 0LL;
  memset(v43, 0, sizeof(v43));
  CmpInitializeThreadInfo((__int64)&v38);
  v3 = 0;
  Object = 0LL;
  Privileges = 0LL;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v5 = 0;
  memset(v40, 0, sizeof(v40));
  v41 = 0LL;
  v35 = -1;
  v34[1] = v34;
  v34[0] = v34;
  v31 = 0;
  v6 = 0;
  memset(&SubjectContext, 0, sizeof(SubjectContext));
  v28 = CmpAcquireShutdownRundown(v8, v7, v9);
  if ( !v28 )
  {
    v12 = -1073741431;
    v13 = 0;
    goto LABEL_42;
  }
  v11 = 1LL;
  if ( (_BYTE)PreviousMode == 1 )
  {
    v37 = 0LL;
    v14 = 0x7FFFFFFF0000LL;
    if ( (unsigned __int64)a2 < 0x7FFFFFFF0000LL )
      v14 = (__int64)a2;
    v10 = *(unsigned int *)v14;
    LODWORD(v37) = v10;
    v15 = *(_QWORD *)(v14 + 8);
    *((_QWORD *)&v37 + 1) = v15;
    *(_OWORD *)Src = v37;
    if ( (_WORD)v10 )
    {
      if ( (v15 & 1) != 0 )
        ExRaiseDatatypeMisalignment();
      v10 = v15 + (unsigned __int16)v10;
      if ( v10 > 0x7FFFFFFF0000LL || v10 < v15 )
        MEMORY[0x7FFFFFFF0000] = 0;
    }
  }
  else
  {
    *(_OWORD *)Src = *a2;
  }
  v16 = (unsigned __int16)Src[0];
  if ( (unsigned __int16)(LOWORD(Src[0]) - 1) > 0x1FFu
    || ((__int64)Src[0] & 1) != 0
    || (v17 = (PPRIVILEGE_SET)Src[1], !*(_WORD *)Src[1]) )
  {
    v12 = -1073741811;
    v32 = -1073741811;
    v13 = 0;
    goto LABEL_42;
  }
  if ( CmpDoesBufferRequireCapturing(PreviousMode, (__int64)Src[1]) )
  {
    Privileges = (PPRIVILEGE_SET)CmpAllocateTransientPoolWithQuotaTag(v18, LOWORD(Src[0]), 0x426E4D43u);
    if ( !Privileges )
    {
      v12 = -1073741670;
      v32 = -1073741670;
      v13 = 0;
      goto LABEL_42;
    }
    v17 = Privileges;
    memmove(Privileges, Src[1], LOWORD(Src[0]));
    Src[1] = Privileges;
    v16 = (unsigned __int16)Src[0];
    WORD1(Src[0]) = Src[0];
  }
  v20 = 0;
  if ( v16 >> 1 )
  {
    while ( LOWORD(v17->PrivilegeCount) != 92 )
    {
      ++v20;
      v17 = (PPRIVILEGE_SET)((char *)v17 + 2);
      if ( v20 >= v16 >> 1 )
        goto LABEL_22;
    }
    v12 = -1073741811;
    goto LABEL_26;
  }
LABEL_22:
  LOBYTE(v19) = PreviousMode;
  v21 = v36;
  v12 = CmObReferenceObjectByHandle(v36, 131078, v11, v19, (__int64)&Object, 0LL);
  if ( v12 == -1073741790 )
  {
    SeCaptureSubjectContext(&SubjectContext);
    v6 = 1;
    if ( !CmDoVirtualTest((__int64)&SubjectContext, (__int64)&v31) )
      goto LABEL_24;
    LOBYTE(v22) = PreviousMode;
    v12 = CmObReferenceObjectByHandle(v21, 131097, v11, v22, (__int64)&Object, 0LL);
    if ( v12 < 0 )
      goto LABEL_26;
    if ( !(unsigned __int8)CmKeyBodyNeedsVirtualImage(Object) )
    {
LABEL_24:
      v12 = -1073741790;
LABEL_26:
      v13 = 0;
      goto LABEL_42;
    }
    v5 = 1;
  }
  v6 = v5;
  if ( v12 < 0 )
    goto LABEL_26;
  KeEnterCriticalRegion();
  v13 = 1;
  if ( CmpCallBackCount && !CmpIsRegistryLockAcquired() )
  {
    *(_QWORD *)&v40[0] = Object;
    *((_QWORD *)&v40[0] + 1) = Src;
    v24 = CmpCallCallBacks(4u, (__int64)v40, v23, 0x13u, (__int64)Object, (__int64)v34);
    v12 = v24;
    if ( v24 < 0 )
    {
      if ( v24 == -1073740541 )
        v12 = 0;
      goto LABEL_42;
    }
    v3 = 1;
  }
  if ( !v5
    || (LOBYTE(v10) = PreviousMode,
        v12 = CmKeyBodyReplicateToVirtual(&Object, v10, 131078LL, &SubjectContext, &v31),
        v12 >= 0) )
  {
    CmpAttachToRegistryProcess(v43);
    v42 = *(_OWORD *)Src;
    LOBYTE(v25) = PreviousMode;
    v12 = CmRenameKey(Object, &v42, v25);
    CmpDetachFromRegistryProcess(v43);
    v6 = v5;
  }
LABEL_42:
  if ( v6 )
    SeReleaseSubjectContext(&SubjectContext);
  if ( v3 )
    v12 = CmPostCallbackNotification(0x13u, (__int64)Object, v12, (__int64)v40, v34);
  if ( v13 )
    KeLeaveCriticalRegion();
  v26 = Object;
  if ( Object )
    ObfDereferenceObject(Object);
  if ( Privileges )
    CmSiFreeMemory(Privileges);
  if ( v28 )
    CmpReleaseShutdownRundown(v26, v10, v11);
  CmCleanupThreadInfo((__int64 *)&v38);
  return (unsigned int)v12;
}
