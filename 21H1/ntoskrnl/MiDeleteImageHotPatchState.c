/*
 * XREFs of MiDeleteImageHotPatchState @ 0x1408C51CC
 * Callers:
 *     MiFinishVadDeletion @ 0x140279A00 (MiFinishVadDeletion.c)
 *     MiHotPatchImage @ 0x1408C59E4 (MiHotPatchImage.c)
 * Callees:
 *     RtlRbRemoveNode @ 0x14024EAD0 (RtlRbRemoveNode.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140260DE0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbPostRelease @ 0x140263C10 (KeAbPostRelease.c)
 *     ExfTryToWakePushLock @ 0x14035A680 (ExfTryToWakePushLock.c)
 *     MiDeleteHotPatchEntry @ 0x1408C5018 (MiDeleteHotPatchEntry.c)
 *     MiGetProcessHotPatchContext @ 0x1408C58A8 (MiGetProcessHotPatchContext.c)
 *     MiHotPatchImageTreeCompare @ 0x1408C5CE8 (MiHotPatchImageTreeCompare.c)
 */

void __fastcall MiDeleteImageHotPatchState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 ProcessHotPatchContext; // rax
  __int64 v4; // rsi
  UNICODE_STRING *v5; // r14
  volatile signed __int64 *v6; // rbp
  __int64 v7; // rdi
  int v8; // r12d
  int v9; // eax
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9

  CurrentThread = KeGetCurrentThread();
  ProcessHotPatchContext = MiGetProcessHotPatchContext(CurrentThread->ApcState.Process, 0LL);
  v4 = ProcessHotPatchContext;
  if ( ProcessHotPatchContext )
  {
    v5 = 0LL;
    --CurrentThread->SpecialApcDisable;
    v6 = (volatile signed __int64 *)(ProcessHotPatchContext + 16);
    ExAcquirePushLockExclusiveEx(ProcessHotPatchContext + 16, 0LL);
    v7 = *(_QWORD *)v4;
    if ( (*(_BYTE *)(v4 + 8) & 1) != 0 )
    {
      if ( v7 )
        v7 ^= v4;
      else
        v7 = 0LL;
    }
    v8 = *(_BYTE *)(v4 + 8) & 1;
    if ( v7 )
    {
      do
      {
        v9 = MiHotPatchImageTreeCompare(a1, v7);
        if ( v9 >= 0 )
        {
          if ( v9 <= 0 )
            break;
          v10 = *(_QWORD *)(v7 + 8);
        }
        else
        {
          v10 = *(_QWORD *)v7;
        }
        if ( v8 && v10 )
          v7 ^= v10;
        else
          v7 = v10;
      }
      while ( v7 );
      v6 = (volatile signed __int64 *)(v4 + 16);
      if ( v7 )
      {
        RtlRbRemoveNode((PRTL_RB_TREE)v4, (PRTL_BALANCED_NODE)v7);
        *(_DWORD *)(v7 + 92) |= 2u;
        v5 = (UNICODE_STRING *)v7;
        if ( (*(_DWORD *)(v7 + 92) & 1) != 0 )
          v5 = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread, v11, v12, v13);
    if ( v5 )
      MiDeleteHotPatchEntry(v5);
  }
}
