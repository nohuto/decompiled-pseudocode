/*
 * XREFs of ?GetViewContactId@PeoplePaneViewManager@@UEAAJHPEAPEAG@Z @ 0x18023DF20
 * Callers:
 *     <none>
 * Callees:
 *     ??$make_unique_string@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAGP6AXPEAX@Z$1?CoTaskMemFree@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@@0@PEBG_K@Z @ 0x180015A48 (--$make_unique_string@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAGP6AXPEAX@Z$1-CoTa.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A6F0 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV?$shared_ptr@UPeoplePaneViewInfo@@@std@@@Z @ 0x18023D414 (-FindViewInfoByApplicationViewId@PeoplePaneViewManager@@AEAAJHAEAV-$shared_ptr@UPeoplePaneViewIn.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PeoplePaneViewManager::GetViewContactId(RTL_SRWLOCK *this, int a2, unsigned __int16 **a3)
{
  int ViewInfoByApplicationViewId; // eax
  unsigned int v5; // ebx
  std::_Ref_count_base *v6; // rdx
  std::_Ref_count_base *v8[2]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  unsigned __int16 *v10; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0LL;
  *(_OWORD *)v8 = 0LL;
  ViewInfoByApplicationViewId = PeoplePaneViewManager::FindViewInfoByApplicationViewId(this - 11, a2, v8);
  v5 = ViewInfoByApplicationViewId;
  if ( ViewInfoByApplicationViewId >= 0 )
  {
    v6 = v8[0];
    if ( *((_QWORD *)v8[0] + 2) )
    {
      if ( *((_QWORD *)v8[0] + 3) >= 8uLL )
        v6 = *(std::_Ref_count_base **)v8[0];
      wil::make_unique_string<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void (*)(void *),&void CoTaskMemFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>>>(
        &v10,
        (__int64)v6,
        -1LL);
      *a3 = v10;
    }
    v5 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1F2,
      (__int64)"pcshell\\twinui\\peoplepaneviewmanager\\lib\\peoplepaneviewmanager.cpp",
      (const char *)(unsigned int)ViewInfoByApplicationViewId);
  }
  if ( v8[1] )
    std::_Ref_count_base::_Decref(v8[1]);
  return v5;
}
