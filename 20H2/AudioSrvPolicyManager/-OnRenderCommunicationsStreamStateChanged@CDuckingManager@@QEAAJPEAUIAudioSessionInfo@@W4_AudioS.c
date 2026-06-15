/*
 * XREFs of ?OnRenderCommunicationsStreamStateChanged@CDuckingManager@@QEAAJPEAUIAudioSessionInfo@@W4_AudioStreamState@@1PEAUIAudioStreamInfo@@@Z @ 0x18000ACE4
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002BB70 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002C120 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ??1?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@XZ @ 0x180009CF0 (--1-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@XZ.c)
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@QEBG@Z @ 0x18000CD64 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@QEBG@Z.c)
 *     ??$_Try_emplace@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@$$V@?$unordered_map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@U?$hash@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@U?$equal_to@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@2@@std@@QEAA?AU?$pair@V?$_List_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@UCRenderEndpointDuckingManagerContext@@@std@@@std@@@std@@@std@@_N@1@$$QEAV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@1@@Z @ 0x18000D6FC (--$_Try_emplace@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@$$V@-$unordered_ma.c)
 *     ?QueueWorkItem@CSerialWorkQueue@@QEAAJV?$function@$$A6AXXZ@std@@@Z @ 0x18000F6B8 (-QueueWorkItem@CSerialWorkQueue@@QEAAJV-$function@$$A6AXXZ@std@@@Z.c)
 *     __security_check_cookie @ 0x1800396C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18003AE40 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8 #try_helpers=1
__int64 __fastcall CDuckingManager::OnRenderCommunicationsStreamStateChanged(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        int a4,
        void (__fastcall ***a5)(_QWORD, GUID *, _QWORD *))
{
  struct CDuckingManager *v6; // rbx
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // r14
  __int64 v11; // rsi
  _QWORD v12[2]; // [rsp+20h] [rbp-88h] BYREF
  char *v13; // [rsp+30h] [rbp-78h] BYREF
  __int64 (__fastcall **v14)(); // [rsp+48h] [rbp-60h] BYREF
  __int64 v15; // [rsp+50h] [rbp-58h]
  struct CDuckingManager *v16; // [rsp+58h] [rbp-50h]
  __int64 v17; // [rsp+60h] [rbp-48h]
  __int64 (__fastcall ***v18)(); // [rsp+80h] [rbp-28h]

  v6 = g_DuckingManager;
  if ( *((_DWORD *)g_DuckingManager + 122) )
    return 0LL;
  if ( a4 == 1 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 176));
    v12[0] = (char *)v6 + 176;
    std::wstring::wstring(&v14, v8);
    std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::_Try_emplace<std::wstring,>(
      (char *)v6 + 216,
      &v13,
      &v14);
    ++*((_DWORD *)v13 + 12);
    std::wstring::~wstring((__int64)&v14);
    if ( v6 != (struct CDuckingManager *)-176LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 176));
    if ( *((_DWORD *)v6 + 112) == 3 )
      return 0LL;
    v12[0] = 0LL;
    (**a5)(a5, &GUID_390561ae_7375_4558_aff9_667acfe35ac5, v12);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v13 = 0LL;
    v9 = v12[0];
    if ( v12[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 8LL))(v12[0]);
    v14 = off_18003EC70;
    v15 = a2;
    v16 = v6;
    v17 = v9;
    v18 = &v14;
    CSerialWorkQueue::QueueWorkItem((char *)v6 + 280, &v14);
  }
  else
  {
    if ( a4 )
      return 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 72LL))(a2);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 176));
    v13 = (char *)v6 + 176;
    std::wstring::wstring(&v14, v10);
    std::unordered_map<std::wstring,CRenderEndpointDuckingManagerContext>::_Try_emplace<std::wstring,>(
      (char *)v6 + 216,
      v12,
      &v14);
    --*(_DWORD *)(v12[0] + 48LL);
    std::wstring::~wstring((__int64)&v14);
    if ( v6 != (struct CDuckingManager *)-176LL )
      LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 176));
    if ( *((_DWORD *)v6 + 112) == 3 )
      return 0LL;
    v12[0] = 0LL;
    (**a5)(a5, &GUID_390561ae_7375_4558_aff9_667acfe35ac5, v12);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)a2 + 8LL))(a2);
    v13 = 0LL;
    v11 = v12[0];
    if ( v12[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 8LL))(v12[0]);
    v14 = off_18003EC40;
    v15 = a2;
    v16 = v6;
    v17 = v11;
    v18 = &v14;
    CSerialWorkQueue::QueueWorkItem((char *)v6 + 280, &v14);
  }
  if ( v12[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12[0] + 16LL))(v12[0]);
  return 0LL;
}
