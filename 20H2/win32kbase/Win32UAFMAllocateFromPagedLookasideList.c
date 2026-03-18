/*
 * XREFs of Win32UAFMAllocateFromPagedLookasideList @ 0x1C013C340
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32UAFMAllocateFromPagedLookasideList(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  int v5; // eax

  v2 = 0LL;
  if ( qword_1C0250CD0 )
    v5 = qword_1C0250CD0();
  else
    v5 = -1073741637;
  if ( v5 < 0 )
    return 0LL;
  if ( qword_1C0250CD8 )
    return qword_1C0250CD8(a1, a2);
  return v2;
}
