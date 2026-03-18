/*
 * XREFs of ?UserGetRedirectedWindowOriginApiExt@@YAHQEAUHDC__@@PEAUtagPOINT@@@Z @ 0x1C01542C0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserGetRedirectedWindowOriginApiExt(HDC a1, struct tagPOINT *a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  *a2 = 0LL;
  if ( qword_1C0257090 )
    v5 = qword_1C0257090();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C0257098 )
    return (unsigned int)qword_1C0257098(a1, a2);
  return v2;
}
