/*
 * XREFs of ??$_Try_emplace@AEBQEAVCChannelContext@@$$V@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAA?AU?$pair@PEAU?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@std@@_N@1@AEBQEAVCChannelContext@@@Z @ 0x1800309E4
 * Callers:
 *     ?ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETGLOBALPLAYBACKRATE@@@Z @ 0x1800EF65C (-ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_A.c)
 * Callees:
 *     ?_Insert_new_node_before@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAAPEAU?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@2@_KQEAU32@1@Z @ 0x180030B30 (-_Insert_new_node_before@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCCh.c)
 *     ?_Rehash_for_1@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEAAXXZ @ 0x180031DB0 (-_Rehash_for_1@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_compare@PEAVCChannelConte.c)
 *     ??$_Find_last@PEAVCChannelContext@@@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@IEBA?AU?$_Hash_find_last_result@PEAU?$_List_node@U?$pair@QEAVCChannelContext@@M@std@@PEAX@std@@@1@AEBQEAVCChannelContext@@_K@Z @ 0x18004F4FC (--$_Find_last@PEAVCChannelContext@@@-$_Hash@V-$_Umap_traits@PEAVCChannelContext@@MV-$_Uhash_comp.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x1800B6F20 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z @ 0x1800D38B0 (-_Fnv1a_append_bytes@std@@YA_K_KQEBE_K@Z.c)
 */

__int64 __fastcall std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Try_emplace<CChannelContext * const &,>(
        unsigned __int64 a1,
        __int64 a2,
        const unsigned __int8 *a3)
{
  unsigned __int64 appended; // rbp
  __int64 v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r15
  __int64 v10; // rcx
  float v11; // xmm0_4
  __int64 v12; // rcx
  float v13; // xmm1_4
  __int64 v15; // rax
  _OWORD v16[2]; // [rsp+20h] [rbp-28h] BYREF

  appended = std::_Fnv1a_append_bytes(a1, a3, 8uLL);
  std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Find_last<CChannelContext *>(
    a1,
    v16,
    a3,
    appended);
  if ( *((_QWORD *)&v16[0] + 1) )
  {
    *(_QWORD *)a2 = *((_QWORD *)&v16[0] + 1);
    *(_BYTE *)(a2 + 8) = 0;
  }
  else
  {
    if ( *(_QWORD *)(a1 + 16) == 0x7FFFFFFFFFFFFFFLL )
      std::_Xlength_error("unordered_map/set too long");
    v7 = std::_Allocate<16,std::_Default_allocate_traits,0>((unsigned int)(DWORD2(v16[0]) + 32));
    v8 = *(_QWORD *)a3;
    v9 = v7;
    *(_DWORD *)(v7 + 24) = 0;
    *(_QWORD *)(v7 + 16) = v8;
    v10 = *(_QWORD *)(a1 + 16) + 1LL;
    if ( v10 < 0 )
      v11 = (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1))
          + (float)(v10 & 1 | (unsigned int)((unsigned __int64)v10 >> 1));
    else
      v11 = (float)(int)v10;
    v12 = *(_QWORD *)(a1 + 56);
    if ( v12 < 0 )
    {
      v15 = *(_QWORD *)(a1 + 56) & 1LL | (*(_QWORD *)(a1 + 56) >> 1);
      v13 = (float)(int)v15 + (float)(int)v15;
    }
    else
    {
      v13 = (float)(int)v12;
    }
    if ( (float)(v11 / v13) > *(float *)a1 )
    {
      std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Rehash_for_1(a1);
      v16[0] = *(_OWORD *)std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Find_last<CChannelContext *>(
                            a1,
                            v16,
                            v9 + 16,
                            appended);
    }
    *(_QWORD *)a2 = std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::_Insert_new_node_before(
                      a1,
                      appended,
                      *(_QWORD *)&v16[0],
                      v9);
    *(_BYTE *)(a2 + 8) = 1;
  }
  return a2;
}
