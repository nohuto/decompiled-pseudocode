/*
 * XREFs of sub_1800A0720 @ 0x1800A0720
 * Callers:
 *     sub_180032D70 @ 0x180032D70 (sub_180032D70.c)
 *     sub_1800344B0 @ 0x1800344B0 (sub_1800344B0.c)
 *     sub_180035AD0 @ 0x180035AD0 (sub_180035AD0.c)
 *     sub_180036E3C @ 0x180036E3C (sub_180036E3C.c)
 *     sub_18003A420 @ 0x18003A420 (sub_18003A420.c)
 *     sub_1800D0528 @ 0x1800D0528 (sub_1800D0528.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A0720(__int64 a1)
{
  unsigned int **v1; // rcx
  __int64 result; // rax
  unsigned int *v3; // rcx

  v1 = *(unsigned int ***)(a1 + 112);
  result = 0LL;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  if ( v3 )
    return *v3;
  return result;
}
