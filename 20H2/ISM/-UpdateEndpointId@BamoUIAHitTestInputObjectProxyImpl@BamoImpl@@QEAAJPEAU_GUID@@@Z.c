/*
 * XREFs of ?UpdateEndpointId@BamoUIAHitTestInputObjectProxyImpl@BamoImpl@@QEAAJPEAU_GUID@@@Z @ 0x1800EDEC8
 * Callers:
 *     ?UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoUIAHitTestInputObjectProxyImpl@BamoImpl@@UEAAXPEAVBamoProxyImpl@2Microsoft@@@Z @ 0x180043C00 (-UpdateStateOfProxyOnPlaceholderProxyHookUp@BamoUIAHitTestInputObjectProxyImpl@BamoImpl@@UEAAXPE.c)
 *     ?Thunk_UpdateEndpointId_29@?$IUIAHitTestInputObjectProxy_Receive@VBamoUIAHitTestInputObjectProxyImpl@BamoImpl@@@@SAJPEAXPEAPEAX@Z @ 0x1800ECE00 (-Thunk_UpdateEndpointId_29@-$IUIAHitTestInputObjectProxy_Receive@VBamoUIAHitTestInputObjectProxy.c)
 * Callees:
 *     ??0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z @ 0x18000BE8C (--0DropAndReacquireLock@BamoImpl@Microsoft@@QEAA@PEAVBaseBamoConnectionImpl@12@@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18003E15C (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004A660 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall BamoImpl::BamoUIAHitTestInputObjectProxyImpl::UpdateEndpointId(struct _GUID *this, struct _GUID *a2)
{
  int v3; // eax
  __int64 v4; // rbx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  this[2] = *a2;
  if ( this[1].Data4[4] )
  {
    Microsoft::BamoImpl::DropAndReacquireLock::DropAndReacquireLock(
      (Microsoft::BamoImpl::DropAndReacquireLock *)&v7,
      *(struct Microsoft::BamoImpl::BaseBamoConnectionImpl **)(*(_QWORD *)(*(_QWORD *)&this[1].Data1 + 24LL) + 32LL));
    v3 = (*(__int64 (__fastcall **)(struct _GUID *))(*(_QWORD *)&this[-1].Data1 + 56LL))(this - 1);
    if ( v3 < 0 )
      wil::details::in1diag3::FailFast_Hr(
        retaddr,
        52895LL,
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
