/*
 * XREFs of ?AllocateFromPagedLookasideList@CLeakTrackingAllocator@NSInstrumentation@@QEAAPEAXPEAX@Z @ 0x1C02DD77C
 * Callers:
 *     Win32UAFMAllocateFromPagedLookasideListImpl @ 0x1C0220D70 (Win32UAFMAllocateFromPagedLookasideListImpl.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C015C000 (memset.c)
 *     ??$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAVCBackTrace@1@@Z @ 0x1C02DD634 (--$AssociateAllocationWithBacktrace@$00@CLeakTrackingAllocator@NSInstrumentation@@AEAA_NPEAXPEAV.c)
 */

struct _SLIST_ENTRY *__fastcall NSInstrumentation::CLeakTrackingAllocator::AllocateFromPagedLookasideList(
        NSInstrumentation::CLeakTrackingAllocator *this,
        char *a2)
{
  PDRIVER_CONTROL DeviceRoutine; // rbp
  union _SLIST_HEADER *v3; // rbx
  struct _SLIST_ENTRY *v5; // rdi
  __int64 v6; // rdx
  __int64 (__fastcall *Alignment)(__int64, __int64, __int64); // rax
  __int64 v8; // r8
  __int64 v9; // rcx
  PVOID BackTrace[20]; // [rsp+20h] [rbp-A8h] BYREF

  DeviceRoutine = WPP_MAIN_CB.Queue.Wcb.DeviceRoutine;
  v3 = (union _SLIST_HEADER *)(a2 + 16);
  ++*((_DWORD *)a2 + 9);
  v5 = ExpInterlockedPopEntrySList((PSLIST_HEADER)a2 + 1);
  if ( !v5 )
  {
    v6 = *((unsigned int *)&v3[2].HeaderX64 + 3);
    Alignment = (__int64 (__fastcall *)(__int64, __int64, __int64))v3[3].Alignment;
    v8 = *((unsigned int *)&v3[2].HeaderX64 + 2);
    v9 = *((unsigned int *)&v3[2].HeaderX64 + 1);
    ++*((_DWORD *)&v3[1].HeaderX64 + 2);
    v5 = (struct _SLIST_ENTRY *)Alignment(v9, v6, v8);
    if ( !v5 )
      return 0LL;
  }
  if ( !*a2 )
    return v5;
  memset(BackTrace, 0, sizeof(BackTrace));
  RtlCaptureStackBackTrace(0, 0x14u, BackTrace, 0LL);
  if ( !NSInstrumentation::CLeakTrackingAllocator::AssociateAllocationWithBacktrace<1>(
          (__int64)DeviceRoutine,
          v5,
          (struct NSInstrumentation::CBackTrace *)BackTrace) )
  {
    ++*((_DWORD *)&v3[1].HeaderX64 + 3);
    if ( ExQueryDepthSList(v3) < LOWORD(v3[1].Alignment) )
    {
      ExpInterlockedPushEntrySList(v3, v5);
    }
    else
    {
      ++LODWORD(v3[2].Alignment);
      ((void (__fastcall *)(struct _SLIST_ENTRY *))v3[3].Region)(v5);
    }
    return 0LL;
  }
  return v5 + 1;
}
