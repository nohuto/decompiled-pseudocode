/*
 * XREFs of sub_1800F5A74 @ 0x1800F5A74
 * Callers:
 *     sub_180017CA0 @ 0x180017CA0 (sub_180017CA0.c)
 *     sub_1800192D0 @ 0x1800192D0 (sub_1800192D0.c)
 * Callees:
 *     <none>
 */

int __fastcall sub_1800F5A74(__int64 a1)
{
  HKEY *v1; // rax
  HKEY v2; // rcx

  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    v1 = *(HKEY **)a1;
    v2 = **(HKEY **)a1;
    if ( v2 )
      LODWORD(v1) = RegCloseKey(v2);
  }
  return (int)v1;
}
