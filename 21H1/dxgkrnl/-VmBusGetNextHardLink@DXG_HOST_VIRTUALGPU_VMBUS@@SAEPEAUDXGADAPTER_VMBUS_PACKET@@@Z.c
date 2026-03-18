/*
 * XREFs of ?VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023DC00
 * Callers:
 *     <none>
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000A788 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000A840 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     memset @ 0x1C0026840 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??0CDriverStoreCopy@@QEAA@XZ @ 0x1C025D2C0 (--0CDriverStoreCopy@@QEAA@XZ.c)
 *     ?GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z @ 0x1C025ED64 (-GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z.c)
 *     ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C025EDF8 (-InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetNextHardLink(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rdi
  char v5; // bl
  __int64 v6; // rax
  CDriverStoreCopy *v7; // rcx
  CDriverStoreCopy *v8; // rax
  CDriverStoreCopy *v9; // rax
  DXGPUSHLOCK *v11[2]; // [rsp+28h] [rbp-E0h] BYREF
  int v12; // [rsp+38h] [rbp-D0h]
  DXGPUSHLOCK *v13[2]; // [rsp+40h] [rbp-C8h] BYREF
  int v14; // [rsp+50h] [rbp-B8h]
  _DWORD v15[264]; // [rsp+58h] [rbp-B0h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v13[1]);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v14 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)(v4 + 56), 0);
    DXGPUSHLOCK::AcquireExclusive(v11[1]);
    v12 = 2;
    memset(v15, 0, 0x41CuLL);
    if ( *(_BYTE *)(v4 + 153) )
    {
      v15[0] = -1073741811;
LABEL_13:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), v15, 0x41Cu);
      v5 = 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
      goto LABEL_14;
    }
    v7 = *(CDriverStoreCopy **)(v4 + 312);
    if ( !v7 )
    {
      v8 = (CDriverStoreCopy *)operator new[](0x658uLL, 0x4B677844u, PagedPool);
      if ( v8 )
        v9 = CDriverStoreCopy::CDriverStoreCopy(v8);
      else
        v9 = 0LL;
      *(_QWORD *)(v4 + 312) = v9;
      if ( !v9 )
      {
        v15[0] = -1073741801;
        goto LABEL_13;
      }
      CDriverStoreCopy::InitializeSystem32Links(v9, *(struct DXGADAPTER **)(v4 + 16));
      v7 = *(CDriverStoreCopy **)(v4 + 312);
    }
    CDriverStoreCopy::GetNextHardLink(v7, (struct DXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN *)v15);
    goto LABEL_13;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 4981LL;
  WdLogEvent5_WdError(v6);
LABEL_14:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  return v5;
}
