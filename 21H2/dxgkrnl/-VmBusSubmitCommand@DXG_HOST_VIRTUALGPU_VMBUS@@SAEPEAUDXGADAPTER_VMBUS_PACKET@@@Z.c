/*
 * XREFs of ?VmBusSubmitCommand@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0381E60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C874 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_SUBMITCOMMAND@@@@YAPEAUDXGKVMB_COMMAND_SUBMITCOMMAND@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z @ 0x1C018F6E0 (-DxgkSubmitCommandInternal@@YAJPEBU_D3DKMT_SUBMITCOMMAND@@PEAVDXGPROCESS@@@Z.c)
 *     ?HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z @ 0x1C0364C78 (-HandleAsyncCommandError@@YAXPEAUDXGADAPTER_VMBUS_PACKET@@JIW4DXGERRORHANDLETYPE@@@Z.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitCommand(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdi
  unsigned __int64 v7; // rax
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  struct DXGPROCESS *Current; // rax
  __int64 v11; // r8
  int v12; // eax
  __int64 v14; // [rsp+28h] [rbp-60h]
  _BYTE v15[8]; // [rsp+50h] [rbp-38h] BYREF
  DXGPUSHLOCK *v16; // [rsp+58h] [rbp-30h]
  int v17; // [rsp+60h] [rbp-28h]
  int v18; // [rsp+90h] [rbp+8h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v16);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v17 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_SUBMITCOMMAND>((__int64)a1);
    v6 = v4;
    if ( !v4 )
      goto LABEL_16;
    v7 = 4LL * *(unsigned int *)(v4 + 392);
    if ( v7 > 0xFFFFFFFF )
    {
      WdLogSingleEntry1(2LL, 5111LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Invalid history buffer array", 5111LL, 0LL, 0LL, 0LL, 0LL);
    }
    else
    {
      v8 = *((unsigned int *)a1 + 36);
      if ( v8 - 408 >= (unsigned __int64)(unsigned int)v7 )
      {
        v9 = v8 - (unsigned int)v7 - 408;
        if ( v9 >= *(unsigned int *)(v6 + 320) )
        {
          *(_QWORD *)(v6 + 400) = v6 + 408;
          *(_QWORD *)(v6 + 312) = (unsigned int)v7 + v6 + 408;
          Current = DXGPROCESS::GetCurrent(v9, v8, (unsigned int)v7, v5);
          v12 = DxgkSubmitCommandInternal((struct _D3DKMT_SUBMITCOMMAND *)(v6 + 24), Current, v11);
          v18 = v12;
          if ( v12 >= 0 )
          {
LABEL_15:
            VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v18, 4u);
            v3 = 1;
            goto LABEL_16;
          }
LABEL_14:
          HandleAsyncCommandError((__int64 *)a1, v12, *(_DWORD *)(v6 + 52), 1);
          goto LABEL_15;
        }
        WdLogSingleEntry2(2LL, v8, 5123LL);
        v14 = 5123LL;
      }
      else
      {
        WdLogSingleEntry1(2LL, v8);
        v14 = 0LL;
      }
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Invalid packet size 0x%I64x",
        *((unsigned int *)a1 + 36),
        v14,
        0LL,
        0LL,
        0LL);
    }
    v12 = -1073741811;
    v18 = -1073741811;
    goto LABEL_14;
  }
  WdLogSingleEntry1(2LL, 5102LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    5102LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_16:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v3;
}
