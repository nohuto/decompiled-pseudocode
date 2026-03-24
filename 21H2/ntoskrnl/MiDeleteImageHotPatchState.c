/*
 * XREFs of MiDeleteImageHotPatchState @ 0x1408C9B1C
 * Callers:
 *     MiFinishVadDeletion @ 0x140316DC0 (MiFinishVadDeletion.c)
 *     MiHotPatchImage @ 0x1408CA334 (MiHotPatchImage.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x1402F1570 (ExfTryToWakePushLock.c)
 *     RtlRbRemoveNode @ 0x140340AE0 (RtlRbRemoveNode.c)
 *     KeAbPostRelease @ 0x140348C80 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x14034AD90 (KiLeaveGuardedRegionUnsafe.c)
 *     MiDeleteHotPatchEntry @ 0x1408C9968 (MiDeleteHotPatchEntry.c)
 *     MiGetProcessHotPatchContext @ 0x1408CA1F8 (MiGetProcessHotPatchContext.c)
 *     MiHotPatchImageTreeCompare @ 0x1408CA638 (MiHotPatchImageTreeCompare.c)
 */

void __fastcall MiDeleteImageHotPatchState(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // r15
  __int64 ProcessHotPatchContext; // rax
  __int64 v4; // rsi
  UNICODE_STRING *v5; // r14
  volatile signed __int64 *v6; // rbp
  unsigned __int64 v7; // rdi
  int v8; // r12d
  int v9; // eax
  unsigned __int64 v10; // rax

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
        RtlRbRemoveNode((unsigned __int64 *)v4, v7);
        *(_DWORD *)(v7 + 92) |= 2u;
        v5 = (UNICODE_STRING *)v7;
        if ( (*(_DWORD *)(v7 + 92) & 1) != 0 )
          v5 = 0LL;
      }
    }
    if ( (_InterlockedExchangeAdd64(v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v6);
    KeAbPostRelease((ULONG_PTR)v6);
    KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
    if ( v5 )
      MiDeleteHotPatchEntry(v5);
  }
}
