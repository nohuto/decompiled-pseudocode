/*
 * XREFs of ?DxgkEngGetClientRectApiExt@@YAHPEAUHDC__@@QEAUtagRECT@@@Z @ 0x1C0153C90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngGetClientRectApiExt(HDC a1, struct tagRECT *const a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( qword_1C0256F90 )
    v5 = qword_1C0256F90();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C0256F98 )
    return (unsigned int)qword_1C0256F98(a1, a2);
  return v2;
}
