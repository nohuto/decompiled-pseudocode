/*
 * XREFs of NtSetUuidSeed @ 0x1407B16A0
 * Callers:
 *     <none>
 * Callees:
 *     SeAccessCheck @ 0x140207F80 (SeAccessCheck.c)
 *     KeLeaveCriticalRegionThread @ 0x1402486B0 (KeLeaveCriticalRegionThread.c)
 *     RtlLengthSid @ 0x14025B480 (RtlLengthSid.c)
 *     KeAbPreAcquire @ 0x140260280 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     RtlRaiseStatus @ 0x1402EE870 (RtlRaiseStatus.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140359E30 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     RtlSubAuthoritySid @ 0x14035C480 (RtlSubAuthoritySid.c)
 *     __security_check_cookie @ 0x1403CC020 (__security_check_cookie.c)
 *     RtlCreateSecurityDescriptor @ 0x1405D8350 (RtlCreateSecurityDescriptor.c)
 *     SeCaptureSubjectContext @ 0x1405EAF70 (SeCaptureSubjectContext.c)
 *     SeReleaseSubjectContext @ 0x1405EBD30 (SeReleaseSubjectContext.c)
 *     RtlpAddKnownAce @ 0x1406064C0 (RtlpAddKnownAce.c)
 *     RtlSetDaclSecurityDescriptor @ 0x140615660 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateAcl @ 0x140615800 (RtlCreateAcl.c)
 *     RtlInitializeSid @ 0x14067E0B0 (RtlInitializeSid.c)
 *     ExFreePoolWithTag @ 0x1409B1010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B1030 (ExAllocatePoolWithTag.c)
 */

NTSTATUS __cdecl NtSetUuidSeed(PCHAR Seed)
{
  PVOID PoolWithTag; // rax
  void *v3; // r15
  int v4; // eax
  ULONG v5; // r14d
  ULONG v6; // ebx
  ULONG v7; // r14d
  ACL *v8; // rax
  ACL *v9; // rbx
  int Acl; // eax
  NTSTATUS v11; // eax
  int v12; // eax
  int v13; // eax
  struct _KTHREAD *CurrentThread; // r15
  __int64 v15; // rax
  __int64 v16; // rbx
  char v18; // r14
  __int64 v19; // rdx
  __int64 v20; // r8
  __int64 v21; // r9
  NTSTATUS AccessStatus; // [rsp+54h] [rbp-B4h] BYREF
  _SID_IDENTIFIER_AUTHORITY IdentifierAuthority; // [rsp+58h] [rbp-B0h] BYREF
  int v26; // [rsp+64h] [rbp-A4h]
  __int16 v27; // [rsp+68h] [rbp-A0h]
  ULONG v28; // [rsp+6Ch] [rbp-9Ch]
  ACCESS_MASK GrantedAccess; // [rsp+70h] [rbp-98h] BYREF
  PVOID P; // [rsp+78h] [rbp-90h]
  PVOID v31; // [rsp+80h] [rbp-88h]
  ULONG v32; // [rsp+88h] [rbp-80h]
  struct _SECURITY_SUBJECT_CONTEXT SubjectSecurityContext; // [rsp+90h] [rbp-78h] BYREF
  _BYTE SecurityDescriptor[32]; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v35; // [rsp+D0h] [rbp-38h]
  _DWORD v36[6]; // [rsp+D8h] [rbp-30h]

  AccessStatus = 0;
  memset(&SubjectSecurityContext, 0, sizeof(SubjectSecurityContext));
  v36[0] = 80;
  v36[1] = 521322694;
  v36[2] = 906040134;
  v36[3] = -430256637;
  v36[4] = 1525148216;
  v36[5] = -843743134;
  *(_DWORD *)IdentifierAuthority.Value = 0;
  *(_WORD *)&IdentifierAuthority.Value[4] = 1280;
  GrantedAccess = 0;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v35 = 0LL;
  v31 = 0LL;
  SeCaptureSubjectContext(&SubjectSecurityContext);
  PoolWithTag = ExAllocatePoolWithTag(PagedPool, 0x20uLL, 0x64695555u);
  v3 = PoolWithTag;
  P = PoolWithTag;
  if ( !PoolWithTag )
    RtlRaiseStatus(-1073741670);
  v4 = RtlInitializeSid(PoolWithTag, &IdentifierAuthority, 6u);
  AccessStatus = v4;
  if ( v4 < 0 )
    RtlRaiseStatus(v4);
  v5 = 0;
  v28 = 0;
  while ( v5 < 6 )
  {
    v6 = v36[v5];
    *RtlSubAuthoritySid(v3, v5++) = v6;
    v28 = v5;
  }
  v7 = RtlLengthSid(v3) + 20;
  v32 = v7;
  v8 = (ACL *)ExAllocatePoolWithTag(PagedPool, v7, 0x64695555u);
  v9 = v8;
  v31 = v8;
  if ( !v8 )
    RtlRaiseStatus(-1073741670);
  Acl = RtlCreateAcl(v8, v7, 2u);
  AccessStatus = Acl;
  if ( Acl < 0 )
    RtlRaiseStatus(Acl);
  v11 = RtlpAddKnownAce(v9, 2u, 0, 1, (unsigned __int8 *)v3, 0);
  AccessStatus = v11;
  if ( v11 < 0 )
    RtlRaiseStatus(v11);
  v12 = RtlCreateSecurityDescriptor(SecurityDescriptor, 1u);
  AccessStatus = v12;
  if ( v12 < 0 )
    RtlRaiseStatus(v12);
  v13 = RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, v9, 0);
  AccessStatus = v13;
  if ( v13 < 0 )
    RtlRaiseStatus(v13);
  if ( !SeAccessCheck(
          SecurityDescriptor,
          &SubjectSecurityContext,
          0,
          1u,
          0,
          0LL,
          (PGENERIC_MAPPING)&ExpUuidSeedGenericMapping,
          1,
          &GrantedAccess,
          &AccessStatus) )
    RtlRaiseStatus(-1073741790);
  v26 = *(_DWORD *)Seed;
  v27 = *((_WORD *)Seed + 2);
  AccessStatus = 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  if ( v31 )
    ExFreePoolWithTag(v31, 0);
  if ( !AccessStatus )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v15 = KeAbPreAcquire((ULONG_PTR)&ExpUuidLock, 0LL, 0);
    v16 = v15;
    if ( _interlockedbittestandset64((volatile signed __int32 *)&ExpUuidLock, 0LL) )
      ExfAcquirePushLockExclusiveEx(&ExpUuidLock, v15, (ULONG_PTR)&ExpUuidLock);
    if ( v16 )
      *(_BYTE *)(v16 + 26) |= 1u;
    *(int *)((char *)&dword_140D2C2EC + 2) = v26;
    HIWORD(dword_140D2C2F0) = v27;
    BYTE5(NlsMbCodePageTag) = (unsigned __int8)v26 >> 7 == 0;
    v18 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpUuidLock, 0xFFFFFFFFFFFFFFFFuLL);
    if ( (v18 & 2) != 0 && (v18 & 4) == 0 )
      ExfTryToWakePushLock(&ExpUuidLock);
    KeAbPostRelease((ULONG_PTR)&ExpUuidLock);
    KeLeaveCriticalRegionThread((__int64)CurrentThread, v19, v20, v21);
  }
  SeReleaseSubjectContext(&SubjectSecurityContext);
  return AccessStatus;
}
