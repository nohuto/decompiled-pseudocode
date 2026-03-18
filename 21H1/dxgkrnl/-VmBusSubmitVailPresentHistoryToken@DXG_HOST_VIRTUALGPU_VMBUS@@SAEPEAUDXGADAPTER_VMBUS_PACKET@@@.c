/*
 * XREFs of ?VmBusSubmitVailPresentHistoryToken@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C024BEB0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C000A800 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000A89C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C000EB8C (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ @ 0x1C001D9A4 (-RefCountedBufferRelease@CRefCountedBuffer@@QEAAXXZ.c)
 *     memmove @ 0x1C0026580 (memmove.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003EA84 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN@@@@YAPEAUDXGKVMB_COMMAND_VAILPRES.c)
 *     ?AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z @ 0x1C003EE70 (-AllocateRefCountedBuffer@CRefCountedBuffer@@SAPEAV1@IIW4_POOL_TYPE@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0063108 (-DxgkCancelSwapChainBinding@@YAJPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0119460 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEAK@Z @ 0x1C023693C (-QuerySwapChainBindingStatusFromVm@DXGVIRTUALMACHINE@@QEAAJIPEAU_D3DKMT_PRESENTHISTORYTOKEN@@PEA.c)
 *     ?SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYTOKENQUEUE@@PEAU_D3DKMT_PRESENTHISTORYTOKEN@@2PEAVCRefCountedBuffer@@II3K@Z @ 0x1C0236CBC (-SubmitPresentHistoryTokenFromVm@DXGADAPTER@@QEAAJIU_VIDSCH_SUBMIT_FLAGS@@PEAVDXGPRESENTHISTORYT.c)
 *     ?IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x1C02B0EAC (-IsIFlipFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusSubmitVailPresentHistoryToken(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // rax
  char v5; // bl
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  struct DXGPROCESS *Current; // rsi
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rax
  struct CRefCountedBuffer *v15; // rsi
  unsigned int v16; // r13d
  struct _KTHREAD **v17; // r12
  __int64 v18; // rcx
  struct CRefCountedBuffer *RefCountedBuffer; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rdx
  _BYTE v29[8]; // [rsp+60h] [rbp-20h] BYREF
  DXGPUSHLOCK *v30; // [rsp+68h] [rbp-18h]
  int v31; // [rsp+70h] [rbp-10h]
  int v32; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int v33; // [rsp+C8h] [rbp+48h] BYREF

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v29, (struct _KTHREAD **)(*((_QWORD *)a1 + 5) + 232LL), 0);
  DXGPUSHLOCK::AcquireShared(v30);
  v4 = *((_QWORD *)a1 + 5);
  v5 = 0;
  v31 = 1;
  if ( *(_BYTE *)(v4 + 165) )
  {
    v32 = -1073741637;
    if ( *((_DWORD *)DXGGLOBAL::GetGlobal(v3, v2) + 380) < 0x18u )
      goto LABEL_29;
    v7 = CastToVmBusCommand<DXGKVMB_COMMAND_VAILPRESENTHISTORYTOKEN>((__int64)a1);
    v8 = v7;
    if ( !v7 )
      goto LABEL_30;
    v9 = (unsigned int)v32;
    v10 = *((unsigned int *)a1 + 22) - 1160LL;
    if ( v10 < *(unsigned int *)(v7 + 1152) )
      v9 = 3221225485LL;
    v32 = v9;
    Current = DXGPROCESS::GetCurrent(v9, v10);
    if ( v32 != -1073741637 )
    {
LABEL_29:
      VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 9), &v32, 4u);
      v5 = 1;
      goto LABEL_30;
    }
    if ( !DXGVAILOBJECT::IsIFlipFeatureEnabled()
      || *(_DWORD *)(v8 + 72) != 2
      || (*((_BYTE *)Current + 347) & 0x20) == 0
      || !*((_BYTE *)Current + 346)
      || !*(_DWORD *)(v8 + 68)
      || !*(_QWORD *)(v8 + 96) )
    {
      goto LABEL_26;
    }
    v14 = *((_QWORD *)a1 + 7);
    v15 = 0LL;
    v16 = *(_DWORD *)(v8 + 96);
    v33 = 0;
    v17 = *(struct _KTHREAD ***)(v14 + 496);
    *(_DWORD *)(v8 + 132) &= ~0x2000000u;
    *(_QWORD *)(v8 + 96) = 0LL;
    *(_QWORD *)(v8 + 136) = 0LL;
    *(_QWORD *)(v8 + 120) = 0LL;
    *(_QWORD *)(v8 + 144) = 0LL;
    v18 = *(unsigned int *)(v8 + 1152);
    if ( (_DWORD)v18 )
    {
      RefCountedBuffer = CRefCountedBuffer::AllocateRefCountedBuffer(v18, v12, v13);
      v15 = RefCountedBuffer;
      if ( RefCountedBuffer )
      {
        *((_DWORD *)RefCountedBuffer + 2) = *(_DWORD *)(v8 + 1152);
        *(_QWORD *)RefCountedBuffer = 0LL;
        *((_DWORD *)RefCountedBuffer + 3) = 1;
        memmove((char *)RefCountedBuffer + 16, (const void *)(v8 + 1160), *(unsigned int *)(v8 + 1152));
      }
    }
    if ( *(_DWORD *)(v8 + 1152) && !v15 )
      goto LABEL_26;
    v32 = DXGVIRTUALMACHINE::QuerySwapChainBindingStatusFromVm(
            v17,
            v16,
            (struct _D3DKMT_PRESENTHISTORYTOKEN *)(v8 + 72),
            &v33);
    if ( v32 >= 0 )
    {
      v23 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
              *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL),
              *(_DWORD *)(v8 + 24),
              *(_QWORD *)(v8 + 56),
              *(_QWORD *)(v8 + 32),
              *(_QWORD *)(v8 + 40),
              (void *)(v8 + 72),
              *(_QWORD *)(v8 + 48),
              *(_DWORD *)(v8 + 64),
              *(_DWORD *)(v8 + 68),
              v15,
              v33);
      v32 = v23;
      if ( v23 >= 0 )
      {
LABEL_24:
        if ( !v15 )
          goto LABEL_27;
        CRefCountedBuffer::RefCountedBufferRelease((PSLIST_ENTRY)v15);
LABEL_26:
        v23 = v32;
LABEL_27:
        if ( v23 == -1073741637 )
          v32 = DXGADAPTER::SubmitPresentHistoryTokenFromVm(
                  *(_QWORD *)(*((_QWORD *)a1 + 5) + 16LL),
                  *(_DWORD *)(v8 + 24),
                  *(_QWORD *)(v8 + 56),
                  *(_QWORD *)(v8 + 32),
                  *(_QWORD *)(v8 + 40),
                  0LL,
                  *(_QWORD *)(v8 + 48),
                  *(_DWORD *)(v8 + 64),
                  0,
                  0LL,
                  0xFFFFFFFF);
        goto LABEL_29;
      }
      v26 = WdLogNewEntry5_WdError(v25, v24);
      *(_QWORD *)(v26 + 24) = v32;
      WdLogEvent5_WdError(v26);
      DxgkCancelSwapChainBinding((struct _D3DKMT_PRESENTHISTORYTOKEN *)(v8 + 72), v27);
    }
    else
    {
      v22 = WdLogNewEntry5_WdError(v21, v20);
      *(_QWORD *)(v22 + 24) = v32;
      WdLogEvent5_WdError(v22);
    }
    v23 = -1073741637;
    v32 = -1073741637;
    goto LABEL_24;
  }
  v6 = WdLogNewEntry5_WdError(v3, v2);
  *(_QWORD *)(v6 + 24) = 5300LL;
  WdLogEvent5_WdError(v6);
LABEL_30:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v29);
  return v5;
}
