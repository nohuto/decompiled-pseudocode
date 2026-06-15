/*
 * XREFs of ??$QueueApplicationManagerWorkItem@UModernStandbyStateChangedContext@@@@YAJP8CApplicationManager@@EAAJPEAUModernStandbyStateChangedContext@@@Z0@Z @ 0x180026A4C
 * Callers:
 *     ?HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z @ 0x180023AAC (-HandleMediaPlaybackRequestForApp@CApplicationManager@@QEAAJPEBG_KK@Z.c)
 *     ?TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z @ 0x18002F5D0 (-TsSessionIdDisplayNotificationCallback@@YAKPEAXK0@Z.c)
 *     _lambda_0c539e07ad5eca11a9151d154bdea5da_::operator() @ 0x18002F8D4 (_lambda_0c539e07ad5eca11a9151d154bdea5da_--operator().c)
 *     ?TsSessionOnLowPowerEpochStateChanged@@YAXXZ @ 0x18002FE80 (-TsSessionOnLowPowerEpochStateChanged@@YAXXZ.c)
 *     ?TsSessionOnApmResumeSuspendStateChanged@@YAXXZ @ 0x18002FF98 (-TsSessionOnApmResumeSuspendStateChanged@@YAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180040700 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall QueueApplicationManagerWorkItem<ModernStandbyStateChangedContext>(__int64 a1, __int64 a2)
{
  HANDLE ProcessHeap; // rax
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  signed int v6; // edi
  HANDLE v7; // rcx
  signed int LastError; // eax

  ProcessHeap = GetProcessHeap();
  v4 = HeapAlloc(ProcessHeap, 0, 0x18uLL);
  v5 = v4;
  if ( v4 )
  {
    *v4 = &CGenericApplicationManagerWorkItem<ModernStandbyStateChangedContext>::`vftable';
    _InterlockedIncrement((volatile signed __int32 *)g_ApplicationManager + 2);
  }
  else
  {
    v5 = 0LL;
  }
  if ( v5 )
  {
    v7 = g_WorkerEventPort;
    v5[1] = CApplicationManager::UpdateModernStandbyAudioState;
    v5[2] = a2;
    if ( PostQueuedCompletionStatus(v7, 0, (ULONG_PTR)v5, 0LL) )
    {
      v6 = 0;
    }
    else
    {
      LastError = GetLastError();
      v6 = (unsigned __int16)LastError | 0x80070000;
      if ( LastError <= 0 )
        v6 = LastError;
    }
    if ( v6 >= 0 )
      v5 = 0LL;
  }
  else
  {
    v6 = -2147024882;
  }
  if ( v5 )
    (*(void (__fastcall **)(_QWORD *, __int64))(*v5 + 8LL))(v5, 1LL);
  return (unsigned int)v6;
}
