/*
 * XREFs of ?DdcciSendIoctlToMonitorDevice@CPhysicalMonitorHandle@@AAEJK_JPAXK1K@Z @ 0x1CFA6C
 * Callers:
 *     ?DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z @ 0x1CF957 (-DdcciReceiveDataFromMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z.c)
 *     ?DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z @ 0x1CFA1C (-DdcciSendDataToMonitorDevice@CPhysicalMonitorHandle@@AAEJ_JPAXK@Z.c)
 * Callees:
 *     <none>
 */

NTSTATUS __thiscall CPhysicalMonitorHandle::DdcciSendIoctlToMonitorDevice(
        struct OPM::CMutex **this,
        unsigned int a2,
        union _LARGE_INTEGER Interval,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7)
{
  NTSTATUS v8; // esi
  _BYTE v10[4]; // [esp+8h] [ebp-4h] BYREF

  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)v10, this[1]);
  if ( (*((unsigned __int8 (__thiscall **)(struct OPM::CMutex **))*this + 2))(this) )
  {
    v8 = -1071774323;
  }
  else
  {
    v8 = AcquireCriticalSectionAndCheckState();
    if ( v8 >= 0 )
    {
      v8 = CallMonitor(this[2], a2, a4, a5, a6, a7);
      ReleaseUserCriticalSection();
      if ( v8 >= 0 && Interval.HighPart < 0 )
        v8 = KeDelayExecutionThread(0, OPM::NOT_ALERTABLE, &Interval);
    }
  }
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)v10);
  return v8;
}
