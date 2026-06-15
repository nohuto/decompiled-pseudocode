/*
 * XREFs of ?GetNode@?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@AEBAPEAVCNode@12@_KAEAI1AEAPEAV312@@Z @ 0x14004C67C
 * Callers:
 *     ??A?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@QEAAAEAV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@1@_K@Z @ 0x14004B884 (--A-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V-$.c)
 *     ?LinkDisplayNodes@@YAXAEAV?$CAtlMap@_KV?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@V?$CElementTraits@_K@2@V?$CElementTraits@V?$CAtlList@PEAVCDisplayNode@@V?$CElementTraits@PEAVCDisplayNode@@@ATL@@@ATL@@@2@@ATL@@0@Z @ 0x14004C8AC (-LinkDisplayNodes@@YAXAEAV-$CAtlMap@_KV-$CAtlList@PEAVCDisplayNode@@V-$CElementTraits@PEAVCDispl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<unsigned __int64,ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>,ATL::CElementTraits<unsigned __int64>,ATL::CElementTraits<ATL::CAtlList<CDisplayNode *,ATL::CElementTraits<CDisplayNode *>>>>::GetNode(
        __int64 *a1,
        __int64 a2,
        _DWORD *a3,
        _DWORD *a4,
        _QWORD *a5)
{
  __int64 v6; // rdx
  __int64 v7; // r9
  __int64 v8; // rcx
  __int64 result; // rax

  HIDWORD(v6) = 0;
  *a4 = a2;
  LODWORD(v6) = (unsigned int)a2 % *((_DWORD *)a1 + 4);
  v7 = *a1;
  *a3 = v6;
  if ( v7 )
  {
    v8 = 0LL;
    result = *(_QWORD *)(v7 + 8 * v6);
    *a5 = 0LL;
    while ( result )
    {
      if ( *(_DWORD *)(result + 64) == (_DWORD)a2 && *(_QWORD *)result == a2 )
      {
        *a5 = v8;
        return result;
      }
      v8 = result;
      result = *(_QWORD *)(result + 56);
    }
  }
  return 0LL;
}
