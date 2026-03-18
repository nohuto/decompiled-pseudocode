/*
 * XREFs of ?SignalAbandoned@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C03413E0
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ @ 0x1C005591C (-ReleaseReference@DXGKEYEDMUTEX@@QEAAXXZ.c)
 *     ??0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z @ 0x1C00598B8 (--0DXGKEYEDMUTEXBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGKEYEDMUTEX@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z @ 0x1C0341458 (-SignalAbandonedInternal@DXGKEYEDMUTEX@@QEAAXIH@Z.c)
 */

void __fastcall DXGKEYEDMUTEX::SignalAbandoned(DXGKEYEDMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // ebx
  struct DXGPROCESS *Current; // rax
  struct DXGKEYEDMUTEX *v6; // [rsp+30h] [rbp+8h] BYREF
  DXGKEYEDMUTEX *v7; // [rsp+48h] [rbp+20h] BYREF

  v6 = this;
  v4 = a2;
  Current = DXGPROCESS::GetCurrent((__int64)this, a2, a3, a4);
  v6 = 0LL;
  DXGKEYEDMUTEXBYHANDLE::DXGKEYEDMUTEXBYHANDLE((DXGKEYEDMUTEXBYHANDLE *)&v7, v4, Current, &v6);
  if ( v6 )
    DXGKEYEDMUTEX::SignalAbandonedInternal(v6, v4, 0);
  else
    WdLogSingleEntry2(3LL, v4, -1073741811LL);
  if ( v7 )
    DXGKEYEDMUTEX::ReleaseReference(v7);
}
