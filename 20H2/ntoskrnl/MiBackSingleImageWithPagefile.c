/*
 * XREFs of MiBackSingleImageWithPagefile @ 0x14077CE34
 * Callers:
 *     MmLoadSystemImageEx @ 0x140754C1C (MmLoadSystemImageEx.c)
 *     MiBackSystemImageWithPagefile @ 0x14077CD08 (MiBackSystemImageWithPagefile.c)
 *     MiApplyHotPatchToLoadedDriver @ 0x1408CBA38 (MiApplyHotPatchToLoadedDriver.c)
 * Callees:
 *     MiMakeDriverPagesPrivate @ 0x14025290C (MiMakeDriverPagesPrivate.c)
 *     MiSnapDriverRange @ 0x140758088 (MiSnapDriverRange.c)
 */

__int64 __fastcall MiBackSingleImageWithPagefile(__int64 a1)
{
  unsigned int v2; // edi
  __int64 result; // rax
  unsigned __int64 v4; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int64 v5; // [rsp+48h] [rbp+10h] BYREF

  v5 = 0LL;
  v4 = 0LL;
  v2 = 0;
  do
  {
    result = MiSnapDriverRange(a1, v2, 8, 0LL, &v4, &v5);
    v2 = result;
    if ( v4 )
      result = MiMakeDriverPagesPrivate(a1, v4, v5, 4);
  }
  while ( v2 );
  *(_DWORD *)(a1 + 196) |= 2u;
  return result;
}
