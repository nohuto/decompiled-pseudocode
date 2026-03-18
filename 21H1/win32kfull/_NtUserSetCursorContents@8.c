/*
 * XREFs of _NtUserSetCursorContents@8 @ 0x1691CD
 * Callers:
 *     <none>
 * Callees:
 *     ??0UserAtomicCheck@@QAE@XZ @ 0x2C3CC (--0UserAtomicCheck@@QAE@XZ.c)
 *     ??1UserAtomicCheck@@QAE@XZ @ 0x2C40C (--1UserAtomicCheck@@QAE@XZ.c)
 *     @HMValidateHandle@8 @ 0x7531C (@HMValidateHandle@8.c)
 *     ?_SetCursorContents@@YG_NPAUtagCURSOR@@0@Z @ 0x15635E (-_SetCursorContents@@YG_NPAUtagCURSOR@@0@Z.c)
 */

int __stdcall NtUserSetCursorContents(int a1, int a2)
{
  int v2; // esi
  int v3; // edi
  int v4; // eax
  _BYTE v6[8]; // [esp+8h] [ebp-8h] BYREF

  v2 = 0;
  EnterCrit(0, 1);
  UserAtomicCheck::UserAtomicCheck((UserAtomicCheck *)v6);
  v3 = HMValidateHandle(a1, 3);
  if ( v3 )
  {
    v4 = HMValidateHandle(a2, 3);
    if ( v4 )
      v2 = (unsigned __int8)_SetCursorContents(v3, v4);
  }
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)v6);
  UserSessionSwitchLeaveCrit();
  return v2;
}
