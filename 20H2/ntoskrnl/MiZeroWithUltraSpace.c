/*
 * XREFs of MiZeroWithUltraSpace @ 0x1403F3CD8
 * Callers:
 *     MiZeroInParallelWorker @ 0x140333530 (MiZeroInParallelWorker.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MiMakeValidPte @ 0x1402B1B40 (MiMakeValidPte.c)
 *     MiGetUltraMapping @ 0x1402C2F20 (MiGetUltraMapping.c)
 *     MiMakeProtectionPfnCompatible @ 0x1402CA1DC (MiMakeProtectionPfnCompatible.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 *     MiZeroMemory @ 0x1403338A0 (MiZeroMemory.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F533C (MiGetPfnPageSizeIndex.c)
 */

char __fastcall MiZeroWithUltraSpace(__int64 a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v4; // rbp
  unsigned int PfnPageSizeIndex; // eax
  unsigned int v6; // r9d
  __int64 v7; // r15
  __int64 v8; // r13
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  int ProtectionPfnCompatible; // eax
  __int64 v12; // r9
  int v13; // r8d
  unsigned __int64 ValidPte; // rbx
  unsigned __int64 v15; // r15
  unsigned __int64 v16; // rdi
  int v17; // r13d
  __int64 v18; // r8
  bool v19; // zf
  int v20; // edi
  __int64 v21; // r8
  bool v22; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v24; // rdi
  unsigned __int64 v25; // rbx
  int v26; // ebp
  __int64 v27; // r8
  bool v28; // zf
  unsigned __int64 v29; // rbx
  int v30; // edi
  __int64 v31; // r8
  bool v32; // zf
  __int64 v34; // [rsp+60h] [rbp+8h]
  unsigned __int64 UltraMapping; // [rsp+70h] [rbp+18h]

  v2 = a1;
  LODWORD(v4) = 3;
  if ( (*(_QWORD *)(a2 + 40) & 0x1000000000LL) == 0 )
    goto LABEL_6;
  PfnPageSizeIndex = MiGetPfnPageSizeIndex(a2, a2, a1, 3LL);
  v4 = PfnPageSizeIndex;
  if ( PfnPageSizeIndex == -1 )
    v4 = v6;
  if ( (unsigned int)v4 < v6 )
  {
    v7 = MiLargePageSizes[v4];
    v34 = v7;
  }
  else
  {
LABEL_6:
    v7 = 1LL;
    v34 = 1LL;
  }
  UltraMapping = MiGetUltraMapping((unsigned __int64 *)(v2 + 32LL * (unsigned int)v4), v4, v7, 0);
  v8 = UltraMapping;
  v9 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( (unsigned int)v4 <= 1 )
  {
    v10 = (unsigned int)(2 - v4);
    do
    {
      v9 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v10;
    }
    while ( v10 );
  }
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4, a2);
  v13 = -1543503872;
  if ( (unsigned int)v4 > 1 )
    v13 = -1610612736;
  ValidPte = MiMakeValidPte(v9, v12, ProtectionPfnCompatible | (unsigned int)v13, v12);
  if ( (_DWORD)v4 != 2 )
  {
    v20 = 0;
    if ( MiPteInShadowRange(v9) )
    {
      if ( (unsigned int)MiPteHasShadow() )
      {
        v20 = 1;
        if ( !HIBYTE(word_140C4DE88) )
        {
          v22 = (ValidPte & 1) == 0;
          goto LABEL_34;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v22 = (ValidPte & 1) == 0;
LABEL_34:
        if ( !v22 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v9 = ValidPte;
    if ( v20 )
      MiWritePteShadow(v9, ValidPte, v21);
    goto LABEL_38;
  }
  if ( v9 >= v9 + 128 )
    goto LABEL_27;
  v15 = v9 + 128;
  do
  {
    v16 = ValidPte;
    v17 = 0;
    if ( !MiPteInShadowRange(v9) )
      goto LABEL_23;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v17 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_23;
      v19 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_23;
      v19 = (ValidPte & 1) == 0;
    }
    if ( !v19 )
      v16 = ValidPte | 0x8000000000000000uLL;
LABEL_23:
    *(_QWORD *)v9 = v16;
    if ( v17 )
      MiWritePteShadow(v9, v16, v18);
    v9 += 8LL;
    ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFF000LL;
  }
  while ( v9 < v15 );
  v7 = v34;
  v8 = UltraMapping;
LABEL_27:
  v9 -= 128LL;
LABEL_38:
  LOBYTE(CurrentThread) = MiZeroMemory(v8, v7 << 12);
  if ( (_DWORD)v4 == 2 )
  {
    v24 = v9 + 128;
    while ( 1 )
    {
      if ( v9 >= v24 )
        return (char)CurrentThread;
      v25 = ZeroPte;
      v26 = 0;
      LODWORD(CurrentThread) = MiPteInShadowRange(v9);
      if ( (_DWORD)CurrentThread )
      {
        LODWORD(CurrentThread) = MiPteHasShadow();
        if ( (_DWORD)CurrentThread )
        {
          v26 = 1;
          if ( HIBYTE(word_140C4DE88) )
            goto LABEL_48;
          v28 = (ZeroPte & 1) == 0;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_48;
          v28 = (ZeroPte & 1) == 0;
        }
        if ( !v28 )
          v25 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_48:
      *(_QWORD *)v9 = v25;
      if ( v26 )
        LOBYTE(CurrentThread) = MiWritePteShadow(v9, v25, v27);
      v9 += 8LL;
    }
  }
  v29 = ZeroPte;
  v30 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(v9);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v30 = 1;
      if ( !HIBYTE(word_140C4DE88) )
      {
        v32 = (ZeroPte & 1) == 0;
LABEL_59:
        if ( !v32 )
          v29 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v32 = (ZeroPte & 1) == 0;
        goto LABEL_59;
      }
    }
  }
  *(_QWORD *)v9 = v29;
  if ( v30 )
    LOBYTE(CurrentThread) = MiWritePteShadow(v9, v29, v31);
  return (char)CurrentThread;
}
