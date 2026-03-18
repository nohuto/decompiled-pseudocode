/*
 * XREFs of ?UpdateRestrictToProcessId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJI@Z @ 0x180198510
 * Callers:
 *     ?Thunk_UpdateRestrictToProcessId_5@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1801984F0 (-Thunk_UpdateRestrictToProcessId_5@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801985C0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxy.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800B1FFC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EBD90 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180168BDC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::UpdateRestrictToProcessId(
        BamoImpl::BamoDataSourceProxyImpl *this,
        int a2)
{
  bool v2; // zf
  int v4; // eax
  __int64 v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_BYTE *)this + 28) == 0;
  *((_DWORD *)this + 10) = a2;
  if ( !v2 )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v8,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
    v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 64LL))((char *)this - 16);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x279F,
        (__int64)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v4);
      __debugbreak();
    }
    v5 = v8;
    if ( v8 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v8 + 128));
      *(_DWORD *)(v5 + 168) = GetCurrentThreadId();
    }
  }
  return 0LL;
}
