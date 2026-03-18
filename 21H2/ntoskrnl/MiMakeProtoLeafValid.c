/*
 * XREFs of MiMakeProtoLeafValid @ 0x140240C38
 * Callers:
 *     MiSplitPrivatePage @ 0x14028E238 (MiSplitPrivatePage.c)
 *     MiSetProtectionOnSection @ 0x14032D1C0 (MiSetProtectionOnSection.c)
 *     MiProtectPrivateMemory @ 0x14032EA60 (MiProtectPrivateMemory.c)
 *     MiWalkVaRange @ 0x14033E5D0 (MiWalkVaRange.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 */

__int64 __fastcall MiMakeProtoLeafValid(unsigned __int64 a1, __int64 a2, char a3)
{
  unsigned __int64 *v5; // r14
  unsigned __int64 v6; // r12
  char i; // al
  __int64 v8; // rdx
  int v9; // r9d

  v5 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v6 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  for ( i = MI_READ_PTE_LOCK_FREE(a1); (i & 1) == 0; i = MI_READ_PTE_LOCK_FREE(a1) )
  {
    MiUnlockPageTableInternal((__int64)v5, v6);
    LOBYTE(v8) = a3;
    MiUnlockWorkingSetShared(v5, v8);
    a3 = MiLockWorkingSetShared(v5);
    LOBYTE(v9) = a3;
    MiMakeSystemAddressValid(a1, 0, 0, v9, 0);
  }
  return 0LL;
}
