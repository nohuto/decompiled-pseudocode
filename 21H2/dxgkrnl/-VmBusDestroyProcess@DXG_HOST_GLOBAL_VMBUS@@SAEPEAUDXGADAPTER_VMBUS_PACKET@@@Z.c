/*
 * XREFs of ?VmBusDestroyProcess@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C036C340
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000EDA8 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FABC (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     ??0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C00465B8 (--0CEnsureCurrentDxgProcess@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYPROCESS@@@@YAPEAUDXGKVMB_COMMAND_DESTROYPROCESS@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C005C784 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYPROCESS@@@@YAPEAUDXGKVMB_COMMAND_DESTROYPROCESS@@P.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z @ 0x1C018910C (-DestroyDxgProcess@DXGPROCESS@@SAXPEAV1@@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusDestroyProcess(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  __int64 v4; // r14
  unsigned int v5; // r9d
  __int64 v6; // rax
  __int64 v7; // r8
  int v8; // edx
  struct _EX_RUNDOWN_REF *v9; // rbx
  __int64 v10; // rdi
  int v12; // [rsp+50h] [rbp-29h] BYREF
  __int64 v13; // [rsp+58h] [rbp-21h] BYREF
  __int64 v14; // [rsp+60h] [rbp-19h]
  _BYTE v15[24]; // [rsp+68h] [rbp-11h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp+7h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYPROCESS>((__int64)a1);
  v3 = v2;
  if ( !v2 )
    return v2;
  v4 = *((_QWORD *)a1 + 12);
  v12 = -1073741823;
  memset(&ApcState, 0, sizeof(ApcState));
  KeStackAttachProcess(*(PRKPROCESS *)(v4 + 56), &ApcState);
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v15, (struct DXGPROCESS *)v4);
  v5 = *(_DWORD *)(v3 + 8);
  v6 = (v5 >> 6) & 0xFFFFFF;
  if ( (unsigned int)v6 < *(_DWORD *)(v4 + 296) )
  {
    v7 = *(_QWORD *)(v4 + 280);
    v8 = *(_DWORD *)(v7 + 16 * v6 + 8);
    if ( ((v5 >> 25) & 0x60) == (*(_BYTE *)(v7 + 16 * v6 + 8) & 0x60) && (v8 & 0x2000) == 0 && (v8 & 0x1F) != 0 )
    {
      if ( (v8 & 0x1F) == 0xC )
      {
        v9 = *(struct _EX_RUNDOWN_REF **)(v7 + 16LL * (unsigned int)v6);
        if ( v9 )
          *(_DWORD *)(v7 + 16 * (((unsigned __int64)v5 >> 6) & 0xFFFFFF) + 8) |= 0x2000u;
        goto LABEL_9;
      }
      WdLogSingleEntry1(2LL, 267LL);
      DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 267LL, 0LL, 0LL, 0LL, 0LL);
    }
  }
  v9 = 0LL;
LABEL_9:
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v15);
  if ( v9 )
  {
    ExWaitForRundownProtectionRelease(v9 + 30);
    CEnsureCurrentDxgProcess::CEnsureCurrentDxgProcess((CEnsureCurrentDxgProcess *)&v13, (struct DXGPROCESS *)v9);
    v10 = v14;
    if ( v14 )
    {
      DXGPROCESS::DestroyDxgProcess((struct DXGPROCESS *)v9);
      v12 = 0;
      *(_QWORD *)(v10 + 24) = v13;
    }
  }
  else
  {
    WdLogSingleEntry1(2LL, *(unsigned int *)(v3 + 8));
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to get process by handle: 0x%I64x",
      *(unsigned int *)(v3 + 8),
      0LL,
      0LL,
      0LL,
      0LL);
  }
  KeUnstackDetachProcess(&ApcState);
  VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v12, 4u);
  LOBYTE(v2) = 1;
  return v2;
}
