/*
 * XREFs of MiWriteValidPteNewPage @ 0x140234AD8
 * Callers:
 *     MiTradeActivePage @ 0x1402347D0 (MiTradeActivePage.c)
 *     MiStealPage @ 0x140259C44 (MiStealPage.c)
 *     MiConvertPrivateToProto @ 0x14036A200 (MiConvertPrivateToProto.c)
 *     MiUnmapMdlCommon @ 0x140531964 (MiUnmapMdlCommon.c)
 *     MiCopyKstack @ 0x140535E90 (MiCopyKstack.c)
 *     MiWriteAweClusterPte @ 0x14054E424 (MiWriteAweClusterPte.c)
 *     MiTradeBootImagePage @ 0x140A50E60 (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140A58120 (MxSwapPages.c)
 * Callees:
 *     MiWritePteShadow @ 0x140234B9C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140234BFC (MiPteHasShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x140338C10 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140353840 (MiPteInShadowRange.c)
 */

__int64 __fastcall MiWriteValidPteNewPage(__int64 *a1, __int64 a2, int a3)
{
  int v3; // esi
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  bool v11; // zf

  v3 = a3;
  if ( a3 )
    v6 = *a1;
  else
    v6 = MI_READ_PTE_LOCK_FREE(a1);
  result = (a2 ^ v6) & 0x7F00000000000000LL;
  v8 = result ^ a2;
  if ( v3 )
  {
    *a1 = v8;
    return result;
  }
  result = MiPteInShadowRange(a1);
  if ( (_DWORD)result )
  {
    result = MiPteHasShadow(v10, v9);
    if ( (_DWORD)result )
    {
      v3 = 1;
      if ( HIBYTE(word_140C4E048) )
        goto LABEL_5;
      v11 = (v8 & 1) == 0;
    }
    else
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) == 0 )
        goto LABEL_5;
      v11 = (v8 & 1) == 0;
    }
    if ( !v11 )
    {
      result = 0x8000000000000000uLL;
      v8 |= 0x8000000000000000uLL;
    }
  }
LABEL_5:
  *a1 = v8;
  if ( v3 )
    return MiWritePteShadow(a1);
  return result;
}
