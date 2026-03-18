/*
 * XREFs of _GreMakeBitmapStock@4 @ 0xE07BA
 * Callers:
 *     _NtGdiSetBitmapAttributes@8 @ 0xE079E (_NtGdiSetBitmapAttributes@8.c)
 * Callees:
 *     <none>
 */

int __fastcall GreMakeBitmapStock(int a1)
{
  int v2; // edi
  int v3; // esi
  int v5; // eax

  v2 = 0;
  v3 = HmgLock(a1, 5);
  if ( v3 )
  {
    if ( (*(_WORD *)(v3 + 64) || !*(_DWORD *)(v3 + 124) || *(_DWORD *)(v3 + 140))
      && (a1 & 0x800000) == 0
      && !*(_DWORD *)(v3 + 112) )
    {
      if ( (*(_DWORD *)(v3 + 72) & 0x80000800) != 0 || SURFACE::GetFirstLSurf((SURFACE *)v3) )
      {
        if ( !*(_DWORD *)(v3 + 112) )
        {
          v5 = *(_DWORD *)(v3 + 72);
          if ( (v5 & 0x800) == 0 && v5 >= 0 )
            SURFACE::GetFirstLSurf((SURFACE *)v3);
        }
      }
      else
      {
        v2 = a1 | 0x800000;
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)gStockBitmapFree, 0xFFFFFFFF) >= 0
          && HmgLockAndModifyHandleType(v3, v2) )
        {
          if ( (*(_DWORD *)v3 & 0x800000) != 0 )
            *(_WORD *)(v3 + 66) |= 0x200u;
          *(_DWORD *)(v3 + 20) = v2;
          HmgSetOwner(v2, 0, 5);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)gStockBitmapFree);
          v2 = 0;
        }
      }
    }
    _InterlockedDecrement((volatile signed __int32 *)(v3 + 8));
  }
  return v2;
}
