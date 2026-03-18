/*
 * XREFs of MiInsertLargeUserMapping @ 0x140558A88
 * Callers:
 *     MiCommitExistingVad @ 0x140218720 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x140558C40 (MiMapUserLargePages.c)
 * Callees:
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiGetUsedPtesHandle @ 0x14029EEF0 (MiGetUsedPtesHandle.c)
 *     MiIncreaseUsedPtesCount @ 0x1402AF310 (MiIncreaseUsedPtesCount.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 */

char __fastcall MiInsertLargeUserMapping(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  int v5; // ebp
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r14
  __int64 v9; // r8
  unsigned __int64 ValidPte; // rbx
  unsigned int v11; // esi
  __int64 UsedPtesHandle; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v16; // ebp

  v5 = a4;
  v7 = a2;
  if ( (_DWORD)a4 != 2 )
  {
    a4 = (unsigned int)(2 - a4);
    do
    {
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --a4;
    }
    while ( a4 );
  }
  v8 = 16LL;
  v9 = a5;
  LODWORD(v9) = a5 | 0x80000000;
  if ( (*(_DWORD *)(a1 + 48) & 0x300000) == 0x300000 )
    v9 = a5;
  if ( v5 != 2 )
  {
    v8 = 1LL;
    v9 = (unsigned int)v9 | 0x4000000;
  }
  ValidPte = MiMakeValidPte(a2, a3, v9, a4);
  v11 = 0;
  if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && !MI_READ_PTE_LOCK_FREE(v7) )
  {
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
    MiIncreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v8, v13, v14);
  }
  if ( v5 == 2 )
  {
    do
    {
      *(_QWORD *)v7 = ValidPte;
      v7 += 8LL;
      ++v11;
      ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFF000LL;
      LOBYTE(CurrentThread) = v11;
    }
    while ( v11 < v8 );
    return (char)CurrentThread;
  }
  v16 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(v7);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v16 = 1;
      if ( !HIBYTE(word_140C4DF48) )
      {
LABEL_20:
        if ( (ValidPte & 1) != 0 )
        {
          LOBYTE(CurrentThread) = 0;
          ValidPte |= 0x8000000000000000uLL;
        }
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
        goto LABEL_20;
    }
  }
  *(_QWORD *)v7 = ValidPte;
  if ( v16 )
    LOBYTE(CurrentThread) = MiWritePteShadow(v7, ValidPte);
  return (char)CurrentThread;
}
