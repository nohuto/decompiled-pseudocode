/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_::_Do_call @ 0x180013870
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000F4F0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180010D40 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800113E0 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z @ 0x180011878 (-NotifyUnfilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBGK@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z @ 0x180011B54 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800126C4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18001305C (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$unordered_ma.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180015254 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall std::_Func_impl_no_alloc__lambda_0f6faf35369883a3f4cbdf25b7153501__void_::_Do_call(__int64 a1)
{
  struct _RTL_CRITICAL_SECTION *v2; // rbp
  unsigned __int16 *v3; // r14
  int v4; // eax
  wil::details::in1diag3 *v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdi
  __int64 v8; // rbx
  const unsigned __int16 *v9; // rax
  int v10; // eax
  __int64 v11; // rdi
  __int64 v12; // rbx
  const unsigned __int16 *v13; // rax
  int v14; // eax
  _QWORD v15[3]; // [rsp+20h] [rbp-58h] BYREF
  _QWORD v16[4]; // [rsp+38h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v15[2] = v2;
  v3 = (unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(*(_QWORD *)(a1 + 8));
  v4 = CDuckingManager::ApplyDuckingGainStages(
         *(CDuckingManager **)(a1 + 16),
         *(struct IDuckingController **)(a1 + 24),
         v3);
  v5 = retaddr;
  if ( v4 >= 0 )
  {
    v4 = CDuckingManager::RecalculateSessionVolumes(*(CDuckingManager **)(a1 + 16), v3, 0LL);
    v5 = retaddr;
    if ( v4 >= 0 )
      goto LABEL_6;
    v6 = 120LL;
  }
  else
  {
    v6 = 117LL;
  }
  wil::details::in1diag3::_Log_Hr(
    v5,
    (void *)v6,
    (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
    (const char *)(unsigned int)v4,
    v15[0]);
LABEL_6:
  std::wstring::wstring(v16, v3);
  v7 = *(_QWORD *)(a1 + 8);
  std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::_Try_emplace<std::wstring,>(
    (_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL),
    (__int64)v15,
    (char *)v16);
  v8 = v15[0];
  v9 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 64LL))(v7);
  v10 = CDuckingManager::NotifyFilteredClientsAutoDuck(*(CDuckingManager **)(a1 + 16), v9, v3, *(_DWORD *)(v8 + 48));
  if ( v10 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x7E,
      (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v10,
      v15[0]);
  std::wstring::~wstring((__int64)v16);
  std::wstring::wstring(v16, v3);
  v11 = *(_QWORD *)(a1 + 8);
  std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::_Try_emplace<std::wstring,>(
    (_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL),
    (__int64)v15,
    (char *)v16);
  v12 = v15[0];
  v13 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 64LL))(v11);
  v14 = CDuckingManager::NotifyUnfilteredClientsAutoDuck(*(CDuckingManager **)(a1 + 16), v13, *(_DWORD *)(v12 + 48));
  if ( v14 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x81,
      (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v14,
      v15[0]);
  std::wstring::~wstring((__int64)v16);
  if ( v2 )
    LeaveCriticalSection(v2);
}
