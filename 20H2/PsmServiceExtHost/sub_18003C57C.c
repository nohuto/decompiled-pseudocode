/*
 * XREFs of sub_18003C57C @ 0x18003C57C
 * Callers:
 *     sub_18000476C @ 0x18000476C (sub_18000476C.c)
 *     sub_180007F50 @ 0x180007F50 (sub_180007F50.c)
 *     sub_180010990 @ 0x180010990 (sub_180010990.c)
 *     sub_180015340 @ 0x180015340 (sub_180015340.c)
 *     sub_1800714F0 @ 0x1800714F0 (sub_1800714F0.c)
 * Callees:
 *     sub_180007DE4 @ 0x180007DE4 (sub_180007DE4.c)
 *     sub_180007E58 @ 0x180007E58 (sub_180007E58.c)
 */

bool __fastcall sub_18003C57C(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rcx
  __int64 v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  int v6; // [rsp+2Ch] [rbp-Ch]

  v6 = 0;
  v5 = 2;
  v4 = sub_180007E58(a1, 2, 0);
  while ( 1 )
  {
    v1 = sub_180007DE4(&v4);
    if ( !v1 )
      break;
    if ( (*(_BYTE *)(v1 + 1378) & 7) == 3 )
    {
      v2 = *(_QWORD *)(v1 + 1312);
      return v2 != 0;
    }
  }
  v2 = 0LL;
  return v2 != 0;
}
