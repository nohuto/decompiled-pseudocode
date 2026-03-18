/*
 * XREFs of ExpWnfCreateNameInstance @ 0x14066FED4
 * Callers:
 *     NtCreateWnfStateName @ 0x14066F980 (NtCreateWnfStateName.c)
 *     ExpNtUpdateWnfStateData @ 0x140793B84 (ExpNtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140794AD0 (NtQueryWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14079982C (ExpWnfSubscribeWnfStateChange.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029F120 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPostRelease @ 0x1402AFC00 (KeAbPostRelease.c)
 *     RtlAvlInsertNodeEx @ 0x14030EFD0 (RtlAvlInsertNodeEx.c)
 *     ExAcquireRundownProtection @ 0x140347810 (ExAcquireRundownProtection.c)
 *     KeAbPreAcquire @ 0x140347C10 (KeAbPreAcquire.c)
 *     ExfTryToWakePushLock @ 0x140359F40 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140367B10 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x140435E00 (memset.c)
 *     ExpWnfPopulateStateData @ 0x14067023C (ExpWnfPopulateStateData.c)
 *     ExpWnfGetPermanentDataStoreHandle @ 0x1406E8024 (ExpWnfGetPermanentDataStoreHandle.c)
 *     ObLogSecurityDescriptor @ 0x140724E60 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x140725730 (ObDereferenceSecurityDescriptor.c)
 *     ExpWnfFindStateName @ 0x140798300 (ExpWnfFindStateName.c)
 *     ExFreePoolWithTag @ 0x140A6E010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140A6E910 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfCreateNameInstance(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        struct _KPROCESS *a4,
        struct _EX_RUNDOWN_REF **a5)
{
  __int64 v5; // rax
  __int64 v7; // r15
  SIZE_T v10; // rdx
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  SIZE_T v12; // rdx
  struct _EX_RUNDOWN_REF *v13; // rdi
  struct _EX_RUNDOWN_REF *v14; // r12
  unsigned int v15; // esi
  volatile signed __int64 *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // r14
  struct _EX_RUNDOWN_REF *StateName; // rax
  struct _EX_RUNDOWN_REF *v20; // r14
  _QWORD *v21; // rdx
  bool v22; // r8
  _QWORD *v23; // rax
  unsigned __int64 v24; // r15
  __int64 v25; // rax
  __int64 v26; // r14
  struct _EX_RUNDOWN_REF **v27; // r8
  struct _EX_RUNDOWN_REF *v28; // rdx
  void *Ptr; // rcx

  v5 = *(_QWORD *)(a3 + 8);
  v7 = (a2 >> 4) & 3;
  if ( PsInitialSystemProcess == a4 || (_DWORD)v7 != 3 )
  {
    v12 = 184LL;
    if ( !v5 )
      v12 = 168LL;
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, v12, 0x20666E57u);
  }
  else
  {
    v10 = 184LL;
    if ( !v5 )
      v10 = 168LL;
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v10, 0x20666E57u);
  }
  v13 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xA8uLL);
  LODWORD(v13->Count) = 11012355;
  v13[6].Count = a1;
  v13[5].Count = a2;
  LODWORD(v13[7].Count) = *(_DWORD *)a3;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v13[8].Count = (unsigned __int64)&v13[21];
    *(_OWORD *)&v13[21].Count = *(_OWORD *)*(_QWORD *)(a3 + 8);
  }
  v14 = v13 + 9;
  if ( (int)ObLogSecurityDescriptor(*(void **)(a3 + 16)) < 0 )
  {
    ExFreePoolWithTag(v13, 0x20666E57u);
    return 3221225626LL;
  }
  v13[14].Count = 0LL;
  v13[16].Count = (unsigned __int64)&v13[15];
  v13[15].Count = (unsigned __int64)&v13[15];
  v13[10].Count = 0LL;
  if ( (a2 & 0x400) != 0 && (int)ExpWnfGetPermanentDataStoreHandle(a1, (unsigned int)v7, 1LL, &v13[13]) < 0 )
  {
    v15 = -1073741670;
    goto LABEL_41;
  }
  v15 = ExpWnfPopulateStateData(v13);
  if ( v15 )
  {
LABEL_41:
    ObDereferenceSecurityDescriptor(v14->Count, 1LL);
    ExFreePoolWithTag(v13, 0x20666E57u);
    return v15;
  }
  v16 = (volatile signed __int64 *)(a1 + 48);
  v17 = KeAbPreAcquire(a1 + 48, 0LL);
  v18 = v17;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v17, a1 + 48);
  if ( v18 )
    *(_BYTE *)(v18 + 18) = 1;
  StateName = (struct _EX_RUNDOWN_REF *)ExpWnfFindStateName(a1, a2);
  v20 = StateName;
  if ( StateName )
  {
    ExAcquireRundownProtection(StateName + 1);
    if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 48);
    KeAbPostRelease(a1 + 48);
    ObDereferenceSecurityDescriptor(v14->Count, 1LL);
    Ptr = v13[11].Ptr;
    if ( Ptr )
      ExFreePoolWithTag(Ptr, 0x20666E57u);
    ExFreePoolWithTag(v13, 0x20666E57u);
    *a5 = v20;
    return 0LL;
  }
  ExAcquireRundownProtection(v13 + 1);
  v21 = *(_QWORD **)(a1 + 56);
  v22 = 0;
  if ( !v21 )
    goto LABEL_26;
  while ( v13[5].Count < v21[3] )
  {
    v23 = (_QWORD *)*v21;
    if ( !*v21 )
      goto LABEL_26;
LABEL_23:
    v21 = v23;
  }
  v23 = (_QWORD *)v21[1];
  if ( v23 )
    goto LABEL_23;
  v22 = 1;
LABEL_26:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 56), (unsigned __int64)v21, v22, &v13[2].Count);
  if ( (_DWORD)v7 == 3 )
  {
    v13[19].Count = (unsigned __int64)a4;
    v24 = a4[1].EndPadding[2];
    v25 = KeAbPreAcquire(v24 + 56, 0LL);
    v26 = v25;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v24 + 56), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v24 + 56), v25, v24 + 56);
    if ( v26 )
      *(_BYTE *)(v26 + 18) = 1;
    v27 = *(struct _EX_RUNDOWN_REF ***)(v24 + 72);
    v28 = v13 + 17;
    if ( *v27 != (struct _EX_RUNDOWN_REF *)(v24 + 64) )
      __fastfail(3u);
    v28->Count = v24 + 64;
    v13[18].Count = (unsigned __int64)v27;
    *v27 = v28;
    *(_QWORD *)(v24 + 72) = v28;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v24 + 56);
    KeAbPostRelease(v24 + 56);
  }
  if ( (_InterlockedExchangeAdd64(v16, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 48);
  KeAbPostRelease(a1 + 48);
  *a5 = v13;
  return 0LL;
}
