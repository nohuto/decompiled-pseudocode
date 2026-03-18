/*
 * XREFs of Win32UAFMAllocPoolWithPriority @ 0x1C0144830
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Win32UAFMAllocPoolWithPriority(
        unsigned int a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  __int64 v5; // rbx
  int v10; // eax

  v5 = 0LL;
  if ( qword_1C0258C60 )
    v10 = qword_1C0258C60();
  else
    v10 = -1073741637;
  if ( v10 < 0 )
    return 0LL;
  if ( qword_1C0258C68 )
    return qword_1C0258C68(a1, a2, a3, a4, a5);
  return v5;
}
