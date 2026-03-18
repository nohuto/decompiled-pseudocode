/*
 * XREFs of _IsPointerInputRedirected@16 @ 0x15BAA0
 * Callers:
 *     _EditionIsPointerInputRedirected@12 @ 0x15BA09 (_EditionIsPointerInputRedirected@12.c)
 *     _IsPointerInputTypeRedirected@4 @ 0x15BB03 (_IsPointerInputTypeRedirected@4.c)
 * Callees:
 *     _UpdatePointerRedirIsAlive@4 @ 0x7188C (_UpdatePointerRedirIsAlive@4.c)
 */

BOOL __fastcall IsPointerInputRedirected(int a1, int *a2, int a3, int *a4)
{
  int v6; // edi

  v6 = 0;
  UpdatePointerRedirIsAlive(a2);
  if ( a3 == 2 || a3 == 3 )
  {
    v6 = a2[(a3 != 2) + 27];
    if ( v6 )
      v6 = *(_DWORD *)(*(_DWORD *)(v6 + 8) + 232) != a1 ? v6 : 0;
  }
  if ( a4 )
    *a4 = v6;
  return v6 != 0;
}
