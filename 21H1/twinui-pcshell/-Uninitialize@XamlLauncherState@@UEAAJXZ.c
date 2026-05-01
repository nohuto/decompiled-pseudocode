/*
 * XREFs of ?Uninitialize@XamlLauncherState@@UEAAJXZ @ 0x1803159D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall XamlLauncherState::Uninitialize(XamlLauncherState *this)
{
  int v2; // edi
  __int64 v3; // rdx
  __int64 result; // rax
  _QWORD *v5; // rdi
  int v6; // esi
  __int64 v7; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( *((_QWORD *)this + 14) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 160LL))(*((_QWORD *)this + 7));
    if ( v2 < 0 )
    {
      v3 = 119LL;
LABEL_4:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v3,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v2);
      return (unsigned int)v2;
    }
    *((_QWORD *)this + 14) = 0LL;
  }
  if ( *((_QWORD *)this + 15) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 176LL))(*((_QWORD *)this + 7));
    if ( v2 < 0 )
    {
      v3 = 125LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 15) = 0LL;
  }
  if ( *((_QWORD *)this + 16) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 192LL))(*((_QWORD *)this + 7));
    if ( v2 < 0 )
    {
      v3 = 131LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 16) = 0LL;
  }
  if ( *((_QWORD *)this + 17) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 240LL))(*((_QWORD *)this + 7));
    if ( v2 < 0 )
    {
      v3 = 137LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 17) = 0LL;
  }
  if ( *((_QWORD *)this + 18) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 256LL))(*((_QWORD *)this + 7));
    if ( v2 < 0 )
    {
      v3 = 143LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 18) = 0LL;
  }
  if ( *((_QWORD *)this + 19) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 7) + 272LL))(*((_QWORD *)this + 7));
    if ( v2 < 0 )
    {
      v3 = 149LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 19) = 0LL;
  }
  if ( *((_QWORD *)this + 20) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 176LL))(*((_QWORD *)this + 8));
    if ( v2 < 0 )
    {
      v3 = 155LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 20) = 0LL;
  }
  if ( *((_QWORD *)this + 21) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 192LL))(*((_QWORD *)this + 8));
    if ( v2 < 0 )
    {
      v3 = 161LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 21) = 0LL;
  }
  if ( *((_QWORD *)this + 22) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 208LL))(*((_QWORD *)this + 8));
    if ( v2 < 0 )
    {
      v3 = 167LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 22) = 0LL;
  }
  if ( *((_QWORD *)this + 23) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 304LL))(*((_QWORD *)this + 8));
    if ( v2 < 0 )
    {
      v3 = 173LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 23) = 0LL;
  }
  if ( *((_QWORD *)this + 24) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 256LL))(*((_QWORD *)this + 8));
    if ( v2 < 0 )
    {
      v3 = 179LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 24) = 0LL;
  }
  if ( *((_QWORD *)this + 25) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 320LL))(*((_QWORD *)this + 8));
    if ( v2 < 0 )
    {
      v3 = 185LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 25) = 0LL;
  }
  if ( *((_QWORD *)this + 26) )
  {
    v2 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 8) + 336LL))(*((_QWORD *)this + 8));
    if ( v2 < 0 )
    {
      v3 = 191LL;
      goto LABEL_4;
    }
    *((_QWORD *)this + 26) = 0LL;
  }
  v5 = (_QWORD *)((char *)this + 64);
  if ( *((_QWORD *)this + 27) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 352LL))(*v5);
    if ( v6 < 0 )
    {
      v7 = 197LL;
LABEL_57:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v7,
        (__int64)"pcshell\\twinui\\xamllauncher\\lib\\xamllauncherstate.cpp",
        (const char *)(unsigned int)v6);
      return (unsigned int)v6;
    }
    *((_QWORD *)this + 27) = 0LL;
  }
  if ( *((_QWORD *)this + 28) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 368LL))(*v5);
    if ( v6 < 0 )
    {
      v7 = 203LL;
      goto LABEL_57;
    }
    *((_QWORD *)this + 28) = 0LL;
  }
  if ( *((_QWORD *)this + 29) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 384LL))(*v5);
    if ( v6 < 0 )
    {
      v7 = 209LL;
      goto LABEL_57;
    }
    *((_QWORD *)this + 29) = 0LL;
  }
  if ( *((_QWORD *)this + 30) )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)*v5 + 400LL))(*v5);
    if ( v6 < 0 )
    {
      v7 = 215LL;
      goto LABEL_57;
    }
    *((_QWORD *)this + 30) = 0LL;
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 7);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 8);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 9);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)this + 10);
  result = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  return result;
}
