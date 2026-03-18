/*
 * XREFs of PiSwMakePdoInactive @ 0x14072EAA4
 * Callers:
 *     PiSwProcessRemove @ 0x14072E868 (PiSwProcessRemove.c)
 *     PiSwGetChildPdo @ 0x14076C61C (PiSwGetChildPdo.c)
 * Callees:
 *     <none>
 */

_DWORD *__fastcall PiSwMakePdoInactive(__int64 a1)
{
  _DWORD *result; // rax

  result = *(_DWORD **)(a1 + 64);
  if ( a1 == *(_QWORD *)(*(_QWORD *)result + 120LL) )
    *(_QWORD *)(*(_QWORD *)result + 120LL) = 0LL;
  result[2] |= 0x20u;
  return result;
}
