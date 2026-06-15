/*
 * XREFs of ??$_Try_emplace@AEBU_GUID@@$$V@?$map@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@std@@_N@1@AEBU_GUID@@@Z @ 0x18010C468
 * Callers:
 *     ?OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x18010CFC0 (-OnHmdAdded@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Gra.c)
 *     ?OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAUIHolographicDisplay@456@@Z @ 0x18010D230 (-OnHmdRemoved@CExclusiveModeListener@@AEAAJPEAUIHolographicDisplayWatcher@Internal@Holographic@G.c)
 * Callees:
 *     memcmp_0 @ 0x180074183 (memcmp_0.c)
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBU_GUID@@@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@U_GUID@@UHmdInfo@@U?$less@U_GUID@@@std@@V?$allocator@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@4@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBU_GUID@@UHmdInfo@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBU_GUID@@@1@$$QEAV?$tuple@$$V@1@@Z @ 0x18010C558 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBU_GUID@@@2@V-$tuple@$$V@2@@-$_Tree@V-.c)
 */

__int64 __fastcall std::map<_GUID,HmdInfo>::_Try_emplace<_GUID const &,>(__int64 **a1, __int64 a2, _OWORD *a3, int a4)
{
  __int64 *v4; // rsi
  __int64 *v8; // rbx
  __int128 v9; // xmm1
  _QWORD *v10; // rax
  __int128 Buf2; // [rsp+30h] [rbp-38h] BYREF
  __int128 Buf1; // [rsp+40h] [rbp-28h] BYREF
  _OWORD *v14; // [rsp+70h] [rbp+8h] BYREF
  char v15; // [rsp+88h] [rbp+20h] BYREF

  v4 = *a1;
  v8 = (__int64 *)(*a1)[1];
  if ( *((_BYTE *)v8 + 25) )
    goto LABEL_10;
  Buf2 = *a3;
  do
  {
    Buf1 = *((_OWORD *)v8 + 2);
    if ( memcmp_0(&Buf1, &Buf2, 0x10uLL) >= 0 )
    {
      v4 = v8;
      v8 = (__int64 *)*v8;
    }
    else
    {
      v8 = (__int64 *)v8[2];
    }
  }
  while ( !*((_BYTE *)v8 + 25) );
  if ( v4 == *a1 || (v9 = *a3, Buf1 = *((_OWORD *)v4 + 2), Buf2 = v9, memcmp_0(&Buf2, &Buf1, 0x10uLL) < 0) )
  {
LABEL_10:
    v14 = a3;
    v10 = (_QWORD *)std::_Tree<std::_Tmap_traits<_GUID,HmdInfo,std::less<_GUID>,std::allocator<std::pair<_GUID const,HmdInfo>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<_GUID const &>,std::tuple<>>(
                      (_DWORD)a1,
                      (unsigned int)&v15,
                      (_DWORD)v4,
                      a4,
                      (__int64)&v14);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v10;
  }
  else
  {
    *(_QWORD *)a2 = v4;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
