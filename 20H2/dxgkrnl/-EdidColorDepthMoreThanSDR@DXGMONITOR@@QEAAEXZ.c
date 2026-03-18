/*
 * XREFs of ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C00225E4
 * Callers:
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C0189920 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C01899BC (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall DXGMONITOR::EdidColorDepthMoreThanSDR(DXGMONITOR *this)
{
  return (*((_DWORD *)this + 150) & 0x3C) != 0
      || (*((_DWORD *)this + 151) & 0x3C) != 0
      || (*((_DWORD *)this + 152) & 0x3C) != 0
      || (*((_DWORD *)this + 153) & 0x3C) != 0;
}
