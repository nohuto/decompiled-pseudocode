/*
 * XREFs of MiWriteEnclavePte @ 0x1405AA07C
 * Callers:
 *     MiAddPagesToEnclave @ 0x1405A7D28 (MiAddPagesToEnclave.c)
 *     MiProtectEnclavePages @ 0x1405A9744 (MiProtectEnclavePages.c)
 *     MiCopyPagesIntoEnclave @ 0x140979274 (MiCopyPagesIntoEnclave.c)
 * Callees:
 *     MiUnlockPageTableInternal @ 0x14020D8D0 (MiUnlockPageTableInternal.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiUnlockWorkingSetShared @ 0x1402B0CE0 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CF4F0 (MiLockWorkingSetShared.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     MiMakeSystemAddressValid @ 0x14032CE60 (MiMakeSystemAddressValid.c)
 *     MiWriteValidPteNewProtection @ 0x14033DBC0 (MiWriteValidPteNewProtection.c)
 *     MiUpdateAwePageTable @ 0x1405AC9A0 (MiUpdateAwePageTable.c)
 */

char __fastcall MiWriteEnclavePte(ULONG_PTR a1, __int64 a2, __int64 a3, int a4, int a5)
{
  unsigned __int64 *v9; // r14
  unsigned __int64 v10; // rbp
  __int64 v11; // r9
  unsigned __int8 v12; // r12
  char result; // al
  __int64 v14; // rdi
  int v15; // r15d
  BOOL v16; // eax
  __int64 v17; // rdx
  __int64 v18; // r11
  __int64 v19; // r8

  v9 = &KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.StaticBitmap[26];
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( a5 )
  {
    LOBYTE(v11) = MiLockWorkingSetShared((__int64)v9);
    v12 = v11;
    MiMakeSystemAddressValid(a1, 0LL, (*(_DWORD *)(a3 + 48) >> 12) & 0x7F, v11, 0);
  }
  else
  {
    v12 = 17;
  }
  if ( a4 )
  {
    result = MiWriteValidPteNewProtection(a1, a2);
LABEL_21:
    LODWORD(v17) = 0;
    goto LABEL_22;
  }
  v14 = MI_READ_PTE_LOCK_FREE(a1);
  v15 = 0;
  v16 = MiPteInShadowRange(a1);
  v17 = 0LL;
  v18 = 1LL;
  if ( v16 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v15 = v18;
      if ( HIBYTE(word_140C51864) != (_BYTE)v17 )
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
  *(_QWORD *)a1 = a2;
  if ( v15 )
  {
    MiWritePteShadow(a1, a2);
    v17 = 0LL;
  }
  v19 = (unsigned int)v17;
  if ( v14 )
  {
    if ( (v14 & 0xC00) == 0x800 )
      v18 = v17;
  }
  else
  {
    v19 = (unsigned int)v18;
  }
  result = v18 | v19;
  if ( v18 | (unsigned int)v19 )
  {
    result = MiUpdateAwePageTable(v10, v18, v19);
    goto LABEL_21;
  }
LABEL_22:
  if ( a5 != (_DWORD)v17 )
  {
    MiUnlockPageTableInternal((__int64)v9, v10);
    return MiUnlockWorkingSetShared((__int64)v9, v12);
  }
  return result;
}
