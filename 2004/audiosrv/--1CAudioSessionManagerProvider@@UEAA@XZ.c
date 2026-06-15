/*
 * XREFs of ??1CAudioSessionManagerProvider@@UEAA@XZ @ 0x1800D17B0
 * Callers:
 *     ??_ECAudioSessionManagerProvider@@UEAAPEAXI@Z @ 0x1800D19B0 (--_ECAudioSessionManagerProvider@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@YAXPEAV?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@0AEAV?$allocator@V?$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@wil@@@0@@Z @ 0x180002C64 (--$_Destroy_range@V-$allocator@V-$com_ptr_t@VCAudioSessionManager@@Uerr_returncode_policy@wil@@@.c)
 *     ?Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z @ 0x18002C8F0 (-Disconnect@CAudioSessionManager@@QEAAJW4AudioServerSessionDisconnectReason@@_N@Z.c)
 *     ??$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z @ 0x180047BD0 (--$_Deallocate@$0BA@$0A@@std@@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CAudioSessionManagerProvider::~CAudioSessionManagerProvider(CAudioSessionManagerProvider *this)
{
  __int64 *v2; // rsi
  __int64 *v3; // rdi
  void *v4; // rdi

  *(_QWORD *)this = &CAudioSessionManagerProvider::`vftable';
  v2 = (__int64 *)*((_QWORD *)this + 8);
  v3 = (__int64 *)*((_QWORD *)this + 7);
  if ( v3 != v2 )
  {
    do
      CAudioSessionManager::Disconnect(*v3++, 1u, 1);
    while ( v3 != v2 );
    v2 = (__int64 *)*((_QWORD *)this + 8);
  }
  std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>>(
    *((_QWORD **)this + 7),
    v2);
  *((_QWORD *)this + 8) = *((_QWORD *)this + 7);
  if ( g_PolicyEventsHandler )
  {
    (*(void (__fastcall **)(struct ISessionInternalEvents *))(*(_QWORD *)g_PolicyEventsHandler + 16LL))(g_PolicyEventsHandler);
    g_PolicyEventsHandler = 0LL;
  }
  if ( g_DuckingManager )
  {
    (*(void (__fastcall **)(struct IAudioDuckingManager *))(*(_QWORD *)g_DuckingManager + 16LL))(g_DuckingManager);
    g_DuckingManager = 0LL;
  }
  if ( g_PolicyManager )
  {
    (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 160LL))(g_PolicyManager);
    if ( g_PolicyManager )
    {
      (*(void (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 16LL))(g_PolicyManager);
      g_PolicyManager = 0LL;
    }
  }
  if ( g_TelephonyControl )
  {
    ((void (__fastcall *)(struct IUnknown *))g_TelephonyControl->lpVtbl->Release)(g_TelephonyControl);
    g_TelephonyControl = 0LL;
  }
  v4 = (void *)*((_QWORD *)this + 7);
  if ( v4 )
  {
    std::_Destroy_range<std::allocator<wil::com_ptr_t<CAudioSessionManager,wil::err_returncode_policy>>>(
      *((_QWORD **)this + 7),
      *((_QWORD **)this + 8));
    std::_Deallocate<16,0>(
      v4,
      (const struct std::nothrow_t *)((*((_QWORD *)this + 9) - (_QWORD)v4) & 0xFFFFFFFFFFFFFFF8uLL));
    *((_QWORD *)this + 7) = 0LL;
    *((_QWORD *)this + 8) = 0LL;
    *((_QWORD *)this + 9) = 0LL;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)((char *)this + 16));
  *((_DWORD *)this + 3) = -1073741823;
}
