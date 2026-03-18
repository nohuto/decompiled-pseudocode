/*
 * XREFs of OutputDuplProcessTerminateForSession @ 0x1C018867C
 * Callers:
 *     ?Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0186C8C (-Destroy@DXGPROCESS@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000C3F8 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E350 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000E420 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x1C002B250 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     ?ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z @ 0x1C0188744 (-ProcessTerminated@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_EPROCESS@@@Z.c)
 */

void OutputDuplProcessTerminateForSession()
{
  __int64 v0; // rbx
  __int64 CurrentProcessSessionId; // rdi
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // r8
  __int64 v6; // r9
  OUTPUTDUPL_SESSION_MGR *v7; // rbx
  struct _EPROCESS *CurrentProcess; // rax
  __int64 v9; // rbx
  const wchar_t *v10; // r9
  DXGFASTMUTEX *v11; // [rsp+50h] [rbp-18h] BYREF
  char v12; // [rsp+58h] [rbp-10h]

  v0 = *((_QWORD *)DXGGLOBAL_GetGlobal() + 122);
  if ( !v0 )
    goto LABEL_11;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)&v11, (struct DXGFASTMUTEX *const)(v0 + 88), 0);
  if ( v12 )
    WdLogSingleEntry5(0LL, 275LL, 4LL, &v11, 0LL, 0LL);
  DXGFASTMUTEX::Acquire(v11);
  v12 = 1;
  if ( (unsigned int)CurrentProcessSessionId >= *(_DWORD *)(v0 + 80) )
  {
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v11);
    v2 = 0LL;
  }
  else
  {
    _mm_lfence();
    v2 = *(_QWORD *)(*(_QWORD *)(v0 + 48) + 8 * CurrentProcessSessionId);
    v12 = 0;
    DXGFASTMUTEX::Release((struct _KTHREAD **)v11);
  }
  if ( v2 )
  {
    v7 = *(OUTPUTDUPL_SESSION_MGR **)(v2 + 8);
    if ( v7 )
    {
      CurrentProcess = (struct _EPROCESS *)PsGetCurrentProcess(v4, v3, v5, v6);
      OUTPUTDUPL_SESSION_MGR::ProcessTerminated(v7, CurrentProcess);
      return;
    }
    v9 = 3074LL;
    WdLogSingleEntry1(2LL, 3074LL);
    v10 = L"OUTPUTDUPL_SESSION_MGR is NULL";
  }
  else
  {
LABEL_11:
    v9 = 3067LL;
    WdLogSingleEntry1(2LL, 3067LL);
    v10 = L"DXGSESSIONDATA is NULL";
  }
  DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v10, v9, 0LL, 0LL, 0LL, 0LL);
}
