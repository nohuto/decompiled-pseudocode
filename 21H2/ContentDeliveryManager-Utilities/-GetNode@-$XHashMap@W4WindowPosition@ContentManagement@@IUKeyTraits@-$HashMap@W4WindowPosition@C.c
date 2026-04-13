/*
 * XREFs of ?GetNode@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@AEBAJAEBW4WindowPosition@ContentManagement@@AEAI1AEAPEAVCNode@12@PEAPEAV512@@Z @ 0x180091DEC
 * Callers:
 *     ?Lookup@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAJAEBW4WindowPosition@ContentManagement@@PEAPEAVCPair@12@@Z @ 0x1800907FC (-Lookup@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@Co.c)
 *     ?SetAt@?$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@?$HashMap@W4WindowPosition@ContentManagement@@IU?$DefaultHash@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@V?$CElementTraits@I@XWinRT@@@XWinRT@@QEAAJAEBW4WindowPosition@ContentManagement@@IPEAPEAUTXPOSITION@2@@Z @ 0x180090840 (-SetAt@-$XHashMap@W4WindowPosition@ContentManagement@@IUKeyTraits@-$HashMap@W4WindowPosition@Con.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall XWinRT::XHashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::HashMap<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultHash<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::KeyTraits,XWinRT::CElementTraits<unsigned int>>::GetNode(
        __int64 a1,
        int *a2,
        _DWORD *a3,
        unsigned int *a4,
        _QWORD *a5,
        _QWORD *a6)
{
  int v6; // r11d
  unsigned int v7; // r10d
  unsigned __int64 i; // rdx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _QWORD *v12; // r9
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *v15; // rax
  int v17; // [rsp+8h] [rbp+8h]

  v6 = *a2;
  v7 = -2128831035;
  v17 = *a2;
  for ( i = 0LL; i < 4; ++i )
  {
    v9 = *((unsigned __int8 *)&v17 + i);
    v7 = 16777619 * (v7 ^ v9);
  }
  HIDWORD(v10) = 0;
  *a4 = v7;
  LODWORD(v10) = v7 % *(_DWORD *)(a1 + 24);
  v11 = *(_QWORD *)(a1 + 8);
  *a3 = v10;
  if ( v11 )
  {
    v12 = a5;
    v13 = 0LL;
    v14 = *(_QWORD *)(v11 + 8 * v10);
    *a5 = 0LL;
    while ( v14 )
    {
      if ( *(_DWORD *)(v14 + 16) == v7 && *(_DWORD *)v14 == v6 )
      {
        v15 = a6;
        *v12 = v13;
        *v15 = v14;
        return 0LL;
      }
      v13 = v14;
      v14 = *(_QWORD *)(v14 + 8);
    }
  }
  *a6 = 0LL;
  return 0LL;
}
