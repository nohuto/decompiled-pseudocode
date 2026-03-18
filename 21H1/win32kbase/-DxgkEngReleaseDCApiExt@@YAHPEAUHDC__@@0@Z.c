/*
 * XREFs of ?DxgkEngReleaseDCApiExt@@YAHPEAUHDC__@@0@Z @ 0x1C0154050
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngReleaseDCApiExt(HDC a1, HDC a2)
{
  unsigned int v2; // ebx
  int v5; // eax

  v2 = 0;
  if ( qword_1C0256F80 )
    v5 = qword_1C0256F80();
  else
    v5 = -1073741637;
  if ( v5 >= 0 && qword_1C0256F88 )
    return (unsigned int)qword_1C0256F88(a1, a2);
  return v2;
}
