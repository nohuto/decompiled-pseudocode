/*
 * XREFs of sub_1C005D898 @ 0x1C005D898
 * Callers:
 *     sub_1C0039198 @ 0x1C0039198 (sub_1C0039198.c)
 * Callees:
 *     sub_1C002E0B4 @ 0x1C002E0B4 (sub_1C002E0B4.c)
 *     sub_1C002E188 @ 0x1C002E188 (sub_1C002E188.c)
 *     sub_1C005CD1C @ 0x1C005CD1C (sub_1C005CD1C.c)
 *     sub_1C005CFC8 @ 0x1C005CFC8 (sub_1C005CFC8.c)
 *     sub_1C005D2FC @ 0x1C005D2FC (sub_1C005D2FC.c)
 *     sub_1C005D3F8 @ 0x1C005D3F8 (sub_1C005D3F8.c)
 *     sub_1C005D550 @ 0x1C005D550 (sub_1C005D550.c)
 *     sub_1C005D704 @ 0x1C005D704 (sub_1C005D704.c)
 */

void __fastcall sub_1C005D898(int *a1)
{
  __int64 v2; // rcx
  unsigned __int16 v3; // r9
  unsigned __int16 v4; // r9
  int v5; // [rsp+28h] [rbp-10h]

  if ( (int)sub_1C005D3F8(a1) < 0 )
  {
    sub_1C005D2FC(a1);
    *a1 &= 0xFFFFFFF1;
    if ( sub_1C005CFC8(v2) )
      sub_1C005CD1C(a1, L"Default");
    if ( (int)sub_1C005D550(a1, 0) < 0 )
      sub_1C005D550(a1, 1);
  }
  sub_1C005D704(a1);
  if ( off_1C006B000 != (_UNKNOWN *)&off_1C006B000 )
  {
    v5 = *a1;
    sub_1C002E188((__int64)DeviceObject->DeviceExtension, 4u, 1u, 0x25u, (__int64)&unk_1C0065940, v5);
  }
  if ( (*(_BYTE *)a1 & 1) != 0 )
  {
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      goto LABEL_14;
    v3 = 38;
  }
  else
  {
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      goto LABEL_14;
    v3 = 39;
  }
  sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 4u, 1u, v3, (__int64)&unk_1C0065940);
LABEL_14:
  if ( (*(_BYTE *)a1 & 2) != 0 )
  {
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      return;
    v4 = 40;
  }
  else
  {
    if ( off_1C006B000 == (_UNKNOWN *)&off_1C006B000 )
      return;
    v4 = 41;
  }
  sub_1C002E0B4((__int64)DeviceObject->DeviceExtension, 4u, 1u, v4, (__int64)&unk_1C0065940);
}
