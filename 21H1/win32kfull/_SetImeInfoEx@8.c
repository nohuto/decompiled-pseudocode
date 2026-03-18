/*
 * XREFs of _SetImeInfoEx@8 @ 0xEB462
 * Callers:
 *     _NtUserSetImeInfoEx@4 @ 0xEB3D8 (_NtUserSetImeInfoEx@4.c)
 * Callees:
 *     <none>
 */

int __fastcall SetImeInfoEx(int a1, _DWORD *a2)
{
  _DWORD *v2; // ecx
  _DWORD *v3; // eax
  _DWORD *v4; // edi

  if ( !a1 )
    return 0;
  v2 = *(_DWORD **)(a1 + 36);
  if ( !v2 )
    return 0;
  v3 = v2;
  while ( v3[5] != *a2 )
  {
    v3 = (_DWORD *)v3[2];
    if ( v3 == v2 )
      return 0;
  }
  v4 = (_DWORD *)v3[11];
  if ( !v4 )
    return 0;
  if ( !v4[18] )
    qmemcpy(v4, a2, 0x15Cu);
  return 1;
}
