/*
 * XREFs of NtGdiFlush @ 0x1C002AD80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 NtGdiFlush()
{
  int v0; // eax

  if ( qword_1C0251840 )
    v0 = qword_1C0251840();
  else
    v0 = -1073741637;
  if ( v0 >= 0 && qword_1C0251848 )
    qword_1C0251848();
  return 0LL;
}
