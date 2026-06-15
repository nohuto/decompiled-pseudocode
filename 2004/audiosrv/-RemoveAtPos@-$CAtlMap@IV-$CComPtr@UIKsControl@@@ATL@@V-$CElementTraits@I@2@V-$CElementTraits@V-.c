/*
 * XREFs of ?RemoveAtPos@?$CAtlMap@IV?$CComPtr@UIKsControl@@@ATL@@V?$CElementTraits@I@2@V?$CElementTraits@V?$CComPtr@UIKsControl@@@ATL@@@2@@ATL@@QEAAXPEAU__POSITION@@@Z @ 0x1801433E8
 * Callers:
 *     _ATL::CAtlMap_unsigned_int_ATL::CComPtr_IKsControl__ATL::CElementTraits_unsigned_int__ATL::CElementTraits_ATL::CComPtr_IKsControl_____::SetAt_::_1_::catch$0 @ 0x1801436AD (_ATL--CAtlMap_unsigned_int_ATL--CComPtr_IKsControl__ATL--CElementTraits_unsigned_in_ea_1801436AD.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B9080 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::RemoveAtPos(
        __int64 a1,
        __int64 a2)
{
  __int64 v3; // r8
  __int64 v4; // rdx
  __int64 i; // rax

  v3 = 0LL;
  if ( !a2 )
    ATL::AtlThrowImpl(-2147467259);
  v4 = (unsigned int)(*(_DWORD *)(a2 + 24) % *(_DWORD *)(a1 + 16));
  if ( a2 != *(_QWORD *)(*(_QWORD *)a1 + 8LL * (unsigned int)v4) )
  {
    v3 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v4);
    for ( i = *(_QWORD *)(v3 + 16); i != a2; i = *(_QWORD *)(i + 16) )
      v3 = i;
  }
  return ATL::CAtlMap<unsigned int,ATL::CComPtr<IKsControl>,ATL::CElementTraits<unsigned int>,ATL::CElementTraits<ATL::CComPtr<IKsControl>>>::RemoveNode(
           a1,
           a2,
           v3);
}
