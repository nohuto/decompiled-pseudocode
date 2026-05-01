/*
 * XREFs of sub_18000F340 @ 0x18000F340
 * Callers:
 *     <none>
 * Callees:
 *     sub_180003268 @ 0x180003268 (sub_180003268.c)
 *     sub_18000B2BC @ 0x18000B2BC (sub_18000B2BC.c)
 */

__int64 __fastcall sub_18000F340(__int64 a1, __int128 *a2, _QWORD *a3)
{
  _QWORD *v3; // rcx
  int v4; // eax
  unsigned int v5; // ebx
  __int128 v7; // [rsp+20h] [rbp-18h] BYREF
  __int64 retaddr; // [rsp+38h] [rbp+0h]

  v3 = *(_QWORD **)(a1 + 8);
  v7 = *a2;
  v4 = sub_18000B2BC(v3, &v7, a3);
  v5 = v4;
  if ( v4 < 0 )
    sub_180003268(retaddr, 145, (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\findalloperation.cpp", v4);
  return v5;
}
