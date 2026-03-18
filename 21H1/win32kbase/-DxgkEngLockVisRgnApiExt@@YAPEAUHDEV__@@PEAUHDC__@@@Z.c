/*
 * XREFs of ?DxgkEngLockVisRgnApiExt@@YAPEAUHDEV__@@PEAUHDC__@@@Z @ 0x1C0153EE0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngLockVisRgnApiExt(HDC a1)
{
  __int64 v1; // rbx
  int v3; // eax

  v1 = 0LL;
  if ( qword_1C0256F30 )
    v3 = qword_1C0256F30();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C0256F38 )
    return qword_1C0256F38(a1);
  return v1;
}
