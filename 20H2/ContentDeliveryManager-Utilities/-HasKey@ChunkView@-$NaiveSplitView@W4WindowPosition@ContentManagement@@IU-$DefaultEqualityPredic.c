/*
 * XREFs of ?HasKey@ChunkView@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@PEAE@Z @ 0x180090830
 * Callers:
 *     ?HasKey@?$NaiveSplitView@W4WindowPosition@ContentManagement@@IU?$DefaultEqualityPredicate@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@4567@U?$DefaultLifetimeTraits@I@4567@U?$HashMapOptions@W4WindowPosition@ContentManagement@@IU?$DefaultLifetimeTraits@W4WindowPosition@ContentManagement@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@UEAAJW4WindowPosition@ContentManagement@@PEAE@Z @ 0x180090150 (-HasKey@-$NaiveSplitView@W4WindowPosition@ContentManagement@@IU-$DefaultEqualityPredicate@W4Wind.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Windows::Foundation::Collections::Internal::NaiveSplitView<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultEqualityPredicate<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<unsigned int>,Windows::Foundation::Collections::Internal::HashMapOptions<enum ContentManagement::WindowPosition,unsigned int,Windows::Foundation::Collections::Internal::DefaultLifetimeTraits<enum ContentManagement::WindowPosition>,0,1,0>>::ChunkView::HasKey(
        __int64 a1,
        int a2,
        _BYTE *a3)
{
  unsigned int v6; // ebp
  __int64 result; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  int v10; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  v6 = *(_DWORD *)(*(_QWORD *)(a1 + 72) + 12LL);
  result = 0LL;
  v8 = 0LL;
  while ( (unsigned int)v8 < v6 )
  {
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 72) + 8 * v8 + 16);
    v10 = 0;
    result = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 48LL))(v9, &v10);
    if ( (int)result >= 0 )
    {
      result = 0LL;
      if ( a2 == v10 )
      {
        *a3 = 1;
        return result;
      }
    }
    v8 = (unsigned int)(v8 + 1);
    if ( (int)result < 0 )
      return result;
  }
  return result;
}
