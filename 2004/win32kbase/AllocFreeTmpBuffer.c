/*
 * XREFs of AllocFreeTmpBuffer @ 0x1C007A550
 * Callers:
 *     NtGdiGetRegionData @ 0x1C00268D0 (NtGdiGetRegionData.c)
 *     NtGdiOpenDCW @ 0x1C0079880 (NtGdiOpenDCW.c)
 *     NtGdiExtCreateRegion @ 0x1C007A690 (NtGdiExtCreateRegion.c)
 *     NtGdiPolyPolyDraw @ 0x1C00C5440 (NtGdiPolyPolyDraw.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall AllocFreeTmpBuffer(unsigned int a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  unsigned int v4; // edi
  _QWORD *v5; // r14
  struct _KTHREAD *CurrentThread; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 *ThreadWin32Thread; // rax
  __int64 v10; // rax
  _QWORD *v11; // rsi
  __int64 CurrentProcess; // rax
  int ProcessSessionId; // edi
  __int64 CurrentThreadProcess; // rax

  v1 = 0LL;
  if ( a1 > 0x1000 || (v2 = _InterlockedExchange64((volatile __int64 *)gpTmpGlobalFree, 0LL)) == 0 )
  {
    v2 = 0LL;
    if ( a1 < 0xFFFFEFDF )
    {
      v4 = a1 + 32;
      if ( qword_1C0252C10 && (int)qword_1C0252C10() >= 0 )
      {
        v5 = qword_1C0252C18 ? (_QWORD *)qword_1C0252C18(33LL, v4, 1886213191LL) : 0LL;
        if ( v5 )
        {
          v2 = (__int64)(v5 + 4);
          KeEnterCriticalRegion();
          CurrentThread = KeGetCurrentThread();
          if ( !(unsigned __int8)KeIsAttachedProcess()
            || (CurrentProcess = PsGetCurrentProcess(v8, v7),
                ProcessSessionId = PsGetProcessSessionIdEx(CurrentProcess),
                CurrentThreadProcess = PsGetCurrentThreadProcess(),
                ProcessSessionId == (unsigned int)PsGetProcessSessionIdEx(CurrentThreadProcess)) )
          {
            ThreadWin32Thread = (__int64 *)PsGetThreadWin32Thread(CurrentThread);
            if ( ThreadWin32Thread )
              v1 = *ThreadWin32Thread;
          }
          v5[3] = FreeThreadBufferWithTag;
          v5[2] = v2;
          if ( v1 )
          {
            v10 = *(_QWORD *)(v1 + 88);
            v11 = (_QWORD *)(v1 + 88);
            if ( *(_QWORD **)(v10 + 8) != v11 )
              __fastfail(3u);
            *v5 = v10;
            v5[1] = v11;
            *(_QWORD *)(v10 + 8) = v5;
            *v11 = v5;
          }
          else
          {
            v5[1] = v5;
            *v5 = v5;
          }
          KeLeaveCriticalRegion();
        }
      }
    }
  }
  return v2;
}
