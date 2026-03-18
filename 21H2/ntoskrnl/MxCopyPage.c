/*
 * XREFs of MxCopyPage @ 0x140B51C0C
 * Callers:
 *     MiInitializeSystemPageTable @ 0x14027C784 (MiInitializeSystemPageTable.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MiMakeValidPte @ 0x1402CBD10 (MiMakeValidPte.c)
 *     KeFlushSingleTb @ 0x1402EA644 (KeFlushSingleTb.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 *     KeBugCheckEx @ 0x14041F3D0 (KeBugCheckEx.c)
 *     KeCopyPage @ 0x140424FF0 (KeCopyPage.c)
 *     MxGetPhase0Mapping @ 0x140AF4308 (MxGetPhase0Mapping.c)
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
  bool v11; // zf
  __int64 v12; // rdx
  int v13; // r8d
  bool v14; // zf

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
      if ( HIBYTE(word_140C51864) )
        goto LABEL_11;
      v11 = (ValidPte & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_11;
      v11 = (ValidPte & 1) == 0;
    }
    if ( !v11 )
      ValidPte |= v10;
  }
LABEL_11:
  *v6 = ValidPte;
  if ( v8 )
    MiWritePteShadow((__int64)v6, ValidPte);
  KeCopyPage(v5, a2);
  v12 = ZeroPte;
  v13 = 0;
  if ( v9 )
  {
    if ( (unsigned int)MiPteHasShadow() )
    {
      v13 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_21;
      v14 = (v12 & 1) == 0;
    }
    else
    {
      if ( (HIDWORD(KeGetCurrentThread()->ApcState.Process[2].Header.WaitListHead.Flink) & 0x1000) == 0 )
        goto LABEL_21;
      v14 = (v12 & 1) == 0;
    }
    if ( !v14 )
      v12 |= 0x8000000000000000uLL;
  }
LABEL_21:
  *v6 = v12;
  if ( v13 )
    MiWritePteShadow((__int64)v6, v12);
  return KeFlushSingleTb(v5, 0, 1u);
}
