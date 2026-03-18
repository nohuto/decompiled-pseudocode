/*
 * XREFs of ?DxgkEngGetDCApiExt@@YAPEAUHDC__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x1C0153D00
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngGetDCApiExt(HWND a1, HDC *a2)
{
  __int64 v2; // rbx
  int v5; // eax

  v2 = 0LL;
  if ( qword_1C0256F50 )
    v5 = qword_1C0256F50();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C0256F58 )
    return qword_1C0256F58(a1, a2);
  return v2;
}
