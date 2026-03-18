/*
 * XREFs of ?GetNextLayeredWindowSubtree@@YGPAUtagWND@@PAU1@@Z @ 0x21FA6
 * Callers:
 *     ?GetNextLayeredWindow@@YGPAUtagWND@@PAU1@@Z @ 0x21F40 (-GetNextLayeredWindow@@YGPAUtagWND@@PAU1@@Z.c)
 *     ?GetNextLayeredWindowSubtree@@YGPAUtagWND@@PAU1@@Z @ 0x21FA6 (-GetNextLayeredWindowSubtree@@YGPAUtagWND@@PAU1@@Z.c)
 * Callees:
 *     ?GetNextLayeredWindowSubtree@@YGPAUtagWND@@PAU1@@Z @ 0x21FA6 (-GetNextLayeredWindowSubtree@@YGPAUtagWND@@PAU1@@Z.c)
 */

struct tagWND *__thiscall GetNextLayeredWindowSubtree(_DWORD *this)
{
  struct tagWND *result; // eax
  struct tagWND *v3; // [esp+0h] [ebp-4h]

  result = 0;
  while ( this )
  {
    result = GetNextLayeredWindowSubtree(v3);
    if ( result )
      break;
    if ( (*(_BYTE *)(this[5] + 18) & 8) != 0 )
      return (struct tagWND *)this;
    this = (_DWORD *)this[12];
  }
  return result;
}
