/*
 * XREFs of _RtlExtendedLargeIntegerDivide@16 @ 0x4B308360
 * Callers:
 *     _RtlLargeIntegerToChar@16 @ 0x4B350590 (_RtlLargeIntegerToChar@16.c)
 * Callees:
 *     _RtlRaiseStatus@4 @ 0x4B308980 (_RtlRaiseStatus@4.c)
 */

int __stdcall RtlExtendedLargeIntegerDivide(int a1, int a2, unsigned int a3, unsigned int *a4)
{
  int result; // eax
  int v6; // ecx
  int v9; // edi

  result = a1;
  _EDX = a2;
  if ( !a3 )
    RtlRaiseStatus(-1073741676);
  v6 = 64;
  _ESI = 0;
  do
  {
    __asm
    {
      rcl     edx, 1
      rcl     esi, 1
    }
    v9 = _ESI >= a3 ? -1 : -__CFSHL__(result, 1);
    result = 2 * result - v9;
    _ESI = _ESI - (a3 & v9);
    --v6;
  }
  while ( v6 );
  if ( a4 )
    *a4 = _ESI;
  return result;
}
