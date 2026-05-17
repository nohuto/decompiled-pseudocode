/*
 * XREFs of _PsspQueryInfoClass_9@8 @ 0x4B388A82
 * Callers:
 *     _PssNtQuerySnapshot@16 @ 0x4B386C80 (_PssNtQuerySnapshot@16.c)
 * Callees:
 *     <none>
 */

int __fastcall PsspQueryInfoClass_9(int a1, void *a2)
{
  if ( (*(_BYTE *)(a1 + 4) & 8) == 0 )
    return -1073741275;
  qmemcpy(a2, (const void *)(a1 + 152), 0x28u);
  return 0;
}
