/*
 * XREFs of _EngMapFile@12 @ 0x1E90B9
 * Callers:
 *     <none>
 * Callees:
 *     _PALLOCMEM2@12 @ 0x48D0A (_PALLOCMEM2@12.c)
 *     _bMapFile@16 @ 0x1E9421 (_bMapFile@16.c)
 */

PVOID __stdcall EngMapFile(LPWSTR pwsz, ULONG cjSize, ULONG_PTR *piFile)
{
  void *v3; // edi
  void *v4; // esi
  ULONG v5; // eax

  v3 = 0;
  v4 = PALLOCMEM2(0x30u, 1818846791, 1);
  if ( v4 )
  {
    v5 = cjSize;
    if ( !cjSize )
      v5 = -1;
    if ( bMapFile(pwsz, v4, v5, 0) )
    {
      *piFile = (ULONG_PTR)v4;
      return (PVOID)*((_DWORD *)v4 + 2);
    }
    else
    {
      *piFile = 0;
      Win32FreePool((PATHOBJ *)v4);
    }
  }
  return v3;
}
