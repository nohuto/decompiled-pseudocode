/*
 * XREFs of MiWriteValidPteNewPage @ 0x1402F19B0
 * Callers:
 *     MiTradeActivePage @ 0x1402F16A8 (MiTradeActivePage.c)
 *     MiStealPage @ 0x140349B20 (MiStealPage.c)
 *     MiConvertPrivateToProto @ 0x140367400 (MiConvertPrivateToProto.c)
 *     MiUnmapMdlCommon @ 0x14052BC04 (MiUnmapMdlCommon.c)
 *     MiCopyKstack @ 0x140530130 (MiCopyKstack.c)
 *     MiWriteAweClusterPte @ 0x1405486C4 (MiWriteAweClusterPte.c)
 *     MiTradeBootImagePage @ 0x140A42A24 (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140A4F77C (MxSwapPages.c)
 * Callees:
 *     MI_READ_PTE_LOCK_FREE @ 0x140291580 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x140291700 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1402F2F20 (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x1402F2F80 (MiPteHasShadow.c)
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
    v6 = MI_READ_PTE_LOCK_FREE((unsigned __int64)a1);
  result = (a2 ^ v6) & 0x7F00000000000000LL;
  v8 = result ^ a2;
  if ( v3 )
  {
    *a1 = v8;
    return result;
  }
  result = MiPteInShadowRange((unsigned __int64)a1);
  if ( (_DWORD)result )
  {
    result = MiPteHasShadow(v10, v9);
    if ( (_DWORD)result )
    {
      v3 = 1;
      if ( HIBYTE(word_140C4DF48) )
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
    return MiWritePteShadow(a1, v8);
  return result;
}
