/*
 * XREFs of ?UpdateView@Win32ProcessInfo@@QEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18045DFD4
 * Callers:
 *     ?UpdateView@Win32AppInfo@@QEAAXIAEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@@Z @ 0x18045DF24 (-UpdateView@Win32AppInfo@@QEAAXIAEBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18004D370 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18008D5BC (--2@YAPEAX_K@Z.c)
 *     ??$emplace@AEAPEAUHWND__@@AEAV?$shared_ptr@VWin32AppViewInfo@@@std@@@?$_Tree@V?$_Tmap_traits@PEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@U?$less@PEAUHWND__@@@3@V?$allocator@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@3@$0A@@std@@@std@@QEAA?AU?$pair@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAUHWND__@@V?$shared_ptr@VWin32AppViewInfo@@@std@@@std@@@std@@@std@@@std@@_N@1@AEAPEAUHWND__@@AEAV?$shared_ptr@VWin32AppViewInfo@@@1@@Z @ 0x18045B6FC (--$emplace@AEAPEAUHWND__@@AEAV-$shared_ptr@VWin32AppViewInfo@@@std@@@-$_Tree@V-$_Tmap_traits@PEA.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Win32ProcessInfo::UpdateView(__int64 *a1, unsigned __int64 a2, int a3)
{
  __int64 v5; // rax
  __int64 v6; // r9
  _DWORD *v7; // [rsp+20h] [rbp-28h] BYREF
  std::_Ref_count_base *v8; // [rsp+28h] [rbp-20h]
  char v9[24]; // [rsp+30h] [rbp-18h] BYREF
  std::_Ref_count_base *v10; // [rsp+50h] [rbp+8h]
  unsigned __int64 v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  v5 = *a1;
  v6 = *(_QWORD *)(*a1 + 8);
  while ( !*(_BYTE *)(v6 + 25) )
  {
    if ( *(_QWORD *)(v6 + 32) >= a2 )
    {
      v5 = v6;
      v6 = *(_QWORD *)v6;
    }
    else
    {
      v6 = *(_QWORD *)(v6 + 16);
    }
  }
  if ( v5 == *a1 || a2 < *(_QWORD *)(v5 + 32) )
    v5 = *a1;
  if ( v5 == *a1 )
  {
    v10 = (std::_Ref_count_base *)operator new(0x18uLL);
    *((_DWORD *)v10 + 2) = 1;
    *((_DWORD *)v10 + 3) = 1;
    *(_QWORD *)v10 = &std::_Ref_count_obj<Win32AppViewInfo>::`vftable';
    *((_DWORD *)v10 + 4) = a3;
    v7 = (_DWORD *)((char *)v10 + 16);
    v8 = v10;
    std::_Tree<std::_Tmap_traits<HWND__ *,std::shared_ptr<Win32AppViewInfo>,std::less<HWND__ *>,std::allocator<std::pair<HWND__ * const,std::shared_ptr<Win32AppViewInfo>>>,0>>::emplace<HWND__ * &,std::shared_ptr<Win32AppViewInfo> &>(
      a1,
      (__int64)v9,
      &v11,
      &v7);
    if ( v8 )
      std::_Ref_count_base::_Decref(v8);
  }
  else
  {
    **(_DWORD **)(v5 + 40) = a3;
  }
}
