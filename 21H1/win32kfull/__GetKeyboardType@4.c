/*
 * XREFs of __GetKeyboardType@4 @ 0xC4E0C
 * Callers:
 *     _NtUserCallOneParam@8 @ 0x6E730 (_NtUserCallOneParam@8.c)
 * Callees:
 *     <none>
 */

int __stdcall _GetKeyboardType(int a1)
{
  int v1; // ecx
  unsigned __int16 *v2; // edx
  int v3; // esi
  int v4; // eax
  int result; // eax
  unsigned __int16 v6; // cx

  v1 = 0;
  if ( a1 )
  {
    switch ( a1 )
    {
      case 1:
        v2 = (unsigned __int16 *)_gpKbdNlsTbl;
        if ( _gpKL )
        {
          v3 = *(_DWORD *)(_gpKL + 28);
          if ( *(_DWORD *)(v3 + 24) )
            v2 = *(unsigned __int16 **)(v3 + 24);
          v4 = *(_DWORD *)(*(_DWORD *)(v3 + 16) + 56);
        }
        else
        {
          LOBYTE(v4) = *((_BYTE *)&_gKeyboardInfo + 1);
        }
        if ( !v2 )
          return v1 | v4 & 0xF;
        v6 = v2[1];
        if ( (v6 & 0x10) == 0 )
        {
          if ( (v6 & 0x20) != 0 )
            return 2;
          v1 = *v2 << 8;
          return v1 | v4 & 0xF;
        }
        return 0;
      case 2:
        return *((unsigned __int16 *)&_gKeyboardInfo + 2);
      case 0x7FFFFFFE:
        if ( !_gpKL )
          return 0;
        result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gpKL + 24) + 16) + 52);
        if ( !result || result == 81 )
          return 0;
        break;
      case 0x7FFFFFFF:
        if ( !_gpKL )
          return 0;
        result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gpKL + 24) + 16) + 56);
        if ( !result )
          return 0;
        break;
      default:
        return 0;
    }
  }
  else
  {
    if ( !_gpKL )
      return _gKeyboardInfo;
    result = *(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gpKL + 28) + 16) + 52);
    if ( !result || result == 81 )
      return _gKeyboardInfo;
  }
  return result;
}
