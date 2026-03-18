/*
 * XREFs of IovpCallDriver1 @ 0x140A8B840
 * Callers:
 *     VfBeforeCallDriver @ 0x140A8CC6C (VfBeforeCallDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402AC540 (ObfDereferenceObjectWithTag.c)
 *     MdlInvariantPreProcessing1 @ 0x1405FF390 (MdlInvariantPreProcessing1.c)
 *     ViErrorReport1 @ 0x1405FFB44 (ViErrorReport1.c)
 *     IovpAdvanceStackDownwards @ 0x140A8B6B8 (IovpAdvanceStackDownwards.c)
 *     IovpExamineDevObjForwarding @ 0x140A8C69C (IovpExamineDevObjForwarding.c)
 *     IovpExamineIrpStackForwarding @ 0x140A8C740 (IovpExamineIrpStackForwarding.c)
 *     VfGetPristineDispatchRoutine @ 0x140A8C89C (VfGetPristineDispatchRoutine.c)
 *     VfPendingFinishLogging @ 0x140A90EA0 (VfPendingFinishLogging.c)
 *     VfPendingShouldForce @ 0x140A910FC (VfPendingShouldForce.c)
 *     VfPendingStartLogging @ 0x140A9120C (VfPendingStartLogging.c)
 *     VfDevObjMarkDeviceRemoved @ 0x140A91728 (VfDevObjMarkDeviceRemoved.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x140A92010 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x140A92074 (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x140A92124 (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsInFdoStack @ 0x140A92178 (IovUtilIsInFdoStack.c)
 *     VfMajorIsNewRequest @ 0x140A925E8 (VfMajorIsNewRequest.c)
 *     VfMajorVerifyIrpStackDownward @ 0x140A92860 (VfMajorVerifyIrpStackDownward.c)
 *     VfMajorVerifyNewIrp @ 0x140A929F0 (VfMajorVerifyNewIrp.c)
 *     VfMajorVerifyNewRequest @ 0x140A92AA0 (VfMajorVerifyNewRequest.c)
 *     VfIrpLogRecordEvent @ 0x140A9B888 (VfIrpLogRecordEvent.c)
 *     VfPacketCreateAndLock @ 0x140A9BFC0 (VfPacketCreateAndLock.c)
 *     IovpSessionDataCreate @ 0x140A9CDF4 (IovpSessionDataCreate.c)
 *     IovpSessionDataReference @ 0x140A9CF68 (IovpSessionDataReference.c)
 *     ViWdBeforeCallDriver @ 0x140A9D128 (ViWdBeforeCallDriver.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x140AA5A48 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x140AA5BCC (VfIrpDatabaseEntryReleaseLock.c)
 */

