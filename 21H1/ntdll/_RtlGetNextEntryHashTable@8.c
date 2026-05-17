/*
 * XREFs of _RtlGetNextEntryHashTable@8 @ 0x4B35B170
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_DWORD *__stdcall RtlGetNextEntryHashTable(int a1, _DWORD *a2)
{
  _DWORD **v2; // eax
  _DWORD *v3; // edi
  _DWORD *v4; // edx
  _DWORD *v5; // ecx

  v2 = (_DWORD **)a2[1];
  v3 = *v2;
  v4 = (_DWORD *)**v2;
  if ( v4 == (_DWORD *)*a2 )
    return 0;
  if ( *(_DWORD *)(a1 + 28) )
  {
    v5 = (_DWORD *)**v2;
    do
    {
      v4 = v5;
      if ( v5[2] )
        break;
      v3 = v5;
      v5 = (_DWORD *)*v5;
    }
    while ( v5 != (_DWORD *)*a2 );
  }
  if ( v4[2] != a2[2] )
    return 0;
  a2[1] = v3;
  return v4;
}
