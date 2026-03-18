/*
 * XREFs of ?DxgkEngIsRedirectionDCApiExt@@YAHPEAUHDC__@@@Z @ 0x1C014DB00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngIsRedirectionDCApiExt(HDC a1)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C0250FB0 )
    v3 = qword_1C0250FB0();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0250FB8 )
    return (unsigned int)qword_1C0250FB8(a1);
  return v1;
}
