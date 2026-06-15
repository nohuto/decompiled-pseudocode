/*
 * XREFs of ?Release@CMonitorManager@@UEAAKXZ @ 0x1800FF6F0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18006AC58 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CMonitorManager@@QEAA@XZ @ 0x1800FA7B0 (--1CMonitorManager@@QEAA@XZ.c)
 */

__int64 __fastcall CMonitorManager::Release(CMonitorManager *this)
{
  unsigned __int32 v2; // edi

  v2 = _InterlockedDecrement((volatile signed __int32 *)this + 2);
  if ( !v2 && this )
  {
    CMonitorManager::~CMonitorManager(this);
    operator delete(this, (const struct std::nothrow_t *)0x178);
  }
  return v2;
}
