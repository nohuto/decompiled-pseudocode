/*
 * XREFs of ?SwapPositionersForViews@ShellPositionerManager@@UEAAJW4SHELL_POSITIONER_TYPE@@0@Z @ 0x1803B5680
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x180018648 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z @ 0x180024950 (-PersistPositionerPriority@ShellPositionerManager@@AEAAJPEAUIApplicationView@@@Z.c)
 *     ?CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z @ 0x18003DB30 (-CreateInstance@CEnumerableObjectCollection@@SAJHAEBU_GUID@@PEAPEAX@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068484 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x18006B0B0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CA4C0 (_guard_dispatch_icall_nop.c)
 *     ?PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@1PEAUIPresentationRequestedArgs@@W4SHELL_POSITIONER_TYPE@@3@Z @ 0x1803B3BA4 (-PerformPositionerHandoff@ShellPositionerManager@@AEAAJPEAUIObjectArray@@PEAUIImmersiveMonitor@@.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall ShellPositionerManager::SwapPositionersForViews(__int64 a1, unsigned int a2, int a3)
{
  int v3; // esi
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, __int64 *); // rbx
  int v8; // eax
  unsigned int v9; // ebx
  const struct _GUID *v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  unsigned int v14; // esi
  __int64 v15; // r14
  void *v16; // rbx
  __int64 (__fastcall *v17)(void *, _QWORD, GUID *, struct IApplicationView **); // rdi
  int v18; // eax
  int PositionerPriorityForView; // eax
  int v20; // edi
  struct IShellPositionerPriority *v21; // rbx
  int v22; // eax
  int v23; // eax
  int v24; // eax
  unsigned __int64 v25; // r9
  __int64 v26; // rdx
  int v27; // eax
  struct IApplicationView *v29; // [rsp+40h] [rbp-20h] BYREF
  struct IShellPositionerPriority *v30; // [rsp+48h] [rbp-18h] BYREF
  __int64 v31; // [rsp+50h] [rbp-10h] BYREF
  __int64 v32; // [rsp+58h] [rbp-8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  unsigned int v34; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v35; // [rsp+B0h] [rbp+50h]
  void *v36; // [rsp+B8h] [rbp+58h] BYREF

  v35 = a3;
  v3 = a3;
  v32 = 0LL;
  v6 = *(_QWORD *)(a1 + 72);
  v7 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v6 + 24LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  v8 = v7(v6, &v32);
  v9 = v8;
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v8);
    goto LABEL_33;
  }
  v36 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
  v12 = CEnumerableObjectCollection::CreateInstance(v11, v10, &v36);
  v9 = v12;
  if ( v12 < 0 )
  {
    v13 = 313LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v12);
    goto LABEL_32;
  }
  v12 = (*(__int64 (__fastcall **)(void *, __int64))(*(_QWORD *)v36 + 48LL))(v36, v32);
  v9 = v12;
  if ( v12 < 0 )
  {
    v13 = 314LL;
    goto LABEL_9;
  }
  v12 = (*(__int64 (__fastcall **)(void *, unsigned int *))(*(_QWORD *)v36 + 24LL))(v36, &v34);
  v9 = v12;
  if ( v12 < 0 )
  {
    v13 = 317LL;
    goto LABEL_9;
  }
  if ( !v34 )
    goto LABEL_25;
  v14 = v34 - 1;
  v15 = v34;
  do
  {
    v29 = 0LL;
    v16 = v36;
    v17 = *(__int64 (__fastcall **)(void *, _QWORD, GUID *, struct IApplicationView **))(*(_QWORD *)v36 + 32LL);
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    v18 = v17(v16, v14, &GUID_372e1d3b_38d3_42e4_a15b_8ab2b178f513, &v29);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x142,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)v18);
LABEL_21:
      v23 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v36 + 56LL))(v36, v14);
      if ( v23 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0x15D,
          (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
          (const char *)(unsigned int)v23);
      goto LABEL_23;
    }
    v30 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(
                                  (ShellPositionerManager *)(a1 - 88),
                                  v29,
                                  &v30);
    v20 = PositionerPriorityForView;
    if ( PositionerPriorityForView >= 0 )
    {
      v21 = v30;
      if ( (*(unsigned int (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v30 + 24LL))(v30) != a2 )
      {
        v22 = (*(__int64 (__fastcall **)(void *, _QWORD))(*(_QWORD *)v36 + 56LL))(v36, v14);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x14D,
            (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
            (const char *)(unsigned int)v22);
      }
      (*(void (__fastcall **)(struct IShellPositionerPriority *, _QWORD, _QWORD))(*(_QWORD *)v21 + 56LL))(v21, a2, v35);
      ShellPositionerManager::PersistPositionerPriority((ShellPositionerManager *)(a1 - 88), v29);
    }
    else
    {
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x146,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerPriorityForView);
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v30);
    if ( v20 < 0 )
      goto LABEL_21;
LABEL_23:
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v29);
    --v14;
    --v15;
  }
  while ( v15 );
  v3 = v35;
LABEL_25:
  v31 = 0LL;
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
  v24 = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))v36)(
          v36,
          &GUID_92ca9dcd_5622_4bba_a805_5e9f541bd8c9,
          &v31);
  v9 = v24;
  if ( v24 < 0 )
  {
    v25 = (unsigned int)v24;
    v26 = 355LL;
    goto LABEL_29;
  }
  v27 = ShellPositionerManager::PerformPositionerHandoff(a1 - 88, v31, 0LL, 0LL, 0LL, a2, v3);
  v9 = v27;
  if ( v27 >= 0 )
  {
    v9 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x349,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)(unsigned int)v27);
    v25 = v9;
    v26 = 356LL;
LABEL_29:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v26,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v25);
  }
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v31);
LABEL_32:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v36);
LABEL_33:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease(&v32);
  return v9;
}
