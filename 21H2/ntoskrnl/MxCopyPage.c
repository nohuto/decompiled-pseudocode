/*
 * XREFs of MxCopyPage @ 0x140A578CC
 * Callers:
 *     MiCreateSystemPageTable @ 0x140296560 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x1402599A8 (KeFlushSingleTb.c)
 *     MiMakeValidPte @ 0x140339480 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x1403FE0D0 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140403030 (KeCopyPage.c)
 *     MxGetPhase0Mapping @ 0x140A58438 (MxGetPhase0Mapping.c)
 */

__int64 __fastcall MxCopyPage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rdi
  unsigned __int64 ValidPte; // rbx
  int v8; // ebp
  BOOL v9; // r15d
  __int64 v10; // rdx
  int v11; // r8d
  __int64 v13; // rdx
  bool v14; // zf
  bool v15; // zf

  Phase0Mapping = MxGetPhase0Mapping();
  v5 = Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v6 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v6, BugCheckParameter2, -1610612732);
  v8 = 0;
  v9 = MiPteInShadowRange((unsigned __int64)v6);
  if ( v9 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v8 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_3;
      v14 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_3;
      v14 = (ValidPte & 1) == 0;
    }
    if ( !v14 )
      ValidPte |= v13;
  }
LABEL_3:
  *v6 = ValidPte;
  if ( v8 )
    MiWritePteShadow((__int64)v6, ValidPte);
  KeCopyPage(v5, a2);
  v10 = ZeroPte;
  v11 = 0;
  if ( v9 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v11 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_6;
      v15 = (v10 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_6;
      v15 = (v10 & 1) == 0;
    }
    if ( !v15 )
      v10 |= 0x8000000000000000uLL;
  }
LABEL_6:
  *v6 = v10;
  if ( v11 )
    MiWritePteShadow((__int64)v6, v10);
  return KeFlushSingleTb(v5, 0, 1u);
}
