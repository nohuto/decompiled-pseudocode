/*
 * XREFs of MmCleanProcessAddressSpace @ 0x1406339B8
 * Callers:
 *     PspRundownSingleProcess @ 0x14065D9C8 (PspRundownSingleProcess.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14021A6D0 (MiGetProcessPartition.c)
 *     KeInitializeEvent @ 0x140254560 (KeInitializeEvent.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140264380 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KeWaitForSingleObject @ 0x1402643F0 (KeWaitForSingleObject.c)
 *     LOCK_ADDRESS_SPACE @ 0x1402A195C (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x1402A2E28 (MiLockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402A3DE4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiUnlockVad @ 0x1402A3FF0 (MiUnlockVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1402A4560 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x1402A4680 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x1402A46E0 (MiReferenceVad.c)
 *     MiBeginProcessClean @ 0x1402CC91C (MiBeginProcessClean.c)
 *     MiReturnResident @ 0x1402D4EFC (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x1402D4F98 (PsReturnProcessQuota.c)
 *     MiCleanCfg @ 0x140313984 (MiCleanCfg.c)
 *     MiCleanWorkingSet @ 0x140314724 (MiCleanWorkingSet.c)
 *     ExFreeSvmAsid @ 0x14031902C (ExFreeSvmAsid.c)
 *     MiDeleteCloneZombies @ 0x1403199AC (MiDeleteCloneZombies.c)
 *     MiClearCommitReleaseState @ 0x1405259B8 (MiClearCommitReleaseState.c)
 *     MiReturnProcessCommitment @ 0x14054AC54 (MiReturnProcessCommitment.c)
 *     MiCleanVad @ 0x1406357F0 (MiCleanVad.c)
 *     MiContractWsSwapPageFile @ 0x140655F58 (MiContractWsSwapPageFile.c)
 *     MiDereferenceSession @ 0x1406E07E8 (MiDereferenceSession.c)
 *     MiDeleteAweInfoPages @ 0x1408D153C (MiDeleteAweInfoPages.c)
 */

char __fastcall MmCleanProcessAddressSpace(ULONG_PTR a1, __int64 a2)
{
  int v3; // ecx
  unsigned __int32 v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  int v9; // r14d
  _QWORD *v10; // rax
  _QWORD *i; // rbx
  _QWORD **v12; // rax
  void *v13; // r15
  _QWORD *v14; // rcx
  _QWORD *v15; // rcx
  BOOL v16; // ebx
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  ULONG_PTR v19; // rbx
  __int64 v20; // rdx
  bool v21; // zf
  __int64 ProcessPartition; // rax
  unsigned __int32 v23; // ett
  __int64 v24; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  int v27; // [rsp+80h] [rbp+8h]

  v3 = *(_DWORD *)(a1 + 1124);
  memset(&Event, 0, sizeof(Event));
  if ( (v3 & 0x20) == 0 )
  {
    v4 = v3 & 0xC00;
    if ( v4 > 0x400 )
    {
      if ( v4 != 2048 )
        goto LABEL_4;
      PsReturnProcessQuota(a1, a2, *(_QWORD *)(a1 + 1776) - 4LL);
      ProcessPartition = MiGetProcessPartition(a1);
      MiReturnResident(ProcessPartition, *(_QWORD *)(a1 + 1776) - 4LL);
      v4 = *(_DWORD *)(a1 + 1124);
      do
      {
        v23 = v4;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1124), v4 & 0xFFFFF3FF | 0x400, v4);
      }
      while ( v23 != v4 );
      v21 = (*(_DWORD *)(a1 + 1124) & 0x10000) == 0;
LABEL_39:
      if ( !v21 )
        LOBYTE(v4) = MiDereferenceSession();
      return v4;
    }
LABEL_38:
    v21 = (v3 & 0x10000) == 0;
    goto LABEL_39;
  }
  LOBYTE(v4) = *(_BYTE *)(a1 + 1851) & 0x60;
  if ( (_BYTE)v4 != 96 )
    goto LABEL_38;
LABEL_4:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  CurrentThread = KeGetCurrentThread();
  v27 = MiBeginProcessClean((__int64)CurrentThread, a1);
  v6 = MiGetProcessPartition(a1);
  v7 = *(_QWORD *)(a1 + 1680);
  v8 = v6;
LABEL_5:
  while ( 1 )
  {
    v9 = 0;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    v10 = *(_QWORD **)(a1 + 2008);
    i = 0LL;
    while ( v10 )
    {
      i = v10;
      v10 = (_QWORD *)*v10;
    }
    if ( !i )
      break;
    MiReferenceVad((__int64)i);
    while ( 1 )
    {
      v12 = (_QWORD **)i[1];
      v13 = i;
      v14 = i;
      if ( v12 )
      {
        v15 = *v12;
        for ( i = (_QWORD *)i[1]; v15; v15 = (_QWORD *)*v15 )
          i = v15;
      }
      else
      {
        while ( 1 )
        {
          i = (_QWORD *)(i[2] & 0xFFFFFFFFFFFFFFFCuLL);
          if ( !i || (_QWORD *)*i == v14 )
            break;
          v14 = i;
        }
      }
      if ( i )
        MiReferenceVad((__int64)i);
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      MiLockVad((__int64)CurrentThread, (__int64)v13);
      if ( (unsigned int)MiCleanVad(v13) )
        v9 = 1;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      if ( !i )
        break;
      MiLockVad((__int64)CurrentThread, (__int64)i);
      if ( (unsigned int)MiVadDeleted((__int64)i) )
      {
        MiUnlockVad((__int64)CurrentThread, (__int64)i);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, (__int64)i);
        MiCleanVad(i);
        goto LABEL_5;
      }
      MiUnlockVad((__int64)CurrentThread, (__int64)i);
    }
    if ( !v9 )
      break;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  }
  *(_QWORD *)(v7 + 312) = &Event;
  v16 = _InterlockedAdd((volatile signed __int32 *)(v7 + 280), 0xFFFFFFFF) != 0;
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v16 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (*(_BYTE *)(a1 + 1851) & 0x60) == 0x60 )
    MiClearCommitReleaseState(a1 + 1664);
  ExFreeSvmAsid();
  MiCleanCfg();
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  *(_QWORD *)(v7 + 312) = 0LL;
  v17 = *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 392LL);
  if ( v17 )
  {
    v24 = MiDeleteAweInfoPages(v17);
    if ( v24 )
    {
      *(_QWORD *)(a1 + 2032) = 0LL;
      MiReturnProcessCommitment(a1, v24);
    }
  }
  v18 = *(_QWORD **)(a1 + 1408);
  if ( v18 && *v18 )
    *v18 = 0LL;
  MiDeleteCloneZombies(a1, 0);
  v19 = MiCleanWorkingSet(a1);
  UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  PsReturnProcessQuota(a1, v20, v19);
  LOBYTE(v4) = MiReturnResident(v8, v19);
  if ( (*(_DWORD *)(a1 + 1124) & 0x10000) != 0 )
    LOBYTE(v4) = MiDereferenceSession();
  if ( v27 )
    LOBYTE(v4) = MiContractWsSwapPageFile(v8);
  return v4;
}
