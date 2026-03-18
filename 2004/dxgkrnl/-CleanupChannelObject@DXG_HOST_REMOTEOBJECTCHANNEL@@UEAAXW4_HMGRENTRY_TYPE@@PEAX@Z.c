/*
 * XREFs of ?CleanupChannelObject@DXG_HOST_REMOTEOBJECTCHANNEL@@UEAAXW4_HMGRENTRY_TYPE@@PEAX@Z @ 0x1C028A0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C000CF90 (-Attach@CPROCESSATTACHHELPER@@QEAAXPEAU_EPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1C0024350 (__security_check_cookie.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C023ACAC (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

void __fastcall DXG_HOST_REMOTEOBJECTCHANNEL::CleanupChannelObject(__int64 a1, int a2, DXGSHAREDVMOBJECT *a3)
{
  struct _KPROCESS *v4; // rdx
  __int64 v5; // rdx
  struct _KAPC_STATE ApcState; // [rsp+20h] [rbp-48h] BYREF
  char v7; // [rsp+50h] [rbp-18h]

  if ( a2 == 13 && *(_DWORD *)a3 == 16 )
  {
    v4 = *(struct _KPROCESS **)(a1 + 24);
    v7 = 0;
    CPROCESSATTACHHELPER::Attach(&ApcState, v4);
    DXGSHAREDVMOBJECT::ReleaseReference(a3, v5);
    if ( v7 )
      KeUnstackDetachProcess(&ApcState);
  }
}
