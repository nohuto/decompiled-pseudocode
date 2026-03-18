/*
 * XREFs of MiFillGapPtes @ 0x1403BC36C
 * Callers:
 *     MiFillGapAddresses @ 0x1403BC2CC (MiFillGapAddresses.c)
 *     MiFillGapPtes @ 0x1403BC36C (MiFillGapPtes.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiFillGapPtes @ 0x1403BC36C (MiFillGapPtes.c)
 */

char __fastcall MiFillGapPtes(unsigned __int64 a1, unsigned __int64 a2, __int64 a3, __int64 a4, int a5)
{
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  int v8; // r15d
  struct _KTHREAD *CurrentThread; // rax
  int v10; // esi
  __int64 v11; // r9
  unsigned __int64 v12; // rcx
  unsigned __int64 ValidPte; // rbx
  __int64 v14; // r8
  bool v15; // zf

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
      v12 = v5;
      if ( a5 )
        v12 = 0LL;
      ValidPte = MiMakeValidPte(v12, *(_QWORD *)(a4 + 8LL * a5), a5 != 0 ? -1476395004 : 536870913, v11);
      LODWORD(CurrentThread) = MiPteInShadowRange(v5);
      if ( (_DWORD)CurrentThread )
      {
        LODWORD(CurrentThread) = MiPteHasShadow();
        if ( (_DWORD)CurrentThread )
        {
          v10 = 1;
          if ( !HIBYTE(word_140C4DE88) )
          {
            v15 = (ValidPte & 1) == 0;
            goto LABEL_24;
          }
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
          {
            v15 = (ValidPte & 1) == 0;
LABEL_24:
            if ( !v15 )
            {
              LOBYTE(CurrentThread) = 0;
              ValidPte |= 0x8000000000000000uLL;
            }
          }
        }
      }
      *(_QWORD *)v5 = ValidPte;
      if ( v10 )
        LOBYTE(CurrentThread) = MiWritePteShadow(v5, ValidPte, v14);
      v10 = 0;
LABEL_14:
      v5 += 8LL;
    }
    while ( v5 <= v6 );
  }
  return (char)CurrentThread;
}
