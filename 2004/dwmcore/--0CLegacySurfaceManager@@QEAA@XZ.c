/*
 * XREFs of ??0CLegacySurfaceManager@@QEAA@XZ @ 0x18002C3A0
 * Callers:
 *     ??0CGlobalSurfaceManager@@IEAA@XZ @ 0x18002B364 (--0CGlobalSurfaceManager@@IEAA@XZ.c)
 * Callees:
 *     <none>
 */

CLegacySurfaceManager *__fastcall CLegacySurfaceManager::CLegacySurfaceManager(CLegacySurfaceManager *this)
{
  CLegacySurfaceManager *result; // rax

  *(_QWORD *)this = &CLogicalSurfaceHandleMap::`vftable';
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)((char *)this + 8),
    CGenericTableMap<unsigned __int64,CWindowManager::SPRITEENTRY>::CompareTableData,
    CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::AllocTableData,
    CGenericTableMap<void *,CLogicalSurfaceHandleMap::LSEENTRY>::FreeTableData,
    0LL);
  *((_QWORD *)this + 11) = (char *)this + 80;
  *((_QWORD *)this + 10) = (char *)this + 80;
  *(_QWORD *)this = &CLegacySurfaceManager::`vftable';
  result = this;
  *((_QWORD *)this + 13) = 0LL;
  *((_QWORD *)this + 14) = 0LL;
  *((_QWORD *)this + 15) = 0LL;
  *((_DWORD *)this + 32) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_QWORD *)this + 19) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_DWORD *)this + 42) = 0;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 24) = 0LL;
  *((_DWORD *)this + 50) = 0;
  return result;
}
