/*
 * XREFs of _NtUserSetDisplayAutoRotationPreferences@4 @ 0x12114
 * Callers:
 *     <none>
 * Callees:
 *     ?IsActivePpi@CRotationMgr@@SG_NPAUtagPROCESSINFO@@@Z @ 0x1215E (-IsActivePpi@CRotationMgr@@SG_NPAUtagPROCESSINFO@@@Z.c)
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 */

int __stdcall NtUserSetDisplayAutoRotationPreferences(int a1)
{
  int v1; // esi
  struct tagPROCESSINFO *v3; // [esp+0h] [ebp-4h]

  UserSessionSwitchEnterCrit();
  if ( (a1 & 0x3FFFFFF0) != 0 )
  {
    UserSetLastError(87);
    v1 = 0;
  }
  else
  {
    *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 232) + 520) = a1;
    if ( CRotationMgr::IsActivePpi(v3) )
      (*(void (__thiscall **)(PVOID))(*(_DWORD *)dword_274060 + 4))(dword_274060);
    v1 = 1;
  }
  LeaveCrit();
  return v1;
}
