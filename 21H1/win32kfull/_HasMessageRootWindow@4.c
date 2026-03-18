/*
 * XREFs of _HasMessageRootWindow@4 @ 0x16F3D4
 * Callers:
 *     _xxxCreateWindowEx@68 @ 0x2D67C (_xxxCreateWindowEx@68.c)
 *     ?xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z @ 0xC70E0 (-xxxSetParentWorker@@YGPAUtagWND@@PAU1@00H@Z.c)
 * Callees:
 *     __GetAncestor@8 @ 0xB52FC (__GetAncestor@8.c)
 */

int __thiscall HasMessageRootWindow(_DWORD *this)
{
  int v1; // esi
  int v2; // eax
  _DWORD *v3; // edi

  v1 = 0;
  if ( this )
  {
    v2 = this[3];
    v3 = 0;
    if ( v2 )
      v3 = *(_DWORD **)(v2 + 52);
    if ( _GetAncestor(this, 4) == v3 )
      return 1;
  }
  return v1;
}
