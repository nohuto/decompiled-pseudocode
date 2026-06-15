/*
 * XREFs of ?NewNode@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x14004CAA8
 * Callers:
 *     ?CreateNode@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEAAPEAVCNode@12@_KII@Z @ 0x14004B90C (-CreateNode@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140004190 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x14003DEFC (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?PickSize@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAI_K@Z @ 0x1400400F4 (-PickSize@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@A.c)
 *     ?Rehash@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAXI@Z @ 0x140041E38 (-Rehash@-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL.c)
 */

// Hidden C++ exception states: #try_helpers=1
__int64 __fastcall ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::NewNode(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4)
{
  __int64 v5; // r15
  struct ATL::CAtlPlex *v8; // r8
  int v9; // edx
  char *i; // rcx
  __int64 v11; // rbx
  unsigned __int64 v12; // rdx
  unsigned int v13; // edx

  v5 = a3;
  if ( !*(_QWORD *)(a1 + 64) )
  {
    v8 = ATL::CAtlPlex::Create((struct ATL::CAtlPlex **)(a1 + 56), *(unsigned int *)(a1 + 52), 0x48uLL);
    if ( !v8 )
      ATL::AtlThrowImpl(-2147024882);
    v9 = *(_DWORD *)(a1 + 52);
    for ( i = (char *)v8 + 64 * (v9 - 1) + 8 * (unsigned int)(v9 - 1) + 8; --v9 >= 0; i -= 72 )
    {
      *((_QWORD *)i + 7) = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = i;
    }
  }
  v11 = *(_QWORD *)(a1 + 64);
  if ( !v11 )
    ATL::AtlThrowImpl(-2147467259);
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(v11 + 56);
  *(_QWORD *)v11 = a2;
  *(_QWORD *)(v11 + 8) = 0LL;
  *(_QWORD *)(v11 + 16) = 0LL;
  *(_QWORD *)(v11 + 24) = 0LL;
  *(_QWORD *)(v11 + 32) = 0LL;
  *(_QWORD *)(v11 + 40) = 0LL;
  *(_DWORD *)(v11 + 48) = 10;
  *(_DWORD *)(v11 + 64) = a4;
  ++*(_QWORD *)(a1 + 8);
  *(_QWORD *)(v11 + 56) = *(_QWORD *)(*(_QWORD *)a1 + 8 * v5);
  *(_QWORD *)(*(_QWORD *)a1 + 8 * v5) = v11;
  v12 = *(_QWORD *)(a1 + 8);
  if ( v12 > *(_QWORD *)(a1 + 32) && !*(_DWORD *)(a1 + 48) )
  {
    v13 = ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::PickSize(
            a1,
            v12);
    ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::Rehash(
      a1,
      v13);
  }
  return v11;
}
