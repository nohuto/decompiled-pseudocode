/*
 * XREFs of ??$_Try_emplace@AEBQEAVCChannelContext@@$$V@?$unordered_map@PEAVCChannelContext@@MU?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@_N@1@AEBQEAVCChannelContext@@@Z @ 0x1800B38A0
 * Callers:
 *     ?ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETGLOBALPLAYBACKRATE@@@Z @ 0x1800CBD10 (-ProcessSetGlobalPlaybackRate@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_A.c)
 * Callees:
 *     ??$emplace@AEBUpiecewise_construct_t@std@@V?$tuple@AEBQEAVCChannelContext@@@2@V?$tuple@$$V@2@@?$_Hash@V?$_Umap_traits@PEAVCChannelContext@@MV?$_Uhash_compare@PEAVCChannelContext@@U?$hash@PEAVCChannelContext@@@std@@U?$equal_to@PEAVCChannelContext@@@3@@std@@V?$allocator@U?$pair@QEAVCChannelContext@@M@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@QEAVCChannelContext@@M@std@@@std@@@std@@@std@@_N@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBQEAVCChannelContext@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1800B394C (--$emplace@AEBUpiecewise_construct_t@std@@V-$tuple@AEBQEAVCChannelContext@@@2@V-$tuple@$$V@2@@-$.c)
 */

__int64 __fastcall std::unordered_map<CChannelContext *,float>::_Try_emplace<CChannelContext * const &,>(
        _QWORD *a1,
        __int64 a2,
        _QWORD *a3)
{
  __int64 v5; // rdx
  unsigned __int64 i; // r9
  __int64 v7; // rax
  __int64 v8; // r11
  __int64 v9; // r9
  _QWORD *v10; // rdx
  __int64 v11; // r9
  _QWORD *j; // rax
  _QWORD *v13; // rcx
  _QWORD *v15; // [rsp+40h] [rbp+8h] BYREF

  v5 = 0xCBF29CE484222325uLL;
  for ( i = 0LL; i < 8; ++i )
  {
    v7 = *((unsigned __int8 *)a3 + i);
    v5 = 0x100000001B3LL * (v7 ^ v5);
  }
  v8 = a1[3];
  v9 = v5 & a1[6];
  v10 = (_QWORD *)a1[1];
  v11 = 2 * v9;
  for ( j = *(_QWORD **)(v8 + 8 * v11); ; j = (_QWORD *)*j )
  {
    v13 = *(_QWORD **)(v8 + 8 * v11) == v10 ? (_QWORD *)a1[1] : **(_QWORD ***)(v8 + 8 * v11 + 8);
    if ( j == v13 )
      break;
    if ( j[2] == *a3 )
      goto LABEL_8;
  }
  j = (_QWORD *)a1[1];
LABEL_8:
  if ( j == v10 )
  {
    v15 = a3;
    std::_Hash<std::_Umap_traits<CChannelContext *,float,std::_Uhash_compare<CChannelContext *,std::hash<CChannelContext *>,std::equal_to<CChannelContext *>>,std::allocator<std::pair<CChannelContext * const,float>>,0>>::emplace<std::piecewise_construct_t const &,std::tuple<CChannelContext * const &>,std::tuple<>>(
      a1,
      a2,
      a3,
      &v15);
  }
  else
  {
    *(_QWORD *)a2 = j;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
