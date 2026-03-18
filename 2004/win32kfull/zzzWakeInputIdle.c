/*
 * XREFs of zzzWakeInputIdle @ 0x1C00BE498
 * Callers:
 *     xxxDesktopThreadWaiter @ 0x1C00BE118 (xxxDesktopThreadWaiter.c)
 * Callees:
 *     zzzCalcStartCursorHide @ 0x1C0089AF0 (zzzCalcStartCursorHide.c)
 */

void __fastcall zzzWakeInputIdle(__int64 a1)
{
  __int64 CurrentProcessWin32Process; // rax
  __int64 v3; // rdi
  __int64 v4; // rax
  struct _KEVENT *v5; // rcx
  int v6; // eax
  __int64 v7; // rdx
  struct _KEVENT *v8; // rcx

  CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(a1);
  *(_DWORD *)(a1 + 480) &= ~0x2000u;
  v3 = CurrentProcessWin32Process;
  if ( (*(_DWORD *)(a1 + 480) & 0x1000) != 0 )
  {
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 608) + 24LL) )
    {
      EtwTraceWakeInputIdle(0LL, a1);
      v7 = *(_QWORD *)(*(_QWORD *)(a1 + 608) + 24LL);
      v8 = *(struct _KEVENT **)(v7 + 32);
      if ( v8 )
      {
        if ( v8 != (struct _KEVENT *)-1LL )
        {
          KeSetEvent(v8, 1, 0);
          ObfDereferenceObject(*(PVOID *)(*(_QWORD *)(*(_QWORD *)(a1 + 608) + 24LL) + 32LL));
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 608) + 24LL) + 32LL) = -1LL;
        }
      }
      else
      {
        *(_QWORD *)(v7 + 32) = -1LL;
      }
    }
  }
  else
  {
    v4 = *(_QWORD *)(a1 + 416);
    if ( !*(_QWORD *)(v4 + 328) )
    {
      *(_QWORD *)(v4 + 328) = a1;
      v4 = *(_QWORD *)(a1 + 416);
    }
    if ( *(_QWORD *)(v4 + 328) == a1 )
    {
      EtwTraceWakeInputIdle(0LL, a1);
      v5 = *(struct _KEVENT **)(v3 + 16);
      if ( v5 )
      {
        if ( v5 == (struct _KEVENT *)-1LL )
          goto LABEL_7;
        KeSetEvent(v5, 1, 0);
        ObfDereferenceObject(*(PVOID *)(v3 + 16));
      }
      *(_QWORD *)(v3 + 16) = -1LL;
    }
  }
LABEL_7:
  v6 = *(_DWORD *)(v3 + 12);
  if ( (v6 & 4) != 0 )
  {
    *(_DWORD *)(v3 + 12) = v6 & 0xFFFFFFFB;
    zzzCalcStartCursorHide(0LL, 0);
  }
}
