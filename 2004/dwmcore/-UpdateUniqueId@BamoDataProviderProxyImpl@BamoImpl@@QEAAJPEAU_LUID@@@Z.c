/*
 * XREFs of ?UpdateUniqueId@BamoDataProviderProxyImpl@BamoImpl@@QEAAJPEAU_LUID@@@Z @ 0x1800DBCF0
 * Callers:
 *     ?Thunk_UpdateUniqueId_8@?$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800DBCE0 (-Thunk_UpdateUniqueId_8@-$IDataProviderProxy_Receive@VBamoDataProviderProxyImpl@BamoImpl@@@@SAJP.c)
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataProviderProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1801959E0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoDataProviderProxyImpl@BamoImpl@@UEAAXPEAVBamoPro.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x1800D30BC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18016607C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

__int64 __fastcall BamoImpl::BamoDataProviderProxyImpl::UpdateUniqueId(
        BamoImpl::BamoDataProviderProxyImpl *this,
        struct _LUID *a2)
{
  bool v2; // zf
  int v5; // eax
  __int64 v6; // rbx
  int v7; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v9; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_BYTE *)this + 28) == 0;
  *((struct _LUID *)this + 4) = *a2;
  if ( !v2 )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v9,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
    v5 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 56LL))((char *)this - 16);
    if ( v5 < 0 )
    {
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        (void *)0x2026,
        (unsigned int)"onecoreuap\\windows\\DWM\\dwmcore\\dataprovider\\objfre\\amd64\\dataprovider.bamo.h",
        (const char *)(unsigned int)v5,
        v7);
      __debugbreak();
    }
    v6 = v9;
    if ( v9 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v9 + 128));
      *(_DWORD *)(v6 + 168) = GetCurrentThreadId();
    }
  }
  return 0LL;
}
