/*
 * XREFs of ?DetachWindowCompositionTarget@@YAJPEAUHWND__@@H@Z @ 0x1C007FF30
 * Callers:
 *     NtUserDestroyDCompositionHwndTarget @ 0x1C007FED0 (NtUserDestroyDCompositionHwndTarget.c)
 * Callees:
 *     ?_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z @ 0x1C0080108 (-_DetachWindowCompositionTarget@@YAHPEAUtagWND@@H@Z.c)
 */

__int64 __fastcall DetachWindowCompositionTarget(HWND a1, int a2)
{
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned int v7; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int128 v16; // [rsp+20h] [rbp-28h] BYREF
  __int64 v17; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v16 = 0LL;
  EnterCrit(0LL, 1LL);
  v4 = ValidateHwnd(a1);
  v6 = v4;
  if ( v4 && (v5 = *(_QWORD *)(v4 + 40), (((*(_WORD *)(v5 + 42) & 0x2FFF) - 669) & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v16 = *(_QWORD *)(gptiCurrent + 416LL);
    *(_QWORD *)(gptiCurrent + 416LL) = &v16;
    *((_QWORD *)&v16 + 1) = v4;
    HMLockObject(v4);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess(v10, v9, v11);
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v6 + 16)) )
      v7 = (unsigned int)_DetachWindowCompositionTarget((struct tagWND *)v6, a2) == 0 ? 0xC0000225 : 0;
    else
      v7 = -1073741790;
    ThreadUnlock1(v14, v13, v15);
  }
  else
  {
    v7 = -1073741823;
  }
  UserSessionSwitchLeaveCrit(v5);
  return v7;
}
