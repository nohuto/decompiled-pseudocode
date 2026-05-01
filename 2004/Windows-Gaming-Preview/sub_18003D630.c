/*
 * XREFs of sub_18003D630 @ 0x18003D630
 * Callers:
 *     sub_18001B2D8 @ 0x18001B2D8 (sub_18001B2D8.c)
 * Callees:
 *     sub_180011F90 @ 0x180011F90 (sub_180011F90.c)
 *     sub_18003D358 @ 0x18003D358 (sub_18003D358.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180044808 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180045CB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
void sub_18003D630()
{
  _DWORD *v0; // rbx
  HANDLE EventW; // rdi
  HANDLE v2; // rcx
  volatile signed __int32 *v3; // rbx
  struct _TP_WORK *ThreadpoolWork; // rax
  struct _TP_WORK *v5; // rbx
  signed int LastError; // eax
  DWORD v7; // ecx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  EnterCriticalSection(&stru_18005AF60);
  if ( (_QWORD)xmmword_18005AF50 )
  {
LABEL_15:
    if ( !qword_18005AE00 )
    {
      ThreadpoolWork = CreateThreadpoolWork(sub_18003D9C0, 0LL, 0LL);
      v5 = ThreadpoolWork;
      if ( ThreadpoolWork )
      {
        SubmitThreadpoolWork(ThreadpoolWork);
        qword_18005AE00 = v5;
      }
    }
    goto LABEL_18;
  }
  v0 = operator new(0x30uLL, (const struct std::nothrow_t *)&unk_18005AF88);
  if ( v0 )
  {
    *(_QWORD *)v0 = off_18004DAB0;
    v0[2] = 0;
    *((_QWORD *)v0 + 2) = 0LL;
    v0[6] = 0;
    *((_BYTE *)v0 + 28) = 0;
    *((_QWORD *)v0 + 4) = 0LL;
    *((_QWORD *)v0 + 5) = 0LL;
  }
  else
  {
    v0 = 0LL;
  }
  if ( v0 )
  {
    EventW = CreateEventW(0LL, 1, 0, L"DefaultsReady");
    v2 = hEvent;
    if ( EventW != hEvent )
    {
      if ( hEvent && !CloseHandle(hEvent) )
      {
        LastError = GetLastError();
        v7 = (unsigned __int16)LastError | 0x80070000;
        if ( LastError <= 0 )
          v7 = LastError;
        sub_180011F90(v7);
        JUMPOUT(0x18003D7FBLL);
      }
      v2 = EventW;
      hEvent = EventW;
    }
    if ( v2 )
    {
      v8 = 0LL;
      sub_18003D358(&v8, (void (__fastcall ***)(_QWORD, __int64))v0);
      v3 = (volatile signed __int32 *)*((_QWORD *)&xmmword_18005AF50 + 1);
      xmmword_18005AF50 = v8;
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
  LeaveCriticalSection(&stru_18005AF60);
}
