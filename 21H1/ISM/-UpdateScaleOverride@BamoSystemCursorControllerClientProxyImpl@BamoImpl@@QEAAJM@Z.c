/*
 * XREFs of ?UpdateScaleOverride@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@QEAAJM@Z @ 0x1800EF858
 * Callers:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180044240 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoSystemCursorControllerClientProxyImpl@BamoImpl@@.c)
 *     ?Thunk_UpdateScaleOverride_257@?$ISystemCursorControllerClientProxy_Receive@VBamoSystemCursorControllerClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800ED520 (-Thunk_UpdateScaleOverride_257@-$ISystemCursorControllerClientProxy_Receive@VBamoSystemCursorCon.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E3EC (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004ACA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoSystemCursorControllerClientProxyImpl::UpdateScaleOverride(
        BamoImpl::BamoSystemCursorControllerClientProxyImpl *this,
        float a2)
{
  int v3; // eax
  __int64 v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  *((float *)this + 8) = a2;
  if ( *((_BYTE *)this + 28) )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v7,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*((_QWORD *)this + 2) + 24LL) + 32LL));
    v3 = (*(__int64 (__fastcall **)(char *))(*((_QWORD *)this - 2) + 56LL))((char *)this - 16);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        51656LL,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\Bamos\\codegen\\objfre\\amd64\\ISMBamos.bamo.h",
        (const char *)(unsigned int)v3);
    v4 = v7;
    if ( v7 )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)(v7 + 128));
      *(_DWORD *)(v4 + 168) = GetCurrentThreadId();
    }
  }
  return 0LL;
}
