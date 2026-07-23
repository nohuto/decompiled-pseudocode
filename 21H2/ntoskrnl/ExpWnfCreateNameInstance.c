/*
 * XREFs of ExpWnfCreateNameInstance @ 0x14069D4E4
 * Callers:
 *     NtCreateWnfStateName @ 0x14069D180 (NtCreateWnfStateName.c)
 *     ExpNtUpdateWnfStateData @ 0x14069E08C (ExpNtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x14069E5A4 (ExpWnfSubscribeWnfStateChange.c)
 *     NtQueryWnfStateData @ 0x14069E930 (NtQueryWnfStateData.c)
 * Callees:
 *     ExAcquireRundownProtection @ 0x14026A950 (ExAcquireRundownProtection.c)
 *     ExfTryToWakePushLock @ 0x1402FC2C0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1402FD9E0 (ExfAcquirePushLockExclusiveEx.c)
 *     RtlAvlInsertNodeEx @ 0x1403212A0 (RtlAvlInsertNodeEx.c)
 *     KeAbPostRelease @ 0x1403539D0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140354F80 (KeAbPreAcquire.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14035DD70 (ExAllocatePoolWithQuotaTag.c)
 *     memset @ 0x140414300 (memset.c)
 *     ExpWnfGetPermanentDataStoreHandle @ 0x140621320 (ExpWnfGetPermanentDataStoreHandle.c)
 *     ObDereferenceSecurityDescriptor @ 0x1406544C0 (ObDereferenceSecurityDescriptor.c)
 *     ObLogSecurityDescriptor @ 0x140654CD0 (ObLogSecurityDescriptor.c)
 *     ExpWnfFindStateName @ 0x14069EF30 (ExpWnfFindStateName.c)
 *     ExpWnfPopulateStateData @ 0x1406A060C (ExpWnfPopulateStateData.c)
 *     ExFreePoolWithTag @ 0x1409B5010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1409B5160 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall ExpWnfCreateNameInstance(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        struct _KPROCESS *a4,
        struct _EX_RUNDOWN_REF **a5)
{
  __int64 v5; // rax
  __int64 v7; // r15
  SIZE_T v10; // rdx
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  struct _EX_RUNDOWN_REF *v12; // rdi
  __int64 *v13; // r12
  unsigned int v14; // esi
  volatile signed __int64 *v15; // rsi
  _RTL_BALANCED_NODE *v16; // rax
  _RTL_BALANCED_NODE *v17; // r14
  struct _EX_RUNDOWN_REF *StateName; // rax
  struct _EX_RUNDOWN_REF *v19; // r14
  _QWORD *v20; // rdx
  bool v21; // r8
  _QWORD *v22; // rax
  unsigned __int64 v23; // r15
  _RTL_BALANCED_NODE *v24; // rax
  _RTL_BALANCED_NODE *v25; // r14
  struct _EX_RUNDOWN_REF **v26; // r8
  struct _EX_RUNDOWN_REF *v27; // rdx
  SIZE_T v29; // rdx
  void *Ptr; // rcx

  v5 = *(_QWORD *)(a3 + 8);
  v7 = (a2 >> 4) & 3;
  if ( PsInitialSystemProcess == a4 || (_DWORD)v7 != 3 )
  {
    v10 = 184LL;
    if ( !v5 )
      v10 = 168LL;
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, v10, 0x20666E57u);
  }
  else
  {
    v29 = 184LL;
    if ( !v5 )
      v29 = 168LL;
    PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithQuotaTag((POOL_TYPE)9, v29, 0x20666E57u);
  }
  v12 = PoolWithTag;
  if ( !PoolWithTag )
    return 3221225626LL;
  memset(PoolWithTag, 0, 0xA8uLL);
  LODWORD(v12->Count) = 11012355;
  v12[6].Count = a1;
  v12[5].Count = a2;
  LODWORD(v12[7].Count) = *(_DWORD *)a3;
  if ( *(_QWORD *)(a3 + 8) )
  {
    v12[8].Count = (unsigned __int64)&v12[21];
    *(_OWORD *)&v12[21].Count = *(_OWORD *)*(_QWORD *)(a3 + 8);
  }
  v13 = (__int64 *)&v12[9];
  if ( (int)ObLogSecurityDescriptor(*(char **)(a3 + 16), &v12[9].Count, 1u) < 0 )
  {
    ExFreePoolWithTag(v12, 0x20666E57u);
    return 3221225626LL;
  }
  v12[16].Count = (unsigned __int64)&v12[15];
  v12[15].Count = (unsigned __int64)&v12[15];
  v12[14].Count = 0LL;
  v12[10].Count = 0LL;
  if ( (a2 & 0x400) != 0 && (int)ExpWnfGetPermanentDataStoreHandle(a1, (unsigned int)v7, 1LL, &v12[13].Count) < 0 )
  {
    v14 = -1073741670;
    goto LABEL_42;
  }
  v14 = ExpWnfPopulateStateData(v12);
  if ( v14 )
  {
LABEL_42:
    ObDereferenceSecurityDescriptor(*v13, 1u);
    ExFreePoolWithTag(v12, 0x20666E57u);
    return v14;
  }
  v15 = (volatile signed __int64 *)(a1 + 48);
  v16 = KeAbPreAcquire(a1 + 48, 0LL, 0);
  v17 = v16;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
    ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(a1 + 48), v16, a1 + 48);
  if ( v17 )
    BYTE2(v17[1].Left) |= 1u;
  StateName = (struct _EX_RUNDOWN_REF *)ExpWnfFindStateName(a1, a2);
  v19 = StateName;
  if ( StateName )
  {
    ExAcquireRundownProtection(StateName + 1);
    if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(a1 + 48);
    KeAbPostRelease(a1 + 48);
    ObDereferenceSecurityDescriptor(*v13, 1u);
    Ptr = v12[11].Ptr;
    if ( Ptr )
      ExFreePoolWithTag(Ptr, 0x20666E57u);
    ExFreePoolWithTag(v12, 0x20666E57u);
    *a5 = v19;
    return 0LL;
  }
  ExAcquireRundownProtection(v12 + 1);
  v20 = *(_QWORD **)(a1 + 56);
  v21 = 0;
  if ( !v20 )
    goto LABEL_23;
  while ( v12[5].Count < v20[3] )
  {
    v22 = (_QWORD *)*v20;
    if ( !*v20 )
      goto LABEL_23;
LABEL_19:
    v20 = v22;
  }
  v22 = (_QWORD *)v20[1];
  if ( v22 )
    goto LABEL_19;
  v21 = 1;
LABEL_23:
  RtlAvlInsertNodeEx((unsigned __int64 *)(a1 + 56), (unsigned __int64)v20, v21, &v12[2].Count);
  if ( (_DWORD)v7 == 3 )
  {
    v12[19].Count = (unsigned __int64)a4;
    v23 = a4[1].EndPadding[7];
    v24 = KeAbPreAcquire(v23 + 56, 0LL, 0);
    v25 = v24;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v23 + 56), 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v23 + 56), v24, v23 + 56);
    if ( v25 )
      BYTE2(v25[1].Left) |= 1u;
    v26 = *(struct _EX_RUNDOWN_REF ***)(v23 + 72);
    v27 = v12 + 17;
    if ( *v26 != (struct _EX_RUNDOWN_REF *)(v23 + 64) )
      __fastfail(3u);
    v27->Count = v23 + 64;
    v12[18].Count = (unsigned __int64)v26;
    *v26 = v27;
    *(_QWORD *)(v23 + 72) = v27;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)(v23 + 56), 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v23 + 56);
    KeAbPostRelease(v23 + 56);
  }
  if ( (_InterlockedExchangeAdd64(v15, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(a1 + 48);
  KeAbPostRelease(a1 + 48);
  *a5 = v12;
  return 0LL;
}
