/*
 * XREFs of ?VmBusEscape@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036CA90
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C634 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VSYNCREMOTINGCTRL@@@@YAPEAUDXGKVMB_COMMAND_VSYNCREMOTINGC.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     DxgkEscape @ 0x1C0179FA0 (DxgkEscape.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusEscape(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // r14
  char v4; // di
  _DWORD *v5; // rbx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // rax
  const wchar_t *v9; // r9
  int v10; // ecx
  int v11; // eax
  __int64 v12; // rbx
  __int64 v14; // [rsp+30h] [rbp-11h]
  char v15[8]; // [rsp+58h] [rbp+17h] BYREF
  DXGPUSHLOCK *v16; // [rsp+60h] [rbp+1Fh]
  int v17; // [rsp+68h] [rbp+27h]
  _DWORD v18[4]; // [rsp+70h] [rbp+2Fh] BYREF
  void *v19; // [rsp+80h] [rbp+3Fh]
  unsigned int v20; // [rsp+88h] [rbp+47h]
  int v21; // [rsp+8Ch] [rbp+4Bh]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v15, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v16);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 1;
  v4 = 0;
  v17 = 1;
  if ( !*(_BYTE *)(v2 + 173) )
  {
    WdLogSingleEntry1(2LL, 4941LL);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"The adapter is already closed by the guest",
      4941LL,
      0LL,
      0LL,
      0LL,
      0LL);
LABEL_20:
    v3 = 0;
    goto LABEL_21;
  }
  v5 = (_DWORD *)CastToVmBusCommand<DXGKVMB_COMMAND_VSYNCREMOTINGCTRL>((__int64)a1);
  if ( !v5 )
    goto LABEL_20;
  if ( *(_BYTE *)(*((_QWORD *)a1 + 10) + 153LL) && (v5[8] || (v5[9] & 0x40) == 0) )
  {
    WdLogSingleEntry1(3LL, (int)v5[8]);
    goto LABEL_20;
  }
  v7 = *((unsigned int *)a1 + 36);
  if ( v7 - 55 < (unsigned __int64)(unsigned int)v5[10] )
  {
    WdLogSingleEntry1(2LL, v7);
    v8 = *((unsigned int *)a1 + 36);
    v9 = L"Invalid packet size 0x%I64x";
    v14 = 0LL;
LABEL_19:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v9, v8, v14, 0LL, 0LL, 0LL);
    goto LABEL_20;
  }
  v10 = v5[8];
  if ( v10 < 0 || v10 > 1 && v10 != 3 && v10 != 8 && (unsigned int)(v10 - 28) > 1 )
  {
    WdLogSingleEntry2(2LL, (int)v5[8], 4973LL);
    v8 = (int)v5[8];
    v9 = L"Unsupported escape type 0x%I64x";
    v14 = 4973LL;
    goto LABEL_19;
  }
  v18[0] = v5[6];
  v18[3] = v5[9];
  v18[1] = v5[7];
  v21 = v5[11];
  v18[2] = v5[8];
  v20 = v5[10];
  v19 = v5 + 12;
  v11 = DxgkEscape((__int64)v18, v7, v6);
  if ( v11 >= 0 )
  {
    VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), v19, v20);
LABEL_21:
    v4 = v3;
    goto LABEL_22;
  }
  v12 = v11;
  WdLogSingleEntry1(2LL, v11);
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"DxgkEscapeInternal failed: 0x%I64x", v12, 0LL, 0LL, 0LL, 0LL);
LABEL_22:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  return v4;
}
