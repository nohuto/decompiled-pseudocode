/*
 * XREFs of MiWriteValidPteNewPage @ 0x14026EDE4
 * Callers:
 *     MiConvertPrivateToProto @ 0x140272A10 (MiConvertPrivateToProto.c)
 *     MiStealPage @ 0x1402E97D4 (MiStealPage.c)
 *     MiTradeActivePage @ 0x1402EA95C (MiTradeActivePage.c)
 *     MiUnmapMdlCommon @ 0x1405853E4 (MiUnmapMdlCommon.c)
 *     MiCopyKstack @ 0x140590A18 (MiCopyKstack.c)
 *     MiWriteAweClusterPte @ 0x1405ACAD0 (MiWriteAweClusterPte.c)
 *     MxSwapPages @ 0x140AF3FFC (MxSwapPages.c)
 *     MiTradeBootImagePage @ 0x140B05434 (MiTradeBootImagePage.c)
 * Callees:
 *     MiWritePteShadow @ 0x1402294F0 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140229550 (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140317A10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140317A80 (MiPteInShadowRange.c)
 */

char __fastcall MiWriteValidPteNewPage(__int64 *a1, __int64 a2, int a3)
{
  int v3; // esi
  __int64 v6; // rax
  __int64 CurrentThread; // rax
  __int64 v8; // rbx
  bool v9; // zf

  v3 = a3;
  if ( a3 )
    v6 = *a1;
  else
    v6 = MI_READ_PTE_LOCK_FREE(a1);
  CurrentThread = (a2 ^ v6) & 0x7F00000000000000LL;
  v8 = CurrentThread ^ a2;
  if ( v3 )
  {
    *a1 = v8;
    return CurrentThread;
  }
  LODWORD(CurrentThread) = MiPteInShadowRange(a1);
  if ( (_DWORD)CurrentThread )
  {
    LODWORD(CurrentThread) = MiPteHasShadow();
    if ( (_DWORD)CurrentThread )
    {
      v3 = 1;
      if ( HIBYTE(word_140C51864) )
        goto LABEL_5;
      v9 = (v8 & 1) == 0;
    }
    else
    {
      CurrentThread = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(CurrentThread + 184) + 2172LL) & 0x1000) == 0 )
        goto LABEL_5;
      v9 = (v8 & 1) == 0;
    }
    if ( !v9 )
    {
      LOBYTE(CurrentThread) = 0;
      v8 |= 0x8000000000000000uLL;
    }
  }
LABEL_5:
  *a1 = v8;
  if ( v3 )
    LOBYTE(CurrentThread) = MiWritePteShadow((__int64)a1, v8);
  return CurrentThread;
}
