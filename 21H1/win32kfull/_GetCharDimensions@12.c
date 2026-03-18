/*
 * XREFs of _GetCharDimensions@12 @ 0xB5416
 * Callers:
 *     _ValidateExternalLogFont@4 @ 0xDAF6C (_ValidateExternalLogFont@4.c)
 *     ?UserReinitializeStockFonts@@YGXKH@Z @ 0xF013A (-UserReinitializeStockFonts@@YGXKH@Z.c)
 *     _CreateScaledFont@28 @ 0x155260 (_CreateScaledFont@28.c)
 * Callees:
 *     __GetTextMetricsW@8 @ 0x8440E (__GetTextMetricsW@8.c)
 *     _GreGetTextExtentW@20 @ 0xE26D8 (_GreGetTextExtentW@20.c)
 *     _GetDPIServerInfo@0 @ 0xEC39A (_GetDPIServerInfo@0.c)
 *     _GreTextInitialized@0 @ 0xF72EC (_GreTextInitialized@0.c)
 *     _memset @ 0xF92A7 (_memset.c)
 */

int __fastcall GetCharDimensions(HDC a1, void *a2, _DWORD *a3)
{
  int v4; // ebx
  struct tagSIZE v7; // [esp+10h] [ebp-48h] BYREF
  HDC v8; // [esp+18h] [ebp-40h]
  _DWORD v9[15]; // [esp+1Ch] [ebp-3Ch] BYREF

  v8 = a1;
  memset(v9, 0, sizeof(v9));
  v7.cx = GreTextInitialized();
  if ( v7.cx && _GetTextMetricsW(a1, v9) )
  {
    v4 = v9[5];
  }
  else
  {
    qmemcpy(v9, (const void *)(GetDPIServerInfo() + 32), sizeof(v9));
    v4 = v9[5];
    if ( !v9[5] )
    {
      v4 = 8;
      v9[5] = 8;
    }
  }
  if ( a2 )
    qmemcpy(a2, v9, 0x3Cu);
  if ( a3 )
    *a3 = v9[0];
  if ( v7.cx && (v9[13] & 0x1000000) != 0 && (v7.cx = 0, v7.cy = 0, GreGetTextExtentW(v8, 52, &v7, 1)) )
    return (v7.cx / 26 + 1) / 2;
  else
    return v4;
}
