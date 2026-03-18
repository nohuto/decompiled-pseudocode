/*
 * XREFs of ?FindDevice@InteractiveControlManager@@AAEJKPAXPAPAVInteractiveControlDevice@@PAK@Z @ 0x1ADBE0
 * Callers:
 *     ?GetDeviceInfo@InteractiveControlManager@@QAEJKPAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1ADC2F (-GetDeviceInfo@InteractiveControlManager@@QAEJKPAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 *     ?GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z @ 0x1ADF4C (-GetReportExtendedUsage@InteractiveControlManager@@QAEJKKGGGPAJ@Z.c)
 *     ?GetReportInfo@InteractiveControlManager@@QAEJKKPAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1AE0E2 (-GetReportInfo@InteractiveControlManager@@QAEJKKPAUtagINTERACTIVECTRL_INFO@@@Z.c)
 *     ?InsertDevice@InteractiveControlManager@@AAEJPAVInteractiveControlDevice@@@Z @ 0x1AE240 (-InsertDevice@InteractiveControlManager@@AAEJPAVInteractiveControlDevice@@@Z.c)
 *     ?OnDeviceRemoval@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z @ 0x1AE439 (-OnDeviceRemoval@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@@Z.c)
 *     ?OnInputReport@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@PAXK@Z @ 0x1AE50E (-OnInputReport@InteractiveControlManager@@QAEJPAURawInputManagerDeviceObject@@PAXK@Z.c)
 *     ?RemoveDevice@InteractiveControlManager@@AAEJPAVInteractiveControlDevice@@@Z @ 0x1AE5A8 (-RemoveDevice@InteractiveControlManager@@AAEJPAVInteractiveControlDevice@@@Z.c)
 *     ?RetrieveInputMessage@InteractiveControlManager@@QAE?AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z @ 0x1AE5F9 (-RetrieveInputMessage@InteractiveControlManager@@QAE-AW4tagINPUTMESSAGE_RETRIEVE_RETVAL@@KK@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall InteractiveControlManager::FindDevice(
        InteractiveControlManager *this,
        unsigned int a2,
        void *a3,
        struct InteractiveControlDevice **a4,
        unsigned int *a5)
{
  unsigned int v5; // edx
  int v6; // esi
  struct InteractiveControlDevice **i; // ecx
  struct InteractiveControlDevice *v8; // eax

  v5 = 0;
  v6 = -1073741275;
  for ( i = (struct InteractiveControlDevice **)((char *)this + 24); ; ++i )
  {
    v8 = *i;
    if ( *i )
    {
      if ( *(void **)v8 == a3 || *((_DWORD *)v8 + 1) == a2 )
        break;
    }
    if ( ++v5 >= 5 )
      return v6;
  }
  if ( a4 )
    *a4 = v8;
  if ( a5 )
    *a5 = v5;
  return 0;
}
