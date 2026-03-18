/*
 * XREFs of ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023DA90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00025F8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00029C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002ADC (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002C20 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0004010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x1C0006904 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C003F73C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010A620 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0113D14 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C01142F4 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ @ 0x1C0284140 (-IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ.c)
 *     ?SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z @ 0x1C0285008 (-SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusCreateProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r15
  unsigned int v6; // r14d
  bool v7; // di
  __int64 v8; // rsi
  DXGVIRTUALMACHINE *v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rbx
  DXGPROCESSVM *v17; // rbx
  __int64 *v18; // r12
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rax
  unsigned int v22; // edi
  int v23; // edx
  __int64 v24; // rdx
  __int64 v25; // rcx
  char v26; // al
  DXGFASTMUTEX *v27; // rbx
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rdx
  __int64 v31; // rax
  __int64 v32; // rax
  struct VMBPACKETCOMPLETION__ *v33; // rcx
  int v35; // [rsp+38h] [rbp-29h] BYREF
  DXGPROCESSVM *v36; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v37[24]; // [rsp+48h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-1h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEPROCESS>((__int64)a1);
  v5 = v2;
  if ( !v2 )
    return 0;
  LOBYTE(v3) = *(_BYTE *)(v2 + 562);
  v6 = 0;
  v36 = 0LL;
  v7 = 0;
  if ( (v3 & 3) == 3 || (LOBYTE(v4) = ((unsigned __int8)v3 >> 2) & (v3 | ((unsigned __int8)v3 >> 1)), (v4 & 1) != 0) )
  {
    v10 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v10 + 24) = 6101LL;
    goto LABEL_38;
  }
  v8 = *((_QWORD *)a1 + 7);
  v9 = *(DXGVIRTUALMACHINE **)(v8 + 496);
  if ( *((_DWORD *)v9 + 88) >= 0x1Bu )
  {
    v7 = (v3 & 8) != 0;
    if ( (v3 & 8) != 0 && (v3 & 7) != 0 )
    {
      v10 = WdLogNewEntry5_WdError(v9, v3);
      *(_QWORD *)(v10 + 24) = 6111LL;
LABEL_38:
      WdLogEvent5_WdError(v10);
      return 0;
    }
  }
  if ( (int)DXGVIRTUALMACHINE::IncrementNumVmProcesses(v9) < 0 )
  {
    v10 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v10 + 24) = 6120LL;
    goto LABEL_38;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v8 + 56), &ApcState);
  v13 = DXGPROCESS::CreateDxgProcess(
          &v36,
          (struct DXGPROCESS *)v8,
          *(struct DXGPROCESS **)(v5 + 24),
          0,
          0LL,
          *(void **)(v5 + 32));
  v16 = v13;
  v35 = v13;
  if ( v13 < 0 )
  {
    v32 = WdLogNewEntry5_WdError(v15, v14);
    *(_QWORD *)(v32 + 24) = v16;
    WdLogEvent5_WdError(v32);
  }
  else
  {
    v17 = v36;
    if ( v7 )
      *((_BYTE *)v36 + 347) |= 4u;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v37, (struct _KTHREAD **)v8);
    v18 = (__int64 *)(v8 + 240);
    v6 = HMGRTABLE::AllocHandle((unsigned int *)(v8 + 240), (__int64)v17, 12, 0, 0);
    if ( !v6 )
    {
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
      v21 = WdLogNewEntry5_WdError(v20, v19);
      *(_QWORD *)(v21 + 24) = 6145LL;
      WdLogEvent5_WdError(v21);
      DXGPROCESS::DestroyDxgProcess(v17);
      _InterlockedDecrement(*(volatile signed __int32 **)(v8 + 496));
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
      return 0;
    }
    v22 = (v6 >> 6) & 0xFFFFFF;
    if ( v22 < *(_DWORD *)(v8 + 256) )
    {
      v23 = *(_DWORD *)(*v18 + 16LL * v22 + 8);
      if ( ((v6 >> 25) & 0x60) == (*(_BYTE *)(*v18 + 16LL * v22 + 8) & 0x60) && (v23 & 0x2000) == 0 && (v23 & 0x1F) != 0 )
        *(_DWORD *)(*v18 + 16 * (((unsigned __int64)v6 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v37);
    *((_DWORD *)v17 + 135) = v6;
    DXGPROCESSVM::SetVmProcessName(v17, (unsigned __int16 *)(v5 + 40));
    v26 = *(_BYTE *)(v5 + 562);
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
    DXGPROCESS::AcquireReference((DXGPROCESS *)v8, v28);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v27, v29);
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v8 + 208));
    if ( v22 < *(_DWORD *)(v8 + 256) )
    {
      v30 = *v18;
      if ( ((v6 >> 25) & 0x60) == (*(_BYTE *)(*v18 + 16LL * v22 + 8) & 0x60)
        && (*(_DWORD *)(*v18 + 16LL * v22 + 8) & 0x1F) != 0 )
      {
        if ( (*(_DWORD *)(v30 + 16LL * ((v6 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          v31 = WdLogNewEntry5_WdAssertion((v6 >> 25) & 0x60, v30);
          *(_QWORD *)(v31 + 24) = 217LL;
          WdLogEvent5_WdAssertion(v31);
          v30 = *v18;
        }
        *(_DWORD *)(v30 + 16LL * ((v6 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v8 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 208, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v16) = v35;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( (int)v16 >= 0 )
  {
    v33 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    v35 = v6;
    VmBusCompletePacket(v33, &v35, 4u);
    return 1;
  }
  _InterlockedDecrement(*(volatile signed __int32 **)(v8 + 496));
  return 0;
}
