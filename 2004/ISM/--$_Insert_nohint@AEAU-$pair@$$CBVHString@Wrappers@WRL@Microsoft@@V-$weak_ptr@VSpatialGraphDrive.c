/*
 * XREFs of ??$_Insert_nohint@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@IEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@_N@1@_NAEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@1@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@1@@Z @ 0x180154EA0
 * Callers:
 *     ??$emplace@U?$pair@VHString@Wrappers@WRL@Microsoft@@V?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@std@@_N@1@$$QEAU?$pair@VHString@Wrappers@WRL@Microsoft@@V?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@1@@Z @ 0x180155C70 (--$emplace@U-$pair@VHString@Wrappers@WRL@Microsoft@@V-$shared_ptr@VSpatialGraphDriverHandleWrapp.c)
 * Callees:
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x1800117B4 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18003B320 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$_Insert_at@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@2@@?$_Tree@V?$_Tmap_traits@VHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@Uhstring_insensitive_less@wil@@V?$allocator@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@6@$0A@@std@@@std@@IEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@@std@@@std@@@1@_NPEAU?$_Tree_node@U?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@std@@PEAX@1@AEAU?$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V?$weak_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@1@1@Z @ 0x1801526D0 (--$_Insert_at@AEAU-$pair@$$CBVHString@Wrappers@WRL@Microsoft@@V-$weak_ptr@VSpatialGraphDriverHan.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Insert_nohint<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>> &,std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>,void *> *>(
        __int64 *a1,
        __int64 a2,
        char a3,
        HSTRING *a4,
        __int64 a5)
{
  __int64 v8; // rsi
  __int64 v9; // rdi
  char v10; // r15
  const WCHAR *StringRawBuffer; // rbx
  const WCHAR *v12; // rax
  int v13; // eax
  __int64 v14; // rbx
  __int64 v15; // rcx
  __int64 result; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  const WCHAR *v20; // rdi
  const WCHAR *v21; // rax
  HSTRING *v22; // rdi
  std::_Ref_count_base *v23; // rcx
  BOOL bIgnoreCase; // [rsp+20h] [rbp-38h]
  BOOL bIgnoreCasea; // [rsp+20h] [rbp-38h]
  __int64 length; // [rsp+60h] [rbp+8h] BYREF
  UINT32 v27; // [rsp+70h] [rbp+18h] BYREF

  LOBYTE(v27) = a3;
  v8 = *a1;
  v9 = *(_QWORD *)(*a1 + 8);
  v10 = 1;
  while ( !*(_BYTE *)(v9 + 25) )
  {
    v8 = v9;
    StringRawBuffer = WindowsGetStringRawBuffer(*a4, (UINT32 *)&length);
    v12 = WindowsGetStringRawBuffer(*(HSTRING *)(v9 + 32), &v27);
    v13 = CompareStringOrdinal(StringRawBuffer, length, v12, v27, 1);
    if ( v13 == 1 )
    {
      v10 = 1;
      v9 = *(_QWORD *)v9;
    }
    else
    {
      v10 = 0;
      v9 = *(_QWORD *)(v9 + 16);
    }
  }
  try
  {
    v14 = v8;
    if ( v10 )
    {
      if ( v8 == *(_QWORD *)*a1 )
      {
        *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Insert_at<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>> &,std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>,void *> *>(
                           a1,
                           &length,
                           1,
                           (_QWORD *)v8,
                           bIgnoreCase,
                           a5);
        *(_BYTE *)(a2 + 8) = 1;
        return a2;
      }
      if ( *(_BYTE *)(v8 + 25) )
      {
        v14 = *(_QWORD *)(v8 + 16);
      }
      else
      {
        v17 = *(_QWORD *)v8;
        if ( *(_BYTE *)(*(_QWORD *)v8 + 25LL) )
        {
          v18 = *(_QWORD *)(v8 + 8);
          if ( !*(_BYTE *)(v18 + 25) )
          {
            v19 = v8;
            do
            {
              if ( v19 != *(_QWORD *)v18 )
                break;
              v14 = v18;
              v18 = *(_QWORD *)(v18 + 8);
              v19 = v14;
            }
            while ( !*(_BYTE *)(v18 + 25) );
          }
          if ( !*(_BYTE *)(v14 + 25) )
            v14 = v18;
        }
        else
        {
          do
          {
            v14 = v17;
            v17 = *(_QWORD *)(v17 + 16);
          }
          while ( !*(_BYTE *)(v17 + 25) );
        }
      }
    }
    v20 = WindowsGetStringRawBuffer(*(HSTRING *)(v14 + 32), (UINT32 *)&length);
    v21 = WindowsGetStringRawBuffer(*a4, &v27);
    if ( CompareStringOrdinal(v20, length, v21, v27, 1) == 1 )
    {
      *(_QWORD *)a2 = *std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Insert_at<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>> &,std::_Tree_node<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>,void *> *>(
                         a1,
                         &length,
                         v10,
                         (_QWORD *)v8,
                         bIgnoreCasea,
                         a5);
      *(_BYTE *)(a2 + 8) = 1;
      result = a2;
    }
    else
    {
      v22 = (HSTRING *)a5;
      v23 = *(std::_Ref_count_base **)(a5 + 48);
      if ( v23 )
        std::_Ref_count_base::_Decwref(v23);
      WindowsDeleteString(v22[4]);
      v22[4] = 0LL;
      std::_Deallocate<16,0>(v22, (const struct std::nothrow_t *)0x38);
      *(_QWORD *)a2 = v14;
      *(_BYTE *)(a2 + 8) = 0;
      result = a2;
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<Microsoft::WRL::Wrappers::HString,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>,wil::hstring_insensitive_less,std::allocator<std::pair<Microsoft::WRL::Wrappers::HString const,std::weak_ptr<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper>>>,0>>::_Destroy_if_node(
      v15,
      a5);
    throw;
  }
  return result;
}
