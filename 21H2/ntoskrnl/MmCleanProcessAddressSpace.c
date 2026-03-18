/*
 * XREFs of MmCleanProcessAddressSpace @ 0x1406F89A4
 * Callers:
 *     PspRundownSingleProcess @ 0x140683990 (PspRundownSingleProcess.c)
 * Callees:
 *     MiReturnResident @ 0x140216E18 (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x140216EB4 (PsReturnProcessQuota.c)
 *     MiCleanCfg @ 0x14024CB6C (MiCleanCfg.c)
 *     MiCleanWorkingSet @ 0x14024E9E0 (MiCleanWorkingSet.c)
 *     ExFreeSvmAsid @ 0x140251BDC (ExFreeSvmAsid.c)
 *     MiDeleteCloneZombies @ 0x14025247C (MiDeleteCloneZombies.c)
 *     MiBeginProcessClean @ 0x14025F344 (MiBeginProcessClean.c)
 *     UNLOCK_ADDRESS_SPACE_UNORDERED @ 0x140281A58 (UNLOCK_ADDRESS_SPACE_UNORDERED.c)
 *     MiGetNextVad @ 0x140281C00 (MiGetNextVad.c)
 *     MiUnlockVad @ 0x140281C44 (MiUnlockVad.c)
 *     KeInitializeEvent @ 0x1402A7B90 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x1402AF080 (KeWaitForSingleObject.c)
 *     MiGetFirstVad @ 0x1402D75D4 (MiGetFirstVad.c)
 *     MiLockVad @ 0x14030B7F0 (MiLockVad.c)
 *     LOCK_ADDRESS_SPACE @ 0x14030B820 (LOCK_ADDRESS_SPACE.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14030EA00 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14030EB30 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiReferenceVad @ 0x14030EB64 (MiReferenceVad.c)
 *     MiVadDeleted @ 0x14030EB80 (MiVadDeleted.c)
 *     MiGetProcessPartition @ 0x14032A72C (MiGetProcessPartition.c)
 *     MiClearCommitReleaseState @ 0x14057FE58 (MiClearCommitReleaseState.c)
 *     MiReturnProcessCommitment @ 0x1405B3370 (MiReturnProcessCommitment.c)
 *     MiDereferenceSession @ 0x140693F68 (MiDereferenceSession.c)
 *     MiContractWsSwapPageFile @ 0x1406EC1C4 (MiContractWsSwapPageFile.c)
 *     MiCleanVad @ 0x1406F8C0C (MiCleanVad.c)
 *     MiDeleteAweInfoPages @ 0x14097D034 (MiDeleteAweInfoPages.c)
 *     VmpCleanProcessAddressSpace @ 0x1409D9F0C (VmpCleanProcessAddressSpace.c)
 */

char __fastcall MmCleanProcessAddressSpace(__int64 a1)
{
  __int64 v1; // rdx
  int v3; // ecx
  unsigned __int32 v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r13
  int v9; // r14d
  _QWORD *FirstVad; // rax
  void *v11; // rbx
  void *v12; // r12
  unsigned __int64 NextVad; // rax
  BOOL v14; // ebx
  __int64 v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // rbx
  __int64 v18; // rdx
  bool v19; // zf
  __int64 ProcessPartition; // rax
  unsigned __int32 v21; // ett
  __int64 v22; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  int v25; // [rsp+80h] [rbp+8h]

  v1 = *(_QWORD *)(a1 + 2288);
  memset(&Event, 0, sizeof(Event));
  if ( v1 )
    VmpCleanProcessAddressSpace();
  v3 = *(_DWORD *)(a1 + 1124);
  if ( (v3 & 0x20) == 0 )
  {
    v4 = *(_DWORD *)(a1 + 1124) & 0xC00;
    if ( v4 > 0x400 )
    {
      if ( v4 != 2048 )
        goto LABEL_6;
      PsReturnProcessQuota((struct _KPROCESS *)a1, v1, *(_QWORD *)(a1 + 1776) - 4LL);
      ProcessPartition = MiGetProcessPartition(a1);
      MiReturnResident(ProcessPartition, *(_QWORD *)(a1 + 1776) - 4LL);
      v4 = *(_DWORD *)(a1 + 1124);
      do
      {
        v21 = v4;
        v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1124), v4 & 0xFFFFF3FF | 0x400, v4);
      }
      while ( v21 != v4 );
      v19 = (*(_DWORD *)(a1 + 1124) & 0x10000) == 0;
LABEL_32:
      if ( !v19 )
        LOBYTE(v4) = MiDereferenceSession();
      return v4;
    }
