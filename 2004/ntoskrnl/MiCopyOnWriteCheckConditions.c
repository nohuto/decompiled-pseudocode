/*
 * XREFs of MiCopyOnWriteCheckConditions @ 0x140556A58
 * Callers:
 *     MiLockCode @ 0x140231A50 (MiLockCode.c)
 *     MiProbeLeafPteAccess @ 0x14024E770 (MiProbeLeafPteAccess.c)
 *     MiCopyToUserVa @ 0x1402548D0 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x140255888 (MiSplitPrivatePage.c)
 *     MmProtectPool @ 0x1402704BC (MmProtectPool.c)
 *     MmAccessFault @ 0x14029F070 (MmAccessFault.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 *     MiSystemFault @ 0x1402BD490 (MiSystemFault.c)
 *     MiLockPagedAddress @ 0x140369694 (MiLockPagedAddress.c)
 *     MiLockDriverPageRange @ 0x140528534 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x14052B8C4 (MiSplitReducedCommitClonePage.c)
 *     MmReplaceImportEntry @ 0x14053044C (MmReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405396FC (MiPrepareImagePagesForHotPatch.c)
 *     MiMakeProtoPrivate @ 0x140542514 (MiMakeProtoPrivate.c)
 *     MiLockAweVadsShared @ 0x140547B68 (MiLockAweVadsShared.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140207AC0 (ExAcquirePushLockExclusiveEx.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14024ADB4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiWaitForFreePage @ 0x140556D5C (MiWaitForFreePage.c)
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
    MiWaitForFreePage(*(_QWORD *)(qword_140C4E448 + 8LL * *(unsigned __int16 *)(a1 + 174)));
  }
}
