/*
 * XREFs of ?NewNode@?$XHashMap@U_GUID@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@AEAAJAEBU_GUID@@IIPEAPEAVCNode@12@@Z @ 0x180244074
 * Callers:
 *     ?CreateNode@?$XHashMap@U_GUID@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@AEAAJAEBU_GUID@@IIPEAPEAVCNode@12@@Z @ 0x180241038 (-CreateNode@-$XHashMap@U_GUID@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$Has.c)
 * Callees:
 *     ?PickSize@?$XHashMap@U_GUID@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@AEBAI_K@Z @ 0x1802441B0 (-PickSize@-$XHashMap@U_GUID@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$HashM.c)
 *     ?Rehash@?$XHashMap@U_GUID@@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@?$HashMap@U_GUID@@PEAUIInspectable@@U?$DefaultHash@U_GUID@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@U_GUID@@@4567@U?$DefaultLifetimeTraits@U_GUID@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@U_GUID@@PEAUIInspectable@@U?$DefaultLifetimeTraits@U_GUID@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@V?$GitStorageType@UIInspectable@@@detail@XWinRT@@@4@@XWinRT@@QEAAJI@Z @ 0x180244628 (-Rehash@-$XHashMap@U_GUID@@V-$GitStorageType@UIInspectable@@@detail@XWinRT@@UKeyTraits@-$HashMap.c)
 */

__int64 __fastcall XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::NewNode(
        __int64 a1,
        __int128 *a2,
        unsigned int a3,
        int a4,
        _QWORD *a5)
{
  __int64 v6; // rbp
  unsigned __int64 v9; // rax
  _QWORD *v10; // rax
  _QWORD *v11; // r8
  __int64 result; // rax
  int v13; // edx
  _QWORD *i; // rcx
  __int64 v15; // rdi
  __int128 v16; // xmm0
  unsigned int v17; // eax

  v6 = a3;
  if ( !*(_QWORD *)(a1 + 72) )
  {
    v9 = 48LL * *(unsigned int *)(a1 + 60);
    if ( is_mul_ok(*(unsigned int *)(a1 + 60), 0x30uLL) && v9 + 8 >= v9 )
    {
      v10 = malloc(v9 + 8);
      v11 = v10;
      if ( !v10 )
        return 2147942414LL;
      *v10 = *(_QWORD *)(a1 + 64);
      *(_QWORD *)(a1 + 64) = v10;
    }
    else
    {
      v11 = 0LL;
    }
    if ( !v11 )
      return 2147942414LL;
    v13 = *(_DWORD *)(a1 + 60);
    for ( i = &v11[6 * (unsigned int)(v13 - 1) + 1]; --v13 >= 0; i -= 6 )
    {
      i[4] = *(_QWORD *)(a1 + 72);
      *(_QWORD *)(a1 + 72) = i;
    }
  }
  v15 = *(_QWORD *)(a1 + 72);
  if ( !v15 )
    return 2147549183LL;
  *(_QWORD *)(a1 + 72) = *(_QWORD *)(v15 + 32);
  v16 = *a2;
  *(_DWORD *)(v15 + 40) = a4;
  *(_OWORD *)v15 = v16;
  *(_QWORD *)(v15 + 16) = 0LL;
  *(_BYTE *)(v15 + 24) = 0;
  ++*(_QWORD *)(a1 + 16);
  *(_QWORD *)(v15 + 32) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6);
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8 * v6) = v15;
  if ( *(_QWORD *)(a1 + 16) <= *(_QWORD *)(a1 + 40)
    || *(_DWORD *)(a1 + 56)
    || (v17 = XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::PickSize(a1),
        result = XWinRT::XHashMap<_GUID,XWinRT::detail::GitStorageType<IInspectable>,Windows::Foundation::Collections::Internal::HashMap<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultHash<_GUID>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<IInspectable *>,Windows::Foundation::Collections::Internal::HashMapOptions<_GUID,IInspectable *,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<_GUID>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<XWinRT::detail::GitStorageType<IInspectable>>>::Rehash(
                   a1,
                   v17),
        (int)result >= 0) )
  {
    *a5 = v15;
    return 0LL;
  }
  return result;
}
