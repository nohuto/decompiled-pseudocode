/*
 * XREFs of std::_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_::_Do_call @ 0x1800135E0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x18000F4F0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180010D40 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x1800116B0 (-NotifyFilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z @ 0x1800119E8 (-NotifyUnfilteredClientsAutoUnduck@CDuckingManager@@AEAAJPEBG@Z.c)
 *     ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x180011FF4 (-ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV-$function@$$A6AJPEAUIAudioSessionInfo@@.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x1800126C4 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18001305C (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$unordered_ma.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180015254 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18003EF80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall std::_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_::_Do_call(__int64 a1)
{
  unsigned __int16 *v2; // rbx
  struct _RTL_CRITICAL_SECTION *v3; // rsi
  __int64 (__fastcall ***v4)(); // rdx
  int v5; // ebx
  const unsigned __int16 *v6; // rax
  int v7; // eax
  const unsigned __int16 *v8; // rax
  int v9; // eax
  __int128 v10; // [rsp+28h] [rbp-29h] BYREF
  __int64 v11; // [rsp+38h] [rbp-19h] BYREF
  __int64 v12[3]; // [rsp+40h] [rbp-11h] BYREF
  __int64 (__fastcall **v13)(); // [rsp+58h] [rbp+7h] BYREF
  __int128 v14; // [rsp+60h] [rbp+Fh]
  __int64 (__fastcall ***v15)(); // [rsp+90h] [rbp+3Fh]
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  Sleep(0x1F4u);
  v2 = (unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 72LL))(*(_QWORD *)(a1 + 8));
  v3 = (struct _RTL_CRITICAL_SECTION *)((char *)g_ApplicationManager + 32);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)g_ApplicationManager + 32));
  v12[1] = (__int64)v3;
  v11 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)&v10 = &v11;
  *((_QWORD *)&v10 + 1) = v12;
  v13 = off_180043B88;
  v14 = v10;
  v15 = &v13;
  CDuckingManager::ForEachDuckableSession(*(_QWORD *)(a1 + 16), (__int64)v2, (__int64)&v13);
  if ( v15 )
  {
    v4 = &v13;
    LOBYTE(v4) = v15 != &v13;
    ((void (__fastcall *)(__int64 (__fastcall ***)(), __int64 (__fastcall ***)()))(*v15)[4])(v15, v4);
  }
  CDuckingManager::RecalculateSessionVolumes(*(CDuckingManager **)(a1 + 16), v2, v12);
  std::wstring::wstring(&v13, v2);
  std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::_Try_emplace<std::wstring,>(
    (_QWORD *)(*(_QWORD *)(a1 + 16) + 216LL),
    (__int64)&v10,
    (char *)&v13);
  v5 = *(_DWORD *)(v10 + 48);
  std::wstring::~wstring((__int64)&v13);
  if ( !v5 )
  {
    v6 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8));
    v7 = CDuckingManager::NotifyFilteredClientsAutoUnduck(*(CDuckingManager **)(a1 + 16), v6);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xBE,
        (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
        (const char *)(unsigned int)v7,
        v10);
  }
  v8 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 8) + 64LL))(*(_QWORD *)(a1 + 8));
  v9 = CDuckingManager::NotifyUnfilteredClientsAutoUnduck(*(CDuckingManager **)(a1 + 16), v8);
  if ( v9 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xC4,
      (unsigned int)"multimedia\\audiocore\\server\\audiosrv\\windowspolicymanager\\duckingmanager.cpp",
      (const char *)(unsigned int)v9,
      v10);
  if ( v3 )
    LeaveCriticalSection(v3);
}
