/*
 * XREFs of sub_180013590 @ 0x180013590
 * Callers:
 *     sub_180012AA8 @ 0x180012AA8 (sub_180012AA8.c)
 *     sub_18002C274 @ 0x18002C274 (sub_18002C274.c)
 *     sub_18006CA6C @ 0x18006CA6C (sub_18006CA6C.c)
 *     sub_18009BCB8 @ 0x18009BCB8 (sub_18009BCB8.c)
 *     sub_1800A1D04 @ 0x1800A1D04 (sub_1800A1D04.c)
 * Callees:
 *     memcpy @ 0x18011E094 (memcpy.c)
 *     j_j__o_free @ 0x18011E56C (j_j__o_free.c)
 */

__int64 __fastcall sub_180013590(const void **a1)
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
      JUMPOUT(0x1800135F8LL);
    }
    v1 = (_QWORD *)*(v1 - 1);
  }
  result = j_j__o_free(v1);
  a1[3] = (const void *)15;
  return result;
}
