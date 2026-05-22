/*
 * XREFs of _lambda_89c47fb2dbc65534a5fcd0a819bb7b31_::operator() @ 0x180111874
 * Callers:
 *     XWinRT::detail::InvalidationChecker_Windows::Foundation::Collections::Internal::Vector_HSTRING_____Windows::Foundation::Collections::Internal::DefaultEqualityPredicate_HSTRING______Windows::Foundation::Collections::Internal::DefaultLifetimeTraits_HSTRING______Windows::Foundation::Collections::Internal::DefaultVectorOptions_HSTRING________XWinRT::IntVersionTag_::Do__lambda_241fe92b9c0f92f1cfd94ca10b8d6d9e___lambda_89c47fb2dbc65534a5fcd0a819bb7b31___ @ 0x18010DF88 (XWinRT--detail--InvalidationChecker_Windows--Foundation--Collections--Internal--Vector_HSTRING__.c)
 *     ?GetMany@?$SimpleVectorIterator@PEAUHSTRING__@@V?$Vector@PEAUHSTRING__@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@U?$DefaultVectorOptions@PEAUHSTRING__@@@3456@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@3456@UIntVersionTag@XWinRT@@$0A@@Internal@Collections@Foundation@Windows@@UEAAJIPEAPEAUHSTRING__@@PEAI@Z @ 0x180115670 (-GetMany@-$SimpleVectorIterator@PEAUHSTRING__@@V-$Vector@PEAUHSTRING__@@U-$DefaultEqualityPredic.c)
 * Callees:
 *     <none>
 */

_DWORD **__fastcall lambda_89c47fb2dbc65534a5fcd0a819bb7b31_::operator()(__int64 a1)
{
  _DWORD **result; // rax
  __int64 v2; // rbp
  _DWORD *v4; // rdx
  __int64 *v5; // rax
  __int64 v6; // rbx

  result = *(_DWORD ***)a1;
  v2 = 0LL;
  v4 = **(_DWORD ***)a1;
  if ( *v4 )
  {
    do
    {
      v5 = *(__int64 **)(a1 + 8);
      v6 = *v5;
      WindowsDeleteString(*(HSTRING *)(*v5 + 8 * v2));
      *(_QWORD *)(v6 + 8 * v2) = 0LL;
      *(_QWORD *)(**(_QWORD **)(a1 + 8) + 8 * v2) = 0LL;
      v2 = (unsigned int)(v2 + 1);
      result = *(_DWORD ***)a1;
      v4 = **(_DWORD ***)a1;
    }
    while ( (unsigned int)v2 < *v4 );
  }
  *v4 = 0;
  return result;
}
