/*
 * XREFs of ?Add@?$CSimpleMap@PEAU_SEB_RPC_PUBLISH_DATA@@PEAXV?$CSimpleMapEqualHelper@PEAU_SEB_RPC_PUBLISH_DATA@@PEAX@ATL@@@ATL@@QEAAHAEBQEAU_SEB_RPC_PUBLISH_DATA@@AEBQEAX@Z @ 0x18003169C
 * Callers:
 *     ?Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z @ 0x18003163C (-Insert@ContextTable@@QEAAKPEAU_SEB_RPC_PUBLISH_DATA@@PEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CSimpleMap<_SEB_RPC_PUBLISH_DATA *,void *,ATL::CSimpleMapEqualHelper<_SEB_RPC_PUBLISH_DATA *,void *>>::Add(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  void *v5; // rax
  char *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // r8
  char *v9; // rcx
  __int64 result; // rax

  v5 = (void *)_o__recalloc(Block, (int)qword_180348460 + 1, 8LL);
  if ( !v5 )
    return 0LL;
  Block = v5;
  v6 = (char *)_o__recalloc(*(&Block + 1), (int)qword_180348460 + 1, 8LL);
  if ( !v6 )
    return 0LL;
  v7 = (int)qword_180348460;
  *(&Block + 1) = v6;
  v8 = (char *)Block + 8 * (int)qword_180348460;
  if ( v8 )
  {
    *v8 = *a2;
    v6 = (char *)*(&Block + 1);
  }
  v9 = &v6[8 * v7];
  if ( v9 )
    *(_QWORD *)v9 = *a3;
  result = 1LL;
  LODWORD(qword_180348460) = qword_180348460 + 1;
  return result;
}
