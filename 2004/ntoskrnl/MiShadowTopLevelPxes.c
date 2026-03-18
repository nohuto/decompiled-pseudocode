/*
 * XREFs of MiShadowTopLevelPxes @ 0x1402E2394
 * Callers:
 *     MiCopyTopLevelMappings @ 0x1402E22BC (MiCopyTopLevelMappings.c)
 *     MiReplicatePteChangeToProcess @ 0x1403A1918 (MiReplicatePteChangeToProcess.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140238530 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiTransformValidPteInPlace @ 0x140376EBC (MiTransformValidPteInPlace.c)
 */

struct _KTHREAD *__fastcall MiShadowTopLevelPxes(__int64 a1, __int64 a2, int a3)
{
  struct _KTHREAD *result; // rax
  int v4; // ebp
  __int64 v5; // r14
  __int64 v6; // r12
  struct _LIST_ENTRY *Flink; // r13
  __int64 v8; // rsi
  _BYTE *v9; // rdi
  __int64 v10; // rbx
  unsigned __int64 v11; // rcx
  int v12; // r15d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  bool v17; // zf
  __int64 v18; // [rsp+20h] [rbp-38h]
  signed __int64 *v19; // [rsp+28h] [rbp-30h]
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (struct _KTHREAD *)&retaddr;
  HIDWORD(v18) = 0;
  v4 = a3;
  v5 = a2;
  if ( (MiFlags & 0xC00000) != 0 )
  {
    v6 = *(_QWORD *)(a1 + 1928);
    if ( v6 )
    {
      result = (struct _KTHREAD *)PsInitialSystemProcess;
      if ( PsInitialSystemProcess )
      {
        Flink = PsInitialSystemProcess[1].ProcessListEntry.Flink;
        v8 = ((unsigned int)a2 >> 3) & 0x1FF;
        LODWORD(v18) = 256;
        v19 = qword_140C4E07C;
        if ( a3 )
        {
          while ( 1 )
          {
            if ( !_bittest64(qword_140C4E07C, (unsigned int)(v8 - 256)) )
              goto LABEL_6;
            v9 = (_BYTE *)(v6 + 8 * v8);
            v10 = MI_READ_PTE_LOCK_FREE((unsigned __int64)Flink + 8 * v8);
            result = (struct _KTHREAD *)MI_READ_PTE_LOCK_FREE((unsigned __int64)v9);
            if ( (struct _KTHREAD *)v10 == result )
              goto LABEL_6;
            v11 = v6 + 8 * v8;
            if ( (*v9 & 1) == 0 )
              break;
            result = (struct _KTHREAD *)MiTransformValidPteInPlace(v11, v5, v10, 3LL, v18, v19);
LABEL_6:
            v5 += 8LL;
            v8 = (unsigned int)(v8 + 1);
            if ( !--v4 )
              return result;
          }
          v12 = 0;
          result = (struct _KTHREAD *)MiPteInShadowRange(v11);
          if ( !(_DWORD)result )
          {
LABEL_11:
            *(_QWORD *)v9 = v10;
            if ( v12 )
              result = (struct _KTHREAD *)MiWritePteShadow(v6 + 8 * v8, v10);
            goto LABEL_6;
          }
          result = (struct _KTHREAD *)MiPteHasShadow(v14, v13, v15, v16);
          if ( (_DWORD)result )
          {
            v12 = 1;
            if ( HIBYTE(word_140C4DE08) )
              goto LABEL_11;
            v17 = (v10 & 1) == 0;
          }
          else
          {
            result = KeGetCurrentThread();
            if ( (HIDWORD(result->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
              goto LABEL_11;
            v17 = (v10 & 1) == 0;
          }
          if ( !v17 )
          {
            result = (struct _KTHREAD *)0x8000000000000000LL;
            v10 |= 0x8000000000000000uLL;
          }
          goto LABEL_11;
        }
      }
    }
  }
  return result;
}
