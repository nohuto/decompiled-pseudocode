/*
 * XREFs of sub_180063B30 @ 0x180063B30
 * Callers:
 *     sub_18001D590 @ 0x18001D590 (sub_18001D590.c)
 * Callees:
 *     sub_180007F10 @ 0x180007F10 (sub_180007F10.c)
 */

__int64 __fastcall sub_180063B30(__int64 a1, __int64 a2)
{
  __int64 v2; // r11
  __int64 v3; // rdx
  __int64 v4; // r11
  __int64 v5; // rdx
  unsigned __int64 *v6; // r11
  __int64 v7; // rdx

  sub_180007F10(*(_QWORD *)(a1 + 24), a2, (__int64 *)(a1 + 24));
  sub_180007F10(*(_QWORD *)(v2 + 16), v3, (__int64 *)(v2 + 16));
  sub_180007F10(*(_QWORD *)(v4 + 8), v5, (__int64 *)(v4 + 8));
  return sub_180007F10(*v6, v7, (__int64 *)v6);
}
