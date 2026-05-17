/*
 * XREFs of _LdrpPinNodeRecurse@4 @ 0x4B2E7E08
 * Callers:
 *     _LdrpPinModule@4 @ 0x4B2E7DC6 (_LdrpPinModule@4.c)
 *     _LdrpPinNodeRecurse@4 @ 0x4B2E7E08 (_LdrpPinNodeRecurse@4.c)
 * Callees:
 *     _LdrpPinNodeRecurse@4 @ 0x4B2E7E08 (_LdrpPinNodeRecurse@4.c)
 */

void __thiscall LdrpPinNodeRecurse(int *this)
{
  int v1; // eax
  _DWORD *v2; // edi
  _DWORD *v3; // esi

  if ( this[3] != -1 )
  {
    v1 = *this;
    if ( (*(_BYTE *)(*this - 32) & 0x20) == 0 )
    {
      this[3] = -1;
      *(_WORD *)(v1 - 28) = -1;
      v2 = (_DWORD *)this[6];
      if ( v2 )
      {
        v3 = (_DWORD *)this[6];
        do
        {
          v3 = (_DWORD *)*v3;
          LdrpPinNodeRecurse(v3[1]);
        }
        while ( v3 != v2 );
      }
    }
  }
}
