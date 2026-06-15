/*
 * XREFs of ??1?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAA@XZ @ 0x180007B7C
 * Callers:
 *     ??1CAudioSession@@MEAA@XZ @ 0x180006994 (--1CAudioSession@@MEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180074C80 (_guard_dispatch_icall_nop.c)
 *     ?RemoveAt@?$CAtlArray@V?$CComPtr@UISessionInternalEvents@@@ATL@@V?$CElementTraits@V?$CComPtr@UISessionInternalEvents@@@ATL@@@2@@ATL@@QEAAX_K0@Z @ 0x1800C48B0 (-RemoveAt@-$CAtlArray@V-$CComPtr@UISessionInternalEvents@@@ATL@@V-$CElementTraits@V-$CComPtr@UIS.c)
 */

void __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::~CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>(
        LPCRITICAL_SECTION lpCriticalSection)
{
  void *SpinCount; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdi
  unsigned __int64 v4; // rbp
  unsigned __int64 v5; // rsi
  __int64 v6; // rcx

  EnterCriticalSection(lpCriticalSection);
  while ( *(_QWORD *)&lpCriticalSection[1].LockCount )
    ATL::CAtlArray<ATL::CComPtr<ISessionInternalEvents>,ATL::CElementTraits<ATL::CComPtr<ISessionInternalEvents>>>::RemoveAt(
      &lpCriticalSection[1],
      0LL);
  LeaveCriticalSection(lpCriticalSection);
  SpinCount = (void *)lpCriticalSection[1].SpinCount;
  if ( SpinCount )
    free(SpinCount);
  DebugInfo = lpCriticalSection[1].DebugInfo;
  if ( DebugInfo )
  {
    v4 = *(_QWORD *)&lpCriticalSection[1].LockCount;
    v5 = 0LL;
    if ( v4 )
    {
      do
      {
        v6 = *((_QWORD *)&DebugInfo->Type + v5);
        if ( v6 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        ++v5;
      }
      while ( v5 < v4 );
      DebugInfo = lpCriticalSection[1].DebugInfo;
    }
    free(DebugInfo);
  }
  DeleteCriticalSection(lpCriticalSection);
}
