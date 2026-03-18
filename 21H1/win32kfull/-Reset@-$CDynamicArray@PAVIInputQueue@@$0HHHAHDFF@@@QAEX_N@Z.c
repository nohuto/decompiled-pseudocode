/*
 * XREFs of ?Reset@?$CDynamicArray@PAVIInputQueue@@$0HHHAHDFF@@@QAEX_N@Z @ 0xD08A2
 * Callers:
 *     ?InvalidateInputQueues@CInputQueueProp@@IAEXXZ @ 0xD0854 (-InvalidateInputQueues@CInputQueueProp@@IAEXXZ.c)
 * Callees:
 *     <none>
 */

int __thiscall CDynamicArray<IInputQueue *,2003858261>::Reset(_DWORD *this, int a2)
{
  int result; // eax

  result = *this;
  if ( *this )
  {
    result = Win32FreePool(*this);
    *this = 0;
  }
  this[2] = 0;
  this[1] = 0;
  return result;
}
