/*
 * XREFs of ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0291C00
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C01142B4 (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C0040074 (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C0048210 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0113030 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0291C84 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::SignalAbandoned(DXGKEYEDMUTEX *this, __int64 a2)
{
  __int64 v2; // rbx
  struct _KTHREAD **Current; // rax
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  struct DXGKEYEDMUTEX *v8; // [rsp+30h] [rbp+8h] BYREF
  DXGKEYEDMUTEX *v9; // [rsp+48h] [rbp+20h] BYREF

  v8 = this;
  v2 = (unsigned int)a2;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this, a2);
  v8 = 0LL;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v9, v2, Current, &v8);
  if ( v8 )
  {
    DXGKEYEDMUTEX::SignalAbandonedInternal(v8, v2, 0);
  }
  else
  {
    v6 = WdLogNewEntry5_WdWarning(0LL, v4, v5);
    *(_QWORD *)(v6 + 24) = v2;
    *(_QWORD *)(v6 + 32) = -1073741811LL;
    WdLogEvent5_WdWarning(v6);
  }
  if ( v9 )
    DXGKEYEDMUTEX::ReleaseReference(v9, v7);
}
