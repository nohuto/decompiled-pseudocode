/*
 * XREFs of ?Add@?$CDynamicArray@PAUtagWND@@$0HHHAHDFF@@@QAEJABQAUtagWND@@@Z @ 0x1A58B0
 * Callers:
 *     ?ChangeWindowTreeProtection@@YGHPAUtagWND@@K@Z @ 0xF55F4 (-ChangeWindowTreeProtection@@YGHPAUtagWND@@K@Z.c)
 * Callees:
 *     ?Grow@?$CDynamicArray@PAUtagWND@@$0HHHAHDFF@@@IAEJI@Z @ 0x1A58D9 (-Grow@-$CDynamicArray@PAUtagWND@@$0HHHAHDFF@@@IAEJI@Z.c)
 */

int __thiscall CDynamicArray<tagWND *,2003858261>::Add(_DWORD *this, _DWORD *a2)
{
  int result; // eax

  result = CDynamicArray<tagWND *,2003858261>::Grow(this);
  if ( result >= 0 )
    *(_DWORD *)(*this + 4 * this[1]++) = *a2;
  return result;
}
