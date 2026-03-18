/*
 * XREFs of ?VmBusDestroyNtSharedObject@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036C030
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C664 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C019D5A0 (-FreeHandle@HMGRTABLE@@QEAAXI@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x1C0365438 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyNtSharedObject(struct DXGPROCESS **a1)
{
  __int64 v2; // rdi
  unsigned int v3; // r9d
  struct DXGPROCESS *v4; // r10
  __int64 v5; // rax
  __int64 v6; // rsi
  int v7; // edx
  DXGSHAREDVMOBJECT *v9; // rsi
  struct DXGPROCESS *v10; // rcx
  struct VMBPACKETCOMPLETION__ *v11; // rcx
  int v12; // [rsp+50h] [rbp-68h] BYREF
  _BYTE v13[24]; // [rsp+58h] [rbp-60h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+70h] [rbp-48h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  if ( !v2 )
    return 0;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v13, a1[12]);
  v3 = *(_DWORD *)(v2 + 24);
  v4 = a1[12];
  v5 = (v3 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v5 >= *((_DWORD *)v4 + 74)
    || (v6 = *((_QWORD *)v4 + 35),
        v7 = *(_DWORD *)(v6 + 16 * v5 + 8),
        ((v3 >> 25) & 0x60) != (*(_BYTE *)(v6 + 16 * v5 + 8) & 0x60))
    || (v7 & 0x2000) != 0
    || (v7 & 0x1F) == 0 )
  {
LABEL_8:
    WdLogSingleEntry1(2LL, *(unsigned int *)(v2 + 24));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Invalid NT shared object handle: 0x%I64x",
      *(unsigned int *)(v2 + 24),
      0LL,
      0LL,
      0LL,
      0LL);
    DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
    return 0;
  }
  if ( (v7 & 0x1F) != 0xD )
  {
    WdLogSingleEntry1(2LL, 267LL);
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_8;
  }
  v9 = *(DXGSHAREDVMOBJECT **)(v6 + 16LL * (unsigned int)v5);
  if ( !v9 )
    goto LABEL_8;
  HMGRTABLE::FreeHandle((struct DXGPROCESS *)((char *)v4 + 280), v3);
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v13);
  v10 = a1[12];
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*((PRKPROCESS *)v10 + 7), &ApcState);
  DXGSHAREDVMOBJECT::ReleaseReference(v9);
  KeUnstackDetachProcess(&ApcState);
  v11 = a1[16];
  v12 = 0;
  VmBusCompletePacket(v11, &v12, 4u);
  return 1;
}
