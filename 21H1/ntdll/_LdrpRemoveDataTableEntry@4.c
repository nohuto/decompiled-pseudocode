/*
 * XREFs of _LdrpRemoveDataTableEntry@4 @ 0x4B2D9908
 * Callers:
 *     _LdrpUnloadNode@4 @ 0x4B2D96F3 (_LdrpUnloadNode@4.c)
 * Callees:
 *     <none>
 */

void __thiscall LdrpRemoveDataTableEntry(_DWORD *this)
{
  int v1; // esi
  _DWORD *v2; // edx
  int v3; // edx
  _DWORD *v4; // eax
  int v5; // esi
  _DWORD *v6; // eax

  if ( (this[13] & 0x40) != 0 )
  {
    v1 = this[15];
    if ( *(_DWORD **)(v1 + 4) != this + 15 )
      goto LABEL_9;
    v2 = (_DWORD *)this[16];
    if ( (_DWORD *)*v2 != this + 15 )
      goto LABEL_9;
    *v2 = v1;
    *(_DWORD *)(v1 + 4) = v2;
    v3 = *this;
    if ( *(_DWORD **)(*this + 4) != this
      || (v4 = (_DWORD *)this[1], (_DWORD *)*v4 != this)
      || (*v4 = v3, *(_DWORD *)(v3 + 4) = v4, v5 = this[2], *(_DWORD **)(v5 + 4) != this + 2)
      || (v6 = (_DWORD *)this[3], (_DWORD *)*v6 != this + 2) )
    {
LABEL_9:
      __fastfail(3u);
    }
    *v6 = v5;
    *(_DWORD *)(v5 + 4) = v6;
    this[13] &= ~0x40u;
  }
}
