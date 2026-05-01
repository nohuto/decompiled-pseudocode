/*
 * XREFs of ?GetPositionerForView@ShellPositionerManager@@UEAAJPEAUIApplicationView@@AEBU_GUID@@PEAPEAX@Z @ 0x180081EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPositionerPriority@@@Z @ 0x180019598 (-GetPositionerPriorityForView@ShellPositionerManager@@AEAAJPEAUIApplicationView@@PEAPEAUIShellPo.c)
 *     ?GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonitor@@AEBU_GUID@@PEAPEAX@Z @ 0x18001CA98 (-GetPositionerForMonitor@ShellPositionerManager@@CAJW4SHELL_POSITIONER_TYPE@@PEAUIImmersiveMonit.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180062D64 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ @ 0x1800663F0 (-InternalRelease@-$ComPtr@UIAppLayoutThumbnail@@@WRL@Microsoft@@IEAAKXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800F0410 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ShellPositionerManager::GetPositionerForView(
        ShellPositionerManager *this,
        struct IApplicationView *a2,
        const struct _GUID *a3,
        void **a4)
{
  __int64 (__fastcall *v8)(struct IApplicationView *, IUnknown **); // rbx
  int v9; // ebx
  ShellPositionerManager *v10; // rbx
  int v11; // edi
  int PositionerPriorityForView; // eax
  int PositionerForMonitor; // eax
  unsigned __int64 v15; // r9
  __int64 v16; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct IShellPositionerPriority *v18; // [rsp+48h] [rbp+10h] BYREF
  IUnknown *v19; // [rsp+58h] [rbp+20h] BYREF

  *a4 = 0LL;
  v19 = 0LL;
  v8 = *(__int64 (__fastcall **)(struct IApplicationView *, IUnknown **))(*(_QWORD *)a2 + 80LL);
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  v9 = v8(a2, &v19);
  if ( v9 >= 0 )
  {
    v10 = (ShellPositionerManager *)((char *)this - 88);
    v11 = 11;
    v18 = 0LL;
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    PositionerPriorityForView = ShellPositionerManager::GetPositionerPriorityForView(v10, a2, &v18);
    v9 = PositionerPriorityForView;
    if ( PositionerPriorityForView < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x41D,
        (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
        (const char *)(unsigned int)PositionerPriorityForView);
    }
    else
    {
      v11 = (*(__int64 (__fastcall **)(struct IShellPositionerPriority *))(*(_QWORD *)v18 + 24LL))(v18);
      v9 = 0;
    }
    Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v18);
    if ( v9 < 0 )
    {
      v15 = (unsigned int)v9;
      v16 = 373LL;
    }
    else
    {
      PositionerForMonitor = ShellPositionerManager::GetPositionerForMonitor(v11, v19, a3, a4);
      v9 = PositionerForMonitor;
      if ( PositionerForMonitor >= 0 )
      {
        v9 = 0;
        goto LABEL_7;
      }
      v15 = (unsigned int)PositionerForMonitor;
      v16 = 375LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (__int64)"pcshell\\twinui\\shellpositioners\\lib\\shellpositionermanager.cpp",
      (const char *)v15);
  }
LABEL_7:
  Microsoft::WRL::ComPtr<IAppLayoutThumbnail>::InternalRelease((__int64 *)&v19);
  return (unsigned int)v9;
}
