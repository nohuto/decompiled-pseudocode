/*
 * XREFs of ?VmBusChannelPostStarted@DXG_GUEST_GLOBAL_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C0238F20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026570 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003E2E4 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

void __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusChannelPostStarted(struct VMBCHANNEL__ *a1)
{
  __int64 v2; // rax

  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_GUEST_GLOBAL_VMBUS::VmBusChannelPostStarted", (wchar_t *)L"%p", a1);
  v2 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C00B0F68)(a1);
  KeSetEvent(*(PRKEVENT *)(v2 + 48), 0, 0);
}
