/*
 * XREFs of MiMakeProtoLeafValid @ 0x14031A4F4
 * Callers:
 *     MiProtectPrivateMemory @ 0x1402349C0 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x1402354F8 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x1402B5EC0 (MiSetProtectionOnSection.c)
 *     MiWalkVaRange @ 0x1403471D0 (MiWalkVaRange.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x140235350 (MiMakeSystemAddressValid.c)
 *     MiUnlockWorkingSetShared @ 0x140270AB0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x14027B490 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiUnlockPageTableInternal @ 0x14035B910 (MiUnlockPageTableInternal.c)
 */

__int64 __fastcall MiMakeProtoLeafValid(ULONG_PTR BugCheckParameter4, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 *v5; // r14
  char i; // al

  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  for ( i = MI_READ_PTE_LOCK_FREE(BugCheckParameter4); (i & 1) == 0; i = MI_READ_PTE_LOCK_FREE(BugCheckParameter4) )
  {
    MiUnlockPageTableInternal(v5);
    MiUnlockWorkingSetShared((__int64)v5, a3);
    a3 = MiLockWorkingSetShared((__int64)v5);
    MiMakeSystemAddressValid(BugCheckParameter4, 0LL, 0, a3, 0);
  }
  return 0LL;
}
