/*
 * XREFs of MiInsertLargeUserMapping @ 0x1405C2898
 * Callers:
 *     MiCommitExistingVad @ 0x14032C1B0 (MiCommitExistingVad.c)
 *     MiMapUserLargePages @ 0x1405C2A4C (MiMapUserLargePages.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiIncreaseUsedPtesCount @ 0x14028FB74 (MiIncreaseUsedPtesCount.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiGetUsedPtesHandle @ 0x1402D03D0 (MiGetUsedPtesHandle.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

char __fastcall MiInsertLargeUserMapping(__int64 a1, unsigned __int64 a2, __int64 a3, int a4, unsigned int a5)
{
  unsigned __int64 v7; // rdi
  __int64 v8; // r9
  unsigned int v9; // r8d
  unsigned __int64 v10; // r14
  unsigned __int64 ValidPte; // rbx
  unsigned int v12; // esi
  unsigned __int64 UsedPtesHandle; // rax
  struct _KTHREAD *CurrentThread; // rax
  int v15; // ebp

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
  v9 = a5 | 0x80000000;
  if ( (*(_DWORD *)(a1 + 48) & 0x600000) == 0x600000 )
    v9 = a5;
  if ( a4 != 2 )
    v9 |= 0x4000000u;
  v10 = 16LL;
  if ( a4 != 2 )
    v10 = 1LL;
  ValidPte = MiMakeValidPte(a2, a3, v9);
  v12 = 0;
  if ( (v7 < 0xFFFFF6FB7DBED000uLL || v7 > 0xFFFFF6FB7DBEDFFFuLL) && !MI_READ_PTE_LOCK_FREE(v7) )
  {
    UsedPtesHandle = MiGetUsedPtesHandle((__int64)(v7 << 25) >> 16);
    MiIncreaseUsedPtesCount(UsedPtesHandle, v10);
  }
  if ( a4 == 2 )
  {
    do
    {
      *(_QWORD *)v7 = ValidPte;
      v7 += 8LL;
      ++v12;
      ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFFF000LL;
      LOBYTE(CurrentThread) = v12;
    }
    while ( v12 < v10 );
    return (char)CurrentThread;
  }
  v15 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(v7);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v15 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
LABEL_22:
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
        goto LABEL_22;
    }
  }
  *(_QWORD *)v7 = ValidPte;
  if ( v15 )
    LOBYTE(CurrentThread) = MiWritePteShadow(v7, ValidPte);
  return (char)CurrentThread;
}
