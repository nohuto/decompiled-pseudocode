/*
 * XREFs of ?GetDevice@CD3DResource@@UEBAPEAVCD3DDevice@@XZ @ 0x1800E34B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

struct CD3DDevice *__fastcall CD3DResource::GetDevice(CD3DResource *this)
{
  return *(struct CD3DDevice **)(*((_QWORD *)this - 1) + 80LL);
}
