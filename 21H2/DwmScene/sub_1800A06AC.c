/*
 * XREFs of sub_1800A06AC @ 0x1800A06AC
 * Callers:
 *     sub_180032D20 @ 0x180032D20 (sub_180032D20.c)
 *     sub_1800344B0 @ 0x1800344B0 (sub_1800344B0.c)
 *     sub_180035AD0 @ 0x180035AD0 (sub_180035AD0.c)
 *     sub_180036E3C @ 0x180036E3C (sub_180036E3C.c)
 *     sub_18003A420 @ 0x18003A420 (sub_18003A420.c)
 *     sub_18003D340 @ 0x18003D340 (sub_18003D340.c)
 *     sub_1800D0528 @ 0x1800D0528 (sub_1800D0528.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800A06AC(__int64 a1)
{
  __int64 *v1; // rcx
  __int64 result; // rax
  __int64 v3; // rcx

  v1 = *(__int64 **)(a1 + 112);
  result = 0LL;
  if ( v1 )
    v3 = *v1;
  else
    v3 = 0LL;
  if ( v3 )
    return *(unsigned int *)(v3 + 4);
  return result;
}
