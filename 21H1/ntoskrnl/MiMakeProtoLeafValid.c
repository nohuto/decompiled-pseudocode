/*
 * XREFs of MiMakeProtoLeafValid @ 0x14030BB74
 * Callers:
 *     MiSetProtectionOnSection @ 0x14021B170 (MiSetProtectionOnSection.c)
 *     MiWalkVaRange @ 0x140228550 (MiWalkVaRange.c)
 *     MiProtectPrivateMemory @ 0x1402ADD80 (MiProtectPrivateMemory.c)
 *     MiSplitPrivatePage @ 0x1402AE8B8 (MiSplitPrivatePage.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

__int64 __fastcall MiMakeProtoLeafValid(ULONG_PTR BugCheckParameter1, __int64 a2, unsigned __int8 a3)
{
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // r12
  char i; // al
  __int64 v8; // r8

  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v6 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_READ_PTE_LOCK_FREE(BugCheckParameter1); (i & 1) == 0; i = MI_READ_PTE_LOCK_FREE(BugCheckParameter1) )
  {
    MiUnlockPageTableInternal((__int64)v5, v6, v8);
    MiUnlockWorkingSetShared((__int64)v5, a3);
    a3 = MiLockWorkingSetShared((__int64)v5);
    MiMakeSystemAddressValid(BugCheckParameter1, 0LL, 0, a3, 0);
  }
  return 0LL;
}
