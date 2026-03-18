/*
 * XREFs of ?CleanupDirtyDesktops@@YGXXZ @ 0x15481D
 * Callers:
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 * Callees:
 *     <none>
 */

void __stdcall CleanupDirtyDesktops()
{
  int i; // esi
  _BYTE **v1; // edi
  _BYTE *v2; // ecx
  int v3; // edx
  _BYTE *v4; // eax
  _DWORD *v5; // edx

  for ( i = _grpWinStaList; i; i = *(_DWORD *)(i + 4) )
  {
    v1 = (_BYTE **)(i + 8);
    while ( 1 )
    {
      v2 = *v1;
      if ( !*v1 )
        break;
      if ( (v2[24] & 0x10) != 0 )
      {
        v1 = (_BYTE **)(v2 + 16);
      }
      else
      {
        if ( grpdeskLogon == v2 )
        {
          UnlockObjectAssignment(&grpdeskLogon);
          v2 = *v1;
        }
        v3 = *(_DWORD *)(*(_DWORD *)(i + 28) + 4);
        v4 = v2;
        if ( v3 )
        {
          v5 = (_DWORD *)(v3 + 12);
          if ( (_BYTE *)*v5 == v2 )
          {
            UnlockObjectAssignment(v5);
            v4 = *v1;
          }
        }
        LockObjectAssignment(v1, *((_DWORD *)v4 + 4));
      }
    }
  }
}
