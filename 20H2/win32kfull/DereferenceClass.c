/*
 * XREFs of DereferenceClass @ 0x1C00D2C70
 * Callers:
 *     xxxCreateWindowEx @ 0x1C00B5990 (xxxCreateWindowEx.c)
 *     xxxFreeWindow @ 0x1C00D094C (xxxFreeWindow.c)
 *     _lambda_cd33d3260540cb20afcdcf97ba84ccae_::operator() @ 0x1C015CC14 (_lambda_cd33d3260540cb20afcdcf97ba84ccae_--operator().c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     DestroyClass @ 0x1C00D30CC (DestroyClass.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 */

__int64 __fastcall DereferenceClass(struct tagPROCESSINFO *a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // r15
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 result; // rax
  _QWORD *v14; // rcx
  _QWORD **v15; // rdx
  _QWORD *i; // r8
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v19; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v21; // [rsp+20h] [rbp-10h] BYREF
  __int64 v22; // [rsp+28h] [rbp-8h] BYREF

  v2 = *(_QWORD *)(a2 + 136);
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v8, v7, v9),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v19),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v21 = gSmartObjNullRef;
  if ( v2 )
  {
    v21 = *(_QWORD *)(v2 + 128);
    ++*(_DWORD *)(*(_QWORD *)(v2 + 128) + 8LL);
  }
  v22 = *(_QWORD *)(v6 + 1472);
  *(_QWORD *)(v6 + 1472) = &v22;
  *(_QWORD *)(*(_QWORD *)(a2 + 40) + 128LL) = 0LL;
  v11 = v21;
  *(_QWORD *)(a2 + 136) = 0LL;
  --*(_DWORD *)(*(_QWORD *)v11 + 72LL);
  if ( *(_QWORD *)v21 != *(_QWORD *)(*(_QWORD *)v21 + 56LL) )
  {
    --*(_DWORD *)(*(_QWORD *)(*(_QWORD *)v21 + 56LL) + 72LL);
    if ( !*(_DWORD *)(*(_QWORD *)v21 + 72LL) )
    {
      v15 = (_QWORD **)(*(_QWORD *)(*(_QWORD *)v21 + 56LL) + 64LL);
      for ( i = *v15; i != *(_QWORD **)v21; i = (_QWORD *)*i )
        ;
      DestroyClass(a1);
    }
  }
  v12 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v21);
  v14 = *(_QWORD **)(v12 + 1472);
  if ( v14 )
    *(_QWORD *)(v12 + 1472) = *v14;
  return result;
}
