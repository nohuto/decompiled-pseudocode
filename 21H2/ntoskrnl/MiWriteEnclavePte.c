/*
 * XREFs of MiWriteEnclavePte @ 0x14054B7DC
 * Callers:
 *     MiAddPagesToEnclave @ 0x140549344 (MiAddPagesToEnclave.c)
 *     MiProtectEnclavePages @ 0x14054AD70 (MiProtectEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x1408D22E8 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x140202790 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MiUnlockWorkingSetShared @ 0x1402B4090 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402BE5B0 (MiLockWorkingSetShared.c)
 *     MiMakeSystemAddressValid @ 0x1403190E0 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x14031A750 (MiWriteValidPteNewProtection.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiUpdateAwePageTable @ 0x14054E274 (MiUpdateAwePageTable.c)
 */

char __fastcall MiWriteEnclavePte(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, _DWORD *a4, int a5)
{
  int v5; // edi
  __int64 v7; // rbx
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // rbp
  unsigned __int8 v11; // r12
  char result; // al
  __int64 v13; // rdi
  int v14; // r15d
  BOOL v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r11
  __int64 v18; // r8

  v5 = (int)a4;
  v7 = a2;
  v9 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessorsPadding[6];
  v10 = ((BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a5 )
  {
    v11 = MiLockWorkingSetShared((__int64)v9, a2, a3, a4);
    MiMakeSystemAddressValid(BugCheckParameter1, 0LL, (*(_DWORD *)(a3 + 48) >> 12) & 0x3F, v11, 0);
  }
  else
  {
    v11 = 17;
  }
  if ( v5 )
  {
    result = MiWriteValidPteNewProtection(BugCheckParameter1, v7);
LABEL_21:
    LODWORD(v16) = 0;
    goto LABEL_22;
  }
  v13 = MI_READ_PTE_LOCK_FREE(BugCheckParameter1);
  v14 = 0;
  v15 = MiPteInShadowRange(BugCheckParameter1);
  v16 = 0LL;
  v17 = 1LL;
  if ( v15 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v14 = v17;
      if ( HIBYTE(word_140C4E048) != (_BYTE)v16 )
        goto LABEL_13;
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
    {
      goto LABEL_13;
    }
    if ( ((unsigned __int8)v7 & (unsigned __int8)v17) != 0 )
      v7 |= 0x8000000000000000uLL;
  }
LABEL_13:
  *(_QWORD *)BugCheckParameter1 = v7;
  if ( v14 )
  {
    MiWritePteShadow(BugCheckParameter1, v7);
    v16 = 0LL;
  }
  v18 = (unsigned int)v16;
  if ( v13 )
  {
    if ( (v13 & 0xC00) == 0x800 )
      v17 = v16;
  }
  else
  {
    v18 = (unsigned int)v17;
  }
  result = v17 | v18;
  if ( v17 | (unsigned int)v18 )
  {
    result = MiUpdateAwePageTable(v10, v17, v18);
    goto LABEL_21;
  }
LABEL_22:
  if ( a5 != (_DWORD)v16 )
  {
    MiUnlockPageTableInternal((__int64)v9, v10);
    return MiUnlockWorkingSetShared((__int64)v9, v11);
  }
  return result;
}
