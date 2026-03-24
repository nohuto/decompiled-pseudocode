/*
 * XREFs of ?VmBusCreateProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C023EA80
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
 *     Feature_1279041848__private_IsEnabledDeviceUsage @ 0x1C00267AC (Feature_1279041848__private_IsEnabledDeviceUsage.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C004069C (--$CastToVmBusCommand@UDXGKVMB_COMMAND_CREATEPROCESS@@@@YAPEAUDXGKVMB_COMMAND_CREATEPROCESS@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C0041850 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1C010C9A0 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z @ 0x1C0117234 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@PEAX@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C0117814 (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 *     ?IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ @ 0x1C028551C (-IncrementNumVmProcesses@DXGVIRTUALMACHINE@@QEAAJXZ.c)
 *     ?SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z @ 0x1C02863E4 (-SetVmProcessName@DXGPROCESSVM@@QEAAXPEAG@Z.c)
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
  __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rbx
  DXGFASTMUTEX *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rdx
  DXGPROCESSVM *v19; // rbx
  __int64 *v20; // r12
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  unsigned int v24; // edi
  int v25; // edx
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  struct VMBPACKETCOMPLETION__ *v30; // rcx
  int v32; // [rsp+38h] [rbp-29h] BYREF
  DXGPROCESSVM *v33; // [rsp+40h] [rbp-21h] BYREF
  _BYTE v34[24]; // [rsp+48h] [rbp-19h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+60h] [rbp-1h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_CREATEPROCESS>((__int64)a1);
  v5 = v2;
  if ( !v2 )
    return 0;
  LOBYTE(v4) = *(_BYTE *)(v2 + 562);
  v6 = 0;
  v33 = 0LL;
  v7 = 0;
  if ( (v4 & 3) == 3 || v4 & 1 | ((v4 & 2) != 0) && (v4 & 4) != 0 )
  {
    v9 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v9 + 24) = 6138LL;
    goto LABEL_41;
  }
  v8 = *((_QWORD *)a1 + 7);
  if ( *(_DWORD *)(*(_QWORD *)(v8 + 496) + 352LL) >= 0x1Bu )
  {
    v7 = (v4 & 8) != 0;
    if ( (v4 & 8) != 0 && (v4 & 7) != 0 )
    {
      v9 = WdLogNewEntry5_WdError(v4, v3);
      *(_QWORD *)(v9 + 24) = 6148LL;
LABEL_41:
      WdLogEvent5_WdError(v9);
      return 0;
    }
  }
  if ( (int)DXGVIRTUALMACHINE::IncrementNumVmProcesses(*(DXGVIRTUALMACHINE **)(v8 + 496)) < 0 )
  {
    v9 = WdLogNewEntry5_WdError(v11, v10);
    *(_QWORD *)(v9 + 24) = 6157LL;
    goto LABEL_41;
  }
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v8 + 56), &ApcState);
  v12 = DXGPROCESS::CreateDxgProcess(
          &v33,
          (struct DXGPROCESS *)v8,
          *(struct DXGPROCESS **)(v5 + 24),
          0,
          0LL,
          *(void **)(v5 + 32));
  v15 = v12;
  v32 = v12;
  if ( v12 < 0 )
  {
    v29 = WdLogNewEntry5_WdError(v14, v13);
    *(_QWORD *)(v29 + 24) = v15;
    WdLogEvent5_WdError(v29);
  }
  else
  {
    v16 = (struct DXGGLOBAL *)((char *)DXGGLOBAL::GetGlobal(v14, v13) + 320);
    DXGFASTMUTEX::Acquire(v16);
    DXGPROCESS::AcquireReference((DXGPROCESS *)v8, v17);
    DXGFASTMUTEX::Release((struct _KTHREAD **)v16, v18);
    v19 = v33;
    if ( v7 )
      *((_BYTE *)v33 + 347) |= 4u;
    DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v34, (struct _KTHREAD **)v8);
    v20 = (__int64 *)(v8 + 240);
    v6 = HMGRTABLE::AllocHandle((unsigned int *)(v8 + 240), (__int64)v19, 12, 0, 0);
    if ( !v6 )
    {
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
      v23 = WdLogNewEntry5_WdError(v22, v21);
      *(_QWORD *)(v23 + 24) = 6191LL;
      WdLogEvent5_WdError(v23);
      DXGPROCESS::DestroyDxgProcess(v19);
      if ( (unsigned int)Feature_1279041848__private_IsEnabledDeviceUsage() )
        KeUnstackDetachProcess(&ApcState);
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
      return 0;
    }
    v24 = (v6 >> 6) & 0xFFFFFF;
    if ( v24 < *(_DWORD *)(v8 + 256) )
    {
      v25 = *(_DWORD *)(*v20 + 16LL * v24 + 8);
      if ( ((v6 >> 25) & 0x60) == (*(_BYTE *)(*v20 + 16LL * v24 + 8) & 0x60) && (v25 & 0x2000) == 0 && (v25 & 0x1F) != 0 )
        *(_DWORD *)(*v20 + 16 * (((unsigned __int64)v6 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
    }
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v34);
    *((_DWORD *)v19 + 135) = v6;
    DXGPROCESSVM::SetVmProcessName(v19, (unsigned __int16 *)(v5 + 40));
    v26 = *(_BYTE *)(v5 + 562);
    if ( (v26 & 2) != 0 )
    {
      *((_BYTE *)v19 + 346) = 1;
    }
    else if ( (v26 & 1) != 0 )
    {
      *((_BYTE *)v19 + 344) = 1;
    }
    else if ( (v26 & 4) != 0 )
    {
      *((_BYTE *)v19 + 347) |= 1u;
    }
    DXGPUSHLOCK::AcquireExclusive((DXGPUSHLOCK *)(v8 + 208));
    if ( v24 < *(_DWORD *)(v8 + 256) )
    {
      v27 = *v20;
      if ( ((v6 >> 25) & 0x60) == (*(_BYTE *)(*v20 + 16LL * v24 + 8) & 0x60)
        && (*(_DWORD *)(*v20 + 16LL * v24 + 8) & 0x1F) != 0 )
      {
        if ( (*(_DWORD *)(v27 + 16LL * ((v6 >> 6) & 0xFFFFFF) + 8) & 0x2000) == 0 )
        {
          v28 = WdLogNewEntry5_WdAssertion((v6 >> 25) & 0x60, v27);
          *(_QWORD *)(v28 + 24) = 222LL;
          WdLogEvent5_WdAssertion(v28);
          v27 = *v20;
        }
        *(_DWORD *)(v27 + 16LL * ((v6 >> 6) & 0xFFFFFF) + 8) &= ~0x2000u;
      }
    }
    *(_QWORD *)(v8 + 216) = 0LL;
    ExReleasePushLockExclusiveEx(v8 + 208, 0LL);
    KeLeaveCriticalRegion();
    LODWORD(v15) = v32;
  }
  KeUnstackDetachProcess(&ApcState);
  if ( (int)v15 >= 0 )
  {
    v30 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 9);
    v32 = v6;
    VmBusCompletePacket(v30, &v32, 4u);
    return 1;
  }
  _InterlockedDecrement(*(volatile signed __int32 **)(v8 + 496));
  return 0;
}
