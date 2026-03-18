/*
 * XREFs of _EngFileWrite@16 @ 0x1E7D38
 * Callers:
 *     <none>
 * Callees:
 *     __CtxDoFileIo@28 @ 0x23A656 (__CtxDoFileIo@28.c)
 */

_DWORD *__thiscall EngFileWrite(void *this, int a2, int a3, int a4, _DWORD *a5)
{
  int v5; // esi
  _DWORD *result; // eax

  v5 = a4;
  if ( ((int (__fastcall *)(void *, int, int, int))_CtxDoFileIo)(this, a2, a3, a4) < 0 )
    v5 = 0;
  result = a5;
  *a5 = v5;
  return result;
}
