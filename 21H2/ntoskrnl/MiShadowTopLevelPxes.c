/*
 * XREFs of MiShadowTopLevelPxes @ 0x140295830
 * Callers:
 *     MiCopyTopLevelMappings @ 0x140295758 (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChangeToProcess @ 0x1403A47F8 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     MiTransformValidPteInPlace @ 0x140378BA8 (MiTransformValidPteInPlace.c)
 */

char __fastcall MiShadowTopLevelPxes(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // r12
  struct _LIST_ENTRY *Flink; // r13
  __int64 v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rbx
  __int64 v11; // rcx
  int v12; // r15d
  bool v13; // zf
  __int64 v15; // [rsp+20h] [rbp-38h]
  signed __int64 *v16; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  CurrentThread = (struct _KTHREAD *)&retaddr;
  HIDWORD(v15) = 0;
  v4 = a3;
  v5 = a2;
  if ( (MiFlags & 0xC00000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 1928);
    if ( v6 )
    {
      LOBYTE(CurrentThread) = (_BYTE)PsInitialSystemProcess;
      if ( PsInitialSystemProcess )
      {
        Flink = PsInitialSystemProcess[1].ProcessListEntry.Flink;
        v8 = ((unsigned int)a2 >> 3) & 0x1FF;
        LODWORD(v15) = 256;
        v16 = qword_140C4E2BC;
        if ( a3 )
        {
          do
          {
            if ( _bittest64(qword_140C4E2BC, (unsigned int)(v8 - 256)) )
            {
              v9 = (__int64 *)(v6 + 8 * v8);
              v10 = MI_READ_PTE_LOCK_FREE((char *)Flink + 8 * v8);
              CurrentThread = (struct _KTHREAD *)MI_READ_PTE_LOCK_FREE(v9);
              if ( (struct _KTHREAD *)v10 != CurrentThread )
              {
                v11 = v6 + 8 * v8;
                if ( (*(_BYTE *)v9 & 1) == 0 )
                {
                  v12 = 0;
                  LODWORD(CurrentThread) = MiPteInShadowRange(v11);
                  if ( !(_DWORD)CurrentThread )
                    goto LABEL_11;
                  LODWORD(CurrentThread) = MiPteHasShadow();
                  if ( (_DWORD)CurrentThread )
                  {
                    v12 = 1;
                    if ( !HIBYTE(word_140C4E048) )
                    {
                      v13 = (v10 & 1) == 0;
                      goto LABEL_20;
                    }
                  }
                  else
                  {
                    CurrentThread = KeGetCurrentThread();
                    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                    {
                      v13 = (v10 & 1) == 0;
LABEL_20:
                      if ( !v13 )
                      {
                        LOBYTE(CurrentThread) = 0;
                        v10 |= 0x8000000000000000uLL;
                      }
                    }
                  }
LABEL_11:
                  *v9 = v10;
                  if ( v12 )
                    LOBYTE(CurrentThread) = MiWritePteShadow(v6 + 8 * v8, v10);
                  goto LABEL_6;
                }
                LOBYTE(CurrentThread) = MiTransformValidPteInPlace(v11, v5, v10, 3LL, v15, v16);
              }
            }
LABEL_6:
            v5 += 8LL;
            v8 = (unsigned int)(v8 + 1);
            --v4;
          }
          while ( v4 );
        }
      }
    }
  }
  return (char)CurrentThread;
}
