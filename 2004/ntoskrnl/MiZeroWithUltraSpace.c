/*
 * XREFs of MiZeroWithUltraSpace @ 0x1403EF868
 * Callers:
 *     MiZeroInParallelWorker @ 0x1402DF7C0 (MiZeroInParallelWorker.c)
 * Callees:
 *     MiMakeProtectionPfnCompatible @ 0x14022978C (MiMakeProtectionPfnCompatible.c)
 *     MiMakeValidPte @ 0x1402342E0 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x1402386B0 (MiPteInShadowRange.c)
 *     MiGetUltraMapping @ 0x14023D870 (MiGetUltraMapping.c)
 *     MiZeroMemory @ 0x1402DFB30 (MiZeroMemory.c)
 *     MiWritePteShadow @ 0x14032ECC0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x14032ED20 (MiPteHasShadow.c)
 *     MiGetPfnPageSizeIndex @ 0x1403F0E28 (MiGetPfnPageSizeIndex.c)
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
  __int64 v15; // r8
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rdi
  int v18; // r13d
  bool v19; // zf
  int v20; // edi
  bool v21; // zf
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rbx
  int v25; // ebp
  __int64 v26; // r8
  bool v27; // zf
  unsigned __int64 v28; // rbx
  int v29; // edi
  __int64 v30; // r8
  bool v31; // zf
  __int64 v33; // [rsp+60h] [rbp+8h]
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
    v33 = v7;
  }
  else
  {
LABEL_6:
    v7 = 1LL;
    v33 = 1LL;
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
        if ( !HIBYTE(word_140C4DE08) )
        {
          v21 = (ValidPte & 1) == 0;
          goto LABEL_34;
        }
      }
      else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v21 = (ValidPte & 1) == 0;
LABEL_34:
        if ( !v21 )
          ValidPte |= 0x8000000000000000uLL;
      }
    }
    *(_QWORD *)v9 = ValidPte;
    if ( v20 )
      MiWritePteShadow(v9, ValidPte, v15);
    goto LABEL_38;
  }
  if ( v9 >= v9 + 128 )
    goto LABEL_27;
  v16 = v9 + 128;
  do
  {
    v17 = ValidPte;
    v18 = 0;
    if ( !MiPteInShadowRange(v9) )
      goto LABEL_23;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v18 = 1;
      if ( HIBYTE(word_140C4DE08) )
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
      v17 = ValidPte | 0x8000000000000000uLL;
LABEL_23:
    *(_QWORD *)v9 = v17;
    if ( v18 )
      MiWritePteShadow(v9, v17, v15);
    v9 += 8LL;
    ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFF000LL;
  }
  while ( v9 < v16 );
  v7 = v33;
  v8 = UltraMapping;
LABEL_27:
  v9 -= 128LL;
LABEL_38:
  LOBYTE(CurrentThread) = MiZeroMemory(v8, v7 << 12, v15);
  if ( (_DWORD)v4 == 2 )
  {
    v23 = v9 + 128;
    while ( 1 )
    {
      if ( v9 >= v23 )
        return (char)CurrentThread;
      v24 = ZeroPte;
      v25 = 0;
      LODWORD(CurrentThread) = MiPteInShadowRange(v9);
      if ( (_DWORD)CurrentThread )
      {
        LODWORD(CurrentThread) = MiPteHasShadow();
        if ( (_DWORD)CurrentThread )
        {
          v25 = 1;
          if ( HIBYTE(word_140C4DE08) )
            goto LABEL_48;
          v27 = (ZeroPte & 1) == 0;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_48;
          v27 = (ZeroPte & 1) == 0;
        }
        if ( !v27 )
          v24 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_48:
      *(_QWORD *)v9 = v24;
      if ( v25 )
        LOBYTE(CurrentThread) = MiWritePteShadow(v9, v24, v26);
      v9 += 8LL;
    }
  }
  v28 = ZeroPte;
  v29 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(v9);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v29 = 1;
      if ( !HIBYTE(word_140C4DE08) )
      {
        v31 = (ZeroPte & 1) == 0;
LABEL_59:
        if ( !v31 )
          v28 = ZeroPte | 0x8000000000000000uLL;
      }
    }
    else
    {
      CurrentThread = KeGetCurrentThread();
      if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
      {
        v31 = (ZeroPte & 1) == 0;
        goto LABEL_59;
      }
    }
  }
  *(_QWORD *)v9 = v28;
  if ( v29 )
    LOBYTE(CurrentThread) = MiWritePteShadow(v9, v28, v30);
  return (char)CurrentThread;
}
