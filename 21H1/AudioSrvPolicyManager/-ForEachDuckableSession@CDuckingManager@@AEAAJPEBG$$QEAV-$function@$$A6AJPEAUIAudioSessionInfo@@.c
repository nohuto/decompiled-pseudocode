/*
 * XREFs of ?ForEachDuckableSession@CDuckingManager@@AEAAJPEBG$$QEAV?$function@$$A6AJPEAUIAudioSessionInfo@@@Z@std@@@Z @ 0x180011FF4
 * Callers:
 *     ?RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z @ 0x180010D40 (-RecalculateSessionVolumes@CDuckingManager@@AEAAJPEBGPEA_J@Z.c)
 *     ?NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z @ 0x1800113E0 (-NotifyFilteredClientsAutoDuck@CDuckingManager@@AEAAJPEBG0K@Z.c)
 *     ?ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z @ 0x180011B54 (-ApplyDuckingGainStages@CDuckingManager@@AEAAJPEAUIDuckingController@@PEBG@Z.c)
 *     std::_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_::_Do_call @ 0x1800135E0 (std--_Func_impl_no_alloc__lambda_788b487376d721320aa661d5faa65294__void_--_Do_call.c)
 * Callees:
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z @ 0x18000F720 (--$_Allocate@$0BA@U_Default_allocate_traits@std@@$0A@@std@@YAPEAX_K@Z.c)
 *     ?_Unchecked_end@?$forward_list@PEAUIAudioSessionInfo@@V?$allocator@PEAUIAudioSessionInfo@@@std@@@std@@QEBA?AU_Default_sentinel@2@XZ @ 0x1800126B4 (-_Unchecked_end@-$forward_list@PEAUIAudioSessionInfo@@V-$allocator@PEAUIAudioSessionInfo@@@std@@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CDuckingManager::ForEachDuckableSession(__int64 a1, __int64 a2, __int64 a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rsi
  __int64 v7; // rcx
  void **v8; // rbx
  _QWORD *v9; // rbx
  void **v10; // rdi
  void **v11; // rcx
  _QWORD *v12; // rcx
  _QWORD *v13; // rbx
  _QWORD *v14; // rdi
  __int64 v15; // rbx
  __int64 v16; // rax
  __int64 v17; // rcx
  _QWORD *v18; // rbx
  _QWORD *v20; // rax
  void **v21; // [rsp+28h] [rbp-18h]
  void *v22; // [rsp+30h] [rbp-10h] BYREF
  __int64 v23; // [rsp+70h] [rbp+30h] BYREF
  void *v24; // [rsp+88h] [rbp+48h] BYREF

  v24 = 0LL;
  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 + 24);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 24));
  v8 = (void **)(a1 + 64);
  if ( &v24 != v8 )
  {
    v9 = *v8;
    std::forward_list<IAudioSessionInfo *>::_Unchecked_end(v7, &v23);
    v10 = &v24;
    while ( v9 )
    {
      v11 = (void **)*v10;
      if ( !*v10 )
      {
        v21 = &v22;
        do
        {
          v20 = std::_Allocate<16,std::_Default_allocate_traits,0>(0x10uLL);
          v20[1] = v9[1];
          *v21 = v20;
          v21 = (void **)v20;
          v9 = (_QWORD *)*v9;
        }
        while ( v9 );
        *v20 = *v10;
        *v10 = v22;
        goto LABEL_8;
      }
      v11[1] = (void *)v9[1];
      v10 = v11;
      v9 = (_QWORD *)*v9;
    }
    v12 = *v10;
    *v10 = 0LL;
    if ( v12 )
    {
      do
      {
        v13 = (_QWORD *)*v12;
        operator delete(v12, (const struct std::nothrow_t *)0x10);
        v12 = v13;
      }
      while ( v13 );
    }
  }
LABEL_8:
  if ( v6 )
    LeaveCriticalSection(v6);
  v14 = v24;
  if ( v24 )
  {
    do
    {
      v15 = v14[1];
      v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 72LL))(v15);
      if ( !(unsigned int)_o__wcsicmp(a2, v16) )
      {
        v23 = v15;
        v17 = *(_QWORD *)(a3 + 56);
        if ( !v17 )
        {
          std::_Xbad_function_call();
          __debugbreak();
          JUMPOUT(0x180012198LL);
        }
        (*(void (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v17 + 16LL))(v17, &v23);
      }
      v14 = (_QWORD *)*v14;
    }
    while ( v14 );
    v14 = v24;
  }
  v24 = 0LL;
  if ( v14 )
  {
    do
    {
      v18 = (_QWORD *)*v14;
      operator delete(v14, (const struct std::nothrow_t *)0x10);
      v14 = v18;
    }
    while ( v18 );
  }
  return 0LL;
}
