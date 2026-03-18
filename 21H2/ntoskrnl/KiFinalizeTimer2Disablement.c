/*
 * XREFs of KiFinalizeTimer2Disablement @ 0x1402D43F4
 * Callers:
 *     KiUpdateTimer2Flags @ 0x1402D4358 (KiUpdateTimer2Flags.c)
 *     KiExpireTimer2 @ 0x1402F2CA0 (KiExpireTimer2.c)
 * Callees:
 *     EtwGetKernelTraceTimestamp @ 0x140223A20 (EtwGetKernelTraceTimestamp.c)
 *     __security_check_cookie @ 0x1403DF760 (__security_check_cookie.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x140418E4C (KiRemoveSystemWorkPriorityKick.c)
 *     _guard_dispatch_icall @ 0x14042A5E0 (_guard_dispatch_icall.c)
 *     EtwTraceTimedEvent @ 0x14045FBE2 (EtwTraceTimedEvent.c)
 */

void __fastcall KiFinalizeTimer2Disablement(unsigned __int64 a1)
{
  __int64 v1; // r12
  char v3; // r14
  unsigned __int64 v4; // rdi
  void (__fastcall *v5)(unsigned __int64); // rbx
  unsigned __int8 CurrentIrql; // bp
  _DWORD *SchedulerAssist; // r9
  unsigned __int8 v8; // al
  struct _KPRCB *CurrentPrcb; // r9
  _DWORD *v10; // r8
  int v11; // eax
  bool v12; // zf
  _QWORD v13[3]; // [rsp+30h] [rbp-68h] BYREF
  _OWORD v14[2]; // [rsp+48h] [rbp-50h] BYREF

  v1 = 0LL;
  memset(v14, 0, sizeof(v14));
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
  {
    v1 = *(_QWORD *)(a1 + 96);
    v3 = 1;
  }
  else
  {
    v3 = 0;
  }
  v4 = 0LL;
  v5 = (void (__fastcall *)(unsigned __int64))(KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(
                                                                                      *(_QWORD *)(a1 + 112) ^ KiWaitNever,
                                                                                      KiWaitNever)));
  if ( v5 )
  {
    v4 = KiWaitAlways ^ _byteswap_uint64(a1 ^ __ROL8__(*(_QWORD *)(a1 + 120) ^ KiWaitNever, KiWaitNever));
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( KiIrqlFlags && (KiIrqlFlags & 1) != 0 && CurrentIrql <= 0xFu )
    {
      SchedulerAssist = KeGetCurrentPrcb()->SchedulerAssist;
      SchedulerAssist[5] |= (-1 << (CurrentIrql + 1)) & 4;
    }
    if ( v3 )
      EtwGetKernelTraceTimestamp((unsigned __int64)v14, 0x40020000uLL);
    v5(v4);
    if ( KiIrqlFlags )
    {
      if ( (KiIrqlFlags & 1) != 0 )
      {
        v8 = KeGetCurrentIrql();
        if ( v8 <= 0xFu && CurrentIrql <= 0xFu && v8 >= 2u )
        {
          CurrentPrcb = KeGetCurrentPrcb();
          v10 = CurrentPrcb->SchedulerAssist;
          v11 = ~(unsigned __int16)(-1LL << (CurrentIrql + 1));
          v12 = (v11 & v10[5]) == 0;
          v10[5] &= v11;
          if ( v12 )
            KiRemoveSystemWorkPriorityKick(CurrentPrcb);
        }
      }
    }
    __writecr8(CurrentIrql);
  }
  if ( v3 )
  {
    v13[1] = v5;
    v13[2] = 0x7E35C6C7F3DD7277LL * (KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(v4 ^ KiWaitAlways), KiWaitNever));
    v13[0] = 0x7E35C6C7F3DD7277LL
           * (KiWaitNever ^ __ROR8__(
                              KiWaitAlways ^ _byteswap_uint64(a1 ^ KiWaitAlways) ^ _byteswap_uint64(a1 ^ __ROL8__(v1 ^ KiWaitNever, KiWaitNever)),
                              KiWaitNever));
    if ( !v5 )
      EtwGetKernelTraceTimestamp((unsigned __int64)v14, 0x40020000uLL);
    EtwTraceTimedEvent(3948, 1073872896, (unsigned int)v13, 24, 4197890, (__int64)v14);
  }
}
