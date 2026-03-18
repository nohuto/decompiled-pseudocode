/*
 * XREFs of sub_1C0031714 @ 0x1C0031714
 * Callers:
 *     sub_1C000E9B0 @ 0x1C000E9B0 (sub_1C000E9B0.c)
 *     sub_1C0033288 @ 0x1C0033288 (sub_1C0033288.c)
 *     sub_1C0033368 @ 0x1C0033368 (sub_1C0033368.c)
 *     sub_1C003D9B0 @ 0x1C003D9B0 (sub_1C003D9B0.c)
 *     sub_1C003E230 @ 0x1C003E230 (sub_1C003E230.c)
 *     sub_1C004204C @ 0x1C004204C (sub_1C004204C.c)
 *     sub_1C0043ED8 @ 0x1C0043ED8 (sub_1C0043ED8.c)
 *     sub_1C005C970 @ 0x1C005C970 (sub_1C005C970.c)
 * Callees:
 *     sub_1C000F050 @ 0x1C000F050 (sub_1C000F050.c)
 */

__int64 __fastcall sub_1C0031714(__int64 a1, __int64 a2, int a3, int a4, int a5)
{
  _DWORD *v8; // rdi
  __int64 v9; // rcx

  v8 = sub_1C000F050(a1);
  KeWaitForSingleObject(v8 + 1240, Executive, 0, 0, 0LL);
  *(_DWORD *)(a2 + 56) = v8[340];
  *(_DWORD *)(a2 + 60) = a3;
  *(_DWORD *)(a2 + 48) = 827278406;
  *(_QWORD *)(a2 + 24) = KeGetCurrentThread();
  *((_QWORD *)v8 + 166) = a2;
  if ( a5 )
  {
    v9 = ((unsigned __int8)v8[6] + 1) & 7;
    v8[6] = v9;
    v9 *= 32LL;
    *(_DWORD *)((char *)v8 + v9 + 28) = a3;
    *(_DWORD *)((char *)v8 + v9 + 32) = v8[340];
    *(_DWORD *)((char *)v8 + v9 + 36) = v8[340];
    *(_DWORD *)((char *)v8 + v9 + 40) = a4;
  }
  return (unsigned int)v8[340];
}
