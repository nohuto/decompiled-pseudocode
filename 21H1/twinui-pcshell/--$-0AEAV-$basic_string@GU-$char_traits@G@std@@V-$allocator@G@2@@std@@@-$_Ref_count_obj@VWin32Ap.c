/*
 * XREFs of ??$?0AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@?$_Ref_count_obj@VWin32AppInfo@@@std@@QEAA@AEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x180437080
 * Callers:
 *     ?UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@Internal@Windows@@PEAUIAppStateChangeNotification@4567@@Z @ 0x18043A0F8 (-UpdateAppViewWorker@Win32AppStateManager@@AEAAXPEAUHWND__@@W4ViewState@AppLimits@FamilySafety@I.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x180042A8C (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@AEBV01@@Z @ 0x180067F7C (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@AEBV01@@Z.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Ref_count_obj<Win32AppInfo>::_Ref_count_obj<Win32AppInfo>(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *v3; // rax

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<Win32AppInfo>::`vftable';
  v2 = a1 + 16;
  std::wstring::wstring(a1 + 16);
  *(_QWORD *)(v2 + 32) = 0LL;
  *(_QWORD *)(v2 + 40) = 0LL;
  v3 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x38uLL);
  *v3 = v3;
  v3[1] = v3;
  v3[2] = v3;
  *((_WORD *)v3 + 12) = 257;
  *(_QWORD *)(v2 + 32) = v3;
  return a1;
}
