/*
 * XREFs of FopFreeFontData @ 0x1409F4294
 * Callers:
 *     BgpFoDestroy @ 0x1409F41CC (BgpFoDestroy.c)
 *     FopInitializeFonts @ 0x140A95F14 (FopInitializeFonts.c)
 * Callees:
 *     BgpFwFreeMemory @ 0x14039BD60 (BgpFwFreeMemory.c)
 *     FopFreeMappingTable @ 0x1409F4308 (FopFreeMappingTable.c)
 */

void __fastcall FopFreeFontData(_QWORD *a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  _QWORD *v4; // r14
  _QWORD *v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // rbp
  __int64 *v9; // rsi
  __int64 v10; // rcx

  v4 = a1 + 13;
  v6 = (_QWORD *)a1[13];
  while ( v6 != v4 )
  {
    v8 = (__int64)v6;
    v6 = (_QWORD *)*v6;
    v9 = *(__int64 **)(v8 + 80);
    if ( v9 )
    {
      if ( *v9 )
        BgpFwFreeMemory(*v9, a2, a3, a4);
      v10 = v9[2];
      if ( v10 )
        BgpFwFreeMemory(v10, a2, a3, a4);
      BgpFwFreeMemory((__int64)v9, a2, a3, a4);
    }
    BgpFwFreeMemory(v8, a2, a3, a4);
  }
  v7 = a1[4];
  if ( v7 )
    BgpFwFreeMemory(v7, a2, a3, a4);
  if ( a1[3] )
    FopFreeMappingTable();
  BgpFwFreeMemory((__int64)a1, a2, a3, a4);
}
