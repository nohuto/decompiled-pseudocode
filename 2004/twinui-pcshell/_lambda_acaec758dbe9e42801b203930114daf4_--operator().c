/*
 * XREFs of _lambda_acaec758dbe9e42801b203930114daf4_::operator() @ 0x1801482A8
 * Callers:
 *     ?MoveNext@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$VectorOptions@PEAUHSTRING__@@$0A@$00$0A@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$00@Internal@Collections@Foundation@Windows@@UEAAJPEAE@Z @ 0x18014DF20 (-MoveNext@-$SimpleVectorIterator@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredi.c)
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdEqualityPredicate_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionIdLifetimeTraits_Windows::Foundation::Collections::Internal::VectorOptions_Windows::Internal::ApplicationModel::WindowingEnvironment::DisplayRegionId_1_1_0____XWinRT::IntVersionTag_::Do__lambda_94c6e3db984f299cd760289365fa2b61___lambda_db6cd974519eb63ba37bb73375e48664___ @ 0x18017891C (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vec_ea_18017891C.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall lambda_acaec758dbe9e42801b203930114daf4_::operator()(_QWORD *a1)
{
  __int64 v1; // r9
  unsigned int v2; // ebx
  _BYTE ***v3; // rdi
  bool **v4; // r11
  unsigned __int32 v5; // r10d
  bool v6; // zf
  signed __int32 v7; // eax
  __int64 v9; // [rsp+30h] [rbp+8h]

  v1 = *a1;
  v2 = 0;
  v3 = (_BYTE ***)a1[2];
  v4 = (bool **)a1[1];
  v9 = *a1;
  v5 = *(_DWORD *)(*a1 + 72LL);
  while ( 1 )
  {
    **v4 = 0;
    if ( v5 >= *(_DWORD *)(v9 + 76) )
      break;
    **v4 = v5 + 1 < *(_DWORD *)(v9 + 76);
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(v1 + 72), v5 + 1, v5);
    v6 = v5 == v7;
    v5 = v7;
    if ( v6 )
      return v2;
    ***v3 = 0;
  }
  v2 = -2147483637;
  RoOriginateError(2147483659LL, 0LL);
  return v2;
}
