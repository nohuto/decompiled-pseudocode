/*
 * XREFs of sub_180013670 @ 0x180013670
 * Callers:
 *     sub_180012B88 @ 0x180012B88 (sub_180012B88.c)
 *     sub_180031B44 @ 0x180031B44 (sub_180031B44.c)
 *     sub_18007233C @ 0x18007233C (sub_18007233C.c)
 *     sub_1800A1588 @ 0x1800A1588 (sub_1800A1588.c)
 *     sub_1800A75D4 @ 0x1800A75D4 (sub_1800A75D4.c)
 * Callees:
 *     memcpy @ 0x180123964 (memcpy.c)
 *     j_j__o_free @ 0x180123E3C (j_j__o_free.c)
 */

__int64 __fastcall sub_180013670(const void **a1)
{
  _QWORD *v1; // rbx
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = *a1;
  memcpy(a1, *a1, (size_t)a1[2] + 1);
  if ( (unsigned __int64)a1[3] + 1 >= 0x1000 )
  {
    v3 = *(v1 - 1);
    if ( (unsigned __int64)v1 - v3 - 8 > 0x1F )
    {
      o__invalid_parameter_noinfo_noreturn(v3, (char *)a1[3] + 40);
      JUMPOUT(0x1800136D8LL);
    }
    v1 = (_QWORD *)*(v1 - 1);
  }
  result = j_j__o_free(v1);
  a1[3] = (const void *)15;
  return result;
}
