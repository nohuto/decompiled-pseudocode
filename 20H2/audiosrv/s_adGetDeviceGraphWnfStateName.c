/*
 * XREFs of s_adGetDeviceGraphWnfStateName @ 0x18012DBD0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x1800103A4 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180010A20 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ?WpRpcBindingFree@details@wil@@YAXPEAX@Z @ 0x180047744 (-WpRpcBindingFree@details@wil@@YAXPEAX@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18004BEB4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z @ 0x18004CB68 (-GetADGProcessBindingHandle@CAudioDGProcess@@SAJPEAPEAX@Z.c)
 *     _lambda_9268d9d4379208cfe1cd98081c6e861f_::operator() @ 0x18012D75C (_lambda_9268d9d4379208cfe1cd98081c6e861f_--operator().c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18012D80C (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 */

__int64 __fastcall s_adGetDeviceGraphWnfStateName(__int64 a1, __int64 a2, _QWORD *a3)
{
  LPCRITICAL_SECTION v3; // rdi
  int DebugInfo; // ebx
  void *v6; // rdx
  wil::details *v7; // rdi
  DWORD LastError; // ebx
  void *v9; // rdx
  int ADGProcessBindingHandle; // eax
  __int64 v11; // rdx
  LPCRITICAL_SECTION v12; // rdi
  int v15[2]; // [rsp+20h] [rbp-18h] BYREF
  __int64 *v16; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  __int64 v18; // [rsp+48h] [rbp+10h] BYREF
  RPC_BINDING_HANDLE Binding; // [rsp+58h] [rbp+20h] BYREF

  v18 = a2;
  v3 = g_ADGProcess;
  Binding = 0LL;
  EnterCriticalSection(g_ADGProcess);
  DebugInfo = ++LODWORD(v3[1].DebugInfo);
  if ( DebugInfo == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer(v3);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v3);
    DebugInfo = (int)v3[1].DebugInfo;
  }
  LeaveCriticalSection(v3);
  if ( DebugInfo < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x33F,
      (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
      (const char *)(unsigned int)DebugInfo);
    goto LABEL_15;
  }
  v7 = (wil::details *)Binding;
  if ( Binding )
  {
    LastError = GetLastError();
    wil::details::WpRpcBindingFree(v7, v9);
    SetLastError(LastError);
  }
  ADGProcessBindingHandle = CAudioDGProcess::GetADGProcessBindingHandle(&Binding);
  DebugInfo = ADGProcessBindingHandle;
  if ( ADGProcessBindingHandle >= 0 )
  {
    *(_QWORD *)v15 = &Binding;
    v16 = &v18;
    ADGProcessBindingHandle = lambda_9268d9d4379208cfe1cd98081c6e861f_::operator()((_QWORD **)v15);
    DebugInfo = ADGProcessBindingHandle;
    if ( ADGProcessBindingHandle >= 0 )
    {
      DebugInfo = 0;
      *a3 = *(_QWORD *)&g_ADGProcess[2].LockCount;
      goto LABEL_15;
    }
    v11 = 843LL;
  }
  else
  {
    v11 = 834LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v11,
    (__int64)"avcore\\audiocore\\server\\lib\\audioengineutil\\adgprocess.cpp",
    (const char *)(unsigned int)ADGProcessBindingHandle);
  v12 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  if ( LODWORD(v12[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v12);
  LeaveCriticalSection(v12);
LABEL_15:
  if ( Binding )
    wil::details::WpRpcBindingFree((wil::details *)Binding, v6);
  return (unsigned int)DebugInfo;
}
