/*
 * XREFs of _NtUserAutoPromoteMouseInPointer@4 @ 0x15FA65
 * Callers:
 *     <none>
 * Callees:
 *     _UserSetLastError@4 @ 0x81122 (_UserSetLastError@4.c)
 *     _IsMiPEnabledForThread@4 @ 0x9AF9E (_IsMiPEnabledForThread@4.c)
 *     _SetMiPPromotion@8 @ 0x14E66B (_SetMiPPromotion@8.c)
 */

int __stdcall NtUserAutoPromoteMouseInPointer(char *a1)
{
  int v1; // esi
  int v2; // ecx
  _BYTE *v3; // eax

  v1 = 1;
  EnterCrit(0, 1);
  if ( IsMiPEnabledForThread(_gptiCurrent) && (v3 = *(_BYTE **)(v2 + 720)) != 0 && (*v3 & 1) != 0 )
  {
    SetMiPPromotion(v2, a1);
  }
  else
  {
    v1 = 0;
    UserSetLastError((struct _NT_TIB *)5);
  }
  UserSessionSwitchLeaveCrit();
  return v1;
}
