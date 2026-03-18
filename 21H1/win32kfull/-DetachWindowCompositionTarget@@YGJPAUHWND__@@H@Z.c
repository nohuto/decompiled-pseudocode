/*
 * XREFs of ?DetachWindowCompositionTarget@@YGJPAUHWND__@@H@Z @ 0x81FFA
 * Callers:
 *     _NtUserDestroyDCompositionHwndTarget@8 @ 0x81FC0 (_NtUserDestroyDCompositionHwndTarget@8.c)
 * Callees:
 *     ?_DetachWindowCompositionTarget@@YGHPAUtagWND@@H@Z @ 0xB522A (-_DetachWindowCompositionTarget@@YGHPAUtagWND@@H@Z.c)
 */

int __thiscall DetachWindowCompositionTarget(void *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // esi
  int v6; // ecx
  struct _KPROCESS *CurrentProcess; // esi
  struct tagWND *v8; // [esp+0h] [ebp-18h]
  int v9; // [esp+4h] [ebp-14h]
  int v10; // [esp+Ch] [ebp-Ch] BYREF
  int v11; // [esp+10h] [ebp-8h]
  int v12; // [esp+14h] [ebp-4h]

  v10 = 0;
  v11 = 0;
  v12 = 0;
  EnterCrit(0, 1);
  v2 = ValidateHwnd(this);
  v3 = v2;
  if ( !v2 || (v6 = *(_WORD *)(*(_DWORD *)(v2 + 20) + 30) & 0x3FFF, v6 == 669) || v6 == 671 )
  {
    v4 = -1073741823;
  }
  else
  {
    v10 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v10;
    v11 = v2;
    HMLockObject(v2);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v3 + 8)) )
      v4 = _DetachWindowCompositionTarget(v8, v9) != 0 ? 0 : -1073741275;
    else
      v4 = -1073741790;
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v4;
}
