/*
 * XREFs of _OkayToCloseDesktop@4 @ 0x6ED80
 * Callers:
 *     <none>
 * Callees:
 *     _CheckHandleFlag@16 @ 0x6F9E4 (_CheckHandleFlag@16.c)
 */

int __stdcall OkayToCloseDesktop(int a1)
{
  int v1; // edi

  v1 = *(_DWORD *)(a1 + 4);
  if ( !*(_BYTE *)(a1 + 12) )
    return 0;
  if ( PsGetProcessSessionIdEx(*(_DWORD *)a1) == -1 )
    return -1073741790;
  if ( (*(_BYTE *)(v1 + 24) & 0x10) == 0 )
    return -1073741823;
  if ( !CheckHandleFlag(*(_DWORD *)(a1 + 8), 2) && !CheckHandleFlag(*(_DWORD *)(a1 + 8), 1) )
    return 0;
  return -2147483631;
}
