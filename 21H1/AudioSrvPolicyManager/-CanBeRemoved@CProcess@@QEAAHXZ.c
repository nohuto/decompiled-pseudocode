/*
 * XREFs of ?CanBeRemoved@CProcess@@QEAAHXZ @ 0x18001AED4
 * Callers:
 *     ?Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z @ 0x180020FBC (-Unregister@CApplicationManager@@IEAAJPEAVCProcess@@@Z.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001FC90 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z @ 0x18002F140 (-TsSessionIdIsAScreenReaderProcess@@YAHKKPEAM@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CProcess::CanBeRemoved(CProcess *this)
{
  int v2; // eax
  unsigned int v3; // edi
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v6; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 32);
  v6 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  if ( *((_DWORD *)this + 112) != 2
    || *((_QWORD *)this + 11)
    || (v2 = *((_DWORD *)this + 120), v3 = 1, (v2 & 1) != 0)
    || (v2 & 0x1000) != 0
    || *((_DWORD *)this + 121)
    || *((_DWORD *)this + 122)
    || (unsigned int)TsSessionIdIsAScreenReaderProcess(*((_DWORD *)this + 49), *((_DWORD *)this + 48), 0LL)
    || *((_DWORD *)this + 130)
    || *((_DWORD *)this + 135)
    || *((_DWORD *)this + 136)
    || *((_DWORD *)this + 137)
    || *((_DWORD *)this + 132) )
  {
    v3 = 0;
  }
  if ( v6 )
    LeaveCriticalSection(lpCriticalSection);
  return v3;
}
