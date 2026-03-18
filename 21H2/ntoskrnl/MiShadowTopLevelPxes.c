/*
 * XREFs of MiShadowTopLevelPxes @ 0x14036C624
 * Callers:
 *     MiCopyTopLevelMappings @ 0x14036C4B0 (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChangeToProcess @ 0x14036C9FC (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiTransformValidPteInPlace @ 0x1402270B8 (MiTransformValidPteInPlace.c)
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

char __fastcall MiShadowTopLevelPxes(__int64 a1, unsigned __int64 a2, int a3)
{
  struct _KTHREAD *CurrentThread; // rax
  int v4; // ebp
  unsigned __int64 v5; // r14
  __int64 v6; // r12
  struct _LIST_ENTRY *Flink; // r13
  __int64 v8; // rsi
  __int64 *v9; // rdi
  __int64 v10; // rbx
  volatile signed __int64 *v11; // rcx
  int v12; // r15d
  bool v13; // zf

  LOBYTE(CurrentThread) = 0;
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
        if ( a3 )
        {
          do
          {
            if ( _bittest64(qword_140C51B04, (unsigned int)(v8 - 256)) )
            {
              v9 = (__int64 *)(v6 + 8 * v8);
              v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)Flink + 8 * v8);
              CurrentThread = (struct _KTHREAD *)MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
              if ( (struct _KTHREAD *)v10 != CurrentThread )
              {
                v11 = (volatile signed __int64 *)(v6 + 8 * v8);
                if ( (*(_BYTE *)v9 & 1) == 0 )
                {
                  v12 = 0;
                  LODWORD(CurrentThread) = MiPteInShadowRange((unsigned __int64)v11);
                  if ( !(_DWORD)CurrentThread )
                    goto LABEL_11;
                  LODWORD(CurrentThread) = MiPteHasShadow();
                  if ( (_DWORD)CurrentThread )
                  {
                    v12 = 1;
                    if ( !HIBYTE(word_140C51864) )
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
                LOBYTE(CurrentThread) = MiTransformValidPteInPlace(v11, v5, v10, 3u);
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
