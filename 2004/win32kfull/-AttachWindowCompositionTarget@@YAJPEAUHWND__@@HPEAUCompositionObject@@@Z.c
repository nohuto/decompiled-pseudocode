/*
 * XREFs of ?AttachWindowCompositionTarget@@YAJPEAUHWND__@@HPEAUCompositionObject@@@Z @ 0x1C004B214
 * Callers:
 *     NtUserCreateDCompositionHwndTarget @ 0x1C004B0D0 (NtUserCreateDCompositionHwndTarget.c)
 * Callees:
 *     ?_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z @ 0x1C004B334 (-_AttachWindowCompositionTarget@@YAJPEAUtagWND@@HPEAUCompositionObject@@@Z.c)
 */

__int64 __fastcall AttachWindowCompositionTarget(HWND a1, int a2, struct CompositionObject *a3)
{
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rdi
  struct _KPROCESS *CurrentProcess; // rbx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // ebx
  __int128 v17; // [rsp+20h] [rbp-28h] BYREF
  __int64 v18; // [rsp+30h] [rbp-18h]

  v17 = 0LL;
  v18 = 0LL;
  EnterCrit(0LL, 1LL);
  v6 = ValidateHwnd(a1);
  v10 = v6;
  if ( v6 && (v8 = *(_QWORD *)(v6 + 40), v7 = (*(_WORD *)(v8 + 42) & 0x3FFFu) - 669, (v7 & 0xFFFFFFFD) != 0) )
  {
    *(_QWORD *)&v17 = *(_QWORD *)(gptiCurrent + 408LL);
    *(_QWORD *)(gptiCurrent + 408LL) = &v17;
    *((_QWORD *)&v17 + 1) = v6;
    HMLockObject(v6);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v10 + 16)) )
      v15 = _AttachWindowCompositionTarget((struct tagWND *)v10, a2, a3);
    else
      v15 = -1073741790;
    ThreadUnlock1(v13, v12, v14);
  }
  else
  {
    v15 = -1073741811;
  }
  UserSessionSwitchLeaveCrit(v8, v7, v9);
  return v15;
}
