/*
 * XREFs of ?DestroyHandleInternal@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@AAEJPAVCPhysicalMonitorHandle@@KPAVCMutex@2@@Z @ 0x1CFBF4
 * Callers:
 *     _MonitorAPIProcessTerminating@4 @ 0x9DC7E (_MonitorAPIProcessTerminating@4.c)
 *     ?DestroyPhysicalMonitor@CMonitorAPI@@QAEJPAX@Z @ 0x1CFC42 (-DestroyPhysicalMonitor@CMonitorAPI@@QAEJPAX@Z.c)
 * Callees:
 *     <none>
 */

int __thiscall OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::DestroyHandleInternal(
        _DWORD *this,
        void (__thiscall ***a2)(_DWORD, int),
        int a3,
        struct OPM::CMutex *a4)
{
  void (__thiscall ***v4)(_DWORD, int); // edi
  int v6; // ebx

  v4 = a2;
  v6 = ((int (__thiscall *)(void (__thiscall ***)(_DWORD, int)))(*a2)[1])(a2);
  OPM::CAutoMutex::CAutoMutex((OPM::CAutoMutex *)&a2, a4);
  *(_DWORD *)(*this + 4 * a3) = 0;
  --this[1];
  (**v4)(v4, 1);
  if ( v6 >= 0 )
    v6 = 0;
  OPM::CAutoMutex::~CAutoMutex((OPM::CAutoMutex *)&a2);
  return v6;
}
