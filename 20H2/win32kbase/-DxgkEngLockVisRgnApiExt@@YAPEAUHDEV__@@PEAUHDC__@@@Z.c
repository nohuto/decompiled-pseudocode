/*
 * XREFs of ?DxgkEngLockVisRgnApiExt@@YAPEAUHDEV__@@PEAUHDC__@@@Z @ 0x1C014B740
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngLockVisRgnApiExt(HDC a1)
{
  __int64 v1; // rbx
  int v3; // eax

  v1 = 0LL;
  if ( qword_1C024EF70 )
    v3 = qword_1C024EF70();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C024EF78 )
    return qword_1C024EF78(a1);
  return v1;
}
