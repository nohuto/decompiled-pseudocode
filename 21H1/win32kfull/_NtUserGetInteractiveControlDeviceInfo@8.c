/*
 * XREFs of _NtUserGetInteractiveControlDeviceInfo@8 @ 0x163102
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     ?GetDeviceInfo@InteractiveControlManager@@QAEJKPAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z @ 0x1ADC2F (-GetDeviceInfo@InteractiveControlManager@@QAEJKPAUtagINTERACTIVECTRL_DEVICE_INFO@@@Z.c)
 */

int __stdcall NtUserGetInteractiveControlDeviceInfo(unsigned int a1, volatile void *Address)
{
  int v2; // esi
  void *v3; // edi
  InteractiveControlManager *v4; // eax
  _BYTE v6[40]; // [esp+10h] [ebp-50h] BYREF
  CPPEH_RECORD ms_exc; // [esp+48h] [ebp-18h]

  memset(v6, 0, sizeof(v6));
  v2 = 0;
  EnterSharedCrit(0, 1);
  v3 = (void *)Address;
  if ( Address )
  {
    ms_exc.registration.TryLevel = 0;
    ProbeForWrite(Address, 0x28u, 1u);
    ms_exc.registration.TryLevel = -2;
    v4 = InteractiveControlManager::Instance();
    if ( InteractiveControlManager::GetDeviceInfo(v4, a1, (struct tagINTERACTIVECTRL_DEVICE_INFO *)v6) >= 0 )
    {
      ms_exc.registration.TryLevel = 1;
      if ( (unsigned int)Address >= _MmUserProbeAddress )
        v3 = (void *)_MmUserProbeAddress;
      qmemcpy(v3, v6, 0x28u);
      ms_exc.registration.TryLevel = -2;
      v2 = 1;
    }
  }
  else
  {
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
