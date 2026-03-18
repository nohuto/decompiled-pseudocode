/*
 * XREFs of ?ProcessSetDiagnosticItemId@CAnimationLoggingManager@@QEAAJPEAVCResourceTable@@PEBUtagMILCMD_ANIMATIONLOGGINGMANAGER_SETDIAGNOSTICITEMID@@@Z @ 0x1801B525C
 * Callers:
 *     ?ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z @ 0x180080BFC (-ProcessMessage@CComposition@@AEAAJW4MILCMD@@PEBXIPEAVCChannelContext@@PEAVCResourceTable@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180037B1C (--2@YAPEAX_K@Z.c)
 *     ?GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z @ 0x18007E580 (-GetResourceWithoutType@CResourceTable@@QEBAPEAVCResource@@I@Z.c)
 *     ?GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z @ 0x180091C68 (-GetDebugInfoForResource@CAnimationLoggingManager@@AEAAAEAUResourceDebugInfo@1@PEAVCResource@@@Z.c)
 *     ?RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z @ 0x1800BA9A8 (-RemoveResourceDebugInfo@CAnimationLoggingManager@@QEAAXPEAVCResource@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180168BDC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall CAnimationLoggingManager::ProcessSetDiagnosticItemId(
        CAnimationLoggingManager *this,
        struct CResourceTable *a2,
        const struct tagMILCMD_ANIMATIONLOGGINGMANAGER_SETDIAGNOSTICITEMID *a3)
{
  struct CResource *ResourceWithoutType; // rax
  struct CResource *v6; // rbx
  struct CAnimationLoggingManager::ResourceDebugInfo *DebugInfoForResource; // rax
  int v8; // edx
  _DWORD *v9; // rbx
  int v10; // edx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rax
  int v14; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  ResourceWithoutType = CResourceTable::GetResourceWithoutType(
                          *(CResourceTable **)(*((_QWORD *)this + 6) + 24LL),
                          *((_DWORD *)a3 + 2));
  v6 = ResourceWithoutType;
  if ( ResourceWithoutType )
  {
    DebugInfoForResource = CAnimationLoggingManager::GetDebugInfoForResource(this, ResourceWithoutType);
    v8 = *((_DWORD *)a3 + 4);
    *((_DWORD *)DebugInfoForResource + 10) = v8;
    *((_DWORD *)DebugInfoForResource + 11) = *((_DWORD *)a3 + 5);
    if ( *((_DWORD *)a3 + 4) )
    {
      if ( *((_DWORD *)a3 + 3) != -1 )
      {
        v9 = operator new(0x20uLL);
        if ( v9 )
        {
          v10 = *((_DWORD *)a3 + 3);
          v11 = *(_QWORD *)(*((_QWORD *)this + 2) + 352LL);
          v12 = *((_DWORD *)a3 + 2);
          *(_QWORD *)v9 = this;
          v9[2] = v12;
          *((_QWORD *)v9 + 2) = v11;
          v9[6] = v10;
        }
        else
        {
          v9 = 0LL;
        }
        if ( v9 )
        {
          v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 504LL) + 88LL))(*(_QWORD *)(*((_QWORD *)this + 2) + 504LL));
          v14 = (*(__int64 (__fastcall **)(__int64, __int64 (__fastcall *)(void *), _DWORD *, __int64))(*(_QWORD *)v13 + 144LL))(
                  v13,
                  lambda_3440248c42f2751644268d737f23a18f_::_lambda_invoker_cdecl_,
                  v9,
                  3LL);
          if ( v14 < 0 )
          {
            wil::details::in1diag3::FailFast_Hr(
              retaddr,
              (void *)0x17C,
              (__int64)"onecoreuap\\windows\\dwm\\dwmcore\\resources\\animationloggingmanager.cpp",
              (const char *)(unsigned int)v14);
            __debugbreak();
          }
        }
      }
    }
    else if ( !*((_QWORD *)DebugInfoForResource + 3) && !v8 )
    {
      CAnimationLoggingManager::RemoveResourceDebugInfo(this, v6);
    }
  }
  return 0LL;
}
