/*
 * XREFs of ?DxgkEngGetWindowRectApiExt@@YAHPEAUHWND__@@QEAUtagRECT@@@Z @ 0x1C005CC10
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngGetWindowRectApiExt(HWND a1, struct tagRECT *const a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( qword_1C0250FA0 )
    v5 = qword_1C0250FA0();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C0250FA8 )
    return (unsigned int)qword_1C0250FA8(a1, a2);
  return v2;
}
