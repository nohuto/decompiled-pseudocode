/*
 * XREFs of MiMakeProtoLeafValid @ 0x140349AB4
 * Callers:
 *     MiProtectPrivateMemory @ 0x140254D50 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x140255888 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x1402ADDF0 (MiSetProtectionOnSection.c)
 *     MiWalkVaRange @ 0x1402BB1D0 (MiWalkVaRange.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 */

__int64 __fastcall MiMakeProtoLeafValid(ULONG_PTR BugCheckParameter4, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // r12
  char i; // al

  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v6 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_READ_PTE_LOCK_FREE(BugCheckParameter4); (i & 1) == 0; i = MI_READ_PTE_LOCK_FREE(BugCheckParameter4) )
  {
    MiUnlockPageTableInternal((__int64)v5, v6);
    MiUnlockWorkingSetShared((__int64)v5, a3);
    a3 = MiLockWorkingSetShared((__int64)v5);
    MiMakeSystemAddressValid(BugCheckParameter4, 0LL, 0, a3, 0);
  }
  return 0LL;
}
