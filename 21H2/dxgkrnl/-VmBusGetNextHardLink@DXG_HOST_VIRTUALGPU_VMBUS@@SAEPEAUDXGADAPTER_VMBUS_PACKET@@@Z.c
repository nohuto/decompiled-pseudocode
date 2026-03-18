/*
 * XREFs of ?VmBusGetNextHardLink@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036E4D0
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EE00 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ??0CDriverStoreCopy@@QEAA@XZ @ 0x1C0301C7C (--0CDriverStoreCopy@@QEAA@XZ.c)
 *     ?GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z @ 0x1C03038DC (-GetNextHardLink@CDriverStoreCopy@@QEAAXPEAUDXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN@@@Z.c)
 *     ?InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z @ 0x1C0303974 (-InitializeSystem32Links@CDriverStoreCopy@@QEAAXPEAVDXGADAPTER@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetNextHardLink(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdi
  char v3; // bl
  __int64 v4; // r9
  CDriverStoreCopy *v5; // rcx
  CDriverStoreCopy *v6; // rax
  CDriverStoreCopy *v7; // rax
  DXGPUSHLOCK *v9[2]; // [rsp+58h] [rbp-B0h] BYREF
  int v10; // [rsp+68h] [rbp-A0h]
  DXGPUSHLOCK *v11[2]; // [rsp+70h] [rbp-98h] BYREF
  int v12; // [rsp+80h] [rbp-88h]
  _DWORD v13[264]; // [rsp+88h] [rbp-80h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v11, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v11[1]);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v12 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v9, (struct _KTHREAD **)(v2 + 56), 0);
    DXGPUSHLOCK::AcquireExclusive(v9[1]);
    v10 = 2;
    memset(v13, 0, 0x41CuLL);
    if ( *(_BYTE *)(v2 + 153) )
    {
      v13[0] = -1073741811;
LABEL_10:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v13, 0x41Cu);
      v3 = 1;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v9);
      goto LABEL_11;
    }
    v5 = *(CDriverStoreCopy **)(v2 + 336);
    if ( !v5 )
    {
      v6 = (CDriverStoreCopy *)operator new[](0x658uLL, 0x4B677844u, 256LL, v4);
      if ( v6 )
      {
        v7 = CDriverStoreCopy::CDriverStoreCopy(v6);
        *(_QWORD *)(v2 + 336) = v7;
        if ( v7 )
        {
          CDriverStoreCopy::InitializeSystem32Links(v7, *(struct DXGADAPTER **)(v2 + 16));
          v5 = *(CDriverStoreCopy **)(v2 + 336);
          goto LABEL_9;
        }
      }
      else
      {
        *(_QWORD *)(v2 + 336) = 0LL;
      }
      v13[0] = -1073741801;
      goto LABEL_10;
    }
LABEL_9:
    CDriverStoreCopy::GetNextHardLink(v5, (struct DXGKVMB_COMMAND_GETNEXTHARDLINK_RETURN *)v13);
    goto LABEL_10;
  }
  WdLogSingleEntry1(2LL, 5666LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    5666LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_11:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
  return v3;
}
