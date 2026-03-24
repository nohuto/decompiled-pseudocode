/*
 * XREFs of MiInsertLargeUserMapping @ 0x14055E578
 * Callers:
 *     MiCommitExistingVad @ 0x140218D90 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x14055E730 (MiMapUserLargePages.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiIncreaseUsedPtesCount @ 0x1403097D4 (MiIncreaseUsedPtesCount.c)
 *     MiGetUsedPtesHandle @ 0x14030CA60 (MiGetUsedPtesHandle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 */

char __fastcall MiInsertLargeUserMapping(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  unsigned __int64 v9; // r14
  unsigned int v10; // r8d
  unsigned __int64 ValidPte; // rbx
  unsigned int v12; // esi
  __int64 v13; // rdx
  __int64 UsedPtesHandle; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  struct _KTHREAD *CurrentThread; // rax
  int v18; // ebp
  __int64 v19; // r8

  v7 = a2;
  if ( a4 != 2 )
  {
    v8 = (unsigned int)(2 - a4);
    do
    {
      v7 = ((v7 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v8;
    }
    while ( v8 );
  }
  v9 = 16LL;
  v10 = a5 | 0x80000000;
  if ( (*(_DWORD *)(a1 + 48) & 0x300000) == 0x300000 )
    v10 = a5;
  if ( a4 != 2 )
  {
    v9 = 1LL;
    v10 |= 0x4000000u;
  }
  ValidPte = MiMakeValidPte(a2, a3, v10);
  v12 = 0;
  if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && !MI_READ_PTE_LOCK_FREE(v7) )
  {
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16, v13);
    MiIncreaseUsedPtesCount(UsedPtesHandle, (unsigned int)v9, v15, v16);
  }
  if ( a4 == 2 )
  {
    do
    {
      *(_QWORD *)v7 = ValidPte;
      v7 += 8LL;
      ++v12;
      ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFF000LL;
      LOBYTE(CurrentThread) = v12;
    }
    while ( v12 < v9 );
    return (char)CurrentThread;
  }
  v18 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(v7);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v18 = 1;
      if ( !HIBYTE(word_140C4E008) )
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
  if ( v18 )
    LOBYTE(CurrentThread) = MiWritePteShadow(v7, ValidPte, v19);
  return (char)CurrentThread;
}
