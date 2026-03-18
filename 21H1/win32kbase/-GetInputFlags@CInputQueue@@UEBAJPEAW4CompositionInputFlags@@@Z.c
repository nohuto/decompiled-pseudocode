/*
 * XREFs of ?GetInputFlags@CInputQueue@@UEBAJPEAW4CompositionInputFlags@@@Z @ 0x1C00C3AC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInputQueue::GetInputFlags(CInputQueue *this, enum CompositionInputFlags *a2)
{
  *(_DWORD *)a2 = *((_DWORD *)this + 20);
  return 0LL;
}
