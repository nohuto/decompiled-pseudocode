/*
 * XREFs of _DestroyInputHangInfo@4 @ 0xAD86C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall DestroyInputHangInfo(int a1)
{
  int v1; // edi
  _DWORD *v2; // esi
  _DWORD *v4; // [esp-4h] [ebp-Ch]

  v1 = 0;
  v2 = *(_DWORD **)(a1 + 652);
  *(_DWORD *)(a1 + 652) = 0;
  if ( v2 )
  {
    v1 = 1;
    do
    {
      v4 = v2;
      v2 = (_DWORD *)*v2;
      Win32FreePool(v4);
    }
    while ( v2 );
  }
  return v1;
}
