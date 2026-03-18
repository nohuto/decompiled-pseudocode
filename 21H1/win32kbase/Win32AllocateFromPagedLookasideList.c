/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x1C0075F40
 * Callers:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C006546C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     AllocQueue @ 0x1C00742A0 (AllocQueue.c)
 *     ?bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z @ 0x1C007A650 (-bMerge@RGNOBJ@@QEAAHAEAV1@0E@Z.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32AllocateFromPagedLookasideList(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // eax

  v1 = 0LL;
  if ( qword_1C0258C10 )
    v3 = qword_1C0258C10();
  else
    v3 = -1073741637;
  if ( v3 < 0 )
    return 0LL;
  if ( qword_1C0258C18 )
    return qword_1C0258C18(a1);
  return v1;
}
