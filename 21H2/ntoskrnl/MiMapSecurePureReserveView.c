/*
 * XREFs of MiMapSecurePureReserveView @ 0x140755714
 * Callers:
 *     MiCfgInitializeProcess @ 0x140755A24 (MiCfgInitializeProcess.c)
 * Callees:
 *     MmMapViewOfSectionEx @ 0x1402D6B9C (MmMapViewOfSectionEx.c)
 */

__int64 __fastcall MiMapSecurePureReserveView(__int64 a1, __int64 a2, int a3, unsigned __int64 *a4)
{
  int v4; // r10d
  unsigned __int64 v5; // rax
  __int64 v6; // rax
  __int64 v8; // [rsp+60h] [rbp+27h] BYREF
  _QWORD v9[2]; // [rsp+68h] [rbp+2Fh] BYREF
  __int128 v10; // [rsp+78h] [rbp+3Fh] BYREF
  __int64 v11; // [rsp+88h] [rbp+4Fh]
  __int64 v12; // [rsp+B8h] [rbp+7Fh] BYREF

  v4 = 0;
  v9[0] = 1LL;
  v12 = 0LL;
  v9[1] = &v10;
  v8 = 0LL;
  v11 = 0LL;
  v5 = *a4;
  v10 = 0LL;
  if ( !v5 )
    v5 = *(_QWORD *)(a2 + 48);
  if ( v5 > 0x4000000 )
  {
    v6 = *((_QWORD *)&v10 + 1);
    v4 = 0x100000;
    if ( *(_QWORD *)(a1 + 1496) <= 0x100000000uLL )
      v6 = 0x7FFFFFFEFFFFLL;
    *((_QWORD *)&v10 + 1) = v6;
  }
  return MmMapViewOfSectionEx(a2, a1, a3, (__int64)&v8, (__int64)a4, v4, 1, v9, 1, -2147483647, (__int64)&v12);
}
