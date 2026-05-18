/*
 * XREFs of sub_18002C9B0 @ 0x18002C9B0
 * Callers:
 *     sub_18002C9B0 @ 0x18002C9B0 (sub_18002C9B0.c)
 *     sub_18002E2A4 @ 0x18002E2A4 (sub_18002E2A4.c)
 *     sub_18002E35C @ 0x18002E35C (sub_18002E35C.c)
 *     sub_180031774 @ 0x180031774 (sub_180031774.c)
 *     sub_1800781A0 @ 0x1800781A0 (sub_1800781A0.c)
 *     sub_1800D99B0 @ 0x1800D99B0 (sub_1800D99B0.c)
 *     sub_1800E224C @ 0x1800E224C (sub_1800E224C.c)
 *     sub_1800E2640 @ 0x1800E2640 (sub_1800E2640.c)
 * Callees:
 *     sub_18002C9B0 @ 0x18002C9B0 (sub_18002C9B0.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_18002C9B0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rbx
  __int64 *v6; // rcx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_18002C9B0(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
  }
  return result;
}
