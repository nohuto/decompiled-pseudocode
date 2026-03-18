/*
 * XREFs of _OkayToCloseWindowStation@4 @ 0x70622
 * Callers:
 *     <none>
 * Callees:
 *     _CheckHandleFlag@16 @ 0x6F9E4 (_CheckHandleFlag@16.c)
 */

int __stdcall OkayToCloseWindowStation(int a1)
{
  int *v1; // edi

  v1 = *(int **)(a1 + 4);
  if ( !*(_BYTE *)(a1 + 12) )
    return 0;
  if ( PsGetProcessSessionIdEx(*(_DWORD *)a1) == -1 )
    return -1073741790;
  if ( !CheckHandleFlag(*(struct _KPROCESS **)a1, *v1, *(_DWORD *)(a1 + 8), 2)
    && !CheckHandleFlag(*(struct _KPROCESS **)a1, *v1, *(_DWORD *)(a1 + 8), 1) )
  {
    return 0;
  }
  return -2147483631;
}
