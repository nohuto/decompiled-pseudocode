/*
 * XREFs of _NtUserGetInteractiveControlInfo@8 @ 0x1631F7
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     ?Instance@InteractiveControlManager@@SGPAV1@XZ @ 0xD64EA (-Instance@InteractiveControlManager@@SGPAV1@XZ.c)
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     ?GetReportInfo@InteractiveControlManager@@QAEJKKPAUtagINTERACTIVECTRL_INFO@@@Z @ 0x1AE0E2 (-GetReportInfo@InteractiveControlManager@@QAEJKKPAUtagINTERACTIVECTRL_INFO@@@Z.c)
 */

int __stdcall NtUserGetInteractiveControlInfo(unsigned int a1, volatile void *Address)
{
  int v2; // ebx
  InteractiveControlManager *v3; // eax
  void *v4; // edi
  _BYTE v6[32]; // [esp+24h] [ebp-38h] BYREF
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  memset(v6, 0, 0x1Cu);
  v2 = 1;
  EnterSharedCrit(0, 1);
  if ( a1 && Address )
  {
    ms_exc.registration.TryLevel = 0;
    ProbeForWrite(Address, 0x1Cu, 1u);
    ms_exc.registration.TryLevel = -2;
    v3 = InteractiveControlManager::Instance();
    if ( InteractiveControlManager::GetReportInfo(
           v3,
           (unsigned __int16)a1,
           HIWORD(a1),
           (struct tagINTERACTIVECTRL_INFO *)v6) < 0 )
    {
      v2 = 0;
    }
    else
    {
      ms_exc.registration.TryLevel = 1;
      v4 = (void *)_MmUserProbeAddress;
      if ( (unsigned int)Address < _MmUserProbeAddress )
        v4 = (void *)Address;
      qmemcpy(v4, v6, 0x1Cu);
      ms_exc.registration.TryLevel = -2;
    }
  }
  else
  {
    v2 = 0;
    UserSetLastError((struct _NT_TIB *)0x57);
  }
  UserSessionSwitchLeaveCrit();
  return v2;
}
