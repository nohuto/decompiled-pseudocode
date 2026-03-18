/*
 * XREFs of ?DestroyClassBrush@@YAXAEBV?$SmartObjStackRef@UtagCLS@@@@@Z @ 0x1C00D4198
 * Callers:
 *     DestroyClass @ 0x1C00D30CC (DestroyClass.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 */

__int64 __fastcall DestroyClassBrush(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 CurrentProcessWin32Process; // rax
  struct _KTHREAD *CurrentThread; // r14
  __int64 v6; // rdi
  __int64 v7; // r15
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v13; // rbx
  __int64 result; // rax
  _QWORD *v15; // rcx
  unsigned int v16; // edx
  __int64 v17; // r8
  __int64 *i; // rbx
  __int64 **v19; // rax
  __int64 j; // rbx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v23; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 **v25; // [rsp+20h] [rbp-10h] BYREF
  __int64 v26; // [rsp+28h] [rbp-8h] BYREF

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1, a2, a3);
  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  v7 = CurrentProcessWin32Process;
  if ( !(unsigned __int8)KeIsAttachedProcess(v8)
    || (CurrentProcess = PsGetCurrentProcess(v10, v9, v11),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v23),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v6 = *ThreadWin32Thread;
  }
  v25 = (__int64 **)gSmartObjNullRef;
  v26 = *(_QWORD *)(v6 + 1472);
  *(_QWORD *)(v6 + 1472) = &v26;
  if ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) > 0x1FuLL )
  {
    v16 = 0;
    v17 = 4696LL;
    while ( *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) != *(_QWORD *)(v17 + gpsi) )
    {
      ++v16;
      v17 += 8LL;
      if ( v16 >= 0x1F )
      {
        for ( i = *(__int64 **)(v7 + 352); ; i = (__int64 *)**v25 )
        {
          if ( i != *v25 )
          {
            if ( v25 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v25 + 2) )
            {
              if ( *((_BYTE *)v25 + 12) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v25);
            }
            if ( i )
            {
              v25 = (__int64 **)i[16];
              ++*((_DWORD *)v25 + 2);
            }
            else
            {
              v25 = (__int64 **)gSmartObjNullRef;
            }
          }
          v19 = v25;
          if ( !*v25 )
            break;
          if ( *v25 != **(__int64 ***)a1
            && *(_QWORD *)((*v25)[1] + 72) == *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) )
          {
            goto LABEL_5;
          }
        }
        for ( j = *(_QWORD *)(v7 + 344); ; j = **v25 )
        {
          if ( (__int64 *)j != *v19 )
          {
            if ( v25 != (__int64 **)gSmartObjNullRef && !--*((_DWORD *)v25 + 2) )
            {
              if ( *((_BYTE *)v25 + 12) )
                Win32FreeToPagedLookasideList(gpStackRefLookAside, v25);
            }
            if ( j )
            {
              v25 = *(__int64 ***)(j + 128);
              ++*((_DWORD *)v25 + 2);
            }
            else
            {
              v25 = (__int64 **)gSmartObjNullRef;
            }
          }
          if ( !*v25 )
            break;
          if ( *v25 != **(__int64 ***)a1
            && *(_QWORD *)((*v25)[1] + 72) == *(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL) )
          {
            goto LABEL_5;
          }
          v19 = v25;
        }
        GreDeleteObject(*(_QWORD *)(*(_QWORD *)(**(_QWORD **)a1 + 8LL) + 72LL));
        break;
      }
    }
  }
LABEL_5:
  v13 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  result = SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree((__int64 *)&v25);
  v15 = *(_QWORD **)(v13 + 1472);
  if ( v15 )
    *(_QWORD *)(v13 + 1472) = *v15;
  return result;
}
