/*
 * XREFs of ?DxgkEngIsRedirectionDCApiExt@@YAHPEAUHDC__@@@Z @ 0x1C0153E50
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngIsRedirectionDCApiExt(HDC a1)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C0256F70 )
    v3 = qword_1C0256F70();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0256F78 )
    return (unsigned int)qword_1C0256F78(a1);
  return v1;
}