int __fastcall IovpCallDriver1(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // r13
  __int64 v7; // r14
  int v8; // eax
  int v9; // ecx
  unsigned __int8 *v10; // r12
  int v11; // r9d
  int ShouldForce; // eax
  __int64 v13; // rcx
  unsigned int v14; // edx
  PVOID v15; // rdi
  int v16; // eax
  int v17; // eax
  __int64 v18; // rbx
  void *BottomDeviceObjectWithTag; // rdi
  int v20; // eax
  __int64 v21; // rdi
  int v22; // r8d
  int IsNewRequest; // eax
  char v24; // dl
  int v25; // eax
  __int64 v26; // rdi
  bool v27; // zf
  _QWORD *v28; // rbx
  void *LowerDeviceObjectWithTag; // rax
  _QWORD *v30; // r8
  _QWORD *v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  void *v34; // rax
  __int64 v35; // rcx
  char v36; // al
  const void *v38; // [rsp+28h] [rbp-50h]
  __int64 v39; // [rsp+40h] [rbp-38h] BYREF
  __int64 v40; // [rsp+48h] [rbp-30h]
  __int64 v41; // [rsp+50h] [rbp-28h] BYREF
  PVOID Object; // [rsp+58h] [rbp-20h]
  __int64 started; // [rsp+60h] [rbp-18h]
  int v44; // [rsp+C0h] [rbp+48h]
  int v45; // [rsp+C8h] [rbp+50h] BYREF
  int v46; // [rsp+D0h] [rbp+58h]
  const void *v47; // [rsp+D8h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 168);
  v41 = 0LL;
  v39 = 0LL;
  v45 = 0;
  CurrentIrql = KeGetCurrentIrql();
  LODWORD(v4) = *(_DWORD *)(v1 + 16) & 0xC0000000;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 0x40000000 )
      return v4;
    v4 = VfIrpDatabaseEntryFindAndLock(v1);
    v6 = v4;
    v7 = v4;
    if ( !v4 )
      return v4;
  }
  else
  {
    v7 = VfIrpDatabaseEntryFindAndLock(v1);
    v6 = v7;
    if ( v7 )
    {
      *(_DWORD *)(v1 + 16) |= 0x40000000u;
    }
    else
    {
      v6 = VfPacketCreateAndLock(v1);
      v7 = v6;
      v8 = *(_DWORD *)(v1 + 16);
      if ( !v6 )
      {
        LODWORD(v4) = v8 | 0x80000000;
        *(_DWORD *)(v1 + 16) = v4;
        return v4;
      }
      *(_DWORD *)(v1 + 16) = v8 | 0x40000000;
    }
  }
  v9 = *(_DWORD *)(v7 + 232);
  *(_BYTE *)(v7 + 61) = CurrentIrql;
  LOBYTE(v5) = CurrentIrql;
  *(_BYTE *)(v7 + 60) = CurrentIrql;
  v38 = *(const void **)(a1 + 176);
  v10 = (unsigned __int8 *)(*(_QWORD *)(v1 + 184) - 72LL);
  v11 = *(_DWORD *)(v1 + 184) - 72;
  started = 0LL;
  v47 = v38;
  ShouldForce = VfPendingShouldForce(v9, v5, v1, v11, v7, (__int64)v38);
  v13 = *(_QWORD *)(v7 + 240);
  v14 = ShouldForce;
  v15 = *(PVOID *)(a1 + 160);
  v46 = ShouldForce;
  v40 = v13;
  Object = v15;
  if ( v13 || (v16 = *(_DWORD *)(v7 + 56), (v16 & 1) != 0) )
  {
    v17 = 0;
    v44 = 0;
  }
  else
  {
    v44 = 1;
    *(_DWORD *)(v7 + 56) = v16 | 1;
    v13 = IovpSessionDataCreate(v15, v7, v14);
    v40 = v13;
    v17 = 1;
  }
  *(_QWORD *)a1 = v13;
  *(_QWORD *)(a1 + 16) = v7;
  if ( v13 )
  {
    v18 = MEMORY[0xFFFFF78000000014];
    if ( v17 )
    {
      BottomDeviceObjectWithTag = (void *)IovUtilGetBottomDeviceObjectWithTag(v15);
      VfIrpLogRecordEvent(*(unsigned int *)(v7 + 232), BottomDeviceObjectWithTag, v1);
      ObfDereferenceObjectWithTag(BottomDeviceObjectWithTag, 0x49667256u);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
      ++*(_DWORD *)(v7 + 24);
      IovpSessionDataReference(v40);
      v15 = Object;
    }
    if ( *(_QWORD *)(v1 + 104) )
    {
      ViErrorReport1(0x203u, v47, (const void *)v1);
      *(_QWORD *)(v1 + 104) = 0LL;
    }
    if ( (*(_DWORD *)(v7 + 56) & 0x10) != 0 )
      ViErrorReport1(0x205u, v47, (const void *)v1);
    if ( *(_BYTE *)(v1 + 67) <= *(_BYTE *)(v1 + 66)
      && (unsigned __int8)(*v10 - 3) <= 1u
      && *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL)
      && (MmVerifierData & 0x6000) != 0 )
    {
      MdlInvariantPreProcessing1(a1, v7, (__int64)v10);
    }
    v20 = IovpExamineDevObjForwarding(v15, *(_QWORD *)(v40 + 48));
    v21 = v40;
    *(_DWORD *)(v40 + 56) = v20;
    IovpExamineIrpStackForwarding(v7, v44, v22, v1, (__int64)v47, (__int64)v10, (__int64)&v39, (__int64)&v45);
    if ( v46 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
      ++*(_DWORD *)(v7 + 24);
      *(_QWORD *)(v7 + 216) = v10;
      started = VfPendingStartLogging(v1);
    }
    IsNewRequest = VfMajorIsNewRequest(v39, v10);
    v24 = *(_BYTE *)(v1 + 67);
    v46 = IsNewRequest;
    v25 = IovpAdvanceStackDownwards(v21 + 80, v24, (__int64)v10, v39, v45, IsNewRequest, 1, &v41);
    v26 = v41;
    *(_QWORD *)(v41 + 48) = v18;
    if ( !v25 )
    {
      *(_DWORD *)(a1 + 24) |= 0x4000000u;
      v27 = v46 == 0;
      *(_QWORD *)(a1 + 40) = a1 + 32;
      *(_QWORD *)(a1 + 32) = a1 + 32;
      *(_QWORD *)(v26 + 56) = v18;
      v26 = v41;
      *(_QWORD *)(v41 + 112) = KeGetCurrentThread();
      if ( !v27 )
      {
        *(_OWORD *)(v26 + 80) = *(_OWORD *)(v1 + 48);
        *(_OWORD *)(v26 + 96) = *(_OWORD *)(v1 + 48);
        if ( v44 )
          *(_DWORD *)(v26 + 4) |= 0x8000000u;
      }
    }
    v28 = Object;
    LowerDeviceObjectWithTag = (void *)IovUtilGetLowerDeviceObjectWithTag(Object);
    if ( LowerDeviceObjectWithTag )
      ObfDereferenceObjectWithTag(LowerDeviceObjectWithTag, 0x49667256u);
    else
      *(_DWORD *)(v26 + 4) |= 0x10000000u;
    *(_QWORD *)(v26 + 40) = VfGetPristineDispatchRoutine(v28[1], *v10);
    v30 = (_QWORD *)(a1 + 32);
    *(_DWORD *)(v26 + 4) &= ~0x40000000u;
    v31 = (_QWORD *)(v26 + 16);
    v32 = *(_QWORD *)(v26 + 16);
    if ( *(_QWORD *)(v32 + 8) != v26 + 16 )
      __fastfail(3u);
    *v30 = v32;
    *(_QWORD *)(a1 + 40) = v31;
    *(_QWORD *)(v32 + 8) = v30;
    *v31 = v30;
    *(_QWORD *)(a1 + 8) = v26;
    *(_QWORD *)(a1 + 72) = v1;
    v33 = *(_QWORD *)(v1 + 184);
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(v33 - 72);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(v33 - 56);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(v33 - 40);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(v33 - 24);
    *(_QWORD *)(a1 + 144) = *(_QWORD *)(v33 - 8);
    if ( (v10[3] & 1) != 0 )
      *(_DWORD *)(a1 + 24) |= 0x1000000u;
    if ( *v10 == 27 && v10[1] == 2 )
    {
      *(_DWORD *)(a1 + 24) |= 0x20000000u;
      v34 = (void *)IovUtilGetBottomDeviceObjectWithTag(v28);
      *(_QWORD *)(a1 + 64) = v34;
      ObfDereferenceObjectWithTag(v34, 0x49667256u);
      if ( (unsigned int)IovUtilIsInFdoStack(v28) && !(unsigned int)IovUtilIsDeviceObjectMarked(v28, 3LL) )
        *(_DWORD *)(a1 + 24) |= 0x10000000u;
      VfDevObjMarkDeviceRemoved(v28);
    }
    if ( v44 )
      VfMajorVerifyNewIrp(v7, v1, (_DWORD)v10, v26, (__int64)v47);
    if ( v46 && (*(_DWORD *)(v7 + 56) & 0x80000) == 0 )
      VfMajorVerifyNewRequest(v7, (_DWORD)v28, v39, (_DWORD)v10, v26, (__int64)v47);
    VfMajorVerifyIrpStackDownward(v7, (_DWORD)v28, v39, (_DWORD)v10, v26, (__int64)v47);
    v35 = v40;
    *(_QWORD *)(v40 + 48) = v28;
    *(_BYTE *)(v7 + 186) = *(_BYTE *)(v1 + 67);
    *(_OWORD *)(*(_QWORD *)(v26 + 8) + 96LL) = *(_OWORD *)(v1 + 48);
    v36 = *(_BYTE *)(v1 + 67);
    if ( v36 > 2 )
    {
      *(_QWORD *)(v1 + 184) -= 72LL;
      *(_BYTE *)(v1 + 67) = v36 - 1;
      *(_BYTE *)(*(_QWORD *)(v1 + 184) - 69LL) |= 0x10u;
      ++*(_BYTE *)(v1 + 67);
      *(_QWORD *)(v1 + 184) += 72LL;
    }
    IovpSessionDataReference(v35);
    _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
    if ( VfWdCancelTimeoutTicks )
      ViWdBeforeCallDriver(v1, *(_QWORD *)(a1 + 48), v7 + 248);
  }
  VfIrpDatabaseEntryReleaseLock(v7);
  LODWORD(v4) = started;
  if ( started )
    LODWORD(v4) = VfPendingFinishLogging(started);
  return v4;
}
