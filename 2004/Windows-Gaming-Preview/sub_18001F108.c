/*
 * XREFs of sub_18001F108 @ 0x18001F108
 * Callers:
 *     sub_18001DC30 @ 0x18001DC30 (sub_18001DC30.c)
 *     sub_18001F108 @ 0x18001F108 (sub_18001F108.c)
 *     sub_18002E910 @ 0x18002E910 (sub_18002E910.c)
 *     sub_18003AD24 @ 0x18003AD24 (sub_18003AD24.c)
 * Callees:
 *     sub_18001F108 @ 0x18001F108 (sub_18001F108.c)
 *     j_j__o_free @ 0x1800447B8 (j_j__o_free.c)
 */

__int64 __fastcall sub_18001F108(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 v6; // rdx
  __int64 *v7; // rdi
  __int64 v8; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v7, 56LL) )
  {
    sub_18001F108(a1, a2, i[2]);
    v7 = i;
    i = (__int64 *)*i;
    v8 = v7[6];
    if ( v8 )
      j_j__o_free(v8, v6);
  }
  return result;
}
