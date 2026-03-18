/*
 * XREFs of MiWriteValidPteNewPage @ 0x140313E68
 * Callers:
 *     MiTradeActivePage @ 0x140313B60 (MiTradeActivePage.c)
 *     MiStealPage @ 0x1403523FC (MiStealPage.c)
 *     MiConvertPrivateToProto @ 0x140369DA0 (MiConvertPrivateToProto.c)
 *     MiUnmapMdlCommon @ 0x14052FC24 (MiUnmapMdlCommon.c)
 *     MiCopyKstack @ 0x140534150 (MiCopyKstack.c)
 *     MiWriteAweClusterPte @ 0x14054C6E4 (MiWriteAweClusterPte.c)
 *     MiTradeBootImagePage @ 0x140A4E514 (MiTradeBootImagePage.c)
 *     MxSwapPages @ 0x140A55AFC (MxSwapPages.c)
 * Callees:
 *     MiPteInShadowRange @ 0x14021EA50 (MiPteInShadowRange.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1402B12D0 (MI_READ_PTE_LOCK_FREE.c)
 *     MiWritePteShadow @ 0x140313F2C (MiWritePteShadow.c)
 *     MiPteHasShadow @ 0x140313F8C (MiPteHasShadow.c)
 */

__int64 __fastcall MiWriteValidPteNewPage(__int64 *a1, __int64 a2, int a3)
{
  int v3; // esi
  __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  bool v13; // zf

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
    result = MiPteHasShadow(v10, v9, v11, v12);
    if ( (_DWORD)result )
    {
      v3 = 1;
      if ( HIBYTE(word_140C4DE88) )
        goto LABEL_5;
      v13 = (v8 & 1) == 0;
    }
    else
    {
      result = (__int64)KeGetCurrentThread();
      if ( (*(_DWORD *)(*(_QWORD *)(result + 184) + 2172LL) & 0x1000) == 0 )
        goto LABEL_5;
      v13 = (v8 & 1) == 0;
    }
    if ( !v13 )
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
