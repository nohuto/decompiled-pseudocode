/*
 * XREFs of MiWriteEnclavePte @ 0x140545A7C
 * Callers:
 *     MiAddPagesToEnclave @ 0x1405435E4 (MiAddPagesToEnclave.c)
 *     MiProtectEnclavePages @ 0x140545010 (MiProtectEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CD838 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiUnlockWorkingSetShared @ 0x14020EC60 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x140219640 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x1402AE710 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x1402BC370 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x1402DB860 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     MiUpdateAwePageTable @ 0x140548514 (MiUpdateAwePageTable.c)
 */

struct _KTHREAD *__fastcall MiWriteEnclavePte(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // r12
  struct _KTHREAD *result; // rax
  __int64 v13; // r8
  __int64 v14; // rdi
  int v15; // r15d
  BOOL v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r11

  v9 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v10 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a5 )
  {
    v11 = MiLockWorkingSetShared((__int64)v9);
    MiMakeSystemAddressValid(BugCheckParameter1, 0LL, (*(_DWORD *)(a3 + 48) >> 12) & 0x3F, v11, 0);
  }
  else
  {
    v11 = 17;
  }
  if ( a4 )
  {
    result = MiWriteValidPteNewProtection(BugCheckParameter1, a2);
LABEL_21:
    LODWORD(v17) = 0;
    goto LABEL_22;
  }
  v14 = MI_READ_PTE_LOCK_FREE(BugCheckParameter1);
  v15 = 0;
  v16 = MiPteInShadowRange(BugCheckParameter1);
  v17 = 0LL;
  v18 = 1LL;
  if ( v16 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = v18;
      if ( HIBYTE(word_140C4DF48) != (_BYTE)v17 )
        goto LABEL_13;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_13;
    }
    if ( ((unsigned __int8)a2 & (unsigned __int8)v18) != 0 )
      a2 |= 0x8000000000000000uLL;
  }
LABEL_13:
  *(_QWORD *)BugCheckParameter1 = a2;
  if ( v15 )
  {
    MiWritePteShadow(BugCheckParameter1, a2);
    v17 = 0LL;
  }
  v13 = (unsigned int)v17;
  if ( v14 )
  {
    if ( (v14 & 0xC00) == 0x800 )
      v18 = v17;
  }
  else
  {
    v13 = (unsigned int)v18;
  }
  result = (struct _KTHREAD *)(v18 | (unsigned int)v13);
  if ( result )
  {
    result = (struct _KTHREAD *)MiUpdateAwePageTable(v10, v18, v13);
    goto LABEL_21;
  }
LABEL_22:
  if ( a5 != (_DWORD)v17 )
  {
    MiUnlockPageTableInternal((__int64)v9, v10, v13);
    return (struct _KTHREAD *)MiUnlockWorkingSetShared((__int64)v9, v11);
  }
  return result;
}
