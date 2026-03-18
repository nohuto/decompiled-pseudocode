/*
 * XREFs of _MagControl@16 @ 0x13CA3F
 * Callers:
 *     _MagSlicerControl@24 @ 0x13DD42 (_MagSlicerControl@24.c)
 *     _NtUserMagControl@8 @ 0x1663B8 (_NtUserMagControl@8.c)
 * Callees:
 *     _MagContextThreadCallout@16 @ 0x13C87A (_MagContextThreadCallout@16.c)
 */

int __fastcall MagControl(_DWORD *a1, int a2, int a3, int a4)
{
  int v4; // edi
  _DWORD *i; // eax
  _DWORD *j; // eax
  _DWORD *v10; // eax
  _DWORD *v11; // ecx
  _DWORD *v12; // eax

  v4 = 0;
  if ( a3 )
  {
    if ( a3 == 1 )
    {
      for ( i = (_DWORD *)*a1; i != a1; i = (_DWORD *)*i )
      {
        if ( a2 == i[2] )
          goto LABEL_11;
      }
      i = 0;
LABEL_11:
      if ( i )
      {
        if ( i[4]-- == 1 )
          MagContextThreadCallout((_DWORD **)a1, i[2], i, 1);
      }
      else
      {
        return -1073741772;
      }
    }
    else if ( a3 <= 1 || a3 > 3 )
    {
      return -1073741811;
    }
  }
  else
  {
    for ( j = (_DWORD *)*a1; j != a1; j = (_DWORD *)*j )
    {
      if ( a2 == j[2] )
        goto LABEL_20;
    }
    j = 0;
LABEL_20:
    if ( j )
    {
      ++j[4];
    }
    else
    {
      v10 = (_DWORD *)Win32AllocPool(28, 1735226197);
      v11 = v10;
      if ( v10 )
      {
        v10[2] = a2;
        v10[6] = v10 + 5;
        v10[5] = v10 + 5;
        *(_DWORD *)(a2 + 688) |= 8u;
        v10[4] = 1;
        v10[3] = a4;
        v12 = (_DWORD *)a1[1];
        if ( (_DWORD *)*v12 != a1 )
          __fastfail(3u);
        *v11 = a1;
        v11[1] = v12;
        *v12 = v11;
        a1[1] = v11;
      }
      else
      {
        return -1073741801;
      }
    }
  }
  return v4;
}
