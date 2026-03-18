/*
 * XREFs of ?GetInputReport@InteractiveControlDevice@@QAEHKPAPAVInteractiveControlInput@@@Z @ 0x1B1EFB
 * Callers:
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z @ 0x1ADF4C (-GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QAEJKKPAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1AE0E2 (-GetReportInfo@InteractiveControlManager@@QAEJKKPAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     ?RetrieveInputMessage@InteractiveControlManager@@QAE?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1AE5F9 (-RetrieveInputMessage@InteractiveControlManager@@QAE-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall InteractiveControlDevice::GetInputReport(
        InteractiveControlDevice *this,
        unsigned int a2,
        struct InteractiveControlInput **a3)
{
  struct InteractiveControlInput *v3; // eax
  struct InteractiveControlInput *v4; // ecx

  v3 = (InteractiveControlDevice *)((char *)this + 8);
  v4 = (struct InteractiveControlInput *)*((_DWORD *)this + 2);
  if ( v4 == v3 )
  {
LABEL_4:
    *a3 = 0;
    return 0;
  }
  else
  {
    while ( *((_DWORD *)v4 + 5) != a2 )
    {
      v4 = *(struct InteractiveControlInput **)v4;
      if ( v4 == v3 )
        goto LABEL_4;
    }
    *a3 = v4;
    return 1;
  }
}
