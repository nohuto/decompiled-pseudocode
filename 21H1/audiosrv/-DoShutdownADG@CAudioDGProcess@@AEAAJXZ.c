/*
 * XREFs of ?DoShutdownADG@CAudioDGProcess@@AEAAJXZ @ 0x180004484
 * Callers:
 *     ?DoTerminateADG@CAudioDGProcess@@AEAAJXZ @ 0x18000433C (-DoTerminateADG@CAudioDGProcess@@AEAAJXZ.c)
 * Callees:
 *     ?close_reset@?$resource_policy@PEAXP6AHPEAX@Z$1?CloseHandle@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAXPEAX$0A@$$T@details@wil@@SAXPEAX@Z @ 0x180004534 (-close_reset@-$resource_policy@PEAXP6AHPEAX@Z$1-CloseHandle@@YAH0@ZU-$integral_constant@_K$0A@@w.c)
 *     ?SetEvent@details@wil@@YAXPEAX@Z @ 0x18000457C (-SetEvent@details@wil@@YAXPEAX@Z.c)
 *     ?WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z @ 0x1800045A0 (-WaitForADGStartup@CAudioDGProcess@@AEAAJPEAK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180074B80 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAudioDGProcess::DoShutdownADG(CAudioDGProcess *this)
{
  void *v2; // rdx
  char *v3; // rcx
  unsigned int v5; // [rsp+30h] [rbp+8h] BYREF

  if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    if ( *((_QWORD *)this + 16) )
    {
      (*(void (__fastcall **)(struct CAudioThreadPool *))(*(_QWORD *)ThreadPool + 96LL))(ThreadPool);
      *((_QWORD *)this + 16) = 0LL;
    }
    if ( CAudioDGProcess::WaitForADGStartup(this, &v5) >= 0 )
      wil::details::SetEvent(*((wil::details **)this + 15), v2);
    WaitForSingleObjectEx(*((HANDLE *)this + 11), 0xFFFFFFFF, 0);
    v3 = (char *)*((_QWORD *)this + 11);
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      wil::details::resource_policy<void *,int (*)(void *),&int CloseHandle(void *),wistd::integral_constant<unsigned __int64,0>,void *,void *,0,std::nullptr_t>::close_reset(v3);
    *((_QWORD *)this + 11) = 0LL;
    *((_DWORD *)this + 24) = 0;
    *((_DWORD *)this + 36) = GetTickCount();
  }
  return 0LL;
}
