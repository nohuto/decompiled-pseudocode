/*
 * XREFs of ?GetSpecialAppTransitionInfo@CAppTransitionManager@@UEAAJPEAUIApplicationView@@PEAW4AppTransitionTargetSpecialFlags@@@Z @ 0x1803A4390
 * Callers:
 *     <none>
 * Callees:
 *     ?SHIsSameObject@@YAHPEAUIUnknown@@0@Z @ 0x18003EF48 (-SHIsSameObject@@YAHPEAUIUnknown@@0@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180068524 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x18007C124 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 */

__int64 __fastcall CAppTransitionManager::GetSpecialAppTransitionInfo(
        CAppTransitionManager *this,
        struct IUnknown *a2,
        enum AppTransitionTargetSpecialFlags *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // r14
  int v7; // eax
  int v8; // r12d
  unsigned int v9; // ebx
  unsigned __int64 v10; // rbp
  unsigned __int64 v11; // rbx
  __int64 v12; // rsi
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v6 = (struct _RTL_CRITICAL_SECTION *)(((unsigned __int64)this + 24) & -(__int64)(this != (CAppTransitionManager *)96));
  v7 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread((__int64)v6, 1);
  *(_DWORD *)a3 = 0;
  v8 = v7;
  if ( *((_DWORD *)this + 51) )
  {
    v10 = *((_QWORD *)this + 18);
    v11 = 0LL;
    if ( v10 )
    {
      v12 = 0LL;
      while ( !(unsigned int)SHIsSameObject(a2, *(struct IUnknown **)(v12 + *((_QWORD *)this + 17))) )
      {
        ++v11;
        v12 += 16LL;
        if ( v11 >= v10 )
          goto LABEL_9;
      }
      *(_DWORD *)a3 = *(_DWORD *)(*((_QWORD *)this + 17) + 16 * v11 + 8);
    }
LABEL_9:
    v9 = 0;
  }
  else
  {
    v9 = -2147019873;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x166,
      (__int64)"pcshell\\twinui\\apptransitionmanager\\lib\\apptransitionmanager.cpp",
      (const char *)0x8007139FLL);
  }
  if ( v8 >= 0 )
    LeaveCriticalSection(v6);
  return v9;
}
