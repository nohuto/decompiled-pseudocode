/*
 * XREFs of MmCleanProcessAddressSpace @ 0x1406EB24C
 * Callers:
 *     PspRundownSingleProcess @ 0x140604738 (PspRundownSingleProcess.c)
 * Callees:
 *     MiGetProcessPartition @ 0x14021AD40 (MiGetProcessPartition.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14025B210 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiVadDeleted @ 0x14025B330 (MiVadDeleted.c)
 *     MiReferenceVad @ 0x14025B390 (MiReferenceVad.c)
 *     MiReturnResident @ 0x140296E9C (MiReturnResident.c)
 *     PsReturnProcessQuota @ 0x140296F38 (PsReturnProcessQuota.c)
 *     MiCleanCfg @ 0x1402C35D4 (MiCleanCfg.c)
 *     MiCleanWorkingSet @ 0x1402C4164 (MiCleanWorkingSet.c)
 *     ExFreeSvmAsid @ 0x1402C87EC (ExFreeSvmAsid.c)
 *     MiDeleteCloneZombies @ 0x1402C915C (MiDeleteCloneZombies.c)
 *     MiBeginProcessClean @ 0x1402D5048 (MiBeginProcessClean.c)
 *     MiUnlockVad @ 0x140314658 (MiUnlockVad.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x140314860 (UNLOCK_ADDRESS_SPACE.c)
 *     LOCK_ADDRESS_SPACE @ 0x14031528C (LOCK_ADDRESS_SPACE.c)
 *     MiLockVad @ 0x140316758 (MiLockVad.c)
 *     KeWaitForSingleObject @ 0x140345770 (KeWaitForSingleObject.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x140348790 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KeInitializeEvent @ 0x1403538F0 (KeInitializeEvent.c)
 *     MiClearCommitReleaseState @ 0x14052B4D8 (MiClearCommitReleaseState.c)
 *     MiReturnProcessCommitment @ 0x140550744 (MiReturnProcessCommitment.c)
 *     MiCleanVad @ 0x14061E898 (MiCleanVad.c)
 *     MiDereferenceSession @ 0x1406B48A8 (MiDereferenceSession.c)
 *     MiContractWsSwapPageFile @ 0x14071068C (MiContractWsSwapPageFile.c)
 *     MiDeleteAweInfoPages @ 0x1408D5E8C (MiDeleteAweInfoPages.c)
 */

char __fastcall MmCleanProcessAddressSpace(__int64 a1, __int64 a2)
{
  int v3; // ecx
  unsigned __int32 v4; // eax
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v6; // rax
  __int64 v7; // rbp
  __int64 v8; // r12
  int v9; // r14d
  _QWORD *v10; // rax
  unsigned __int64 i; // rbx
  _QWORD **v12; // rax
  char *v13; // r15
  unsigned __int64 v14; // rcx
  _QWORD *v15; // rcx
  BOOL v16; // ebx
  __int64 v17; // rcx
  _QWORD *v18; // rcx
  __int64 v19; // rbx
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
      PsReturnProcessQuota((struct _KPROCESS *)a1, a2, *(_QWORD *)(a1 + 1776) - 4LL);
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
      i = (unsigned __int64)v10;
      v10 = (_QWORD *)*v10;
    }
    if ( !i )
      break;
    MiReferenceVad(i);
    while ( 1 )
    {
      v12 = *(_QWORD ***)(i + 8);
      v13 = (char *)i;
      v14 = i;
      if ( v12 )
      {
        v15 = *v12;
        for ( i = *(_QWORD *)(i + 8); v15; v15 = (_QWORD *)*v15 )
          i = (unsigned __int64)v15;
      }
      else
      {
        while ( 1 )
        {
          i = *(_QWORD *)(i + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( !i || *(_QWORD *)i == v14 )
            break;
          v14 = i;
        }
      }
      if ( i )
        MiReferenceVad(i);
      UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      MiLockVad((__int64)CurrentThread, (__int64)v13);
      if ( (unsigned int)MiCleanVad(v13) )
        v9 = 1;
      LOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
      if ( !i )
        break;
      MiLockVad((__int64)CurrentThread, i);
      if ( (unsigned int)MiVadDeleted(i) )
      {
        MiUnlockVad((__int64)CurrentThread, i);
        UNLOCK_ADDRESS_SPACE_SHARED((__int64)CurrentThread, a1);
        MiLockVad((__int64)CurrentThread, i);
        MiCleanVad((char *)i);
        goto LABEL_5;
      }
      MiUnlockVad((__int64)CurrentThread, i);
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
  PsReturnProcessQuota((struct _KPROCESS *)a1, v20, v19);
  LOBYTE(v4) = MiReturnResident(v8, v19);
  if ( (*(_DWORD *)(a1 + 1124) & 0x10000) != 0 )
    LOBYTE(v4) = MiDereferenceSession();
  if ( v27 )
    LOBYTE(v4) = MiContractWsSwapPageFile(v8);
  return v4;
}
