/*
 * XREFs of ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C004AB70
 * Callers:
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C004AB10 (NtUserDestroyDCompositionHwndTarget.c)
 * Callees:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C004B644 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall DetachWindowCompositionTarget(HWND a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rdi
  unsigned int v9; // ebx
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int128 v15; // [rsp+20h] [rbp-28h] BYREF
  __int64 v16; // [rsp+30h] [rbp-18h]

  v16 = 0LL;
  v15 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v8 = v4;
  if ( v4 && (v6 = *(_QWORD *)(v4 + 40), v5 = (*(_WORD *)(v6 + 42) & 0x3FFFu) - 669, (v5 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v15 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v15;
    *((_QWORD *)&v15 + 1) = v4;
    HMLockObject(v4);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v8 + 16)) )
      v9 = (unsigned int)_DetachWindowCompositionTarget((struct tagWND *)v8, a2) == 0 ? 0xC0000225 : 0;
    else
      v9 = -1073741790;
    ThreadUnlock1(v13, v12, v14);
  }
  else
  {
    v9 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v6, v5, v7);
  return v9;
}
