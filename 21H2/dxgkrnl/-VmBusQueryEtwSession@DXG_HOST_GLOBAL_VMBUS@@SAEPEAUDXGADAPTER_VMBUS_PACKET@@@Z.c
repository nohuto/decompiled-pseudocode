/*
 * XREFs of ?VmBusQueryEtwSession@DXG_HOST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1C0372F60
 * Callers:
 *     <none>
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1C002B170 (__security_check_cookie.c)
 *     McTemplateK0j_EtwWriteTransfer @ 0x1C0054120 (McTemplateK0j_EtwWriteTransfer.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x1C005DE78 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_GLOBAL_VMBUS::VmBusQueryEtwSession(struct VMBPACKETCOMPLETION__ **a1)
{
  NTSTATUS v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v6; // rbx
  UUID Uuid; // [rsp+50h] [rbp-28h] BYREF

  Uuid = 0LL;
  v2 = ExUuidCreate(&Uuid);
  if ( v2 < 0 )
  {
    v6 = v2;
    WdLogSingleEntry1(2LL, v2);
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to generate ETW session GUID: Status=0x%.8x",
      v6,
      0LL,
      0LL,
      0LL,
      0LL);
    return 0;
  }
  else
  {
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000000) != 0 )
      McTemplateK0j_EtwWriteTransfer(v3, &EventVGPUHostGenerateSessionId, v4, (__int64)&Uuid);
    VmBusCompletePacket(a1[16], &Uuid, 0x10u);
    return 1;
  }
}
