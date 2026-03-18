/*
 * XREFs of ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0382810
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C000A948 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000EF08 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000FA80 (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     memmove @ 0x1C002CD00 (memmove.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z @ 0x1C002F002 (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C8D4 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_VAILPRES.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C00770AC (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0186AA0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0315B70 (-IsIFlipSupported@CIFlipPresentHistoryToken@@SA_NPEBU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C035162C (-IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1C0365354 (-QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0365710 (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitVailPresentHistoryToken(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  char v3; // bl
  __int64 v4; // rax
  __int64 v5; // r9
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct DXGPROCESS *Current; // rsi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r9
  int v19; // ecx
  __int64 v20; // rax
  struct _SLIST_ENTRY *v21; // rsi
  struct _KTHREAD **v22; // r13
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 RefCountedBuffer; // rax
  int v26; // eax
  int v27; // eax
  _BYTE v29[8]; // [rsp+60h] [rbp-20h] BYREF
  DXGPUSHLOCK *v30; // [rsp+68h] [rbp-18h]
  int v31; // [rsp+70h] [rbp-10h]
  int v32; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v33; // [rsp+C8h] [rbp+48h]
  unsigned int v34; // [rsp+D0h] [rbp+50h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29, (struct _KTHREAD **)(*((_QWORD *)a1 + 10) + 248LL), 0);
  DXGPUSHLOCK::AcquireShared(v30);
  v2 = *((_QWORD *)a1 + 10);
  v3 = 0;
  v31 = 1;
  if ( *(_BYTE *)(v2 + 173) )
  {
    v32 = -1073741637;
    if ( *((_DWORD *)DXGGLOBAL_GetGlobal() + 450) < 0x18u )
      goto LABEL_30;
    v4 = CastToVmBusCommand<DXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN>((__int64)a1);
    v6 = v4;
    if ( !v4 )
      goto LABEL_31;
    v7 = (unsigned int)v32;
    v8 = *((unsigned int *)a1 + 36) - 1160LL;
    if ( v8 < *(unsigned int *)(v4 + 1152) )
      v7 = 3221225485LL;
    v32 = v7;
    Current = DXGPROCESS::GetCurrent(v7, v8, 3221225485LL, v5);
    if ( v32 != -1073741637 )
    {
LABEL_30:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v32, 4u);
      v3 = 1;
      goto LABEL_31;
    }
    if ( !DXGVAILOBJECT::IsIFlipFeatureEnabled(v10, v9, v12, v13) )
      goto LABEL_27;
    if ( !CIFlipPresentHistoryToken::IsIFlipSupported(
            (const struct _D3DKMT_PRESENTHISTORYTOKEN *)(v6 + 72),
            v14,
            v15,
            v16) )
      goto LABEL_27;
    v19 = *((_DWORD *)Current + 106);
    if ( (v19 & 0x100) == 0 || (v19 & 4) == 0 || !*(_DWORD *)(v6 + 68) || !*(_QWORD *)(v6 + 96) )
      goto LABEL_27;
    v20 = *((_QWORD *)a1 + 12);
    v34 = 0;
    v21 = 0LL;
    v22 = *(struct _KTHREAD ***)(v20 + 608);
    v23 = *(_DWORD *)(v6 + 96);
    *(_DWORD *)(v6 + 132) &= ~0x2000000u;
    *(_QWORD *)(v6 + 96) = 0LL;
    *(_QWORD *)(v6 + 136) = 0LL;
    *(_QWORD *)(v6 + 120) = 0LL;
    *(_QWORD *)(v6 + 144) = 0LL;
    *(_DWORD *)(v6 + 892) = 0;
    *(_OWORD *)(v6 + 172) = 0LL;
    v24 = *(_DWORD *)(v6 + 1152);
    v33 = v23;
    if ( v24 )
    {
      RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(v24, v17, 64LL, v18);
      v21 = (struct _SLIST_ENTRY *)RefCountedBuffer;
      if ( RefCountedBuffer )
      {
        *(_DWORD *)(RefCountedBuffer + 8) = *(_DWORD *)(v6 + 1152);
        *(_QWORD *)RefCountedBuffer = 0LL;
        *(_DWORD *)(RefCountedBuffer + 12) = 1;
        memmove((void *)(RefCountedBuffer + 16), (const void *)(v6 + 1160), *(unsigned int *)(v6 + 1152));
      }
      v23 = v33;
    }
    if ( *(_DWORD *)(v6 + 1152) && !v21 )
      goto LABEL_27;
    v26 = DXGVIRTUALMACHINE::QuerySwapChainBindingStatusFromVm(
            v22,
            v23,
            (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v6 + 72),
            &v34);
    v32 = v26;
    if ( v26 >= 0 )
    {
      v27 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
              *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL),
              *(_DWORD *)(v6 + 24),
              *(_QWORD *)(v6 + 56),
              *(_QWORD *)(v6 + 32),
              *(_QWORD *)(v6 + 40),
              (void *)(v6 + 72),
              *(_QWORD *)(v6 + 48),
              *(_DWORD *)(v6 + 64),
              *(_DWORD *)(v6 + 68),
              v21,
              v34);
      v32 = v27;
      if ( v27 >= 0 )
      {
LABEL_25:
        if ( !v21 )
          goto LABEL_28;
        CRefCountedBuffer::RefCountedBufferRelease(v21);
LABEL_27:
        v27 = v32;
LABEL_28:
        if ( v27 == -1073741637 )
          v32 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
                  *(_QWORD *)(*((_QWORD *)a1 + 10) + 16LL),
                  *(_DWORD *)(v6 + 24),
                  *(_QWORD *)(v6 + 56),
                  *(_QWORD *)(v6 + 32),
                  *(_QWORD *)(v6 + 40),
                  0LL,
                  *(_QWORD *)(v6 + 48),
                  *(_DWORD *)(v6 + 64),
                  0,
                  0LL,
                  0xFFFFFFFF);
        goto LABEL_30;
      }
      WdLogSingleEntry1(2LL, v27);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"SubmitPresentHistoryTokenFromVm failed",
        v32,
        0LL,
        0LL,
        0LL,
        0LL);
      DxgkCancelSwapChainBinding((struct _D3DKMT_PRESENTHISTORYTOKEN *)(v6 + 72));
    }
    else
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v6 + 80), v26);
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"QuerySwapChainBindingStatusFromVm failed. BindId = 0x%I64x, Status = 0x%I64x",
        *(_QWORD *)(v6 + 80),
        v32,
        0LL,
        0LL,
        0LL);
    }
    v27 = -1073741637;
    v32 = -1073741637;
    goto LABEL_25;
  }
  WdLogSingleEntry1(2LL, 5985LL);
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"The adapter is already closed by the guest",
    5985LL,
    0LL,
    0LL,
    0LL,
    0LL);
LABEL_31:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  return v3;
}
