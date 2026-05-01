/*
 * XREFs of sub_180063D08 @ 0x180063D08
 * Callers:
 *     sub_180015E80 @ 0x180015E80 (sub_180015E80.c)
 * Callees:
 *     sub_180063B04 @ 0x180063B04 (sub_180063B04.c)
 */

bool __fastcall sub_180063D08(unsigned int *a1)
{
  bool v1; // al
  __int64 v2; // r8
  char v3; // dl

  v1 = sub_180063B04(a1);
  v3 = 0;
  if ( v1 )
    return (*(_BYTE *)(v2 + 42) & 0x40) == 0;
  return v3;
}
