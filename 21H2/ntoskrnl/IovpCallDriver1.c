/*
 * XREFs of IovpCallDriver1 @ 0x1409D0C4C
 * Callers:
 *     VfBeforeCallDriver @ 0x1409D2078 (VfBeforeCallDriver.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140355E90 (ObfDereferenceObjectWithTag.c)
 *     MdlInvariantPreProcessing1 @ 0x1405A19C8 (MdlInvariantPreProcessing1.c)
 *     ViErrorReport1 @ 0x1405A2148 (ViErrorReport1.c)
 *     IovpAdvanceStackDownwards @ 0x1409D0ADC (IovpAdvanceStackDownwards.c)
 *     IovpExamineDevObjForwarding @ 0x1409D1AD0 (IovpExamineDevObjForwarding.c)
 *     IovpExamineIrpStackForwarding @ 0x1409D1B74 (IovpExamineIrpStackForwarding.c)
 *     VfGetPristineDispatchRoutine @ 0x1409D1CCC (VfGetPristineDispatchRoutine.c)
 *     VfPendingFinishLogging @ 0x1409D6764 (VfPendingFinishLogging.c)
 *     VfPendingShouldForce @ 0x1409D69BC (VfPendingShouldForce.c)
 *     VfPendingStartLogging @ 0x1409D6AD0 (VfPendingStartLogging.c)
 *     VfDevObjMarkDeviceRemoved @ 0x1409D7048 (VfDevObjMarkDeviceRemoved.c)
 *     IovUtilGetBottomDeviceObjectWithTag @ 0x1409D7938 (IovUtilGetBottomDeviceObjectWithTag.c)
 *     IovUtilGetLowerDeviceObjectWithTag @ 0x1409D799C (IovUtilGetLowerDeviceObjectWithTag.c)
 *     IovUtilIsDeviceObjectMarked @ 0x1409D7A4C (IovUtilIsDeviceObjectMarked.c)
 *     IovUtilIsInFdoStack @ 0x1409D7AA0 (IovUtilIsInFdoStack.c)
 *     VfMajorIsNewRequest @ 0x1409D8A60 (VfMajorIsNewRequest.c)
 *     VfMajorVerifyIrpStackDownward @ 0x1409D8CF4 (VfMajorVerifyIrpStackDownward.c)
 *     VfMajorVerifyNewIrp @ 0x1409D8E84 (VfMajorVerifyNewIrp.c)
 *     VfMajorVerifyNewRequest @ 0x1409D8F34 (VfMajorVerifyNewRequest.c)
 *     VfIrpDatabaseEntryFindAndLock @ 0x1409E17A8 (VfIrpDatabaseEntryFindAndLock.c)
 *     VfIrpDatabaseEntryReleaseLock @ 0x1409E192C (VfIrpDatabaseEntryReleaseLock.c)
 *     ViWdBeforeCallDriver @ 0x1409E1D48 (ViWdBeforeCallDriver.c)
 *     IovpSessionDataCreate @ 0x1409E2820 (IovpSessionDataCreate.c)
 *     IovpSessionDataReference @ 0x1409E2998 (IovpSessionDataReference.c)
 *     VfPacketCreateAndLock @ 0x1409E29B8 (VfPacketCreateAndLock.c)
 *     VfIrpLogRecordEvent @ 0x1409E4898 (VfIrpLogRecordEvent.c)
 */

