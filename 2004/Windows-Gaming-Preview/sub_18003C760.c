/*
 * XREFs of sub_18003C760 @ 0x18003C760
 * Callers:
 *     sub_18001B2D8 @ 0x18001B2D8 (sub_18001B2D8.c)
 * Callees:
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 *     sub_18003D358 @ 0x18003D358 (sub_18003D358.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void sub_18003C760()
{
  RTL_SRWLOCK *v0; // rbx
  HANDLE EventW; // rdi
  HANDLE v2; // rcx
  volatile signed __int32 *v3; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  struct _TP_WORK *v5; // rbx
  signed int LastError; // eax
  DWORD v7; // ecx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  EnterCriticalSection(&stru_18005AF28);
  if ( (_QWORD)xmmword_18005AF18 )
  {
LABEL_15:
    if ( !pwk )
    {
      ThreadpoolWork = CreateThreadpoolWork(pfnwk, 0LL, 0LL);
      v5 = ThreadpoolWork;
      if ( ThreadpoolWork )
      {
        SubmitThreadpoolWork(ThreadpoolWork);
        pwk = v5;
      }
    }
    goto LABEL_18;
  }
  v0 = (RTL_SRWLOCK *)operator new(0x20uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( v0 )
  {
    v0->Ptr = off_18004DA80;
    v0[1].Ptr = 0LL;
    InitializeSRWLock(v0 + 2);
  }
  else
  {
    v0 = 0LL;
  }
  if ( v0 )
  {
    EventW = CreateEventW(0LL, 1, 0, L"KglReady");
    v2 = hHandle;
    if ( EventW != hHandle )
    {
      if ( hHandle && !CloseHandle(hHandle) )
      {
        LastError = GetLastError();
        v7 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v7 = LastError;
        sub_180011F90(v7);
        JUMPOUT(0x18003C925LL);
      }
      v2 = EventW;
      hHandle = EventW;
    }
    if ( v2 )
    {
      v8 = 0LL;
      sub_18003D358(&v8, v0);
      v3 = (volatile signed __int32 *)*((_QWORD *)&xmmword_18005AF18 + 1);
      xmmword_18005AF18 = v8;
      if ( v3 )
      {
        if ( _InterlockedExchangeAdd(v3 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v3)(v3);
          if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 8LL))(v3);
        }
      }
    }
    goto LABEL_15;
  }
LABEL_18:
  LeaveCriticalSection(&stru_18005AF28);
}
