/*
 * XREFs of ?GetCurrentInputTypesString@MPCConstantManager@@AEAA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@XZ @ 0x18006EDDC
 * Callers:
 *     ?GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoAsyncResult_string_Proxy@@@Z @ 0x18006E740 (-GetActiveInputTypeList@MPCConstantManager@@UEAAJPEAVBamoMPCConstantManagerClientStub@@PEAVBamoA.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18002B88C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x18002B8D0 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?_Tidy_deallocate@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@AEAAXXZ @ 0x18003649C (-_Tidy_deallocate@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@AEAAXXZ.c)
 *     __security_check_cookie @ 0x18003C560 (__security_check_cookie.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBUSPATIAL_NODE_ID@@W4SpatialGraphNodePropertyFlags@Holographic@Internal@Windows@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x180069098 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBUSPATIAL_NODE.c)
 *     ??$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z @ 0x18006D8E8 (--$_UIntegral_to_buff@GI@std@@YAPEAGPEAGI@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z @ 0x1800708B8 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG_K@Z.c)
 *     ?insert@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z @ 0x180070AC0 (-insert@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@_KQEBG0@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall MPCConstantManager::GetCurrentInputTypesString(__int64 a1, __int64 a2)
{
  int v4; // esi
  __int64 *v5; // rbx
  __int64 v6; // rax
  signed int v7; // edx
  _WORD *v8; // rax
  _WORD *v9; // rax
  __int64 v10; // rax
  _QWORD v12[2]; // [rsp+30h] [rbp-51h] BYREF
  __int128 v13; // [rsp+40h] [rbp-41h] BYREF
  __int128 v14; // [rsp+50h] [rbp-31h]
  _OWORD v15[4]; // [rsp+60h] [rbp-21h] BYREF
  _WORD v16[3]; // [rsp+AAh] [rbp+29h] BYREF

  v12[1] = a2;
  std::wstring::wstring((_QWORD *)a2, (__int64)&word_1801C13CC);
  v4 = 1;
  v5 = *(__int64 **)(a1 + 56);
  v6 = *v5;
  v12[0] = *v5;
  while ( (__int64 *)v6 != v5 )
  {
    v7 = *(_DWORD *)(v6 + 32);
    if ( *(_QWORD *)(a2 + 16) )
    {
      if ( v7 >= 0 )
      {
        v9 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v16, v7);
      }
      else
      {
        v9 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v16, -v7) - 1;
        *v9 = 45;
      }
      *(_QWORD *)&v14 = 0LL;
      *((_QWORD *)&v14 + 1) = 7LL;
      LOWORD(v13) = 0;
      if ( v9 != v16 )
        std::wstring::assign((char *)&v13, v9, v16 - v9);
      v10 = std::wstring::insert(&v13);
      v15[0] = *(_OWORD *)v10;
      v15[1] = *(_OWORD *)(v10 + 16);
      *(_QWORD *)(v10 + 16) = 0LL;
      *(_QWORD *)(v10 + 24) = 7LL;
      *(_WORD *)v10 = 0;
      v4 |= 0x38u;
      std::wstring::append((void *)a2);
      std::wstring::_Tidy_deallocate((__int64)v15);
    }
    else
    {
      if ( v7 >= 0 )
      {
        v8 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v16, v7);
      }
      else
      {
        v8 = std::_UIntegral_to_buff<unsigned short,unsigned int>(v16, -v7) - 1;
        *v8 = 45;
      }
      *(_QWORD *)&v14 = 0LL;
      *((_QWORD *)&v14 + 1) = 7LL;
      LOWORD(v13) = 0;
      if ( v8 != v16 )
        std::wstring::assign((char *)&v13, v8, v16 - v8);
      v4 |= 6u;
      if ( (__int128 *)a2 != &v13 )
      {
        std::wstring::_Tidy_deallocate(a2);
        *(_OWORD *)a2 = v13;
        *(_OWORD *)(a2 + 16) = v14;
        *(_QWORD *)&v14 = 0LL;
        *((_QWORD *)&v14 + 1) = 7LL;
        LOWORD(v13) = 0;
      }
    }
    std::wstring::_Tidy_deallocate((__int64)&v13);
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<SPATIAL_NODE_ID const,enum Windows::Internal::Holographic::SpatialGraphNodePropertyFlags>>>,std::_Iterator_base0>::operator++(v12);
    v6 = v12[0];
  }
  return a2;
}
