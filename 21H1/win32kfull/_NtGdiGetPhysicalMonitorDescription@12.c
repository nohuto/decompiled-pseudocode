/*
 * XREFs of _NtGdiGetPhysicalMonitorDescription@12 @ 0x1D01DC
 * Callers:
 *     <none>
 * Callees:
 *     __SEH_prolog4_GS @ 0xF917C (__SEH_prolog4_GS.c)
 *     _memset @ 0xF92A7 (_memset.c)
 *     ?GetMonitorDescription@CMonitorAPI@@QAEJPAXKPAG@Z @ 0x1CFD18 (-GetMonitorDescription@CMonitorAPI@@QAEJPAXKPAG@Z.c)
 */

int __stdcall NtGdiGetPhysicalMonitorDescription(OPM::CMonitorPDO *a1, int a2, volatile void *Address)
{
  int MonitorDescription; // ebx
  unsigned __int16 v5[130]; // [esp+10h] [ebp-11Ch] BYREF
  CPPEH_RECORD ms_exc; // [esp+114h] [ebp-18h]

  memset(v5, 0, 0x100u);
  if ( a2 != 128 )
    return -1073741811;
  MonitorDescription = CMonitorAPI::GetMonitorDescription((CMonitorAPI *)0x80, a1, 0x80u, v5);
  if ( MonitorDescription >= 0 )
  {
    MonitorDescription = 0;
    ms_exc.registration.TryLevel = 0;
    ProbeForWrite(Address, 0x100u, 1u);
    qmemcpy((void *)Address, v5, 0x100u);
    ms_exc.registration.TryLevel = -2;
  }
  return MonitorDescription;
}
