/*
 * XREFs of ?GetRects@?$CMergedRectBase@$03@@UEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x18007F6E0
 * Callers:
 *     ?GetRects@CMergedDirtyRect@@UEAA_NPEAIPEAPEBUMilRectF@@@Z @ 0x18007F680 (-GetRects@CMergedDirtyRect@@UEAA_NPEAIPEAPEBUMilRectF@@@Z.c)
 * Callees:
 *     ?Optimize@?$CMergedRectBase@$03@@IEAAX_N@Z @ 0x18007FB10 (-Optimize@-$CMergedRectBase@$03@@IEAAX_N@Z.c)
 *     ?SwapExisting@?$CMergedRectBase@$03@@IEAAXII@Z @ 0x1800801B4 (-SwapExisting@-$CMergedRectBase@$03@@IEAAXII@Z.c)
 */

bool __fastcall CMergedRectBase<4>::GetRects(__int64 a1, unsigned int *a2, _QWORD *a3)
{
  unsigned int *v3; // r15
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v9; // esi
  _BYTE *v10; // rbp
  unsigned int i; // edi

  v3 = a2;
  LOBYTE(a2) = 1;
  CMergedRectBase<4>::Optimize(a1, a2);
  v6 = *(_DWORD *)(a1 + 80);
  v7 = v6;
  if ( v6 > 1 && v6 < 4 )
  {
    v9 = 0;
    v10 = (_BYTE *)(a1 + 72);
    for ( i = 0; i < 4; ++i )
    {
      if ( *v10 )
      {
        if ( i != v9 )
          CMergedRectBase<4>::SwapExisting(a1, v9, i);
        ++v9;
      }
      ++v10;
    }
    v7 = *(_DWORD *)(a1 + 80);
  }
  *v3 = v7;
  *a3 = a1 + 8;
  return *(_DWORD *)(a1 + 80) != 0;
}
