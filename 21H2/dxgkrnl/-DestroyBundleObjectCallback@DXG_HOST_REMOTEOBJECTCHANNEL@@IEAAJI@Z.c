/*
 * XREFs of ?DestroyBundleObjectCallback@DXG_HOST_REMOTEOBJECTCHANNEL@@IEAAJI@Z @ 0x1C028A838
 * Callers:
 *     ?ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z @ 0x1C028B270 (-ProcessChannelMessage@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAJPEAXI@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0028C00 (_guard_dispatch_icall_nop.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023AA1C (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::DestroyBundleObjectCallback(
        DXG_HOST_REMOTEOBJECTCHANNEL *this,
        __int64 a2)
{
  __int64 v2; // rbx
  DXGSHAREDVMOBJECT *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rax

  v2 = (unsigned int)a2;
  v3 = (DXGSHAREDVMOBJECT *)(*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)this + 1) + 64LL))(
                              *((_QWORD *)this + 1),
                              a2,
                              13LL);
  if ( v3 && *(_DWORD *)v3 == 16 )
  {
    DXGSHAREDVMOBJECT::ReleaseReference(v3, v4);
    return 0LL;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = v2;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
}
