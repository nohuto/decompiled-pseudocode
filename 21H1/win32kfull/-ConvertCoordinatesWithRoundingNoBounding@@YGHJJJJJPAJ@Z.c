/*
 * XREFs of ?ConvertCoordinatesWithRoundingNoBounding@@YGHJJJJJPAJ@Z @ 0x13E115
 * Callers:
 *     ?ConvertCoordinatesWithRounding@@YGHJJJJJPAJ@Z @ 0x13E0E8 (-ConvertCoordinatesWithRounding@@YGHJJJJJPAJ@Z.c)
 * Callees:
 *     _LongLongToLong@12 @ 0xC28DA (_LongLongToLong@12.c)
 *     __alldiv @ 0xF91D3 (__alldiv.c)
 */

BOOL __userpurge ConvertCoordinatesWithRoundingNoBounding@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        int *a8)
{
  unsigned int v8; // esi
  __int64 v9; // kr08_8
  unsigned int v10; // edi
  int v11; // ecx
  __int64 v13; // kr10_8
  LONG *v15; // [esp+0h] [ebp-18h]
  int v16; // [esp+Ch] [ebp-Ch]
  int v17; // [esp+20h] [ebp+8h]

  v8 = (unsigned __int64)((a4 - a3) * (__int64)(a5 - a2)) >> 32;
  v16 = (a4 - a3) * (a5 - a2);
  v9 = a1 - a2;
  v10 = (unsigned __int64)((a4 - a3) * (__int64)(a5 - a2)) >> 31;
  v11 = 2 * v16;
  v17 = a3 >> 31;
  if ( __SPAIR64__(v8, v16) <= 0 )
    v13 = __PAIR64__(v10, v11) - v9;
  else
    v13 = v9 + __PAIR64__(v10, v11);
  return LongLongToLong(v13 / (2 * v9) + __PAIR64__(v17, a3), v15) == 0;
}
