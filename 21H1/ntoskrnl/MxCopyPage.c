/*
 * XREFs of MxCopyPage @ 0x140A4EF28
 * Callers:
 *     MiCreateSystemPageTable @ 0x1403289C0 (MiCreateSystemPageTable.c)
 * Callees:
 *     MiMakeValidPte @ 0x14028D330 (MiMakeValidPte.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
 *     KeFlushSingleTb @ 0x14034C17C (KeFlushSingleTb.c)
 *     KeBugCheckEx @ 0x1403F5E40 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x1403F9E10 (KeCopyPage.c)
 *     MxGetPhase0Mapping @ 0x140A4FA94 (MxGetPhase0Mapping.c)
 */

char __fastcall MxCopyPage(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  unsigned __int64 Phase0Mapping; // rax
  __int64 v5; // r9
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rdi
  unsigned __int64 ValidPte; // rbx
  int v9; // ebp
  BOOL v10; // r15d
  __int64 v11; // rdx
  int v12; // r8d
  __int64 v14; // rdx
  bool v15; // zf
  bool v16; // zf

  Phase0Mapping = MxGetPhase0Mapping();
  v6 = Phase0Mapping;
  if ( !Phase0Mapping )
    KeBugCheckEx(0x1Au, 0x3030305uLL, BugCheckParameter2, 0LL, 0LL);
  v7 = (_QWORD *)(((Phase0Mapping >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  ValidPte = MiMakeValidPte((unsigned __int64)v7, BugCheckParameter2, 2684354564LL, v5);
  v9 = 0;
  v10 = MiPteInShadowRange((unsigned __int64)v7);
  if ( v10 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v9 = 1;
      if ( HIBYTE(word_140C4DF48) )
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
  *v7 = ValidPte;
  if ( v9 )
    MiWritePteShadow((__int64)v7, ValidPte);
  KeCopyPage(v6, a2);
  v11 = ZeroPte;
  v12 = 0;
  if ( v10 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v12 = 1;
      if ( HIBYTE(word_140C4DF48) )
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
  *v7 = v11;
  if ( v12 )
    MiWritePteShadow((__int64)v7, v11);
  return KeFlushSingleTb(v6, 0, 1u);
}
