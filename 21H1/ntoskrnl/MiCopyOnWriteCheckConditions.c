/*
 * XREFs of MiCopyOnWriteCheckConditions @ 0x140556408
 * Callers:
 *     MmAccessFault @ 0x14020C560 (MmAccessFault.c)
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MiSystemFault @ 0x14022A810 (MiSystemFault.c)
 *     MiLockCode @ 0x14028AAA0 (MiLockCode.c)
 *     MiProbeLeafPteAccess @ 0x1402A77A0 (MiProbeLeafPteAccess.c)
 *     MiCopyToUserVa @ 0x1402AD900 (MiCopyToUserVa.c)
 *     MiSplitPrivatePage @ 0x1402AE8B8 (MiSplitPrivatePage.c)
 *     MmProtectPool @ 0x1402DFB44 (MmProtectPool.c)
 *     MiLockPagedAddress @ 0x140368CD4 (MiLockPagedAddress.c)
 *     MiLockDriverPageRange @ 0x140527EE4 (MiLockDriverPageRange.c)
 *     MiSplitReducedCommitClonePage @ 0x14052B274 (MiSplitReducedCommitClonePage.c)
 *     MmReplaceImportEntry @ 0x14052FDFC (MmReplaceImportEntry.c)
 *     MiPrepareImagePagesForHotPatch @ 0x1405390AC (MiPrepareImagePagesForHotPatch.c)
 *     MiMakeProtoPrivate @ 0x140541EC4 (MiMakeProtoPrivate.c)
 *     MiLockAweVadsShared @ 0x140547518 (MiLockAweVadsShared.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1402609E0 (ExAcquirePushLockExclusiveEx.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x1402A3DE4 (UNLOCK_ADDRESS_SPACE.c)
 *     MiWaitForFreePage @ 0x14055670C (MiWaitForFreePage.c)
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
    MiWaitForFreePage(*(_QWORD *)(qword_140C4E588 + 8LL * *(unsigned __int16 *)(a1 + 174)));
  }
}
