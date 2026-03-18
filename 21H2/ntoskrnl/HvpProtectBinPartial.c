/*
 * XREFs of HvpProtectBinPartial @ 0x1406C9BF4
 * Callers:
 *     HvpRemapAndEnlistHiveBins @ 0x14068C544 (HvpRemapAndEnlistHiveBins.c)
 *     HvpAddBin @ 0x14068C820 (HvpAddBin.c)
 *     HvpSetRangeProtection @ 0x14079B0D0 (HvpSetRangeProtection.c)
 *     HvpMapHiveImage @ 0x14091AB6C (HvpMapHiveImage.c)
 * Callees:
 *     CmpProtectPoolEx @ 0x140248E20 (CmpProtectPoolEx.c)
 *     MmSetPageProtection @ 0x1403C2120 (MmSetPageProtection.c)
 */

__int64 __fastcall HvpProtectBinPartial(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, char a6)
{
  unsigned int v6; // ebx

  if ( (*(_DWORD *)(a1 + 160) & 0x2000000) != 0 )
  {
    MmSetPageProtection(a2 + a4, a5, a6 != 0 ? 4 : 2);
    return 0;
  }
  else
  {
    v6 = 0;
    if ( a6 )
    {
      if ( !(unsigned int)CmpProtectPoolEx() )
        return (unsigned int)-1073741670;
    }
    else
    {
      CmpProtectPoolEx();
    }
  }
  return v6;
}
