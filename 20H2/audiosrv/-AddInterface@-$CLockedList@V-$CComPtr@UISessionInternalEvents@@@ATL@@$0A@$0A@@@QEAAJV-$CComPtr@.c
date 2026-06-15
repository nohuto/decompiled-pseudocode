/*
 * XREFs of ?AddInterface@?$CLockedList@V?$CComPtr@UISessionInternalEvents@@@ATL@@$0A@$0A@@@QEAAJV?$CComPtr@UISessionInternalEvents@@@ATL@@@Z @ 0x180033BA0
 * Callers:
 *     ?AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z @ 0x180033B30 (-AddSessionNotification@CAudioSession@@UEAAJPEAUISessionInternalEvents@@@Z.c)
 * Callees:
 *     _invalid_parameter_noinfo @ 0x18006ACBE (_invalid_parameter_noinfo.c)
 *     memmove_0 @ 0x18007419B (memmove_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x1800B8410 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CLockedList<ATL::CComPtr<ISessionInternalEvents>,0,0>::AddInterface(
        LPCRITICAL_SECTION lpCriticalSection,
        _QWORD *a2)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 OwningThread; // rcx
  size_t v5; // rdx
  size_t LockSemaphore_low; // rsi
  void *v7; // r15
  struct _RTL_CRITICAL_SECTION_DEBUG *v8; // rax
  struct _RTL_CRITICAL_SECTION_DEBUG *v9; // rsi
  __int64 v10; // rcx
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  __int64 v12; // rcx
  struct _RTL_CRITICAL_SECTION_DEBUG *v14; // rax

  EnterCriticalSection(lpCriticalSection);
  v3 = *(_QWORD *)&lpCriticalSection[1].LockCount;
  OwningThread = (unsigned __int64)lpCriticalSection[1].OwningThread;
  if ( v3 < OwningThread )
    goto LABEL_14;
  v5 = v3 + 1;
  if ( v3 + 1 <= OwningThread )
    goto LABEL_14;
  LockSemaphore_low = SLODWORD(lpCriticalSection[1].LockSemaphore);
  if ( !lpCriticalSection[1].DebugInfo )
  {
    if ( LockSemaphore_low <= v5 )
      LockSemaphore_low = v3 + 1;
    v14 = (struct _RTL_CRITICAL_SECTION_DEBUG *)calloc(LockSemaphore_low, 8uLL);
    lpCriticalSection[1].DebugInfo = v14;
    if ( v14 )
    {
      lpCriticalSection[1].OwningThread = (HANDLE)LockSemaphore_low;
      goto LABEL_14;
    }
LABEL_24:
    ATL::AtlThrowImpl(-2147024882);
  }
  if ( !LODWORD(lpCriticalSection[1].LockSemaphore) )
  {
    LockSemaphore_low = OwningThread >> 1;
    if ( v5 - OwningThread > OwningThread >> 1 )
      LockSemaphore_low = v5 - OwningThread;
  }
  v7 = (void *)(OwningThread + LockSemaphore_low);
  if ( v5 >= OwningThread + LockSemaphore_low )
    v7 = (void *)(v3 + 1);
  v8 = (struct _RTL_CRITICAL_SECTION_DEBUG *)calloc((size_t)v7, 8uLL);
  v9 = v8;
  if ( !v8 )
    goto LABEL_24;
  v10 = *(_QWORD *)&lpCriticalSection[1].LockCount;
  DebugInfo = lpCriticalSection[1].DebugInfo;
  if ( 8 * v10 )
  {
    if ( !DebugInfo )
    {
      *(_DWORD *)_o__errno(v10) = 22;
      invalid_parameter_noinfo();
      ATL::AtlThrowImpl(-2147024809);
    }
    memmove_0(v8, DebugInfo, 8 * v10);
  }
  free(lpCriticalSection[1].DebugInfo);
  lpCriticalSection[1].DebugInfo = v9;
  lpCriticalSection[1].OwningThread = v7;
LABEL_14:
  v12 = *a2;
  *((_QWORD *)&lpCriticalSection[1].DebugInfo->Type + v3) = *a2;
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 8LL))(v12);
  ++*(_QWORD *)&lpCriticalSection[1].LockCount;
  LeaveCriticalSection(lpCriticalSection);
  if ( *a2 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a2 + 16LL))(*a2);
  return 0LL;
}
