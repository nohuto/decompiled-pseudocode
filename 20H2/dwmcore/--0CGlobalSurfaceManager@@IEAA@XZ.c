/*
 * XREFs of ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x18002F0C4
 * Callers:
 *     ?Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z @ 0x18002EDE4 (-Create@CGlobalSurfaceManager@@SAJPEAPEAX0PEAPEAVCSurfaceManager@@@Z.c)
 * Callees:
 *     ??0CMmcssTask@@QEAA@XZ @ 0x18002F858 (--0CMmcssTask@@QEAA@XZ.c)
 *     ??0CLegacySurfaceManager@@QEAA@XZ @ 0x180030100 (--0CLegacySurfaceManager@@QEAA@XZ.c)
 */

CGlobalSurfaceManager *__fastcall CGlobalSurfaceManager::CGlobalSurfaceManager(CGlobalSurfaceManager *this)
{
  CGlobalSurfaceManager *result; // rax

  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = &CCompositionSurfaceManager::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 24),
    CGenericTableMap<CLuid,CCompositionSurfaceManager::CCompositionSurfaceMap>::CompareTableData,
    CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
    CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
    0LL);
  CLegacySurfaceManager::CLegacySurfaceManager((CGlobalSurfaceManager *)((char *)this + 96));
  *(_QWORD *)this = &CGlobalSurfaceManager::`vftable'{for `CMILRefCountBase'};
  *((_QWORD *)this + 2) = &CGlobalSurfaceManager::`vftable'{for `CCompositionSurfaceManager'};
  *((_QWORD *)this + 12) = &CGlobalSurfaceManager::`vftable';
  CMmcssTask::CMmcssTask((CGlobalSurfaceManager *)((char *)this + 328));
  result = this;
  *((_QWORD *)this + 52) = 0LL;
  *((_QWORD *)this + 53) = 0LL;
  *((_QWORD *)this + 54) = 0LL;
  *((_QWORD *)this + 55) = 0LL;
  *((_QWORD *)this + 56) = 0LL;
  *((_QWORD *)this + 57) = 0LL;
  *((_QWORD *)this + 58) = 0LL;
  *((_QWORD *)this + 59) = 0LL;
  *((_QWORD *)this + 60) = 0LL;
  *((_QWORD *)this + 61) = 0LL;
  *((_BYTE *)this + 496) = 0;
  return result;
}
