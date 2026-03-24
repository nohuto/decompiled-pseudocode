/*
 * XREFs of MiFillGapPtes @ 0x1403BCE4C
 * Callers:
 *     MiFillGapAddresses @ 0x1403BCDAC (MiFillGapAddresses.c)
 *     MiFillGapPtes @ 0x1403BCE4C (MiFillGapPtes.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiFillGapPtes @ 0x1403BCE4C (MiFillGapPtes.c)
 */

char __fastcall MiFillGapPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  int v8; // r15d
  struct _KTHREAD *CurrentThread; // rax
  int v10; // esi
  unsigned __int64 v11; // rcx
  unsigned __int64 ValidPte; // rbx
  __int64 v13; // r8
  bool v14; // zf

  v5 = a1;
  v6 = a2;
  v8 = a3;
  if ( a1 < *(_QWORD *)(a3 + 16LL * a5) )
    v5 = *(_QWORD *)(a3 + 16LL * a5);
  CurrentThread = *(struct _KTHREAD **)(a3 + 16LL * a5 + 8);
  if ( a2 > (unsigned __int64)CurrentThread )
    v6 = *(_QWORD *)(a3 + 16LL * a5 + 8);
  if ( v5 <= v6 )
  {
    v10 = 0;
    do
    {
      LOBYTE(CurrentThread) = MI_READ_PTE_LOCK_FREE(v5);
      if ( ((unsigned __int8)CurrentThread & 1) != 0 )
      {
        if ( a5 && (char)CurrentThread >= 0 )
          LOBYTE(CurrentThread) = MiFillGapPtes(
                                    (__int64)(v5 << 25) >> 16,
                                    (unsigned int)((__int64)(v5 << 25) >> 16) + 4088,
                                    v8,
                                    a4,
                                    a5 - 1);
        goto LABEL_14;
      }
      v11 = v5;
      if ( a5 )
        v11 = 0LL;
      ValidPte = MiMakeValidPte(v11, *(_QWORD *)(a4 + 8LL * a5), a5 != 0 ? -1476395004 : 536870913);
      LODWORD(CurrentThread) = MiPteInShadowRange(v5);
      if ( (_DWORD)CurrentThread )
      {
        LODWORD(CurrentThread) = MiPteHasShadow();
        if ( (_DWORD)CurrentThread )
        {
          v10 = 1;
          if ( !HIBYTE(word_140C4E008) )
          {
            v14 = (ValidPte & 1) == 0;
            goto LABEL_24;
          }
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v14 = (ValidPte & 1) == 0;
LABEL_24:
            if ( !v14 )
            {
              LOBYTE(CurrentThread) = 0;
              ValidPte |= 0x8000000000000000uLL;
            }
          }
        }
      }
      *(_QWORD *)v5 = ValidPte;
      if ( v10 )
        LOBYTE(CurrentThread) = MiWritePteShadow(v5, ValidPte, v13);
      v10 = 0;
LABEL_14:
      v5 += 8LL;
    }
    while ( v5 <= v6 );
  }
  return (char)CurrentThread;
}
