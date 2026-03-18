/*
 * XREFs of NtUserProcessInkFeedbackCommand @ 0x1C0201030
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x1C0090F00 (UserSetLastError.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     ?InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z @ 0x1C0221188 (-InkProcessorProcessInkFeedbackCommand@@YAJIPEAXI@Z.c)
 */

__int64 __fastcall NtUserProcessInkFeedbackCommand(unsigned int a1, void *Src, unsigned int a3)
{
  SIZE_T v3; // r14
  int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  void *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  void *v15; // rdi

  v3 = a3;
  v6 = 0;
  EnterSharedCrit(0LL, 1LL);
  if ( (_DWORD)v3 )
  {
    ProbeForRead(Src, v3, 1u);
    v12 = (void *)Win32AllocPoolWithQuota(v3, 1768452949LL);
    v15 = v12;
    if ( v12 )
    {
      memmove(v12, Src, v3);
      LOBYTE(v6) = (int)InkProcessorProcessInkFeedbackCommand(a1, v15, v3) >= 0;
      Win32FreePool(v15);
    }
    else
    {
      UserSetLastError(8LL, v13, v14);
    }
  }
  else
  {
    UserSetLastError(87LL, v7, v8);
  }
  UserSessionSwitchLeaveCrit(v10, v9, v11);
  return v6;
}
