/*
 * XREFs of NtGdiFlush @ 0x1C001B0D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 NtGdiFlush()
{
  int v0; // eax

  if ( qword_1C0257800 )
    v0 = qword_1C0257800();
  else
    v0 = -1073741637;
  if ( v0 >= 0 && qword_1C0257808 )
    qword_1C0257808();
  return 0LL;
}
