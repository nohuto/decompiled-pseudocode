/*
 * XREFs of ?Add@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@AEBQEAX@Z @ 0x18001F778
 * Callers:
 *     ?Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z @ 0x18001F718 (-Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r8
  _QWORD *v9; // rcx
  __int64 result; // rax

  v5 = _o__recalloc(xmmword_1803D3998, (int)qword_1803D39A8 + 1, 8LL);
  if ( !v5 )
    return 0LL;
  xmmword_1803D3998 = v5;
  v6 = _o__recalloc(*(&xmmword_1803D3998 + 1), (int)qword_1803D39A8 + 1, 8LL);
  if ( !v6 )
    return 0LL;
  v7 = (int)qword_1803D39A8;
  *(&xmmword_1803D3998 + 1) = v6;
  v8 = (_QWORD *)(xmmword_1803D3998 + 8LL * (int)qword_1803D39A8);
  if ( v8 )
  {
    *v8 = *a2;
    v6 = *(&xmmword_1803D3998 + 1);
  }
  v9 = (_QWORD *)(v6 + 8 * v7);
  if ( v9 )
    *v9 = *a3;
  result = 1LL;
  LODWORD(qword_1803D39A8) = qword_1803D39A8 + 1;
  return result;
}
