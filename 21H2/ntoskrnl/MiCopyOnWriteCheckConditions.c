/*
 * XREFs of MiCopyOnWriteCheckConditions @ 0x14055BEF8
 * Callers:
 *     MiProbeLeafPteAccess @ 0x14020B6F0 (MiProbeLeafPteAccess.c)
 *     MmAccessFault @ 0x14020D090 (MmAccessFault.c)
 *     MiWalkVaRange @ 0x14023C0F0 (MiWalkVaRange.c)
 *     MiSplitPrivatePage @ 0x14030CFB0 (MiSplitPrivatePage.c)
 *     MiCopyToUserVa @ 0x14030E538 (MiCopyToUserVa.c)
 *     MiSystemFault @ 0x140311400 (MiSystemFault.c)
 *     MiLockCode @ 0x1403235B0 (MiLockCode.c)
 *     MiSetProtectionOnSection @ 0x140332C70 (MiSetProtectionOnSection.c)
 *     MmProtectPool @ 0x140362D68 (MmProtectPool.c)
 *     MiLockPagedAddress @ 0x14036B924 (MiLockPagedAddress.c)
 *     MiLockDriverPageRange @ 0x14052DA04 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x140530D94 (MiSplitReducedCommitClonePage.c)
 *     MmReplaceImportEntry @ 0x14053591C (MmReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x14053EBCC (MiPrepareImagePagesForHotPatch.c)
 *     MiMakeProtoPrivate @ 0x1405479E4 (MiMakeProtoPrivate.c)
 *     MiLockAweVadsShared @ 0x14054D038 (MiLockAweVadsShared.c)
 * Callees:
 *     UNLOCK_ADDRESS_SPACE @ 0x140314860 (UNLOCK_ADDRESS_SPACE.c)
 *     ExAcquirePushLockExclusiveEx @ 0x14034A990 (ExAcquirePushLockExclusiveEx.c)
 *     MiWaitForFreePage @ 0x14055C1FC (MiWaitForFreePage.c)
 */

void __fastcall MiCopyOnWriteCheckConditions(__int64 a1, int a2)
{
  struct _KTHREAD *CurrentThread; // rbx
  __int64 Process; // rdi
  struct _KTHREAD *v4; // rax

  if ( a2 == -1073740748 )
  {
    if ( (*(_BYTE *)(a1 + 184) & 7) == 0 )
    {
      CurrentThread = KeGetCurrentThread();
      Process = (__int64)CurrentThread->ApcState.Process;
      v4 = *(struct _KTHREAD **)(Process + 1248);
      if ( v4 )
      {
        if ( v4 != CurrentThread )
        {
          --CurrentThread->SpecialApcDisable;
          ExAcquirePushLockExclusiveEx(Process + 1224, 0LL);
          LOBYTE(CurrentThread[1].Queue) |= 1u;
          UNLOCK_ADDRESS_SPACE((__int64)CurrentThread, Process);
        }
      }
    }
  }
  else if ( a2 == -1073741801
         && KeGetCurrentIrql() < 2u
         && (*((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3) & 0xC) == 0 )
  {
    MiWaitForFreePage(*(_QWORD *)(qword_140C4E648 + 8LL * *(unsigned __int16 *)(a1 + 174)));
  }
}
