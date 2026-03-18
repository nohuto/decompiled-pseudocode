/*
 * XREFs of ?VmBusQueryEtwSession@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C02413B0
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C0024300 (__security_check_cookie.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C003F9E8 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1C0040094 (McTemplateK0j_EtwWriteTransfer.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusQueryEtwSession(struct VMBPACKETCOMPLETION__ **a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // rbx
  __int64 v8; // rax
  UUID Uuid; // [rsp+20h] [rbp-28h] BYREF

  Uuid = 0LL;
  v2 = ExUuidCreate(&Uuid);
  v6 = v2;
  if ( v2 < 0 )
  {
    v8 = WdLogNewEntry5_WdError(v4, v3);
    *(_QWORD *)(v8 + 24) = v6;
    WdLogEvent5_WdError(v8);
    return 0;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400000) != 0 )
      McTemplateK0j_EtwWriteTransfer(v4, &EventVGPUHostGenerateSessionId, v5, (__int64)&Uuid);
    VmBusCompletePacket(a1[9], &Uuid, 0x10u);
    return 1;
  }
}
