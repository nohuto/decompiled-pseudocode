/*
 * XREFs of xxxSetProcessInitState @ 0x1C0063630
 * Callers:
 *     xxxInitProcessInfo @ 0x1C00BFFB4 (xxxInitProcessInfo.c)
 * Callees:
 *     IszzzCalcStartCursorHideSupported @ 0x1C0063864 (IszzzCalcStartCursorHideSupported.c)
 *     WPP_RECORDER_SF_q @ 0x1C0063890 (WPP_RECORDER_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxSetProcessInitState(PVOID a1, int a2)
{
  int v4; // edx
  __int64 ProcessWin32Process; // rbx
  __int64 result; // rax
  int v7; // eax
  void (__fastcall *v8)(__int64, __int64); // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _KEVENT *v11; // rcx

  ProcessWin32Process = PsGetProcessWin32Process(a1);
  if ( ProcessWin32Process )
  {
LABEL_9:
    ++gdwDeferWinEvent;
    v7 = *(_DWORD *)(ProcessWin32Process + 12);
    if ( a2 )
    {
      if ( (v7 & 0x20) == 0 )
      {
        *(_DWORD *)(ProcessWin32Process + 12) = v7 | 0x20;
        gdwPUDFlags |= 0x8000000u;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v4) = 4;
          WPP_RECORDER_SF_q(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            v4,
            13,
            10,
            (__int64)&WPP_15558b1eb0723b696cc38695125fa388_Traceguids,
            ProcessWin32Process);
        }
        if ( a1 == gpepCSRSS )
          LOBYTE(a2) = a2 | 0x80;
        if ( (a2 & 0x80u) == 0 )
        {
          if ( (a2 & 0x40) == 0 )
            goto LABEL_24;
          if ( (int)IszzzCalcStartCursorHideSupported() < 0 )
            goto LABEL_24;
          v8 = (void (__fastcall *)(__int64, __int64))qword_1C024FEA0;
          if ( !qword_1C024FEA0 )
            goto LABEL_24;
          v9 = 2000LL;
          v10 = ProcessWin32Process;
        }
        else
        {
          *(_DWORD *)(ProcessWin32Process + 12) |= 2u;
          if ( (int)IszzzCalcStartCursorHideSupported() < 0 )
            goto LABEL_24;
          v8 = (void (__fastcall *)(__int64, __int64))qword_1C024FEA0;
          if ( !qword_1C024FEA0 )
            goto LABEL_24;
          v9 = 0LL;
          v10 = 0LL;
        }
        v8(v10, v9);
      }
    }
    else if ( (v7 & 8) == 0 )
    {
      if ( (v7 & 4) != 0 )
      {
        *(_DWORD *)(ProcessWin32Process + 12) = v7 & 0xFFFFFFFB;
        if ( (int)IszzzCalcStartCursorHideSupported() >= 0 )
        {
          if ( qword_1C024FEA0 )
            qword_1C024FEA0(0LL, 0LL);
        }
      }
      *(_DWORD *)(ProcessWin32Process + 12) |= 1u;
      v11 = *(struct _KEVENT **)(ProcessWin32Process + 16);
      if ( v11 )
      {
        if ( v11 == (struct _KEVENT *)-1LL )
          goto LABEL_24;
        KeSetEvent(v11, 1, 0);
        ObfDereferenceObject(*(PVOID *)(ProcessWin32Process + 16));
      }
      *(_QWORD *)(ProcessWin32Process + 16) = -1LL;
    }
LABEL_24:
    --gdwDeferWinEvent;
    return 0LL;
  }
  if ( qword_1C024FE88 )
    result = qword_1C024FE88();
  else
    result = 3221225659LL;
  if ( (int)result >= 0 )
  {
    result = qword_1C024FE90 ? qword_1C024FE90(a1) : 3221225659LL;
    if ( (int)result >= 0 )
    {
      ProcessWin32Process = PsGetProcessWin32Process(a1);
      goto LABEL_9;
    }
  }
  return result;
}
