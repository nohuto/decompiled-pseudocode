/*
 * XREFs of sub_180107980 @ 0x180107980
 * Callers:
 *     <none>
 * Callees:
 *     sub_180108708 @ 0x180108708 (sub_180108708.c)
 *     sub_1801098D0 @ 0x1801098D0 (sub_1801098D0.c)
 */

__int64 __fastcall sub_180107980(__int64 a1, int a2)
{
  __int128 v5; // [rsp+30h] [rbp-50h]
  __int64 (__fastcall **v6)(); // [rsp+40h] [rbp-40h] BYREF
  __int128 v7; // [rsp+48h] [rbp-38h]
  __int64 (__fastcall ***v8)(); // [rsp+78h] [rbp-8h]

  if ( (unsigned int)CallbackContext > 5 )
    sub_1801098D0(a1, &unk_1801690D3);
  DWORD2(v5) = a2;
  *(_QWORD *)&v5 = a1 - 8;
  v6 = off_180155820;
  v8 = &v6;
  v7 = v5;
  return sub_180108708(a1 + 336, &v6);
}
