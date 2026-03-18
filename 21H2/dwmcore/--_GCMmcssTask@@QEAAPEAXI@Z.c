/*
 * XREFs of ??_GCMmcssTask@@QEAAPEAXI@Z @ 0x180276EF0
 * Callers:
 *     ?InitializeMmcssTask@CKst@@AEAAJXZ @ 0x18002A558 (-InitializeMmcssTask@CKst@@AEAAJXZ.c)
 *     ??1CKst@@QEAA@XZ @ 0x180276EB4 (--1CKst@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x180100BF8 (--3@YAXPEAX_K@Z.c)
 *     ?UnloadRuntime@CMmcssTask@@AEAAXXZ @ 0x1801939A4 (-UnloadRuntime@CMmcssTask@@AEAAXXZ.c)
 */

CMmcssTask *__fastcall CMmcssTask::`scalar deleting destructor'(CMmcssTask *this)
{
  CMmcssTask::UnloadRuntime(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
  operator delete(this);
  return this;
}
