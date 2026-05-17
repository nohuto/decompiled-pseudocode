/*
 * XREFs of _PsspQueryInfoClass_10@8 @ 0x4B388A62
 * Callers:
 *     _PssNtQuerySnapshot@16 @ 0x4B386C80 (_PssNtQuerySnapshot@16.c)
 * Callees:
 *     <none>
 */

int __fastcall PsspQueryInfoClass_10(int a1, _DWORD *a2)
{
  if ( (*(_BYTE *)(a1 + 4) & 0x10) == 0 )
    return -1073741275;
  *a2 = *(_DWORD *)(a1 + 968);
  a2[1] = *(_DWORD *)(a1 + 972);
  return 0;
}
