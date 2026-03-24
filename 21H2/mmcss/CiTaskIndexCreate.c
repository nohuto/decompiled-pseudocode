/*
 * XREFs of CiTaskIndexCreate @ 0x1C000B170
 * Callers:
 *     CiDispatchCreateTaskIndexClient @ 0x1C000A580 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000AA00 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     CiAllocateMemory @ 0x1C0001AE0 (CiAllocateMemory.c)
 *     WPP_SF_ @ 0x1C00043F8 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1C0004644 (WPP_SF_d.c)
 *     CiFreeMemory @ 0x1C0004B3C (CiFreeMemory.c)
 *     CiTaskIndexLocate @ 0x1C000B300 (CiTaskIndexLocate.c)
 */

__int64 __fastcall CiTaskIndexCreate(__int64 a1, _QWORD *a2)
{
  _QWORD *Memory; // rax
  char *v5; // rbx
  _QWORD *v6; // rax
  HANDLE CurrentThreadId; // rax
  int v8; // edi
  PKDEFERRED_ROUTINE **v9; // rax
  struct _DEVICE_OBJECT **DeferredContext; // rcx
  __int64 v12; // [rsp+40h] [rbp+18h] BYREF

  Memory = CiAllocateMemory(0xC0uLL);
  v5 = (char *)Memory;
  if ( Memory )
  {
    *(_DWORD *)Memory = 2;
    Memory[6] = 1LL;
    Memory[17] = a1;
    Memory[1] = 0LL;
    v6 = Memory + 4;
    v6[1] = v6;
    *v6 = v6;
    *((_QWORD *)v5 + 19) = PsGetCurrentProcessId();
    CurrentThreadId = PsGetCurrentThreadId();
    *((_QWORD *)v5 + 10) = 0LL;
    *((_QWORD *)v5 + 20) = CurrentThreadId;
    *((_DWORD *)v5 + 22) = 1;
    v8 = 0;
    v5[92] = 0;
    *((_QWORD *)v5 + 15) = 0LL;
    *((_DWORD *)v5 + 32) = 1;
    v5[132] = 0;
    *((_DWORD *)v5 + 46) = 0;
    ExAcquirePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
    WPP_MAIN_CB.Dpc.ProcessorHistory = (KAFFINITY)KeGetCurrentThread();
    if ( (unsigned int)CiTaskIndicesCount >= 0x80 )
    {
      v8 = -1073741527;
    }
    else
    {
      v12 = 0LL;
      do
        ++CiTaskIndex;
      while ( (int)CiTaskIndexLocate((unsigned int)CiTaskIndex, 0LL, &v12) >= 0 );
      ++CiTaskIndicesCount;
      *((_DWORD *)v5 + 36) = CiTaskIndex;
      v9 = (PKDEFERRED_ROUTINE **)(v5 + 168);
      DeferredContext = (struct _DEVICE_OBJECT **)WPP_MAIN_CB.Dpc.DeferredContext;
      *a2 = v5;
      if ( *DeferredContext != (struct _DEVICE_OBJECT *)&WPP_MAIN_CB.Dpc.DeferredRoutine )
        __fastfail(3u);
      *v9 = &WPP_MAIN_CB.Dpc.DeferredRoutine;
      *((_QWORD *)v5 + 22) = DeferredContext;
      *DeferredContext = (struct _DEVICE_OBJECT *)v9;
      WPP_MAIN_CB.Dpc.DeferredContext = v5 + 168;
    }
    WPP_MAIN_CB.Dpc.ProcessorHistory = 0LL;
    ExReleasePushLockExclusiveEx(&WPP_MAIN_CB.Dpc.DpcListEntry, 0LL);
    if ( v8 < 0 )
    {
      if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
        WPP_SF_(
          (__int64)WPP_GLOBAL_Control->AttachedDevice,
          0xBu,
          (__int64)&WPP_8385e6e809cc3e01c39cfb60d1a8e0a8_Traceguids);
      CiFreeMemory(v5);
    }
    return (unsigned int)v8;
  }
  else
  {
    if ( (HIDWORD(WPP_GLOBAL_Control->Timer) & 1) != 0 && BYTE1(WPP_GLOBAL_Control->Timer) >= 2u )
      WPP_SF_d(
        (__int64)WPP_GLOBAL_Control->AttachedDevice,
        0xAu,
        (__int64)&WPP_8385e6e809cc3e01c39cfb60d1a8e0a8_Traceguids,
        -1073741801);
    return 3221225495LL;
  }
}
