/*
 * XREFs of ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C0114FB0
 * Callers:
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C00DCB58 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ @ 0x1C0006838 (-IsSyncObjectLockExclusiveOwner@DXGGLOBAL@@QEBAEXZ.c)
 *     ?FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C0006860 (-FreeResourceHandleNoRefSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0115560 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z @ 0x1C0247C98 (-VmBusSendDestroySyncObject@DXG_GUEST_GLOBAL_VMBUS@@QEAAXII@Z.c)
 *     ?FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z @ 0x1C0290B70 (-FreeHostHandle@DXGSYNCOBJECT@@QEAAXI@Z.c)
 *     ?GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z @ 0x1C0290DFC (-GetHostHandle@DXGSYNCOBJECT@@QEAAIIE@Z.c)
 */

bool __fastcall DXGSYNCOBJECT::Close(DXGSYNCOBJECT *this, __int64 a2)
{
  __int64 v2; // rsi
  PERESOURCE *Global; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  struct DXGPROCESS *Current; // rbp
  unsigned __int8 v10; // r8
  _QWORD *v11; // rbx
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned int HostHandle; // r14d
  unsigned int v17; // ebx
  struct DXGGLOBAL *v18; // rax
  __int64 v19; // rax

  v2 = (unsigned int)a2;
  Global = (PERESOURCE *)DXGGLOBAL::GetGlobal((__int64)this, a2);
  if ( !DXGGLOBAL::IsSyncObjectLockExclusiveOwner(Global) )
  {
    v13 = WdLogNewEntry5_WdAssertion(v6, v5);
    *(_QWORD *)(v13 + 24) = 2482LL;
    WdLogEvent5_WdAssertion(v13);
  }
  Current = DXGPROCESS::GetCurrent();
  if ( (_DWORD)v2 )
  {
    if ( *((_BYTE *)this + 277) )
    {
      HostHandle = DXGSYNCOBJECT::GetHostHandle(this, v2, v10);
      if ( HostHandle )
      {
        v17 = *((_DWORD *)Current + 106);
        v18 = DXGGLOBAL::GetGlobal(v15, v14);
        DXG_GUEST_GLOBAL_VMBUS::VmBusSendDestroySyncObject(*((DXG_GUEST_GLOBAL_VMBUS **)v18 + 197), v17, HostHandle);
        DXGSYNCOBJECT::FreeHostHandle(this, v2);
      }
    }
    DXGPROCESS::FreeResourceHandleNoRefSafe(Current, v2);
  }
  if ( !*((_DWORD *)this + 6) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v8, v7);
    *(_QWORD *)(v19 + 24) = 2508LL;
    WdLogEvent5_WdAssertion(v19);
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdEvent(v8, v7);
  v11[3] = this;
  v11[4] = v2;
  v11[5] = DXGPROCESS::GetCurrent();
  WdLogEvent5_WdEvent(v11);
  return _InterlockedAdd((volatile signed __int32 *)this + 6, 0xFFFFFFFF) == 0;
}
