/*
 * XREFs of ?UpdateStartPosition@BamoControllerNavigationClientProxyImpl@BamoImpl@@QEAAJPEAUtagPOINT@@@Z @ 0x18011F008
 * Callers:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoControllerNavigationClientProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x1800479E0 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoControllerNavigationClientProxyImpl@BamoImpl@@UE.c)
 *     ?Thunk_UpdateStartPosition_19@?$IControllerNavigationClientProxy_Receive@VBamoControllerNavigationClientProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x18011EB70 (-Thunk_UpdateStartPosition_19@-$IControllerNavigationClientProxy_Receive@VBamoControllerNavigati.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BBFC (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003DE3C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B280 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoControllerNavigationClientProxyImpl::UpdateStartPosition(
        struct tagPOINT *this,
        struct tagPOINT *a2)
{
  int v3; // eax
  __int64 v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  this[7] = *a2;
  if ( LOBYTE(this[3].y) )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v7,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)&this[2] + 24LL) + 32LL));
    v3 = (*(__int64 (__fastcall **)(struct tagPOINT *))(*(_QWORD *)&this[-2] + 80LL))(this - 2);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        25674LL,
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
