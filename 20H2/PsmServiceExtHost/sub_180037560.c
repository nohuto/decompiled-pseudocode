/*
 * XREFs of sub_180037560 @ 0x180037560
 * Callers:
 *     sub_180012A60 @ 0x180012A60 (sub_180012A60.c)
 *     sub_180016840 @ 0x180016840 (sub_180016840.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180037560(__int64 a1)
{
  return *(_DWORD *)(a1 + 1280) == 2 || (*(_BYTE *)(a1 + 1332) & 4) != 0;
}
