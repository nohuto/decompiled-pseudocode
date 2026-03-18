/*
 * XREFs of ?VmBusGetInternalAdapterInfoCblt@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C00D7600
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C00042F0 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C00243B0 (__security_check_cookie.c)
 *     memset @ 0x1C0027400 (memset.c)
 *     ??0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0039C38 (--0DXGAUTOPUSHLOCKSHARED@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C00408F0 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x1C023951C (-FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z.c)
 *     ?IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ @ 0x1C02845A0 (-IsVailEnabled@DXGVIRTUALMACHINE@@QEAAEXZ.c)
 */

char __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusGetInternalAdapterInfoCblt(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // r14
  char v3; // di
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  char v10; // al
  unsigned __int8 IsVailEnabled; // dl
  __int64 v12; // rax
  unsigned int v13; // edx
  __int64 v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rcx
  unsigned int v18; // r8d
  _BYTE v20[24]; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v21[89]; // [rsp+38h] [rbp-C8h] BYREF

  v1 = (__int64)a1 + 40;
  v3 = 0;
  if ( !a1 )
    v1 = 80LL;
  DXGAUTOPUSHLOCKSHARED::DXGAUTOPUSHLOCKSHARED(
    (DXGAUTOPUSHLOCKSHARED *)v20,
    (struct _KTHREAD **)(*(_QWORD *)v1 + 232LL));
  v6 = *(_QWORD *)v1;
  if ( *(_BYTE *)(*(_QWORD *)v1 + 165LL) )
  {
    memset(v21, 0, sizeof(v21));
    DXGADAPTER::FillInternalAdapterInfo(
      *(DXGADAPTER **)(v6 + 16),
      (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)v21);
    v8 = (__int64)a1 + 56;
    HIDWORD(v21[1]) ^= (BYTE4(v21[1]) ^ *(_BYTE *)(*(_QWORD *)v1 + 153LL)) & 1;
    if ( !a1 )
      v8 = 96LL;
    v9 = *(_QWORD *)(*(_QWORD *)v8 + 496LL);
    v10 = *(_BYTE *)(v9 + 298);
    *(_BYTE *)(v9 + 298) = 0;
    HIDWORD(v21[1]) ^= (BYTE4(v21[1]) ^ (unsigned __int8)(2 * v10)) & 2;
    HIDWORD(v21[0]) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v1 + 16LL) + 2660LL);
    IsVailEnabled = DXGVIRTUALMACHINE::IsVailEnabled(*(DXGVIRTUALMACHINE **)(*(_QWORD *)v8 + 496LL));
    v12 = *(_QWORD *)v8;
    v13 = HIDWORD(v21[1]) ^ (BYTE4(v21[1]) ^ (unsigned __int8)(4 * IsVailEnabled)) & 4;
    HIDWORD(v21[1]) = v13;
    v14 = *(_QWORD *)(v12 + 496);
    v15 = *(_DWORD *)(v14 + 352);
    if ( v15 >= 0x21 )
    {
      v13 = v13 & 0xFFFFFFDF | (*(_QWORD *)(v14 + 232) != 0LL ? 0x20 : 0);
      HIDWORD(v21[1]) = v13;
    }
    if ( v15 >= 0x28 )
    {
      v16 = (__int64)a1 + 96;
      HIDWORD(v21[1]) = v13 | 0x40;
      if ( !a1 )
        v16 = 136LL;
      *(_BYTE *)(*(_QWORD *)v16 + 299LL) = 1;
    }
    v21[88] = *(_QWORD *)(*(_QWORD *)v1 + 28LL);
    v17 = (__int64)a1 + 72;
    if ( !a1 )
      v17 = 112LL;
    if ( v15 > 0x10 )
      v18 = v15 < 0x22 ? 704 : 712;
    else
      v18 = 24;
    VmBusCompletePacket(*(struct VMBPACKETCOMPLETION__ **)v17, v21, v18);
    v3 = 1;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5, v4);
    *(_QWORD *)(v7 + 24) = 1870LL;
    WdLogEvent5_WdError(v7);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v20);
  return v3;
}
