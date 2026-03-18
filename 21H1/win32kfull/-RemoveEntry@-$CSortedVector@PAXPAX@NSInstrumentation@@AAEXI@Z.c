/*
 * XREFs of ?RemoveEntry@?$CSortedVector@PAXPAX@NSInstrumentation@@AAEXI@Z @ 0xCDFCA
 * Callers:
 *     ?Remove@?$CSortedVector@KK@NSInstrumentation@@QAE_NABK@Z @ 0xCDF68 (-Remove@-$CSortedVector@KK@NSInstrumentation@@QAE_NABK@Z.c)
 *     ?Remove@?$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABI@Z @ 0xDF050 (-Remove@-$CSortedVector@IPAU_FONTFILEVIEW@@@NSInstrumentation@@QAE_NABI@Z.c)
 *     ?LookUpAndRemove@?$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAXPAPAX@Z @ 0x249F8E (-LookUpAndRemove@-$CSortedVector@PAXPAX@NSInstrumentation@@QAE_NABQAXPAPAX@Z.c)
 * Callees:
 *     _memmove @ 0xF92A1 (_memmove.c)
 */

void *__thiscall NSInstrumentation::CSortedVector<void *,void *>::RemoveEntry(_DWORD *this, int a2)
{
  void *result; // eax

  result = memmove((void *)(this[7] + 8 * a2), (const void *)(this[7] + 8 * a2 + 8), 8 * (this[6] - a2) - 8);
  --this[6];
  return result;
}
