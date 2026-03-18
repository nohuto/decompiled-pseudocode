/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x1C00AD1F0
 * Callers:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C0070E3C (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 *     AllocQueue @ 0x1C00ACEB0 (AllocQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32AllocateFromPagedLookasideList(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v5; // eax

  v3 = 0LL;
  if ( qword_1C0252C50 )
    v5 = qword_1C0252C50(a1, a2, a3);
  else
    v5 = -1073741637;
  if ( v5 < 0 )
    return 0LL;
  if ( qword_1C0252C58 )
    return qword_1C0252C58(a1);
  return v3;
}
