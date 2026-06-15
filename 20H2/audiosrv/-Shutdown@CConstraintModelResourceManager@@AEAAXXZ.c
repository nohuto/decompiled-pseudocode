/*
 * XREFs of ?Shutdown@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F4F2C
 * Callers:
 *     ??1CConstraintModelResourceManager@@UEAA@XZ @ 0x1800F22C8 (--1CConstraintModelResourceManager@@UEAA@XZ.c)
 * Callees:
 *     ??0?$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z @ 0x180066B10 (--0-$CComCritSecLock@VCComAutoCriticalSection@ATL@@@ATL@@QEAA@AEAVCComAutoCriticalSection@1@_N@Z.c)
 *     ?ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ @ 0x1800F47D4 (-ReleaseAllResources@CConstraintModelResourceManager@@AEAAXXZ.c)
 */

void __fastcall CConstraintModelResourceManager::Shutdown(CConstraintModelResourceManager *this)
{
  bool v2; // zf
  char *v3; // rcx
  char *v4; // rcx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  if ( *((_QWORD *)this + 27) )
  {
    ATL::CComCritSecLock<ATL::CComAutoCriticalSection>::CComCritSecLock<ATL::CComAutoCriticalSection>(
      (__int64)&lpCriticalSection,
      (struct _RTL_CRITICAL_SECTION *)((char *)this + 232));
    v2 = v6 == 0;
    *((_DWORD *)this + 80) = 1;
    if ( !v2 )
      LeaveCriticalSection(lpCriticalSection);
    SetThreadpoolWait(*((PTP_WAIT *)this + 27), 0LL, 0LL);
    WaitForThreadpoolWaitCallbacks(*((PTP_WAIT *)this + 27), 1);
    CloseThreadpoolWait(*((PTP_WAIT *)this + 27));
    *((_QWORD *)this + 27) = 0LL;
  }
  CConstraintModelResourceManager::ReleaseAllResources(this);
  v3 = (char *)*((_QWORD *)this + 28);
  if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v3);
    *((_QWORD *)this + 28) = 0LL;
  }
  v4 = (char *)*((_QWORD *)this + 13);
  if ( (unsigned __int64)(v4 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v4);
    *((_QWORD *)this + 13) = 0LL;
  }
}
