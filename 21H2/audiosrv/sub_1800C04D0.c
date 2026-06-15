/*
 * XREFs of sub_1800C04D0 @ 0x1800C04D0
 * Callers:
 *     sub_1800C0BA0 @ 0x1800C0BA0 (sub_1800C0BA0.c)
 *     sub_1800C1CC0 @ 0x1800C1CC0 (sub_1800C1CC0.c)
 * Callees:
 *     sub_180008448 @ 0x180008448 (sub_180008448.c)
 *     sub_18005EC54 @ 0x18005EC54 (sub_18005EC54.c)
 *     ?_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z @ 0x1800B704C (-_TlgKeywordOn@__vcrt_trace_logging_provider@@YAEPEBU_TlgProvider_t@1@_K@Z.c)
 *     sub_1800BED28 @ 0x1800BED28 (sub_1800BED28.c)
 *     sub_1800C0F9C @ 0x1800C0F9C (sub_1800C0F9C.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall sub_1800C04D0(LPCRITICAL_SECTION lpCriticalSection)
{
  HANDLE OwningThread; // rcx
  double DebugInfo; // xmm1_8
  __int64 v4; // rcx
  __int64 *v5; // rax
  __int64 v6; // r8
  __int64 v7; // r9
  _DWORD *LockSemaphore; // rdx
  int v9; // ecx
  int SpinCount_high; // [rsp+C0h] [rbp-80h] BYREF
  int SpinCount; // [rsp+C4h] [rbp-7Ch] BYREF
  int v12; // [rsp+C8h] [rbp-78h] BYREF
  LONG RecursionCount; // [rsp+CCh] [rbp-74h] BYREF
  LONG v14; // [rsp+D0h] [rbp-70h] BYREF
  int v15; // [rsp+D4h] [rbp-6Ch] BYREF
  int v16; // [rsp+D8h] [rbp-68h] BYREF
  int v17; // [rsp+DCh] [rbp-64h] BYREF
  int OwningThread_high; // [rsp+E0h] [rbp-60h] BYREF
  int v19; // [rsp+E4h] [rbp-5Ch] BYREF
  int v20; // [rsp+E8h] [rbp-58h] BYREF
  int v21; // [rsp+ECh] [rbp-54h] BYREF
  double v22; // [rsp+F0h] [rbp-50h] BYREF
  __int64 v23; // [rsp+F8h] [rbp-48h] BYREF
  int v24; // [rsp+100h] [rbp-40h]
  LARGE_INTEGER PerformanceCount; // [rsp+108h] [rbp-38h] BYREF
  double v26; // [rsp+110h] [rbp-30h] BYREF
  void *v27; // [rsp+118h] [rbp-28h] BYREF
  void *v28; // [rsp+120h] [rbp-20h] BYREF
  LPCRITICAL_SECTION v29; // [rsp+150h] [rbp+10h] BYREF
  LONG LockCount; // [rsp+158h] [rbp+18h] BYREF
  int DebugInfo_high; // [rsp+160h] [rbp+20h] BYREF
  int v32; // [rsp+168h] [rbp+28h] BYREF

  EnterCriticalSection(lpCriticalSection);
  v29 = lpCriticalSection;
  if ( lpCriticalSection[1].LockSemaphore
    && (__int64)lpCriticalSection[1].DebugInfo > 0
    && SHIDWORD(lpCriticalSection[2].OwningThread) > 0 )
  {
    QueryPerformanceCounter(&PerformanceCount);
    OwningThread = lpCriticalSection[3].OwningThread;
    DebugInfo = (double)(int)lpCriticalSection[1].DebugInfo;
    if ( LOBYTE(lpCriticalSection[1].OwningThread)
      || (double)(PerformanceCount.LowPart - (int)OwningThread) / DebugInfo >= 30.0 )
    {
      v22 = (double)((int)OwningThread - LODWORD(lpCriticalSection[2].LockSemaphore)) / DebugInfo;
      sub_18005EC54(lpCriticalSection, (float *)&v23);
      v5 = sub_180008448(v4, sub_1800B6240);
      if ( *(_DWORD *)v5[1] > 4u
        && __vcrt_trace_logging_provider::_TlgKeywordOn((__vcrt_trace_logging_provider *)v5[1], 0x400000000000uLL) )
      {
        LockSemaphore = lpCriticalSection[1].LockSemaphore;
        v9 = LockSemaphore[20];
        LODWORD(v29) = lpCriticalSection[3].RecursionCount;
        LockCount = lpCriticalSection[3].LockCount;
        DebugInfo_high = HIDWORD(lpCriticalSection[3].DebugInfo);
        v32 = (int)lpCriticalSection[3].DebugInfo;
        SpinCount_high = HIDWORD(lpCriticalSection[2].SpinCount);
        SpinCount = lpCriticalSection[2].SpinCount;
        v12 = (int)lpCriticalSection[2].OwningThread;
        RecursionCount = lpCriticalSection[2].RecursionCount;
        v14 = lpCriticalSection[2].LockCount;
        v15 = v24;
        v16 = HIDWORD(v23);
        v17 = v23;
        OwningThread_high = HIDWORD(lpCriticalSection[2].OwningThread);
        v26 = v22;
        v19 = (int)lpCriticalSection[2].DebugInfo;
        v20 = HIDWORD(lpCriticalSection[1].SpinCount);
        v21 = lpCriticalSection[1].SpinCount;
        LODWORD(v22) = v9;
        v27 = (void *)*((_QWORD *)LockSemaphore + 9);
        v28 = (void *)*((_QWORD *)LockSemaphore + 8);
        sub_1800BED28(
          v7,
          byte_1801664AE,
          v6,
          v7,
          &v28,
          &v27,
          (__int64)&v22,
          (__int64)&v21,
          (__int64)&v20,
          (__int64)&v19,
          (__int64)&v26,
          (__int64)&OwningThread_high,
          (__int64)&v17,
          (__int64)&v16,
          (__int64)&v15,
          (__int64)&v14,
          (__int64)&RecursionCount,
          (__int64)&v12,
          (__int64)&SpinCount,
          (__int64)&SpinCount_high,
          (__int64)&v32,
          (__int64)&DebugInfo_high,
          (__int64)&LockCount,
          (__int64)&v29);
      }
      HIDWORD(lpCriticalSection[2].OwningThread) = 0;
      *(_QWORD *)&lpCriticalSection[2].LockCount = v23;
      LODWORD(lpCriticalSection[2].OwningThread) = v24;
    }
    else
    {
      sub_1800C0F9C(lpCriticalSection);
    }
  }
  LeaveCriticalSection(lpCriticalSection);
}
