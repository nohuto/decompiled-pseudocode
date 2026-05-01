/*
 * XREFs of ?ChangeMonitor@ShellPositionerManager@@UEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1W4SHELL_POSITIONER_TYPE@@@Z @ 0x1803D3FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x180018AB8 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180025180 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068C44 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B7D0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180076E9C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1803D4AE0 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAUIImmersiveMonit.c)
 *     ?GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationView@@@Z @ 0x18047206C (-GetApplicationFromView@ApplicationViewHelpers@@YAPEAUIImmersiveApplication@@PEAUIApplicationVie.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::ChangeMonitor(
        __int64 a1,
        ApplicationViewHelpers *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5)
{
  unsigned int v8; // edi
  struct IImmersiveApplication *ApplicationFromView; // rbx
  ShellPositionerManager *v11; // r14
  int PositionerPriorityForView; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rdx
  struct IShellPositionerPriority *v15; // rdi
  int v16; // r12d
  unsigned int v17; // r15d
  int v18; // eax
  int v19; // eax
  __int64 v20[2]; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+38h]
  struct IShellPositionerPriority *v22; // [rsp+98h] [rbp+48h] BYREF
  __int64 v23; // [rsp+A0h] [rbp+50h] BYREF

  v23 = a3;
  if ( a2 )
  {
    ApplicationFromView = ApplicationViewHelpers::GetApplicationFromView(a2, a2);
    v20[0] = (__int64)ApplicationFromView;
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(v20);
    if ( ApplicationFromView )
    {
      v22 = 0LL;
      v11 = (ShellPositionerManager *)(a1 - 88);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
      PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(v11, a2, &v22);
      v8 = PositionerPriorityForView;
      if ( PositionerPriorityForView >= 0 )
      {
        v15 = v22;
        v16 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v22 + 24LL))(v22);
        v17 = a5;
        if ( v16 != a5 )
        {
          (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD))(*(_QWORD *)v15 + 40LL))(v15, a5);
          ShellPositionerManager::PersistPositionerPriority(v11, a2);
        }
        if ( v23
          || (v18 = (*(__int64 (__fastcall **)(ApplicationViewHelpers *, __int64 *))(*(_QWORD *)a2 + 80LL))(a2, &v23),
              v8 = v18,
              v18 >= 0) )
        {
          (*(void (__fastcall **)(struct IImmersiveApplication *, __int64, _QWORD))(*(_QWORD *)ApplicationFromView
                                                                                  + 224LL))(
            ApplicationFromView,
            a4,
            0LL);
          v19 = ShellPositionerManager::PerformPositionerHandoff(v11, a2, v23, a4, 0LL, v16, v17);
          v8 = v19;
          if ( v19 >= 0 )
          {
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
            Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
            return 0LL;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x352,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)v19);
          v13 = v8;
          v14 = 464LL;
        }
        else
        {
          v13 = (unsigned int)v18;
          v14 = 452LL;
        }
      }
      else
      {
        v13 = (unsigned int)PositionerPriorityForView;
        v14 = 440LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v14,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)v13);
      Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v22);
    }
    else
    {
      v8 = -2147467263;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1B3,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)0x80004001LL);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(v20);
    return v8;
  }
  if ( a3 )
  {
    v8 = -2147467263;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1AD,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)0x80004001LL);
    return v8;
  }
  return 0LL;
}
