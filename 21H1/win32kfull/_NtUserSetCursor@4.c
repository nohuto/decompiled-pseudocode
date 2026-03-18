/*
 * XREFs of _NtUserSetCursor@4 @ 0x788D6
 * Callers:
 *     <none>
 * Callees:
 *     ?zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z @ 0x42628 (-zzzSetCursor@@YGPAUtagCURSOR@@PAU1@@Z.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 */

int __stdcall NtUserSetCursor(int a1)
{
  int v1; // esi
  void *v2; // eax
  struct tagCURSOR *v3; // eax

  v1 = 0;
  EnterCrit(0, 1);
  if ( a1 )
  {
    v2 = (void *)HMValidateHandle(a1, 3);
    if ( !v2 )
      goto LABEL_5;
  }
  else
  {
    v2 = 0;
  }
  v3 = zzzSetCursor(v2);
  if ( v3 )
    v1 = *(_DWORD *)v3;
LABEL_5:
  UserSessionSwitchLeaveCrit();
  return v1;
}