LABEL_31:
    v19 = (v3 & 0x10000) == 0;
    goto LABEL_32;
  }
  LOBYTE(v4) = *(_BYTE *)(a1 + 1851) & 0x60;
  if ( (_BYTE)v4 != 96 )
    goto LABEL_31;
LABEL_6:
  KeInitializeEvent(&Event, NotificationEvent, 0);
  CurrentThread = KeGetCurrentThread();
  v25 = MiBeginProcessClean((__int64)CurrentThread, a1);
  v6 = MiGetProcessPartition(a1);
  v7 = *(_QWORD *)(a1 + 1680);
  v8 = v6;
LABEL_7:
  while ( 1 )
  {
    v9 = 0;
    LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
    FirstVad = MiGetFirstVad(a1);
    v11 = FirstVad;
    if ( !FirstVad )
      break;
    MiReferenceVad((__int64)FirstVad);
    while ( 1 )
    {
      v12 = v11;
      NextVad = MiGetNextVad((unsigned __int64)v11);
      v11 = (void *)NextVad;
      if ( NextVad )
        MiReferenceVad(NextVad);
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      MiLockVad((__int64)CurrentThread, (__int64)v12);
      if ( (unsigned int)MiCleanVad(v12) )
        v9 = 1;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      if ( !v11 )
        break;
      MiLockVad((__int64)CurrentThread, (__int64)v11);
      if ( (unsigned int)MiVadDeleted((__int64)v11) )
      {
        MiUnlockVad((__int64)CurrentThread, (__int64)v11);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, (__int64)v11);
        MiCleanVad(v11);
        goto LABEL_7;
      }
      MiUnlockVad((__int64)CurrentThread, (__int64)v11);
    }
    if ( !v9 )
      break;
    UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  }
  *(_QWORD *)(v7 + 304) = &Event;
  v14 = _InterlockedAdd((volatile signed __int32 *)(v7 + 280), 0xFFFFFFFF) != 0;
  UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
  if ( v14 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  if ( (*(_BYTE *)(a1 + 1851) & 0x60) == 0x60 )
    MiClearCommitReleaseState(a1 + 1664);
  ExFreeSvmAsid();
  MiCleanCfg();
  LOCK_ADDRESS_SPACE((__int64)CurrentThread, a1);
  *(_QWORD *)(v7 + 304) = 0LL;
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 1680) + 376LL);
  if ( v15 )
  {
    v22 = MiDeleteAweInfoPages(v15);
    if ( v22 )
    {
      *(_QWORD *)(a1 + 2032) = 0LL;
      MiReturnProcessCommitment(a1, v22);
    }
  }
  v16 = *(_QWORD **)(a1 + 1408);
  if ( v16 && *v16 )
    *v16 = 0LL;
  MiDeleteCloneZombies(a1, 0);
  v17 = MiCleanWorkingSet(a1);
  UNLOCK_ADDRESS_SPACE_UNORDERED((__int64)CurrentThread, a1);
  PsReturnProcessQuota((struct _KPROCESS *)a1, v18, v17);
  LOBYTE(v4) = MiReturnResident(v8, v17);
  if ( (*(_DWORD *)(a1 + 1124) & 0x10000) != 0 )
    LOBYTE(v4) = MiDereferenceSession();
  if ( v25 )
    LOBYTE(v4) = MiContractWsSwapPageFile(v8);
  return v4;
}
