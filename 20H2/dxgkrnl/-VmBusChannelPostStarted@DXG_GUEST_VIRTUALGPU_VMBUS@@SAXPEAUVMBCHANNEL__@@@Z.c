/*
 * XREFs of ?VmBusChannelPostStarted@DXG_GUEST_VIRTUALGPU_VMBUS@@SAXPEAUVMBCHANNEL__@@@Z @ 0x1C023C140
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027100 (_guard_dispatch_icall_nop.c)
 *     ?VgpuTrace@@YAXEJPEAXPEBG1ZZ @ 0x1C003F144 (-VgpuTrace@@YAXEJPEAXPEBG1ZZ.c)
 */

void __fastcall DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted(struct VMBCHANNEL__ *a1)
{
  __int64 v2; // rax

  if ( bTracingEnabled )
    VgpuTrace(1, 0, 0LL, L"DXG_GUEST_VIRTUALGPU_VMBUS::VmBusChannelPostStarted", (wchar_t *)L"%p", a1);
  v2 = ((__int64 (__fastcall *)(struct VMBCHANNEL__ *))qword_1C00B2098)(a1);
  KeSetEvent(*(PRKEVENT *)(v2 + 4288), 0, 0);
}
