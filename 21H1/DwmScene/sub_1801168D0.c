/*
 * XREFs of sub_1801168D0 @ 0x1801168D0
 * Callers:
 *     sub_180061494 @ 0x180061494 (sub_180061494.c)
 *     sub_180065714 @ 0x180065714 (sub_180065714.c)
 *     sub_180065774 @ 0x180065774 (sub_180065774.c)
 *     sub_180069F90 @ 0x180069F90 (sub_180069F90.c)
 *     sub_18006A340 @ 0x18006A340 (sub_18006A340.c)
 *     sub_18007240C @ 0x18007240C (sub_18007240C.c)
 *     sub_18007B4B0 @ 0x18007B4B0 (sub_18007B4B0.c)
 *     sub_180085CBC @ 0x180085CBC (sub_180085CBC.c)
 *     sub_1800A3808 @ 0x1800A3808 (sub_1800A3808.c)
 *     sub_1800CFCC4 @ 0x1800CFCC4 (sub_1800CFCC4.c)
 *     sub_1800CFD70 @ 0x1800CFD70 (sub_1800CFD70.c)
 *     sub_1800CFEF4 @ 0x1800CFEF4 (sub_1800CFEF4.c)
 *     sub_180103164 @ 0x180103164 (sub_180103164.c)
 *     sub_1801041B0 @ 0x1801041B0 (sub_1801041B0.c)
 * Callees:
 *     j__o_free @ 0x18011E1AC (j__o_free.c)
 *     _Mtx_destroy_in_situ @ 0x18011F9AC (_Mtx_destroy_in_situ.c)
 *     _Cnd_destroy_in_situ @ 0x18011FAAA (_Cnd_destroy_in_situ.c)
 */

__int64 __fastcall sub_1801168D0(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 result; // rax

  v1 = *a1;
  if ( *a1 )
  {
    Cnd_destroy_in_situ((_Cnd_t)(v1 + 152));
    Cnd_destroy_in_situ((_Cnd_t)(v1 + 80));
    Mtx_destroy_in_situ((_Mtx_t)v1);
    return j__o_free(v1);
  }
  return result;
}
