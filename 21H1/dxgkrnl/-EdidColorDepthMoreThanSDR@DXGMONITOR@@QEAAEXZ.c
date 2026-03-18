/*
 * XREFs of ?EdidColorDepthMoreThanSDR@DXGMONITOR@@QEAAEXZ @ 0x1C0021A68
 * Callers:
 *     ?_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ @ 0x1C016C134 (-_UpdateHDRParamsIfRequired@DXGMONITOR@@AEAAXXZ.c)
 *     ?EdidSupportsHDR@DXGMONITOR@@QEAAEXZ @ 0x1C016C1D0 (-EdidSupportsHDR@DXGMONITOR@@QEAAEXZ.c)
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
