/*
 * XREFs of ?GetByHandle@DXGPROCESS@@KAJPEAXK_NPEA_N2PEAU_KAPC_STATE@@PEAPEAV1@@Z @ 0x1C00DA594
 * Callers:
 *     ?AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z @ 0x1C00DA4A0 (-AcquireInternal@DXGPROCESSMUTEXBYHANDLE@@AEAAJ_N@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C000A650 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DXGPROCESS::GetByHandle(
        HANDLE Handle,
        __int64 DesiredAccess,
        char a3,
        bool *a4,
        bool *a5,
        PRKAPC_STATE ApcState,
        LUID PrivilegeValue)
{
  ACCESS_MASK v9; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  bool *v13; // r12
  struct DXGPROCESS **v14; // r15
  NTSTATUS v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  PVOID v18; // rdi
  __int64 v19; // rbx
  __int64 ProcessDxgProcess; // rsi
  int ProcessSessionId; // ebx
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v26; // rax
  BOOLEAN v27; // al
  struct _KAPC_STATE *v28; // rdx
  __int64 v29; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  __int64 v32; // r8
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  _QWORD *v36; // rax
  __int64 v37; // rbx
  __int64 CurrentProcess; // rax
  __int64 v39; // rax
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v9 = DesiredAccess;
  if ( *((struct _KTHREAD **)DXGGLOBAL::GetGlobal((__int64)Handle, DesiredAccess) + 28) != KeGetCurrentThread() )
  {
    v26 = WdLogNewEntry5_WdAssertion(v12, v11);
    *(_QWORD *)(v26 + 24) = 2918LL;
    WdLogEvent5_WdAssertion(v26);
  }
  v13 = a5;
  v14 = (struct DXGPROCESS **)PrivilegeValue;
  Object = 0LL;
  *a4 = 0;
  *v14 = 0LL;
  *v13 = 0;
  v15 = ObReferenceObjectByHandle(Handle, v9, (POBJECT_TYPE)PsProcessType, 1, &Object, 0LL);
  v18 = Object;
  v19 = v15;
  if ( v15 < 0 )
  {
    v31 = *((unsigned int *)DXGGLOBAL::GetGlobal(v17, v16) + 358);
    if ( (v31 & 1) != 0 )
    {
      v33 = WdLogNewEntry5_WdCriticalError(v31, v30);
      *(_QWORD *)(v33 + 24) = 275LL;
      *(_QWORD *)(v33 + 32) = 33LL;
      *(_QWORD *)(v33 + 40) = v19;
      *(_OWORD *)(v33 + 48) = 0LL;
      WdLogEvent5_WdCriticalError(v33);
    }
    v34 = WdLogNewEntry5_WdWarning(v31, v30, v32);
    *(_QWORD *)(v34 + 24) = Handle;
    WdLogEvent5_WdWarning(v34);
    return (unsigned int)v19;
  }
  if ( !Object )
  {
    v35 = WdLogNewEntry5_WdAssertion(v17, v16);
    *(_QWORD *)(v35 + 24) = 2952LL;
    WdLogEvent5_WdAssertion(v35);
  }
  if ( (unsigned __int8)PsGetProcessExitProcessCalled(v18) )
  {
    v36 = (_QWORD *)WdLogNewEntry5_WdEvent();
    LODWORD(v19) = -1073741558;
    v36[3] = v18;
    v36[4] = Handle;
    v36[5] = -1073741558LL;
    WdLogEvent5_WdEvent(v36);
LABEL_16:
    ObfDereferenceObject(v18);
    return (unsigned int)v19;
  }
  ProcessDxgProcess = PsGetProcessDxgProcess(v18);
  if ( !ProcessDxgProcess )
  {
    v29 = WdLogNewEntry5_WdEvent();
    *(_QWORD *)(v29 + 24) = v18;
    WdLogEvent5_WdEvent(v29);
    LODWORD(v19) = -1073741811;
  }
  if ( (int)v19 < 0 )
    goto LABEL_16;
  ProcessSessionId = PsGetProcessSessionId(v18);
  if ( ProcessSessionId != (unsigned int)PsGetCurrentProcessSessionId() )
  {
    if ( a3 )
    {
      v37 = WdLogNewEntry5_WdWarning(v23, v22, v24);
      CurrentProcess = PsGetCurrentProcess();
      *(_QWORD *)(v37 + 32) = v18;
      *(_QWORD *)(v37 + 24) = CurrentProcess;
      WdLogEvent5_WdWarning(v37);
    }
    else
    {
      PrivilegeValue = (LUID)14LL;
      v27 = SeSinglePrivilegeCheck((LUID)14LL, 1);
      v28 = ApcState;
      *v13 = v27 != 0;
      KeStackAttachProcess((PRKPROCESS)v18, v28);
      *a4 = 1;
    }
  }
  if ( *(PVOID *)(ProcessDxgProcess + 56) != v18 )
  {
    v39 = WdLogNewEntry5_WdAssertion(v23, v22);
    *(_QWORD *)(v39 + 24) = 3012LL;
    WdLogEvent5_WdAssertion(v39);
  }
  *v14 = (struct DXGPROCESS *)ProcessDxgProcess;
  return 0LL;
}
