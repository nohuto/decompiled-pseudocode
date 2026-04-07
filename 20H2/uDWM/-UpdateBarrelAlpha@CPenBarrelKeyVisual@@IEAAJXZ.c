/*
 * XREFs of ?UpdateBarrelAlpha@CPenBarrelKeyVisual@@IEAAJXZ @ 0x1800A55B0
 * Callers:
 *     ?OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z @ 0x18009EDE8 (-OnShowContact@CContactManager@@QEAAJPEBUMILCMD_DWM_REDIRECTION_SHOWCONTACT@@@Z.c)
 *     ?ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@Z @ 0x18009F908 (-ProcessPenContact@CContactManager@@IEAAJIUtagPOINT@@PEBUtagRECT@@W4DIGITIZER_CONTACT_TYPE@@K_K@.c)
 *     ?StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z @ 0x1800A0848 (-StartPenBarrelVisual@CContactManager@@AEAAJPEAUCPenContact@@_K@Z.c)
 *     ?Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z @ 0x1800A5510 (-Start@CPenBarrelKeyVisual@@QEAAJPEBUtagPOINT@@KI@Z.c)
 * Callees:
 *     ?Hide@CVisual@@QEAAXXZ @ 0x180040B50 (-Hide@CVisual@@QEAAXXZ.c)
 *     ?Unhide@CVisual@@QEAAXXZ @ 0x180041478 (-Unhide@CVisual@@QEAAXXZ.c)
 *     McTemplateU0q_EtwEventWriteTransfer @ 0x180084878 (McTemplateU0q_EtwEventWriteTransfer.c)
 */

__int64 __fastcall CPenBarrelKeyVisual::UpdateBarrelAlpha(CVisual **this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  if ( *((_BYTE *)this + 340) && (*((_BYTE *)this + 308) & 0x20) != 0 )
  {
    if ( *((_BYTE *)this + 341) )
    {
      CVisual::Unhide(this[40]);
      *((_BYTE *)this + 341) = 0;
      if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
        McTemplateU0q_EtwEventWriteTransfer(v2, (__int64)&UdwmPenBarrel_Start, *((unsigned int *)this + 74));
      *((_BYTE *)this + 342) = 1;
    }
  }
  else if ( !*((_BYTE *)this + 341) )
  {
    CVisual::Hide(this[40]);
    *((_BYTE *)this + 341) = 1;
    if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
      McTemplateU0q_EtwEventWriteTransfer(v3, (__int64)&UdwmPenBarrel_Stop, *((unsigned int *)this + 74));
    *((_BYTE *)this + 342) = 0;
  }
  return 0LL;
}
