/*
 * XREFs of _RegisterClassEx @ 0x1C00D077C
 * Callers:
 *     NtUserRegisterClassExWOW @ 0x1C00CFF00 (NtUserRegisterClassExWOW.c)
 * Callees:
 *     HMValidateHandleNoRip @ 0x1C0076550 (HMValidateHandleNoRip.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     InternalRegisterClassEx @ 0x1C00D237C (InternalRegisterClassEx.c)
 *     ?DecrementCountAndTryFree@?$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ @ 0x1C00D357C (-DecrementCountAndTryFree@-$SmartObjStackRefBase@UtagCLS@@@@IEAAXXZ.c)
 */

__int64 __fastcall RegisterClassEx(__int64 a1, _QWORD *a2, unsigned __int16 a3, unsigned int a4)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 *ThreadWin32Thread; // rax
  __int64 v14; // rbx
  unsigned __int16 v15; // bx
  __int64 v16; // rdi
  _QWORD *v17; // rcx
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // ebx
  __int64 v21; // rcx
  __int64 CurrentThreadProcess; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+20h] [rbp-10h] BYREF
  __int64 v25; // [rsp+28h] [rbp-8h] BYREF
  int v26; // [rsp+78h] [rbp+48h] BYREF

  CurrentThread = KeGetCurrentThread();
  v9 = 0LL;
  if ( !(unsigned __int8)KeIsAttachedProcess(a1)
    || (CurrentProcess = PsGetCurrentProcess(v11, v10, v12),
        ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
        CurrentThreadProcess = PsGetCurrentThreadProcess(v21),
        ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
  {
    ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
    if ( ThreadWin32Thread )
      v9 = *ThreadWin32Thread;
  }
  v24 = gSmartObjNullRef;
  v25 = *(_QWORD *)(v9 + 1472);
  *(_QWORD *)(v9 + 1472) = &v25;
  if ( (*(_DWORD *)(a1 + 8) & 0xFFFF0000) == 0xFFFF0000 )
  {
    v23 = HMValidateHandleNoRip(*(_QWORD *)(a1 + 8), 7);
    if ( v23 )
      *(_QWORD *)(a1 + 8) = *(_QWORD *)(*(_QWORD *)(v23 + 40) + 16LL);
  }
  v26 = 0;
  v14 = InternalRegisterClassEx(a1, a3, a4, &v26);
  if ( v14 != *(_QWORD *)v24 )
  {
    if ( v24 != gSmartObjNullRef && !--*(_DWORD *)(v24 + 8) )
    {
      if ( *(_BYTE *)(v24 + 12) )
        Win32FreeToPagedLookasideList(gpStackRefLookAside, v24);
    }
    if ( v14 )
    {
      v24 = *(_QWORD *)(v14 + 128);
      ++*(_DWORD *)(v24 + 8);
    }
    else
    {
      v24 = gSmartObjNullRef;
    }
  }
  if ( *(_QWORD *)v24 )
  {
    if ( !v26 )
    {
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 8LL) + 24LL) = a2[1];
      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v24 + 8LL) + 16LL) = *a2;
      *(_WORD *)(*(_QWORD *)v24 + 30LL) = 0;
    }
    v15 = *(_WORD *)(*(_QWORD *)(*(_QWORD *)v24 + 8LL) + 2LL);
  }
  else
  {
    v15 = 0;
  }
  v16 = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  SmartObjStackRefBase<tagCLS>::DecrementCountAndTryFree(&v24);
  v17 = *(_QWORD **)(v16 + 1472);
  if ( v17 )
    *(_QWORD *)(v16 + 1472) = *v17;
  return v15;
}
