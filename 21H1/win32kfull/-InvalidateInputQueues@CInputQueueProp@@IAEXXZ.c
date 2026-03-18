/*
 * XREFs of ?InvalidateInputQueues@CInputQueueProp@@IAEXXZ @ 0xD0854
 * Callers:
 *     ?Delete@CInputQueueProp@@UAEXXZ @ 0xD0840 (-Delete@CInputQueueProp@@UAEXXZ.c)
 * Callees:
 *     ?Reset@?$CDynamicArray@PAVIInputQueue@@$0HHHAHDFF@@@QAEX_N@Z @ 0xD08A2 (-Reset@-$CDynamicArray@PAVIInputQueue@@$0HHHAHDFF@@@QAEX_N@Z.c)
 */

void __thiscall CInputQueueProp::InvalidateInputQueues(CInputQueueProp *this)
{
  unsigned int v2; // ebx
  _DWORD *i; // eax
  int v4; // esi

  v2 = 0;
  for ( i = (_DWORD *)((char *)this + 8); v2 < *((_DWORD *)this + 3); i = (_DWORD *)((char *)this + 8) )
  {
    v4 = *(_DWORD *)(*i + 4 * v2);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 12))(v4);
    (*(void (__thiscall **)(int))(*(_DWORD *)v4 + 4))(v4);
    ++v2;
  }
  CDynamicArray<IInputQueue *,2003858261>::Reset(this);
  if ( !*((_BYTE *)this + 24) )
    HMAssignmentUnlock((char *)this + 20);
}
