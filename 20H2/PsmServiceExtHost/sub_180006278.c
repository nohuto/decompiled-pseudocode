/*
 * XREFs of sub_180006278 @ 0x180006278
 * Callers:
 *     sub_1800060BC @ 0x1800060BC (sub_1800060BC.c)
 *     sub_180006158 @ 0x180006158 (sub_180006158.c)
 *     sub_1800061F8 @ 0x1800061F8 (sub_1800061F8.c)
 *     sub_180018AF0 @ 0x180018AF0 (sub_180018AF0.c)
 *     sub_18001BD70 @ 0x18001BD70 (sub_18001BD70.c)
 *     sub_18001CC80 @ 0x18001CC80 (sub_18001CC80.c)
 *     sub_18001D590 @ 0x18001D590 (sub_18001D590.c)
 *     sub_180033B08 @ 0x180033B08 (sub_180033B08.c)
 *     sub_18007F5AC @ 0x18007F5AC (sub_18007F5AC.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall sub_180006278(__int64 a1, unsigned __int8 a2)
{
  char v2; // al

  v2 = *(_BYTE *)(a1 + 548);
  if ( v2 == 3 )
    return 1LL;
  if ( v2 == 2 )
    return *(_BYTE *)(a1 + 549) >= a2;
  return 0LL;
}
