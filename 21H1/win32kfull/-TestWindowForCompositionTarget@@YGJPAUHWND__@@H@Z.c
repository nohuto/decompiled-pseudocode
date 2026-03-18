/*
 * XREFs of ?TestWindowForCompositionTarget@@YGJPAUHWND__@@H@Z @ 0xB2B2C
 * Callers:
 *     _NtUserCreateDCompositionHwndTarget@12 @ 0xB28BA (_NtUserCreateDCompositionHwndTarget@12.c)
 * Callees:
 *     ?WindowHasCompositionTarget@@YGHPAUtagWND@@H@Z @ 0xB2BEC (-WindowHasCompositionTarget@@YGHPAUtagWND@@H@Z.c)
 */

unsigned int __thiscall TestWindowForCompositionTarget(void *this)
{
  int v2; // eax
  int v3; // edi
  int v4; // ecx
  struct _KPROCESS *CurrentProcess; // esi
  unsigned int v6; // esi
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
  if ( !v2 || (v4 = *(_WORD *)(*(_DWORD *)(v2 + 20) + 30) & 0x3FFF, v4 == 669) || v4 == 671 )
  {
    v6 = -1073741811;
  }
  else
  {
    v10 = *(_DWORD *)(_gptiCurrent + 228);
    *(_DWORD *)(_gptiCurrent + 228) = &v10;
    v11 = v2;
    HMLockObject(v2);
    CurrentProcess = (struct _KPROCESS *)PsGetCurrentProcess();
    if ( CurrentProcess == PsGetThreadProcess(**(PETHREAD **)(v3 + 8)) )
      v6 = WindowHasCompositionTarget(v8, v9) != 0 ? 0x803E0006 : 0;
    else
      v6 = -1073741790;
    ThreadUnlock1();
  }
  UserSessionSwitchLeaveCrit();
  return v6;
}
