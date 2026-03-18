/*
 * XREFs of ?AddHandleToTable@?$CMonitorHandleTable@VCPhysicalMonitorHandle@@PAX@OPM@@QAEJPAVCPhysicalMonitorHandle@@PAPAX@Z @ 0x1CEFA9
 * Callers:
 *     ?CreatePhysicalMonitor@CMonitorAPI@@QAEJAAU_LUID@@KPAPAX@Z @ 0x1CF068 (-CreatePhysicalMonitor@CMonitorAPI@@QAEJAAU_LUID@@KPAPAX@Z.c)
 * Callees:
 *     ?AddElement@?$CList@VCPhysicalMonitorHandle@@@OPM@@QAEJPAVCPhysicalMonitorHandle@@PAK@Z @ 0x1CEEE7 (-AddElement@-$CList@VCPhysicalMonitorHandle@@@OPM@@QAEJPAVCPhysicalMonitorHandle@@PAK@Z.c)
 */

int __thiscall OPM::CMonitorHandleTable<CPhysicalMonitorHandle,void *>::AddHandleToTable(
        _DWORD *this,
        int a2,
        _DWORD *a3)
{
  int v4; // edx
  void *v6; // [esp+8h] [ebp-4h] BYREF

  v6 = 0;
  v4 = OPM::CList<CPhysicalMonitorHandle>::AddElement((int)this, a2, (unsigned int *)&v6);
  if ( v4 < 0 )
    return v4;
  if ( OPM::INVALID_MONITOR_HANDLE == v6 )
    v4 = -1073741823;
  if ( v4 < 0 )
  {
    *(_DWORD *)(*this + 4 * (_DWORD)v6) = 0;
    --this[1];
    return v4;
  }
  *a3 = v6;
  return 0;
}
