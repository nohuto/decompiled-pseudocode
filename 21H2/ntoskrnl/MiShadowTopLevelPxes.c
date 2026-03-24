/*
 * XREFs of MiShadowTopLevelPxes @ 0x1402E44E0
 * Callers:
 *     MiCopyTopLevelMappings @ 0x1402E4408 (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChangeToProcess @ 0x1403A46A8 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x14032DEC0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     MiTransformValidPteInPlace @ 0x140379058 (MiTransformValidPteInPlace.c)
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
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // r15d
  __int64 v14; // r8
  bool v15; // zf
  __int64 v17; // [rsp+20h] [rbp-38h]
  signed __int64 *v18; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  CurrentThread = (struct _KTHREAD *)&retaddr;
  HIDWORD(v17) = 0;
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
        LODWORD(v17) = 256;
        v18 = qword_140C4E27C;
        if ( a3 )
        {
          do
          {
            if ( _bittest64(qword_140C4E27C, (unsigned int)(v8 - 256)) )
            {
              v9 = (__int64 *)(v6 + 8 * v8);
              v10 = MI_READ_PTE_LOCK_FREE((char *)Flink + 8 * v8);
              CurrentThread = (struct _KTHREAD *)MI_READ_PTE_LOCK_FREE(v9);
              if ( (struct _KTHREAD *)v10 != CurrentThread )
              {
                v12 = v6 + 8 * v8;
                if ( (*(_BYTE *)v9 & 1) == 0 )
                {
                  v13 = 0;
                  LODWORD(CurrentThread) = MiPteInShadowRange(v12, v11);
                  if ( !(_DWORD)CurrentThread )
                    goto LABEL_11;
                  LODWORD(CurrentThread) = MiPteHasShadow();
                  if ( (_DWORD)CurrentThread )
                  {
                    v13 = 1;
                    if ( !HIBYTE(word_140C4E008) )
                    {
                      v15 = (v10 & 1) == 0;
                      goto LABEL_20;
                    }
                  }
                  else
                  {
                    CurrentThread = KeGetCurrentThread();
                    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
                    {
                      v15 = (v10 & 1) == 0;
LABEL_20:
                      if ( !v15 )
                      {
                        LOBYTE(CurrentThread) = 0;
                        v10 |= 0x8000000000000000uLL;
                      }
                    }
                  }
LABEL_11:
                  *v9 = v10;
                  if ( v13 )
                    LOBYTE(CurrentThread) = MiWritePteShadow(v6 + 8 * v8, v10, v14);
                  goto LABEL_6;
                }
                LOBYTE(CurrentThread) = MiTransformValidPteInPlace(v12, v5, v10, 3LL, v17, v18);
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
