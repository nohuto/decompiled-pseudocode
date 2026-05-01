/*
 * XREFs of ??$_Try_emplace@AEBI$$V@?$map@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@std@@_N@1@AEBI@Z @ 0x180366ED4
 * Callers:
 *     ?VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndSizeRequest@Core@Text@Internal@UI@Windows@@IPEAIPEAURect@Foundation@8@PEAE@Z @ 0x18036A190 (-VerifyInputAppRequestedShow@TabTipAdapterPolicy@KeyboardHosting@@UEAAJUCoreKeyboardPositionAndS.c)
 * Callees:
 *     ??$emplace_hint@AEBUpiecewise_construct_t@std@@V?$tuple@AEBI@2@V?$tuple@$$V@2@@?$_Tree@V?$_Tmap_traits@IUSize@Foundation@Windows@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@5@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBIUSize@Foundation@Windows@@@std@@@std@@@std@@@1@AEBUpiecewise_construct_t@1@$$QEAV?$tuple@AEBI@1@$$QEAV?$tuple@$$V@1@@Z @ 0x1803672D4 (--$emplace_hint@AEBUpiecewise_construct_t@std@@V-$tuple@AEBI@2@V-$tuple@$$V@2@@-$_T_ea_1803672D4.c)
 */

__int64 __fastcall std::map<unsigned int,Windows::Foundation::Size>::_Try_emplace<unsigned int const &,>(
        __int64 **a1,
        __int64 a2,
        unsigned int *a3)
{
  __int64 *v4; // r8
  __int64 *v6; // rax
  unsigned int v7; // edx
  _QWORD *v8; // rax
  unsigned int *v10; // [rsp+40h] [rbp+8h] BYREF
  char v11; // [rsp+58h] [rbp+20h] BYREF

  v4 = *a1;
  v6 = (__int64 *)(*a1)[1];
  if ( *((_BYTE *)v6 + 25) )
    goto LABEL_10;
  v7 = *a3;
  do
  {
    if ( *((_DWORD *)v6 + 7) >= v7 )
    {
      v4 = v6;
      v6 = (__int64 *)*v6;
    }
    else
    {
      v6 = (__int64 *)v6[2];
    }
  }
  while ( !*((_BYTE *)v6 + 25) );
  if ( v4 == *a1 || v7 < *((_DWORD *)v4 + 7) )
  {
LABEL_10:
    v10 = a3;
    v8 = (_QWORD *)std::_Tree<std::_Tmap_traits<unsigned int,Windows::Foundation::Size,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,Windows::Foundation::Size>>,0>>::emplace_hint<std::piecewise_construct_t const &,std::tuple<unsigned int const &>,std::tuple<>>(
                     (_DWORD)a1,
                     (unsigned int)&v11,
                     (_DWORD)v4,
                     (_DWORD)a3,
                     (__int64)&v10);
    *(_BYTE *)(a2 + 8) = 1;
    *(_QWORD *)a2 = *v8;
  }
  else
  {
    *(_QWORD *)a2 = v4;
    *(_BYTE *)(a2 + 8) = 0;
  }
  return a2;
}
