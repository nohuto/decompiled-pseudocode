/*
 * XREFs of ?DxgkEngIsRedirectionDCApiExt@@YAHPEAUHDC__@@@Z @ 0x1C014B6B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DxgkEngIsRedirectionDCApiExt(HDC a1)
{
  unsigned int v1; // ebx
  int v3; // eax

  v1 = 0;
  if ( qword_1C024EFB0 )
    v3 = qword_1C024EFB0();
  else
    v3 = -1073741637;
  if ( v3 >= 0 && qword_1C024EFB8 )
    return (unsigned int)qword_1C024EFB8(a1);
  return v1;
}
