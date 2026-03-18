/*
 * XREFs of ?Remove@?$CDynamicArray@PAVIInputQueue@@$0HHHAHDFF@@@QAE_NABQAVIInputQueue@@@Z @ 0xA9AE6
 * Callers:
 *     ?DetachInputQueueFromWindow@@YGXPAUtagWND@@PAVIInputQueue@@@Z @ 0xA9AA0 (-DetachInputQueueFromWindow@@YGXPAUtagWND@@PAVIInputQueue@@@Z.c)
 * Callees:
 *     <none>
 */

char __thiscall CDynamicArray<IInputQueue *,2003858261>::Remove(_DWORD *this, _DWORD *a2)
{
  char v3; // bl
  unsigned int v4; // esi
  unsigned int v5; // ecx
  _DWORD *i; // eax

  v3 = 0;
  v4 = 0;
  v5 = this[1];
  if ( v5 )
  {
    for ( i = (_DWORD *)*this; *a2 != *i; ++i )
    {
      if ( ++v4 >= v5 )
        return v3;
    }
    v3 = 1;
    for ( this[1] = v5 - 1; v4 < this[1]; ++v4 )
      *(_DWORD *)(*this + 4 * v4) = *(_DWORD *)(*this + 4 * v4 + 4);
  }
  return v3;
}
