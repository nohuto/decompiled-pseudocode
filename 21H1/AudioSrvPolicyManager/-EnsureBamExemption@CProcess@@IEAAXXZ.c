/*
 * XREFs of ?EnsureBamExemption@CProcess@@IEAAXXZ @ 0x18001C55C
 * Callers:
 *     ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x18001B194 (-UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z.c)
 * Callees:
 *     ?CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ @ 0x18001C634 (-CancelDeferredBamExemptionRelease@CProcess@@IEAAXXZ.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 */

void __fastcall CProcess::EnsureBamExemption(CProcess *this)
{
  _QWORD *v2; // rdi
  char *v3; // rsi
  __int64 v4; // rbp
  DWORD LastError; // ebx
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  CProcess::CancelDeferredBamExemptionRelease(this);
  v7 = 0;
  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 568);
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v2 = (_QWORD *)((char *)this + 608);
  v3 = (char *)*((_QWORD *)this + 76);
  if ( ((unsigned __int64)(v3 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    v4 = *((_QWORD *)this + 23);
    if ( (unsigned __int64)(v3 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      LastError = GetLastError();
      CloseHandle(v3);
      SetLastError(LastError);
    }
    *v2 = 0LL;
    NtAcquireProcessActivityReference(v2, v4, 0LL);
  }
  if ( v7 )
    LeaveCriticalSection(lpCriticalSection);
}
