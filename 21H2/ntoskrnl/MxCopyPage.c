/*
 * XREFs of MxCopyPage @ 0x140A568CC
 * Callers:
 *     MiCreateSystemPageTable @ 0x1402E5210 (MiCreateSystemPageTable.c)
 * Callees:
 *     KeFlushSingleTb @ 0x14026BA08 (KeFlushSingleTb.c)
 *     MiWritePteShadow @ 0x1402B69BC (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402B6A1C (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x14032E730 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140348AF0 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FDEF0 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140402E50 (KeCopyPage.c)
 *     MxGetPhase0Mapping @ 0x140A57438 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxCopyPage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rdi
  unsigned __int64 ValidPte; // rbx
  int v8; // ebp
  __int64 v9; // r8
  BOOL v10; // r15d
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v14; // rdx
  bool v15; // zf
  bool v16; // zf

  Phase0Mapping = MxGetPhase0Mapping();
  v5 = Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v6 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v6, BugCheckParameter2, -1610612732);
  v8 = 0;
  v10 = MiPteInShadowRange((unsigned __int64)v6);
  if ( v10 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_3;
      v15 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v15 = (ValidPte & 1) == 0;
    }
    if ( !v15 )
      ValidPte |= v14;
  }
LABEL_3:
  *v6 = ValidPte;
  if ( v8 )
    MiWritePteShadow((__int64)v6, ValidPte, v9);
  KeCopyPage(v5, a2);
  v11 = ZeroPte;
  v12 = 0LL;
  if ( v10 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = 1LL;
      if ( HIBYTE(word_140C4E008) )
        goto LABEL_6;
      v16 = (v11 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_6;
      v16 = (v11 & 1) == 0;
    }
    if ( !v16 )
      v11 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *v6 = v11;
  if ( (_DWORD)v12 )
    MiWritePteShadow((__int64)v6, v11, v12);
  return KeFlushSingleTb(v5, 0, 1u);
}
