/*
 * XREFs of ?UpdateUniqueId@BamoDataSourceProxyImpl@BamoImpl@@QEAAJPEAU_LUID@@@Z @ 0x180195A24
 * Callers:
 *     ?Thunk_UpdateUniqueId_8@?$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x180195930 (-Thunk_UpdateUniqueId_8@-$IDataSourceProxy_Receive@VBamoDataSourceProxyImpl@BamoImpl@@@@SAJPEAXP.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801959F0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataSourceProxyImpl@BamoImpl@@UEAAXPEAVBamoProxy.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800D30BC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016607C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataSourceProxyImpl::UpdateUniqueId(
        BamoImpl::BamoDataSourceProxyImpl *this,
        struct _LUID *a2)
{
  bool v2; // zf
  int v4; // eax
  __int64 v5; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_BYTE *)this + 28) == 0;
  *((struct _LUID *)this + 4) = *a2;
  if ( !v2 )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v8,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
    v4 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 56LL))((char *)this - 16);
    if ( v4 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x278E,
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
