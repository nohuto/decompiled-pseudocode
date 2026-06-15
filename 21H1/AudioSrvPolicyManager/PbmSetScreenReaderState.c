/*
 * XREFs of PbmSetScreenReaderState @ 0x1800299B0
 * Callers:
 *     <none>
 * Callees:
 *     ?RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z @ 0x180021144 (-RpcGetProcess@CApplicationManager@@QEAAJPEAXPEAPEAVCProcess@@@Z.c)
 *     ??$QueueApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUScreenReaderStateChangedContext@@@Z0@Z @ 0x180029E34 (--$QueueApplicationManagerWorkItem@UScreenReaderStateChangedContext@@@@YAJP8CApplicationManager@.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18003F658 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall PbmSetScreenReaderState(void *a1, int a2, int a3)
{
  int Process; // edi
  HANDLE ProcessHeap; // rax
  __int64 v7; // rcx
  _DWORD *v8; // rbx
  volatile signed __int32 *v9; // rsi
  struct CProcess *v10; // rbx
  struct CProcess *v12; // [rsp+20h] [rbp-28h] BYREF

  v12 = 0LL;
  Process = 0;
  if ( g_ApplicationManager )
  {
    Process = CApplicationManager::RpcGetProcess(g_ApplicationManager, a1, &v12);
    if ( Process >= 0 )
    {
      ProcessHeap = GetProcessHeap();
      v8 = HeapAlloc(ProcessHeap, 0, 0x10uLL);
      if ( v8 )
      {
        *(_QWORD *)v8 = v12;
        v8[2] = a2;
        v8[3] = a3;
        _InterlockedIncrement((volatile signed __int32 *)v12 + 2);
      }
      else
      {
        v8 = 0LL;
      }
      if ( v8 )
      {
        Process = QueueApplicationManagerWorkItem<ScreenReaderStateChangedContext>(v7, v8);
        if ( Process >= 0 )
          v8 = 0LL;
      }
      else
      {
        Process = -2147024882;
      }
      if ( v8 )
      {
        v9 = *(volatile signed __int32 **)v8;
        if ( *(_QWORD *)v8 )
        {
          if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
          {
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 32LL))(v9);
            (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
          }
          *(_QWORD *)v8 = 0LL;
        }
        operator delete(v8, (const struct std::nothrow_t *)0x10);
      }
    }
    v10 = v12;
    if ( v12 && _InterlockedExchangeAdd((volatile signed __int32 *)v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(struct CProcess *))(*(_QWORD *)v12 + 32LL))(v12);
      (*(void (__fastcall **)(struct CProcess *, __int64))(*(_QWORD *)v10 + 24LL))(v10, 1LL);
    }
  }
  return (unsigned int)Process;
}
