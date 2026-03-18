/*
 * XREFs of ?DxgkEngGetRgnDataApiExt@@YAIPEAUHRGN__@@IPEAU_RGNDATA@@@Z @ 0x1C014DA80
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngGetRgnDataApiExt(HRGN a1, unsigned int a2, struct _RGNDATA *a3)
{
  unsigned int v3; // ebx
  int v7; // eax

  v3 = 0;
  if ( qword_1C0250FE0 )
    v7 = qword_1C0250FE0();
  else
    v7 = -1073741637;
  if ( v7 >= 0 && qword_1C0250FE8 )
    return (unsigned int)qword_1C0250FE8(a1, a2, a3);
  return v3;
}
