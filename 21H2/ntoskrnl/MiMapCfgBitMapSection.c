/*
 * XREFs of MiMapCfgBitMapSection @ 0x1406BFA4C
 * Callers:
 *     MiCfgInitializeProcess @ 0x1406C072C (MiCfgInitializeProcess.c)
 * Callees:
 *     MmMapViewOfSectionEx @ 0x1402A36A0 (MmMapViewOfSectionEx.c)
 */

__int64 __fastcall MiMapCfgBitMapSection(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // r10d
  __int64 v6; // rax
  _QWORD v8[2]; // [rsp+60h] [rbp-38h] BYREF
  __int128 v9; // [rsp+70h] [rbp-28h] BYREF
  __int64 v10; // [rsp+80h] [rbp-18h]
  __int64 v11; // [rsp+A8h] [rbp+10h] BYREF

  v8[0] = 1LL;
  v5 = 0;
  v8[1] = &v9;
  v11 = 0LL;
  v9 = 0LL;
  v10 = 0LL;
  if ( a2 == qword_140C4CC60 )
  {
    v6 = *((_QWORD *)&v9 + 1);
    v5 = 0x100000;
    if ( *(_QWORD *)(a1 + 1496) <= 0x100000000uLL )
      v6 = 0x7FFFFFFEFFFFLL;
    *((_QWORD *)&v9 + 1) = v6;
  }
  return MmMapViewOfSectionEx(a2, a1, a4, a3, a5, v5, 1, v8, 1, -2147483647, (__int64)&v11);
}
