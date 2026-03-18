/*
 * XREFs of ??0CPhysicalMonitorHandle@@QAE@AAU_LUID@@KPAJ@Z @ 0x1CEE6C
 * Callers:
 *     ?CreatePhysicalMonitor@CMonitorAPI@@QAEJAAU_LUID@@KPAPAX@Z @ 0x1CF068 (-CreatePhysicalMonitor@CMonitorAPI@@QAEJAAU_LUID@@KPAPAX@Z.c)
 * Callees:
 *     <none>
 */

CPhysicalMonitorHandle *__thiscall CPhysicalMonitorHandle::CPhysicalMonitorHandle(
        CPhysicalMonitorHandle *this,
        struct _LUID *a2,
        unsigned int a3,
        int *a4)
{
  CPhysicalMonitorHandle *result; // eax

  OPM::CMonitorPDO::CMonitorPDO(this, a2, a3, a4);
  *(_DWORD *)this = &CPhysicalMonitorHandle::`vftable';
  OPM::CMutex::CMutex((CPhysicalMonitorHandle *)((char *)this + 40), a4);
  *((_DWORD *)this + 11) = 0;
  result = this;
  *((_DWORD *)this + 12) = 0;
  return result;
}
