/*
 * XREFs of ExpNtUpdateWnfStateData @ 0x140793B84
 * Callers:
 *     PfSnPowerBoostUpdate @ 0x1406E191C (PfSnPowerBoostUpdate.c)
 *     NtUpdateWnfStateData @ 0x1407934D0 (NtUpdateWnfStateData.c)
 *     ExWnfCrossVmCallback @ 0x140A01DB0 (ExWnfCrossVmCallback.c)
 * Callees:
 *     ExfAcquirePushLockSharedEx @ 0x14029F350 (ExfAcquirePushLockSharedEx.c)
 *     ExReleaseRundownProtection @ 0x1402AD030 (ExReleaseRundownProtection.c)
 *     KeLeaveCriticalRegion @ 0x1402AD060 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfReleasePushLockShared @ 0x140359E40 (ExfReleasePushLockShared.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     ExpWnfCreateNameInstance @ 0x14066FED4 (ExpWnfCreateNameInstance.c)
 *     ExpCrossVmWnfPush @ 0x1406E7820 (ExpCrossVmWnfPush.c)
 *     ExpWnfLookupPermanentName @ 0x14075A12C (ExpWnfLookupPermanentName.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x14075ADF8 (ExpWnfCheckCrossScopeAccess.c)
 *     ExpWnfWriteStateData @ 0x14079350C (ExpWnfWriteStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1407938B0 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfValidatePubSubPreconditions @ 0x1407945D4 (ExpWnfValidatePubSubPreconditions.c)
 *     ExpWnfReleaseCapturedScopeInstanceId @ 0x1407946F8 (ExpWnfReleaseCapturedScopeInstanceId.c)
 *     ExpCaptureWnfStateName @ 0x14079474C (ExpCaptureWnfStateName.c)
 *     ExpWnfCaptureScopeInstanceId @ 0x1407947BC (ExpWnfCaptureScopeInstanceId.c)
 *     ExpWnfLookupNameInstance @ 0x140798234 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140798334 (ExpWnfResolveScopeInstance.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 */

