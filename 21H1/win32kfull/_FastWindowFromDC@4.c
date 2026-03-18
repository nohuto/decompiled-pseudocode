/*
 * XREFs of _FastWindowFromDC@4 @ 0x325E2
 * Callers:
 *     __ScrollDC@28 @ 0x3267A (__ScrollDC@28.c)
 * Callees:
 *     <none>
 */

int __thiscall FastWindowFromDC(void *this)
{
  int v2; // esi
  _DWORD *v3; // ecx
  _DWORD *v4; // edx
  int v6; // eax

  v2 = 0;
  GreLockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  v3 = (_DWORD *)(_gpDispInfo + 12);
  v4 = *(_DWORD **)(_gpDispInfo + 12);
  if ( v4 )
  {
    if ( (void *)v4[1] == this )
    {
      v6 = v4[8];
      if ( (v6 & 0x1000) != 0 && (v6 & 0x400000) == 0 )
        v2 = v4[2];
    }
    else
    {
      while ( (void *)v4[1] != this )
      {
        v3 = v4;
        v4 = (_DWORD *)*v4;
        if ( !v4 )
          goto LABEL_5;
      }
      if ( (v4[8] & 0x401000) == 0x1000 )
      {
        *v3 = *v4;
        *v4 = *(_DWORD *)(_gpDispInfo + 12);
        *(_DWORD *)(_gpDispInfo + 12) = v4;
        v2 = v4[2];
      }
    }
  }
LABEL_5:
  GreUnlockVisRgn(*(_DWORD *)(_gpDispInfo + 20));
  return v2;
}
