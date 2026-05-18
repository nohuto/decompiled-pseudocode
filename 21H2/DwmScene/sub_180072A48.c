/*
 * XREFs of sub_180072A48 @ 0x180072A48
 * Callers:
 *     sub_18007284C @ 0x18007284C (sub_18007284C.c)
 *     sub_180072A48 @ 0x180072A48 (sub_180072A48.c)
 *     sub_18008128C @ 0x18008128C (sub_18008128C.c)
 * Callees:
 *     sub_180072A48 @ 0x180072A48 (sub_180072A48.c)
 *     sub_180077B14 @ 0x180077B14 (sub_180077B14.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180072A48(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 *i; // rdi
  __int64 *v6; // rbx
  __int64 result; // rax

  for ( i = a3; !*((_BYTE *)i + 25); result = j_j__o_free(v6) )
  {
    sub_180072A48(a1, a2, i[2]);
    v6 = i;
    i = (__int64 *)*i;
    sub_180077B14(v6 + 4);
  }
  return result;
}