__int64 __fastcall ExpNtUpdateWnfStateData(
        __int64 a1,
        const void *a2,
        __int64 a3,
        __int128 *a4,
        __int64 a5,
        int a6,
        int a7,
        int a8)
{
  struct _KTHREAD *CurrentThread; // rax
  char PreviousMode; // r12
  unsigned __int64 v10; // r14
  int v11; // esi
  __int64 v12; // r8
  unsigned __int64 v13; // r9
  __int64 v14; // r10
  unsigned __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rcx
  struct _KTHREAD *v18; // rbx
  struct _KPROCESS *Process; // r15
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r13
  int v22; // eax
  unsigned int v23; // ebx
  __int64 v24; // r8
  PVOID v26; // r15
  struct _EX_RUNDOWN_REF *v27; // rbx
  __int64 v28; // rsi
  unsigned __int64 Count; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  int v32; // [rsp+38h] [rbp-E0h]
  int v33; // [rsp+3Ch] [rbp-DCh]
  struct _EX_RUNDOWN_REF *v34; // [rsp+40h] [rbp-D8h] BYREF
  int v35; // [rsp+48h] [rbp-D0h]
  unsigned __int64 v36; // [rsp+50h] [rbp-C8h] BYREF
  PVOID P; // [rsp+58h] [rbp-C0h] BYREF
  int v38; // [rsp+60h] [rbp-B8h]
  PSID Sid; // [rsp+68h] [rbp-B0h] BYREF
  __int128 *v40; // [rsp+70h] [rbp-A8h]
  int v41[2]; // [rsp+78h] [rbp-A0h] BYREF
  const void *v42; // [rsp+80h] [rbp-98h]
  struct _KPROCESS *v43; // [rsp+88h] [rbp-90h]
  __int128 v44; // [rsp+A0h] [rbp-78h] BYREF
  unsigned __int64 v45; // [rsp+B0h] [rbp-68h] BYREF
  unsigned __int64 v46; // [rsp+B8h] [rbp-60h] BYREF
  __int128 v47; // [rsp+C0h] [rbp-58h] BYREF

  v33 = a3;
  v42 = a2;
  v36 = 0LL;
  v47 = 0LL;
  Sid = 0LL;
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  PreviousMode = KeGetCurrentThread()->PreviousMode;
  P = 0LL;
  *(_QWORD *)v41 = 0LL;
  v34 = 0LL;
  LODWORD(v10) = 0;
  v44 = 0LL;
  v40 = a4;
  LOBYTE(a3) = PreviousMode;
  v11 = ExpCaptureWnfStateName(a1, &v36, a3);
  if ( v11 < 0 )
    goto LABEL_26;
  v38 = (v36 >> 4) & 3;
  v10 = (v36 >> 6) & 0xF;
  v32 = (v36 >> 6) & 0xF;
  if ( PreviousMode )
  {
    v16 = 0x7FFFFFFF0000LL;
    if ( (_DWORD)v14 && (v15 + v14 > 0x7FFFFFFF0000LL || v15 + v14 < v15) )
      MEMORY[0x7FFFFFFF0000] = 0;
    if ( v13 )
    {
      if ( v13 < 0x7FFFFFFF0000LL )
        v16 = v13;
      v47 = *(_OWORD *)v16;
      v40 = &v47;
    }
  }
  LOBYTE(v12) = PreviousMode;
  v11 = ExpWnfCaptureScopeInstanceId((v36 >> 6) & 0xF, a5, v12, &Sid, &v44);
  if ( v11 < 0 )
    goto LABEL_26;
  if ( PreviousMode )
  {
    v35 = 0;
    if ( a5 )
    {
      v11 = ExpWnfCheckCrossScopeAccess(v36);
      if ( v11 < 0 )
        goto LABEL_26;
    }
  }
  else
  {
    v35 = 1;
  }
  if ( PreviousMode )
  {
    v18 = KeGetCurrentThread();
    Process = v18->ApcState.Process;
    v43 = Process;
    LODWORD(v10) = v32;
    if ( v32 == 3 && (!Sid || Process == *(struct _KPROCESS **)Sid) )
      goto LABEL_60;
  }
  else
  {
    LODWORD(v18) = 0;
    LODWORD(Process) = (_DWORD)PsInitialSystemProcess;
    v43 = PsInitialSystemProcess;
  }
  if ( (_DWORD)v10 == 5 && a8 )
  {
    if ( a7 )
    {
LABEL_60:
      v11 = -1073741811;
      goto LABEL_26;
    }
    v45 = v36 ^ 0x41C64E6DA3BC0074LL;
    v11 = ExpCrossVmWnfPush(v17, 1u, (__int64)&v45, 0xFFFFFFFF, (__int64)v42, v33);
    if ( v11 != -1073741822 )
      goto LABEL_26;
  }
  v11 = ExpWnfResolveScopeInstance((int)v41, (int)Process, (int)v18, v10, Sid);
  if ( v11 < 0 )
    goto LABEL_26;
  v20 = v36;
  v21 = *(_QWORD *)v41;
  v22 = ExpWnfLookupNameInstance(*(_QWORD *)v41, v36, &v34);
  v11 = v22;
  if ( v22 != -1073741772 || v38 == 3 )
  {
    if ( v22 < 0 )
      goto LABEL_26;
    v23 = v33;
    v11 = ExpWnfValidatePubSubPreconditions(2u, v35);
    if ( v11 < 0 )
      goto LABEL_26;
  }
  else
  {
    v11 = ExpWnfLookupPermanentName(v20, (PSECURITY_DESCRIPTOR **)&P);
    if ( v11 < 0 )
      goto LABEL_26;
    v26 = P;
    v11 = ExpWnfValidatePubSubPreconditions(2u, v35);
    if ( v11 < 0 )
      goto LABEL_26;
    v11 = ExpWnfCreateNameInstance(v21, v20, (__int64)v26, v43, &v34);
    ExFreePoolWithTag(v26, 0x20666E57u);
    P = 0LL;
    if ( v11 < 0 )
      goto LABEL_26;
    v23 = v33;
  }
  v11 = ExpWnfWriteStateData((__int64)v34, v42, v23, a6, a7);
  if ( v11 >= 0 )
  {
    if ( (_DWORD)v10 == 5 )
    {
      v46 = v36 ^ 0x41C64E6DA3BC0074LL;
      v27 = v34 + 10;
      v28 = KeAbPreAcquire((__int64)&v34[10], 0LL);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v27, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((signed __int64 *)v27, 0, v28, (__int64)v27);
      if ( v28 )
        *(_BYTE *)(v28 + 18) = 1;
      Count = 0LL;
      if ( v34[11].Count != 1 )
        Count = v34[11].Count;
      if ( Count )
      {
        v30 = Count + 16;
        v31 = *(unsigned int *)(Count + 8);
      }
      else
      {
        v30 = 0LL;
        v31 = 0LL;
      }
      ExpCrossVmWnfPush(v31, 0, (__int64)&v46, v34[12].Count, v30, v31);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)v27, 0LL, 17LL) != 17 )
        ExfReleasePushLockShared((signed __int64 *)v27);
      KeAbPostRelease((ULONG_PTR)v27);
      LODWORD(v10) = v32;
    }
    ExpWnfNotifyNameSubscribers((__int64)v34, 1u, 1, PreviousMode != 0);
    v11 = 0;
  }
LABEL_26:
  if ( v34 )
    ExReleaseRundownProtection(v34 + 1);
  if ( *(_QWORD *)v41 )
    ExReleaseRundownProtection((PEX_RUNDOWN_REF)(*(_QWORD *)v41 + 8LL));
  if ( P )
    ExFreePoolWithTag(P, 0x20666E57u);
  KeLeaveCriticalRegion();
  LOBYTE(v24) = PreviousMode;
  ExpWnfReleaseCapturedScopeInstanceId((unsigned int)v10, &v44, v24);
  return (unsigned int)v11;
}
