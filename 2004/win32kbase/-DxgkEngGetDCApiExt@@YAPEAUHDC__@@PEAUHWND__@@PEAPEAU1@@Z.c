/*
 * XREFs of ?DxgkEngGetDCApiExt@@YAPEAUHDC__@@PEAUHWND__@@PEAPEAU1@@Z @ 0x1C014D9B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngGetDCApiExt(HWND a1, HDC *a2)
{
  __int64 v2; // rbx
  int v5; // eax

  v2 = 0LL;
  if ( qword_1C0250F90 )
    v5 = qword_1C0250F90();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C0250F98 )
    return qword_1C0250F98(a1, a2);
  return v2;
}
