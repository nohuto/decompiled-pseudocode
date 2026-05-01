/*
 * XREFs of ?OnIdleStateChanged@ViewEventDispatcher@@UEAAJH@Z @ 0x1802A4870
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068BA4 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ??$SessionIdleStateChange@AEAH@ViewManagerInteropTraceLogging@@SAXAEAH@Z @ 0x18029F2A4 (--$SessionIdleStateChange@AEAH@ViewManagerInteropTraceLogging@@SAXAEAH@Z.c)
 *     ?_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV?$CRefCountedObject@UViewEventRegistration@@@@@Z @ 0x1802ABA7C (-_FindMatchingViewEventRegistration@ViewEventDispatcher@@AEAAJPEAUIViewWrapperInternal@@PEAPEAV-.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ViewEventDispatcher::OnIdleStateChanged(RTL_SRWLOCK *this, int a2)
{
  RTL_SRWLOCK *v4; // rsi
  __int64 *Ptr; // rdi
  __int64 *v6; // rbp
  RTL_SRWLOCK *v7; // r15
  __int64 *v8; // rbx
  int MatchingViewEventRegistration; // eax
  __int64 v10; // rax
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF
  int v14; // [rsp+68h] [rbp+10h] BYREF
  __int64 *v15; // [rsp+70h] [rbp+18h] BYREF
  RTL_SRWLOCK *v16; // [rsp+78h] [rbp+20h]

  v14 = a2;
  ViewManagerInteropTraceLogging::SessionIdleStateChange<int &>(&v14);
  v4 = this + 11;
  AcquireSRWLockExclusive(this + 11);
  v16 = this + 11;
  Ptr = (__int64 *)this[20].Ptr;
  v6 = &Ptr[(__int64)this[21].Ptr];
  if ( Ptr != v6 )
  {
    v7 = this - 24;
    do
    {
      v15 = (__int64 *)*Ptr;
      v8 = v15;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v15);
      v13 = 0LL;
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      MatchingViewEventRegistration = ViewEventDispatcher::_FindMatchingViewEventRegistration(v7, v8, &v13);
      if ( MatchingViewEventRegistration >= 0 )
      {
        if ( (*(_BYTE *)(v13 + 24) & 2) == 0 )
        {
          v10 = *v8;
          if ( a2 )
            (*(void (__fastcall **)(__int64 *))(v10 + 856))(v8);
          else
            (*(void (__fastcall **)(__int64 *))(v10 + 864))(v8);
        }
      }
      else
      {
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x41F,
          (__int64)"pcshell\\twinui\\viewmanagerinterop\\lib\\vieweventdispatcher.cpp",
          (const char *)(unsigned int)MatchingViewEventRegistration);
      }
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v15);
      ++Ptr;
    }
    while ( Ptr != v6 );
  }
  if ( v4 )
    ReleaseSRWLockExclusive(v4);
  return 0LL;
}
