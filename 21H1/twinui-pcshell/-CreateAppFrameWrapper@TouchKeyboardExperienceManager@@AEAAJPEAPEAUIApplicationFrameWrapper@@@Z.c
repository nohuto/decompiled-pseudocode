/*
 * XREFs of ?CreateAppFrameWrapper@TouchKeyboardExperienceManager@@AEAAJPEAPEAUIApplicationFrameWrapper@@@Z @ 0x180327298
 * Callers:
 *     ?InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z @ 0x18032A304 (-InitializeViewInfoIfNeeded@TouchKeyboardExperienceManager@@AEAAJPEAUKBViewInfo@@@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall TouchKeyboardExperienceManager::CreateAppFrameWrapper(
        TouchKeyboardExperienceManager *this,
        struct IApplicationFrameWrapper **a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // r9
  __int64 v7; // rdx
  int v8; // eax
  __int64 v9; // rbx
  __int64 (__fastcall *v10)(__int64, __int64 *); // rdi
  int v11; // eax
  __int64 v12; // rdx
  LONG WindowLongW; // eax
  _QWORD *v14; // rdx
  int v15; // eax
  struct IApplicationFrameWrapper *v16; // rax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+28h]
  struct IApplicationFrameWrapper *v19; // [rsp+50h] [rbp+30h] BYREF
  __int64 v20; // [rsp+60h] [rbp+40h] BYREF
  HWND hWnd; // [rsp+68h] [rbp+48h] BYREF

  v19 = 0LL;
  v4 = *((_QWORD *)this + 56);
  if ( v4 )
  {
    v8 = (*(__int64 (__fastcall **)(__int64, struct IApplicationFrameWrapper **))(*(_QWORD *)v4 + 24LL))(v4, &v19);
    v5 = v8;
    if ( v8 < 0 )
    {
      v6 = (unsigned int)v8;
      v7 = 2763LL;
      goto LABEL_5;
    }
    v20 = 0LL;
    v9 = (__int64)v19;
    v10 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v19 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    v11 = v10(v9, &v20);
    v5 = v11;
    if ( v11 >= 0 )
    {
      v11 = (*(__int64 (__fastcall **)(__int64, HWND *))(*(_QWORD *)v20 + 24LL))(v20, &hWnd);
      v5 = v11;
      if ( v11 >= 0 )
      {
        WindowLongW = GetWindowLongW(hWnd, -20);
        SetWindowLongW(hWnd, -20, WindowLongW | 0x8000000);
        if ( *((_QWORD *)this + 64) )
        {
          v14 = (_QWORD *)((char *)this + 496);
          if ( *((_QWORD *)this + 65) >= 8uLL )
            v14 = (_QWORD *)*v14;
          v15 = (*(__int64 (__fastcall **)(__int64, _QWORD *, _QWORD))(*(_QWORD *)v20 + 72LL))(v20, v14, 0LL);
          if ( v15 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0xADB,
              (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
              (const char *)(unsigned int)v15);
        }
        v11 = (*(__int64 (__fastcall **)(struct IApplicationFrameWrapper *, __int64))(*(_QWORD *)v19 + 40LL))(v19, 1LL);
        v5 = v11;
        if ( v11 >= 0 )
        {
          v16 = v19;
          v19 = 0LL;
          *a2 = v16;
          v5 = 0;
          goto LABEL_19;
        }
        v12 = 2783LL;
      }
      else
      {
        v12 = 2769LL;
      }
    }
    else
    {
      v12 = 2766LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v12,
      (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
      (const char *)(unsigned int)v11);
LABEL_19:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v20);
    goto LABEL_20;
  }
  v5 = -2144927145;
  v6 = 2150040151LL;
  v7 = 2762LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (__int64)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
    (const char *)v6);
LABEL_20:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  return v5;
}
