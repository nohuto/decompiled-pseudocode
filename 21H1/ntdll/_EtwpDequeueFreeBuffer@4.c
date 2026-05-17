/*
 * XREFs of _EtwpDequeueFreeBuffer@4 @ 0x4B2EFE95
 * Callers:
 *     _EtwpSwitchBuffer@12 @ 0x4B2EFDE8 (_EtwpSwitchBuffer@12.c)
 * Callees:
 *     <none>
 */

_DWORD *__thiscall EtwpDequeueFreeBuffer(volatile signed __int32 *this)
{
  _DWORD *v2; // edx
  _DWORD **v3; // ecx
  _DWORD **v4; // ecx
  _DWORD *v5; // edx
  volatile signed __int32 *v6; // edi
  _DWORD *v8; // edx
  _DWORD **v9; // ecx
  _DWORD *v10; // edx

  v2 = 0;
  v3 = (_DWORD **)*((_DWORD *)this + 49);
  if ( v3 != *((_DWORD ***)this + 50) )
  {
    v8 = *v3;
    *v3 = (_DWORD *)**v3;
    if ( v8 == *((_DWORD **)this + 50) )
      *((_DWORD *)this + 50) = *((_DWORD *)this + 49);
    v2 = v8 - 8;
  }
  if ( v2 )
    goto LABEL_8;
  v4 = (_DWORD **)*((_DWORD *)this + 43);
  if ( v4 != *((_DWORD ***)this + 44) )
  {
    v5 = *v4;
    *v4 = (_DWORD *)**v4;
    if ( v5 == *((_DWORD **)this + 44) )
      *((_DWORD *)this + 44) = *((_DWORD *)this + 43);
    v2 = v5 - 8;
  }
  if ( v2 )
  {
LABEL_8:
    v6 = this + 40;
    while ( 1 )
    {
      _InterlockedDecrement(v6);
      if ( !v2[3] && !v2[11] )
        break;
      **((_DWORD **)this + 50) = v2 + 8;
      *((_DWORD *)this + 50) = v2 + 8;
      _InterlockedIncrement(v6);
      v9 = (_DWORD **)*((_DWORD *)this + 43);
      v2 = 0;
      if ( v9 != *((_DWORD ***)this + 44) )
      {
        v10 = *v9;
        *v9 = (_DWORD *)**v9;
        if ( v10 == *((_DWORD **)this + 44) )
          *((_DWORD *)this + 44) = *((_DWORD *)this + 43);
        v2 = v10 - 8;
      }
      if ( !v2 )
        return v2;
    }
    v2[1] = 0;
    v2[8] = 0;
    v2[2] = 72;
    *((_WORD *)v2 + 27) = 0;
    v2[11] = 1;
  }
  return v2;
}
