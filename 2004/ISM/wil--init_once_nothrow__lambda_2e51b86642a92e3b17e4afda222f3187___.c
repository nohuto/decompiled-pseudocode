/*
 * XREFs of wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___ @ 0x1801468CC
 * Callers:
 *     ?GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ @ 0x180146C70 (-GetInstance@DisplayOcclusionContextProvider@@SAPEAV1@XZ.c)
 * Callees:
 *     ??0SystemContextProvider@@IEAA@XZ @ 0x180025A24 (--0SystemContextProvider@@IEAA@XZ.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x1800283CC (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     memset_0 @ 0x18003C4C0 (memset_0.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180066F44 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ??$_Buyheadnode@V?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@std@@@?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@SAPEAU01@AEAV?$allocator@U?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect@@@std@@PEAX@std@@@1@@Z @ 0x180145EC4 (--$_Buyheadnode@V-$allocator@U-$_Tree_node@U-$pair@$$CBUDockInputIdentity@@UDisplayOcclusionRect.c)
 */

__int64 __fastcall wil::init_once_nothrow__lambda_2e51b86642a92e3b17e4afda222f3187___(
        __int64 a1,
        __int64 a2,
        _BYTE *a3)
{
  const char *v4; // r9
  SystemContextProvider *v6; // rax
  SystemContextProvider *v7; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  WINBOOL fPending; // [rsp+38h] [rbp+10h] BYREF

  fPending = 0;
  if ( a3 )
    *a3 = 0;
  if ( !InitOnceBeginInitialize(&stru_1802094C0, 0, &fPending, 0LL) )
    return wil::details::in1diag3::Return_GetLastError(retaddr, (void *)0x1D4, (__int64)"wil", v4);
  if ( fPending )
  {
    qword_1802089C8 = 0LL;
    v6 = (SystemContextProvider *)RefCountedObject::operator new(0x68uLL);
    v7 = v6;
    if ( v6 )
    {
      memset_0(v6, 0, 0x68uLL);
      SystemContextProvider::SystemContextProvider(v7);
      *(_QWORD *)v7 = &DisplayOcclusionContextProvider::`vftable'{for `ISystemContextProvider'};
      *((_QWORD *)v7 + 1) = &DisplayOcclusionContextProvider::`vftable'{for `RefCountedObject'};
      *((_QWORD *)v7 + 11) = 0LL;
      *((_QWORD *)v7 + 12) = 0LL;
      *((_QWORD *)v7 + 11) = std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>::_Buyheadnode<std::allocator<std::_Tree_node<std::pair<DockInputIdentity const,DisplayOcclusionRect>,void *>>>();
    }
    else
    {
      v7 = 0LL;
    }
    qword_1802089C8 = (__int64)v7;
    if ( a3 )
      *a3 = 1;
    InitOnceComplete(&stru_1802094C0, 0, 0LL);
  }
  return 0LL;
}
