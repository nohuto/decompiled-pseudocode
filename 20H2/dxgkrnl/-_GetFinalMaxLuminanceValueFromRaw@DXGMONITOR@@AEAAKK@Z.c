/*
 * XREFs of ?_GetFinalMaxLuminanceValueFromRaw@DXGMONITOR@@AEAAKK@Z @ 0x1C02F8CC0
 * Callers:
 *     ?_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z @ 0x1C01678A4 (-_SendAdjustedHDRParamsToDriver@DXGMONITOR@@QEAAJ_N0@Z.c)
 *     ?_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C01877F4 (-_ParseEDIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DXGMONITOR::_GetFinalMaxLuminanceValueFromRaw(DXGMONITOR *this, unsigned int a2)
{
  __int64 result; // rax
  double v3; // xmm0_8
  unsigned int v4; // edx
  __int64 v5; // rax

  result = 0LL;
  if ( a2 )
  {
    v3 = (double)(int)(1LL << (a2 >> 5));
    v4 = a2 & 0x1F;
    if ( v4 )
    {
      v5 = v4;
      do
      {
        v3 = v3 * 1.021900057792664;
        --v5;
      }
      while ( v5 );
    }
    return (unsigned int)(int)(v3 * 50.0 * 10000.0);
  }
  return result;
}
