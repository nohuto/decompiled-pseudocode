/*
 * XREFs of ?UserGetRedirectedWindowOriginApiExt@@YAHQEAUHDC__@@PEAUtagPOINT@@@Z @ 0x1C014BB20
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall UserGetRedirectedWindowOriginApiExt(HDC a1, struct tagPOINT *a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  *a2 = 0LL;
  if ( qword_1C024F0D0 )
    v5 = qword_1C024F0D0();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C024F0D8 )
    return (unsigned int)qword_1C024F0D8(a1, a2);
  return v2;
}
