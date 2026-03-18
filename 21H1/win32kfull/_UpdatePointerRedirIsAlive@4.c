/*
 * XREFs of _UpdatePointerRedirIsAlive@4 @ 0x7188C
 * Callers:
 *     _xxxFreeWindow@8 @ 0x70780 (_xxxFreeWindow@8.c)
 *     _IsPointerInputRedirected@16 @ 0x15BAA0 (_IsPointerInputRedirected@16.c)
 *     __RegisterPointerInputTarget@16 @ 0x15BE8C (__RegisterPointerInputTarget@16.c)
 * Callees:
 *     <none>
 */

int __thiscall UpdatePointerRedirIsAlive(int *this)
{
  int *v1; // esi
  int v2; // edi
  int result; // eax

  v1 = this + 27;
  v2 = 2;
  do
  {
    result = *v1;
    if ( *v1 )
    {
      result = *(_DWORD *)(result + 20);
      if ( *(char *)(result + 12) < 0 || *(char *)(result + 11) < 0 )
        result = HMAssignmentUnlock(v1);
    }
    ++v1;
    --v2;
  }
  while ( v2 );
  return result;
}
