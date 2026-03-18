/*
 * XREFs of ?AttachWindowCompositionTarget@@YGJPAUHWND__@@HPAUCompositionObject@@@Z @ 0xB2988
 * Callers:
 *     _NtUserCreateDCompositionHwndTarget@12 @ 0xB28BA (_NtUserCreateDCompositionHwndTarget@12.c)
 * Callees:
 *     ?_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z @ 0xB2A44 (-_AttachWindowCompositionTarget@@YGJPAUtagWND@@HPAUCompositionObject@@@Z.c)
 */

int __userpurge AttachWindowCompositionTarget@<eax>(
        int a1@<ecx>,
        struct tagWND *a2,
        int a3,
        struct CompositionObject *a4)
{
  int v5; // eax
  int v6; // edi
  int v7; // ecx
  struct _KPROCESS *CurrentProcess; // esi
  int v9; // esi
  int v11; // [esp+0h] [ebp-18h]
  struct CompositionObject *v12; // [esp+4h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  int v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h]

  v13 = 0;
  v14 = 0;
  v15 = 0;
  EnterCrit(0, 1);
  v5 = ValidateHwnd(a1);
  v6 = v5;
  if ( !v5 || (v7 = *(_WORD *)(*(_DWORD *)(v5 + 20) + 30) & 0x3FFF, v7 == 669) || v7 == 671 )
  {
    v9 = -1073741811;
  }
  else
  {
    v13 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v13;
    v14 = v5;
    HMLockObject(v5);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v6 + 8)) )
      v9 = _AttachWindowCompositionTarget(a2, v11, v12);
    else
      v9 = -1073741790;
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v9;
}
