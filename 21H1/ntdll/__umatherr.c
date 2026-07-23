/*
 * XREFs of __umatherr @ 0x4B2FDDBE
 * Callers:
 *     __except1 @ 0x4B2FD7DF (__except1.c)
 *     __handle_qnan1 @ 0x4B2FDA94 (__handle_qnan1.c)
 * Callees:
 *     _RtlGetReturnAddressHijackTarget@0 @ 0x4B2B0650 (_RtlGetReturnAddressHijackTarget@0.c)
 *     __set_errno_from_matherr @ 0x4B2FDD8F (__set_errno_from_matherr.c)
 *     __ctrlfp @ 0x4B2FDFCC (__ctrlfp.c)
 */

double __cdecl _umatherr(int a1, int a2, int a3, int a4, int a5, int a6, double a7, int a8)
{
  char *v8; // ecx
  int v9; // eax

  v8 = 0;
  v9 = 0;
  while ( dword_4B3A31A0[2 * v9] != a2 )
  {
    if ( ++v9 >= 29 )
      goto LABEL_6;
  }
  v8 = (&off_4B3A31A4)[2 * v9];
LABEL_6:
  if ( v8 )
  {
    _ctrlfp(a8, 0xFFFF);
    if ( !(unsigned int)RtlGetReturnAddressHijackTarget() )
      _set_errno_from_matherr(a1);
    return a7;
  }
  else
  {
    _ctrlfp(a8, 0xFFFF);
    _set_errno_from_matherr(a1);
    return a7;
  }
}
