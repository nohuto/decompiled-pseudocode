/*
 * XREFs of DxgkEngIsDwmComposing @ 0x1C00BC380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngIsDwmComposing(_DWORD *a1)
{
  unsigned int v1; // ebx
  int v2; // eax

  v1 = 0;
  if ( a1 )
    *a1 = 0;
  if ( qword_1C024EF50 )
    v2 = qword_1C024EF50();
  else
    v2 = -1073741637;
  if ( v2 < 0 )
    return 0LL;
  if ( qword_1C024EF58 )
    return (unsigned int)qword_1C024EF58(a1);
  return v1;
}
