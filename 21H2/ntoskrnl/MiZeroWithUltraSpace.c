/*
 * XREFs of MiZeroWithUltraSpace @ 0x14026C4CC
 * Callers:
 *     MiZeroInParallelWorker @ 0x14026C240 (MiZeroInParallelWorker.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiGetPfnPageSizeIndex @ 0x140235E10 (MiGetPfnPageSizeIndex.c)
 *     MiMakeProtectionPfnCompatible @ 0x14026C61C (MiMakeProtectionPfnCompatible.c)
 *     MiGetUltraMapping @ 0x1402C6260 (MiGetUltraMapping.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeZeroPages @ 0x140424F50 (KeZeroPages.c)
 */

char __fastcall MiZeroWithUltraSpace(__int64 a1, __int64 a2)
{
  unsigned int v4; // ebp
  __int64 v5; // r15
  __int64 v6; // rcx
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // rsi
  int ProtectionPfnCompatible; // eax
  int v10; // r8d
  __int64 ValidPte; // rbx
  int v12; // edi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v14; // rbx
  int v15; // edi
  unsigned int PfnPageSizeIndex; // eax
  __int64 v17; // rcx
  unsigned __int64 v18; // r15
  unsigned __int64 v19; // rdi
  int v20; // r13d
  bool v21; // zf
  bool v22; // zf
  unsigned __int64 v23; // rdi
  unsigned __int64 v24; // rbx
  int v25; // ebp
  bool v26; // zf
  bool v27; // zf
  __int64 v29; // [rsp+60h] [rbp+8h]
  unsigned __int64 UltraMapping; // [rsp+70h] [rbp+18h]

  v4 = 3;
  if ( _bittest64((const signed __int64 *)(a2 + 40), 0x28u) )
  {
    PfnPageSizeIndex = MiGetPfnPageSizeIndex(a2);
    v4 = PfnPageSizeIndex;
    if ( PfnPageSizeIndex == -1 )
    {
      v4 = 3;
    }
    else if ( PfnPageSizeIndex < 3 )
    {
      v6 = PfnPageSizeIndex;
      v5 = MiLargePageSizes[PfnPageSizeIndex];
      v29 = v5;
      goto LABEL_3;
    }
  }
  v5 = 1LL;
  v29 = 1LL;
  v6 = v4;
LABEL_3:
  UltraMapping = MiGetUltraMapping(a1 + 32 * v6, v4, v5, 0LL);
  v7 = UltraMapping;
  v8 = ((UltraMapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  if ( v4 <= 1 )
  {
    v17 = 2 - v4;
    do
    {
      v8 = ((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v17;
    }
    while ( v17 );
  }
  ProtectionPfnCompatible = MiMakeProtectionPfnCompatible(4LL, a2);
  v10 = -1543503872;
  if ( v4 > 1 )
    v10 = -1610612736;
  ValidPte = MiMakeValidPte(
               v8,
               0xAAAAAAAAAAAAAAABuLL * ((a2 + 0x220000000000LL) >> 4),
               ProtectionPfnCompatible | (unsigned int)v10);
  if ( v4 != 2 )
  {
    v12 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v8) )
      goto LABEL_8;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = 1;
      if ( !HIBYTE(word_140C51864) )
      {
        v22 = (ValidPte & 1) == 0;
        goto LABEL_41;
      }
    }
    else if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v22 = (ValidPte & 1) == 0;
LABEL_41:
      if ( !v22 )
        ValidPte |= 0x8000000000000000uLL;
    }
LABEL_8:
    *(_QWORD *)v8 = ValidPte;
    if ( v12 )
      MiWritePteShadow(v8, ValidPte);
    goto LABEL_10;
  }
  if ( v8 >= v8 + 128 )
    goto LABEL_35;
  v18 = v8 + 128;
  do
  {
    v19 = ValidPte;
    v20 = 0;
    if ( !(unsigned int)MiPteInShadowRange(v8) )
      goto LABEL_31;
    if ( (unsigned int)MiPteHasShadow() )
    {
      v20 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_31;
      v21 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_31;
      v21 = (ValidPte & 1) == 0;
    }
    if ( !v21 )
      v19 = ValidPte | 0x8000000000000000uLL;
LABEL_31:
    *(_QWORD *)v8 = v19;
    if ( v20 )
      MiWritePteShadow(v8, v19);
    v8 += 8LL;
    ValidPte ^= (ValidPte ^ (ValidPte + 4096)) & 0xFFFFFFFFFF000LL;
  }
  while ( v8 < v18 );
  v5 = v29;
  v7 = UltraMapping;
LABEL_35:
  v8 -= 128LL;
LABEL_10:
  LOBYTE(CurrentThread) = KeZeroPages(v7, v5 << 12);
  if ( v4 == 2 )
  {
    v23 = v8 + 128;
    while ( 1 )
    {
      if ( v8 >= v23 )
        return (char)CurrentThread;
      v24 = ZeroPte;
      v25 = 0;
      LODWORD(CurrentThread) = MiPteInShadowRange(v8);
      if ( (_DWORD)CurrentThread )
      {
        LODWORD(CurrentThread) = MiPteHasShadow();
        if ( (_DWORD)CurrentThread )
        {
          v25 = 1;
          if ( HIBYTE(word_140C51864) )
            goto LABEL_52;
          v26 = (ZeroPte & 1) == 0;
        }
        else
        {
          CurrentThread = KeGetCurrentThread();
          if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
            goto LABEL_52;
          v26 = (ZeroPte & 1) == 0;
        }
        if ( !v26 )
          v24 = ZeroPte | 0x8000000000000000uLL;
      }
LABEL_52:
      *(_QWORD *)v8 = v24;
      if ( v25 )
        LOBYTE(CurrentThread) = MiWritePteShadow(v8, v24);
      v8 += 8LL;
    }
  }
  v14 = ZeroPte;
  v15 = 0;
  LODWORD(CurrentThread) = MiPteInShadowRange(v8);
  if ( !(_DWORD)CurrentThread )
    goto LABEL_12;
  LODWORD(CurrentThread) = MiPteHasShadow();
  if ( (_DWORD)CurrentThread )
  {
    v15 = 1;
    if ( !HIBYTE(word_140C51864) )
    {
      v27 = (ZeroPte & 1) == 0;
      goto LABEL_62;
    }
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (HIDWORD(CurrentThread->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) != 0 )
    {
      v27 = (ZeroPte & 1) == 0;
LABEL_62:
      if ( !v27 )
        v14 = ZeroPte | 0x8000000000000000uLL;
    }
  }
LABEL_12:
  *(_QWORD *)v8 = v14;
  if ( v15 )
    LOBYTE(CurrentThread) = MiWritePteShadow(v8, v14);
  return (char)CurrentThread;
}
