/*
 * XREFs of ?GetMonitorDescription@CPhysicalMonitorHandle@@QAEJKPAG@Z @ 0x1CFDA9
 * Callers:
 *     ?GetMonitorDescription@CMonitorAPI@@QAEJPAXKPAG@Z @ 0x1CFD18 (-GetMonitorDescription@CMonitorAPI@@QAEJPAXKPAG@Z.c)
 * Callees:
 *     ?GetMonitorDescription@CMonitorPDO@OPM@@IAEJKPAG@Z @ 0x1CFD69 (-GetMonitorDescription@CMonitorPDO@OPM@@IAEJKPAG@Z.c)
 */

NTSTATUS __thiscall CPhysicalMonitorHandle::GetMonitorDescription(
        struct OPM::CMutex **this,
        ULONG ResultLength,
        unsigned __int16 *a3)
{
  NTSTATUS MonitorDescription; // esi
  _BYTE v6[4]; // [esp+4h] [ebp-4h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v6, this[1]);
  MonitorDescription = OPM::CMonitorPDO::GetMonitorDescription((PDEVICE_OBJECT *)this, ResultLength, a3);
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v6);
  return MonitorDescription;
}
