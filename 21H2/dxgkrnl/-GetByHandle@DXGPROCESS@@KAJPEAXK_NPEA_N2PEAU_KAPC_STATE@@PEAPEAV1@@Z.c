/*
 * XREFs of ?GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C016437C
 * Callers:
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C0164280 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 *     ?DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ @ 0x1C000BBD0 (-DXGGLOBAL_GetGlobal@@YAPEAVDXGGLOBAL@@XZ.c)
 */

__int64 __fastcall DXGPROCESS::GetByHandle(
        HANDLE Handle,
        ACCESS_MASK DesiredAccess,
        char a3,
        bool *a4,
        LUID PrivilegeValue,
        struct _KAPC_STATE *ApcState,
        struct DXGPROCESS **Object)
{
  struct DXGPROCESS **v11; // r14
  NTSTATUS v12; // eax
  struct DXGPROCESS **v13; // rdi
  __int64 v14; // rbx
  __int64 ProcessDxgProcess; // rsi
  int ProcessSessionId; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 CurrentProcess; // rax

  if ( *((struct _KTHREAD **)DXGGLOBAL_GetGlobal() + 49) != KeGetCurrentThread() )
  {
    WdLogSingleEntry1(1LL, 3038LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"DXGGLOBAL::GetGlobal()->IsProcessCalloutMutexOwner()",
      3038LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v11 = Object;
  *a4 = 0;
  *v11 = 0LL;
  *(_BYTE *)PrivilegeValue.LowPart = 0;
  Object = 0LL;
  v12 = ObReferenceObjectByHandle(Handle, DesiredAccess, (POBJECT_TYPE)PsProcessType, 1, (PVOID *)&Object, 0LL);
  v13 = Object;
  v14 = v12;
  if ( v12 < 0 )
  {
    if ( (*((_DWORD *)DXGGLOBAL_GetGlobal() + 428) & 1) != 0 )
      WdLogSingleEntry5(0LL, 275LL, 33LL, v14, 0LL, 0LL);
    WdLogSingleEntry1(3LL, Handle);
    return (unsigned int)v14;
  }
  if ( !Object )
  {
    WdLogSingleEntry1(1LL, 3072LL);
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pEProcess", 3072LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( (unsigned __int8)PsGetProcessExitProcessCalled(v13) )
  {
    LODWORD(v14) = -1073741558;
    WdLogSingleEntry3(4LL, v13, Handle, -1073741558LL);
    goto LABEL_13;
  }
  ProcessDxgProcess = PsGetProcessDxgProcess(v13);
  if ( !ProcessDxgProcess )
  {
    WdLogSingleEntry1(4LL, v13);
    LODWORD(v14) = -1073741811;
LABEL_13:
    ObfDereferenceObject(v13);
    return (unsigned int)v14;
  }
  ProcessSessionId = PsGetProcessSessionId(v13);
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId() )
  {
    if ( a3 )
    {
      CurrentProcess = PsGetCurrentProcess(v18, v17, v19, v20);
      WdLogSingleEntry2(3LL, CurrentProcess, v13);
    }
    else
    {
      *(_BYTE *)PrivilegeValue.LowPart = SeSinglePrivilegeCheck((LUID)14LL, 1) != 0;
      KeStackAttachProcess((PRKPROCESS)v13, ApcState);
      *a4 = 1;
    }
  }
  if ( *(struct DXGPROCESS ***)(ProcessDxgProcess + 56) != v13 )
  {
    WdLogSingleEntry1(1LL, 3132LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pDxgProcess->GetEProcess() == pEProcess",
      3132LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  *v11 = (struct DXGPROCESS *)ProcessDxgProcess;
  return 0LL;
}
