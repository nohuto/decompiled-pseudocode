/*
 * XREFs of ?vInit@FHOBJ@@QAEXW4_FONTHASHTYPE@@I@Z @ 0xE7E84
 * Callers:
 *     ??0FHMEMOBJ@@QAE@PAPAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z @ 0xE7E30 (--0FHMEMOBJ@@QAE@PAPAU_FONTHASH@@W4_FONTHASHTYPE@@I@Z.c)
 * Callees:
 *     _memset @ 0xF92A7 (_memset.c)
 */

_DWORD *__thiscall FHOBJ::vInit(_DWORD **this, int a2, int a3)
{
  _DWORD *result; // eax

  *this[1] = 1213415752;
  this[1][1] = a2;
  this[1][2] = a3;
  this[1][3] = 0;
  this[1][4] = 0;
  memset(this[1] + 7, 0, 4 * this[1][2]);
  this[1][5] = 0;
  result = this[1];
  result[6] = 0;
  return result;
}
