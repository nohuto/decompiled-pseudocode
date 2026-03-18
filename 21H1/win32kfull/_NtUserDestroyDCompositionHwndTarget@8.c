/*
 * XREFs of _NtUserDestroyDCompositionHwndTarget@8 @ 0x81FC0
 * Callers:
 *     _NtUserCreateDCompositionHwndTarget@12 @ 0xB28BA (_NtUserCreateDCompositionHwndTarget@12.c)
 * Callees:
 *     _UserSetLastStatus@8 @ 0x81F3C (_UserSetLastStatus@8.c)
 *     ?DetachWindowCompositionTarget@@YGJPAUHWND__@@H@Z @ 0x81FFA (-DetachWindowCompositionTarget@@YGJPAUHWND__@@H@Z.c)
 */

BOOL __stdcall NtUserDestroyDCompositionHwndTarget(int a1, int a2)
{
  int v2; // eax
  int v3; // esi
  HWND v5; // [esp+0h] [ebp-4h]
  int savedregs; // [esp+4h] [ebp+0h]

  KeEnterCriticalRegion();
  v2 = DetachWindowCompositionTarget(v5, savedregs);
  v3 = v2;
  if ( v2 < 0 )
    UserSetLastStatus(v2, 1);
  KeLeaveCriticalRegion();
  return v3 >= 0;
}
