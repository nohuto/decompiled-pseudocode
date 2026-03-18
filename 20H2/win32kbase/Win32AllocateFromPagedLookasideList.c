/*
 * XREFs of Win32AllocateFromPagedLookasideList @ 0x1C003C550
 * Callers:
 *     ??0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x1C00367FC (--0ThreadLockedPerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z @ 0x1C003C4D0 (-AllocateRegion@RGNMEMOBJ@@SAPEAVREGION@@K@Z.c)
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 *     AllocQueue @ 0x1C00768D0 (AllocQueue.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32AllocateFromPagedLookasideList(__int64 a1)
{
  __int64 v1; // rbx
  int v3; // eax

  v1 = 0LL;
  if ( qword_1C0250C50 )
    v3 = qword_1C0250C50();
  else
    v3 = -1073741637;
  if ( v3 < 0 )
    return 0LL;
  if ( qword_1C0250C58 )
    return qword_1C0250C58(a1);
  return v1;
}
