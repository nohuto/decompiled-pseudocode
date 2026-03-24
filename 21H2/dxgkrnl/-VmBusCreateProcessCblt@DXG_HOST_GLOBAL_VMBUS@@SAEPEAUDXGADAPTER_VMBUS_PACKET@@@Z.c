/*
 * XREFs of ?VmBusCreateProcessCblt@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D8A20
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0002630 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002A00 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002B1C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C60 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00041C0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00044A0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006C64 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0024910 (__security_check_cookie.c)
 *     McTemplateK0ppqqpppz_EtwWriteTransfer @ 0x1C0027550 (McTemplateK0ppqqpppz_EtwWriteTransfer.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C004069C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010C9A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0117234 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0117814 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ @ 0x1C028551C (-IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ.c)
 *     ?SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z @ 0x1C02863E4 (-SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateProcessCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  unsigned __int64 v1; // r12
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r13
  unsigned int v7; // r14d
  bool v8; // bl
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rdi
  DXGPROCESSVM *v17; // rdi
  _QWORD *v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // r15d
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  char v26; // al
  DXGFASTMUTEX *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 *v30; // rdi
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rax
  struct VMBPACKETCOMPLETION__ *v34; // rcx
  void *v36; // [rsp+30h] [rbp-61h]
  unsigned int v37; // [rsp+38h] [rbp-59h]
  int v38; // [rsp+68h] [rbp-29h] BYREF
  DXGPROCESSVM *v39; // [rsp+70h] [rbp-21h] BYREF
  _BYTE v40[24]; // [rsp+78h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+90h] [rbp-1h] BYREF

  v1 = ((unsigned __int64)a1 - 40) & -(__int64)(a1 != 0LL);
  v2 = v1 + 40;
  if ( !v1 )
    v2 = 0LL;
  v3 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEPROCESS>(v2);
  v6 = v3;
  if ( !v3 )
    return 0;
  LOBYTE(v5) = *(_BYTE *)(v3 + 562);
  v7 = 0;
  v39 = 0LL;
  v8 = 0;
  if ( (v5 & 3) == 3 || v5 & 1 | ((v5 & 2) != 0) && (v5 & 4) != 0 )
  {
    v10 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v10 + 24) = 2292LL;
    goto LABEL_43;
  }
  v9 = *(_QWORD *)(v1 + 96);
  if ( *(_DWORD *)(*(_QWORD *)(v9 + 496) + 352LL) >= 0x1Bu )
  {
    v8 = (v5 & 8) != 0;
    if ( (v5 & 8) != 0 && (v5 & 7) != 0 )
    {
      v10 = WdLogNewEntry5_WdError(v5, v4);
      *(_QWORD *)(v10 + 24) = 2306LL;
LABEL_43:
      WdLogEvent5_WdError(v10);
      return 0;
    }
  }
  if ( (int)DXGVIRTUALMACHINE::IncrementNumVmProcesses(*(DXGVIRTUALMACHINE **)(v9 + 496)) < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v10 + 24) = 2314LL;
    goto LABEL_43;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v9 + 56), &ApcState);
  v13 = DXGPROCESS::CreateDxgProcess(&v39, (struct DXGPROCESS *)v9, *(struct DXGPROCESS **)(v6 + 24), 0, 0LL, 0LL);
  v16 = v13;
  v38 = v13;
  if ( v13 < 0 )
  {
    v33 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v33 + 24) = v16;
    WdLogEvent5_WdError(v33);
  }
  else
  {
    v17 = v39;
    if ( v8 )
      *((_BYTE *)v39 + 347) |= 4u;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v40, (struct _KTHREAD **)v9);
    v18 = (_QWORD *)(v9 + 240);
    v7 = HMGRTABLE::AllocHandle(v9 + 240, v17, 12LL);
    if ( !v7 )
    {
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
      v21 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v21 + 24) = 2339LL;
      WdLogEvent5_WdError(v21);
      DXGPROCESS::DestroyDxgProcess(v17);
      _InterlockedDecrement(*(volatile signed __int32 **)(v9 + 496));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
      return 0;
    }
    v22 = (v7 >> 6) & 0xFFFFFF;
    if ( v22 < *(_DWORD *)(v9 + 256) )
    {
      v23 = *(_DWORD *)(*v18 + 16LL * v22 + 8);
      if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(*v18 + 16LL * v22 + 8) & 0x60) && (v23 & 0x2000) == 0 && (v23 & 0x1F) != 0 )
        *(_DWORD *)(*v18 + 16 * (((unsigned __int64)v7 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v40);
    *((_DWORD *)v17 + 135) = v7;
    DXGPROCESSVM::SetVmProcessName(v17, (unsigned __int16 *)(v6 + 40));
    *((_QWORD *)v17 + 68) = *(_QWORD *)(v6 + 32);
    v26 = *(_BYTE *)(v6 + 562);
    if ( (v26 & 2) != 0 )
    {
      *((_BYTE *)v17 + 346) = 1;
    }
    else if ( (v26 & 1) != 0 )
    {
      *((_BYTE *)v17 + 344) = 1;
    }
    else if ( (v26 & 4) != 0 )
    {
      *((_BYTE *)v17 + 347) |= 1u;
    }
    v27 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v25, v24) + 320);
    DXGFASTMUTEX::Acquire(v27);
    DXGPROCESS::AcquireReference((DXGPROCESS *)v9, v28);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v27, v29);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    {
      v37 = *((_BYTE *)v17 + 344) & 1 | (2
                                       * (*((_BYTE *)v17 + 345) & 1 | (2
                                                                     * (*((_BYTE *)v17 + 346) & 1 | (2 * (*((_BYTE *)v17 + 347) & 0x37 | (2 * (*((_BYTE *)v17 + 347) & 0xC0 | (8 * (*((_BYTE *)v17 + 348) & 4 | (32 * (*((_BYTE *)v17 + 348) & 3))))))))))));
      LODWORD(v36) = *((_DWORD *)v17 + 106);
      McTemplateK0ppqqpppz_EtwWriteTransfer(
        *((_QWORD *)v17 + 8),
        *((_QWORD *)v17 + 62),
        v37,
        v17,
        *(_QWORD *)(*((_QWORD *)v17 + 8) + 72LL),
        v36,
        v37,
        *((_QWORD *)v17 + 68),
        *((_QWORD *)v17 + 63),
        *(_QWORD *)(*((_QWORD *)v17 + 62) + 496LL),
        v6 + 40);
    }
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v9 + 208));
    v30 = (__int64 *)(v9 + 240);
    if ( v22 < *(_DWORD *)(v9 + 256) )
    {
      v31 = *v30;
      if ( ((v7 >> 25) & 0x60) == (*(_BYTE *)(*v30 + 16LL * v22 + 8) & 0x60)
        && (*(_DWORD *)(*v30 + 16LL * v22 + 8) & 0x1F) != 0 )
      {
        if ( (*(_DWORD *)(v31 + 16LL * ((v7 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          v32 = WdLogNewEntry5_WdAssertion((v7 >> 25) & 0x60, v31);
          *(_QWORD *)(v32 + 24) = 222LL;
          WdLogEvent5_WdAssertion(v32);
          v31 = *v30;
        }
        *(_DWORD *)(v31 + 16LL * ((v7 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v9 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v9 + 208, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v16) = v38;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( (int)v16 >= 0 )
  {
    v34 = *(struct VMBPACKETCOMPLETION__ **)(v1 + 112);
    v38 = v7;
    VmBusCompletePacket(v34, &v38, 4u);
    return 1;
  }
  _InterlockedDecrement(*(volatile signed __int32 **)(v9 + 496));
  return 0;
}
