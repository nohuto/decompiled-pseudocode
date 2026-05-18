/*
 * XREFs of sub_18001DFF4 @ 0x18001DFF4
 * Callers:
 *     sub_1800195DC @ 0x1800195DC (sub_1800195DC.c)
 *     sub_18001B77C @ 0x18001B77C (sub_18001B77C.c)
 *     sub_18001C824 @ 0x18001C824 (sub_18001C824.c)
 *     sub_18001D0A0 @ 0x18001D0A0 (sub_18001D0A0.c)
 * Callees:
 *     sub_180018C0C @ 0x180018C0C (sub_180018C0C.c)
 */

char __fastcall sub_18001DFF4(__int64 a1, __int64 a2)
{
  char v4; // r8
  char result; // al
  char v6; // cl
  char v7; // cl
  char v8; // cl
  char v9; // cl
  char v10; // cl

  if ( *(_BYTE *)(a1 + 64) )
  {
    sub_180018C0C((__int128 *)(a2 + 24), (__int128 *)(a1 + 32));
    v4 = *(_BYTE *)(a2 + 56);
    *(_BYTE *)(a2 + 56) = *(_BYTE *)(a1 + 64);
    result = *(_BYTE *)(a1 + 65);
    *(_BYTE *)(a1 + 64) = v4;
    v6 = *(_BYTE *)(a2 + 57);
    *(_BYTE *)(a2 + 57) = result;
    *(_BYTE *)(a1 + 65) = v6;
  }
  if ( *(_BYTE *)(a1 + 128) )
  {
    sub_180018C0C((__int128 *)(a2 + 88), (__int128 *)(a1 + 96));
    v7 = *(_BYTE *)(a2 + 120);
    *(_BYTE *)(a2 + 120) = *(_BYTE *)(a1 + 128);
    result = *(_BYTE *)(a1 + 129);
    *(_BYTE *)(a1 + 128) = v7;
    v8 = *(_BYTE *)(a2 + 121);
    *(_BYTE *)(a2 + 121) = result;
    *(_BYTE *)(a1 + 129) = v8;
  }
  if ( *(_BYTE *)(a1 + 192) )
  {
    sub_180018C0C((__int128 *)(a2 + 152), (__int128 *)(a1 + 160));
    v9 = *(_BYTE *)(a2 + 184);
    *(_BYTE *)(a2 + 184) = *(_BYTE *)(a1 + 192);
    result = *(_BYTE *)(a1 + 193);
    *(_BYTE *)(a1 + 192) = v9;
    v10 = *(_BYTE *)(a2 + 185);
    *(_BYTE *)(a2 + 185) = result;
    *(_BYTE *)(a1 + 193) = v10;
  }
  return result;
}
