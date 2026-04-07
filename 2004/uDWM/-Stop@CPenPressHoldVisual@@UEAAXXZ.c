/*
 * XREFs of ?Stop@CPenPressHoldVisual@@UEAAXXZ @ 0x1800A6A50
 * Callers:
 *     ?Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z @ 0x1800A6878 (-Start@CPenPressHoldVisual@@QEAAJPEBUtagPOINT@@@Z.c)
 * Callees:
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x18001D170 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x1800850D8 (McTemplateU0q_EtwEventWriteTransfer.c)
 *     ?StopTimer@CPenPressHoldVisual@@MEAAJXZ @ 0x1800A6A90 (-StopTimer@CPenPressHoldVisual@@MEAAJXZ.c)
 */

void __fastcall CPenPressHoldVisual::Stop(CPenPressHoldVisual *this)
{
  __int64 v2; // rcx

  CPenPressHoldVisual::StopTimer(this);
  CVisual::SetOpacity(this, 0.0);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 2) != 0 )
    McTemplateU0q_EtwEventWriteTransfer(v2, (__int64)&UdwmPenPressHoldVisual_End, 0LL);
}