int __fastcall IovpCallDriver1(__int64 a1)
{
  __int64 v1; // rsi
  unsigned __int8 CurrentIrql; // bl
  __int64 v4; // rax
  int v5; // edx
  __int64 v6; // r14
  int v7; // eax
  int v8; // ecx
  unsigned __int8 *v9; // r12
  int v10; // r9d
  int ShouldForce; // eax
  __int64 v12; // rdi
  unsigned int v13; // ecx
  _QWORD *v14; // r13
  int v15; // eax
  int v16; // eax
  __int64 v17; // rbx
  void *BottomDeviceObjectWithTag; // rdi
  int v19; // r8d
  int IsNewRequest; // eax
  char v21; // dl
  int v22; // eax
  __int64 v23; // rdi
  bool v24; // zf
  void *LowerDeviceObjectWithTag; // rax
  _QWORD *v26; // r8
  _QWORD *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rax
  void *v30; // rax
  __int64 v31; // rbx
  __int64 v32; // rcx
  char v33; // al
  const void *v35; // [rsp+28h] [rbp-40h]
  __int64 v36; // [rsp+40h] [rbp-28h] BYREF
  __int64 v37; // [rsp+48h] [rbp-20h] BYREF
  __int64 v38; // [rsp+50h] [rbp-18h]
  __int64 started; // [rsp+58h] [rbp-10h]
  int v40; // [rsp+B0h] [rbp+48h]
  int v41; // [rsp+B8h] [rbp+50h] BYREF
  int v42; // [rsp+C0h] [rbp+58h]
  const void *v43; // [rsp+C8h] [rbp+60h]

  v1 = *(_QWORD *)(a1 + 168);
  v37 = 0LL;
  v36 = 0LL;
  v41 = 0;
  CurrentIrql = KeGetCurrentIrql();
  LODWORD(v4) = *(_DWORD *)(v1 + 16) & 0xC0000000;
  if ( (_DWORD)v4 )
  {
    if ( (_DWORD)v4 != 0x40000000 )
      return v4;
    v4 = VfIrpDatabaseEntryFindAndLock(v1);
    v6 = v4;
  }
  else
  {
    v4 = VfIrpDatabaseEntryFindAndLock(v1);
    v6 = v4;
    if ( v4 )
    {
      *(_DWORD *)(v1 + 16) |= 0x40000000u;
    }
    else
    {
      v6 = VfPacketCreateAndLock(v1);
      v7 = *(_DWORD *)(v1 + 16);
      if ( v6 )
        LODWORD(v4) = v7 | 0x40000000;
      else
        LODWORD(v4) = v7 | 0x80000000;
      *(_DWORD *)(v1 + 16) = v4;
    }
  }
  if ( v6 )
  {
    v8 = *(_DWORD *)(v6 + 232);
    *(_BYTE *)(v6 + 61) = CurrentIrql;
    LOBYTE(v5) = CurrentIrql;
    *(_BYTE *)(v6 + 60) = CurrentIrql;
    v35 = *(const void **)(a1 + 176);
    v9 = (unsigned __int8 *)(*(_QWORD *)(v1 + 184) - 72LL);
    v10 = *(_DWORD *)(v1 + 184) - 72;
    started = 0LL;
    v43 = v35;
    ShouldForce = VfPendingShouldForce(v8, v5, v1, v10, v6, (__int64)v35);
    v12 = *(_QWORD *)(v6 + 240);
    v13 = ShouldForce;
    v14 = *(_QWORD **)(a1 + 160);
    v42 = ShouldForce;
    v38 = v12;
    if ( v12 || (v15 = *(_DWORD *)(v6 + 56), (v15 & 1) != 0) )
    {
      v16 = 0;
      v40 = 0;
    }
    else
    {
      v40 = 1;
      *(_DWORD *)(v6 + 56) = v15 | 1;
      v12 = IovpSessionDataCreate(v14, v6, v13);
      v38 = v12;
      v16 = 1;
    }
    *(_QWORD *)a1 = v12;
    *(_QWORD *)(a1 + 16) = v6;
    if ( v12 )
    {
      v17 = MEMORY[0xFFFFF78000000014];
      if ( v16 )
      {
        BottomDeviceObjectWithTag = (void *)IovUtilGetBottomDeviceObjectWithTag(v14);
        VfIrpLogRecordEvent(*(unsigned int *)(v6 + 232), BottomDeviceObjectWithTag, v1);
        ObfDereferenceObjectWithTag(BottomDeviceObjectWithTag, 0x49667256u);
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
        v12 = v38;
        ++*(_DWORD *)(v6 + 24);
        IovpSessionDataReference(v12);
      }
      if ( *(_QWORD *)(v1 + 104) )
      {
        ViErrorReport1(0x203u, v43, (const void *)v1);
        *(_QWORD *)(v1 + 104) = 0LL;
      }
      if ( (*(_DWORD *)(v6 + 56) & 0x10) != 0 )
        ViErrorReport1(0x205u, v43, (const void *)v1);
      if ( *(_BYTE *)(v1 + 67) <= *(_BYTE *)(v1 + 66)
        && (unsigned __int8)(*v9 - 3) <= 1u
        && *(_QWORD *)(*(_QWORD *)(a1 + 168) + 8LL)
        && (MmVerifierData & 0x6000) != 0 )
      {
        MdlInvariantPreProcessing1(a1, v6, (__int64)v9);
      }
      *(_DWORD *)(v12 + 56) = IovpExamineDevObjForwarding(v14, *(_QWORD *)(v12 + 48));
      IovpExamineIrpStackForwarding(v6, v40, v19, v1, (__int64)v43, (__int64)v9, (__int64)&v36, (__int64)&v41);
      if ( v42 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
        ++*(_DWORD *)(v6 + 24);
        *(_QWORD *)(v6 + 216) = v9;
        started = VfPendingStartLogging(v1);
      }
      IsNewRequest = VfMajorIsNewRequest(v36, v9);
      v21 = *(_BYTE *)(v1 + 67);
      v42 = IsNewRequest;
      v22 = IovpAdvanceStackDownwards(v12 + 80, v21, (__int64)v9, v36, v41, IsNewRequest, 1, &v37);
      v23 = v37;
      *(_QWORD *)(v37 + 48) = v17;
      if ( !v22 )
      {
        *(_DWORD *)(a1 + 24) |= 0x4000000u;
        v24 = v42 == 0;
        *(_QWORD *)(a1 + 40) = a1 + 32;
        *(_QWORD *)(a1 + 32) = a1 + 32;
        *(_QWORD *)(v23 + 56) = v17;
        v23 = v37;
        *(_QWORD *)(v37 + 112) = KeGetCurrentThread();
        if ( !v24 )
        {
          *(_OWORD *)(v23 + 80) = *(_OWORD *)(v1 + 48);
          *(_OWORD *)(v23 + 96) = *(_OWORD *)(v1 + 48);
          if ( v40 )
            *(_DWORD *)(v23 + 4) |= 0x8000000u;
        }
      }
      LowerDeviceObjectWithTag = (void *)IovUtilGetLowerDeviceObjectWithTag(v14);
      if ( LowerDeviceObjectWithTag )
        ObfDereferenceObjectWithTag(LowerDeviceObjectWithTag, 0x49667256u);
      else
        *(_DWORD *)(v23 + 4) |= 0x10000000u;
      *(_QWORD *)(v23 + 40) = VfGetPristineDispatchRoutine(v14[1], *v9);
      v26 = (_QWORD *)(a1 + 32);
      *(_DWORD *)(v23 + 4) &= ~0x40000000u;
      v27 = (_QWORD *)(v23 + 16);
      v28 = *(_QWORD *)(v23 + 16);
      if ( *(_QWORD *)(v28 + 8) != v23 + 16 )
        __fastfail(3u);
      *v26 = v28;
      *(_QWORD *)(a1 + 40) = v27;
      *(_QWORD *)(v28 + 8) = v26;
      *v27 = v26;
      *(_QWORD *)(a1 + 8) = v23;
      *(_QWORD *)(a1 + 72) = v1;
      v29 = *(_QWORD *)(v1 + 184);
      *(_OWORD *)(a1 + 80) = *(_OWORD *)(v29 - 72);
      *(_OWORD *)(a1 + 96) = *(_OWORD *)(v29 - 56);
      *(_OWORD *)(a1 + 112) = *(_OWORD *)(v29 - 40);
      *(_OWORD *)(a1 + 128) = *(_OWORD *)(v29 - 24);
      *(_QWORD *)(a1 + 144) = *(_QWORD *)(v29 - 8);
      if ( (v9[3] & 1) != 0 )
        *(_DWORD *)(a1 + 24) |= 0x1000000u;
      if ( *v9 == 27 && v9[1] == 2 )
      {
        *(_DWORD *)(a1 + 24) |= 0x20000000u;
        v30 = (void *)IovUtilGetBottomDeviceObjectWithTag(v14);
        *(_QWORD *)(a1 + 64) = v30;
        ObfDereferenceObjectWithTag(v30, 0x49667256u);
        if ( (unsigned int)IovUtilIsInFdoStack(v14) && !(unsigned int)IovUtilIsDeviceObjectMarked(v14, 3LL) )
          *(_DWORD *)(a1 + 24) |= 0x10000000u;
        VfDevObjMarkDeviceRemoved(v14);
      }
      v31 = (__int64)v43;
      if ( v40 )
        VfMajorVerifyNewIrp(v6, v1, (_DWORD)v9, v23, (__int64)v43);
      if ( v42 && (*(_DWORD *)(v6 + 56) & 0x80000) == 0 )
        VfMajorVerifyNewRequest(v6, (_DWORD)v14, v36, (_DWORD)v9, v23, v31);
      VfMajorVerifyIrpStackDownward(v6, (_DWORD)v14, v36, (_DWORD)v9, v23, v31);
      v32 = v38;
      *(_QWORD *)(v38 + 48) = v14;
      *(_BYTE *)(v6 + 186) = *(_BYTE *)(v1 + 67);
      *(_OWORD *)(*(_QWORD *)(v23 + 8) + 96LL) = *(_OWORD *)(v1 + 48);
      v33 = *(_BYTE *)(v1 + 67);
      if ( v33 > 2 )
      {
        *(_QWORD *)(v1 + 184) -= 72LL;
        *(_BYTE *)(v1 + 67) = v33 - 1;
        *(_BYTE *)(*(_QWORD *)(v1 + 184) - 69LL) |= 0x10u;
        ++*(_BYTE *)(v1 + 67);
        *(_QWORD *)(v1 + 184) += 72LL;
      }
      IovpSessionDataReference(v32);
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 20));
      if ( VfWdCancelTimeoutTicks )
        ViWdBeforeCallDriver(v1, *(_QWORD *)(a1 + 48), v6 + 248);
    }
    VfIrpDatabaseEntryReleaseLock(v6);
    LODWORD(v4) = started;
    if ( started )
      LODWORD(v4) = VfPendingFinishLogging(started);
  }
  return v4;
}
