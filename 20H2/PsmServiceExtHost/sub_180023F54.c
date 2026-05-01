/*
 * XREFs of sub_180023F54 @ 0x180023F54
 * Callers:
 *     sub_180023764 @ 0x180023764 (sub_180023764.c)
 *     sub_180023A40 @ 0x180023A40 (sub_180023A40.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_180023F54(int *a1, _BYTE *a2)
{
  int v2; // r8d
  unsigned int v3; // ecx

  v2 = *a1;
  v3 = ((*a2 ^ *(_BYTE *)a1) & 0xE0) != 0;
  if ( ((*a2 ^ (unsigned __int8)v2) & 7) != 0
    || ((*a2 ^ (unsigned __int8)v2) & 0x18) != 0
    || ((*(_DWORD *)a2 ^ v2) & 0x100) != 0
    || ((*(_DWORD *)a2 ^ v2) & 0x200) != 0 )
  {
    v3 |= 2u;
  }
  return v3;
}
