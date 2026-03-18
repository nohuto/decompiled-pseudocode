/*
 * XREFs of MiWriteEnclavePte @ 0x1405460CC
 * Callers:
 *     MiAddPagesToEnclave @ 0x140543C34 (MiAddPagesToEnclave.c)
 *     MiProtectEnclavePages @ 0x140545660 (MiProtectEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x1408CEB88 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x1402556E0 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x140263340 (MiWriteValidPteNewProtection.c)
 *     MiUnlockPageTableInternal @ 0x140278B10 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402A1770 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402AC150 (MiLockWorkingSetShared.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiUpdateAwePageTable @ 0x140548B64 (MiUpdateAwePageTable.c)
 */

struct _KTHREAD *__fastcall MiWriteEnclavePte(ULONG_PTR BugCheckParameter4, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // r12
  struct _KTHREAD *result; // rax
  __int64 v13; // rdi
  int v14; // r15d
  BOOL v15; // eax
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // r8

  v9 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v10 = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a5 )
  {
    v11 = MiLockWorkingSetShared((__int64)v9);
    MiMakeSystemAddressValid(BugCheckParameter4, 0LL, (*(_DWORD *)(a3 + 48) >> 12) & 0x3F, v11, 0);
  }
  else
  {
    v11 = 17;
  }
  if ( a4 )
  {
    result = MiWriteValidPteNewProtection(BugCheckParameter4, a2);
LABEL_21:
    LODWORD(v17) = 0;
    goto LABEL_22;
  }
  v13 = MI_READ_PTE_LOCK_FREE(BugCheckParameter4);
  v14 = 0;
  v15 = MiPteInShadowRange(BugCheckParameter4);
  v17 = 0LL;
  v18 = 1LL;
  if ( v15 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = v18;
      if ( HIBYTE(word_140C4DE08) != (_BYTE)v17 )
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
  *(_QWORD *)BugCheckParameter4 = a2;
  if ( v14 )
  {
    MiWritePteShadow(BugCheckParameter4, a2, v16);
    v17 = 0LL;
  }
  v19 = (unsigned int)v17;
  if ( v13 )
  {
    if ( (v13 & 0xC00) == 0x800 )
      v18 = v17;
  }
  else
  {
    v19 = (unsigned int)v18;
  }
  result = (struct _KTHREAD *)(v18 | (unsigned int)v19);
  if ( result )
  {
    result = (struct _KTHREAD *)MiUpdateAwePageTable(v10, v18, v19);
    goto LABEL_21;
  }
LABEL_22:
  if ( a5 != (_DWORD)v17 )
  {
    MiUnlockPageTableInternal((__int64)v9, v10);
    return (struct _KTHREAD *)MiUnlockWorkingSetShared((__int64)v9, v11);
  }
  return result;
}
