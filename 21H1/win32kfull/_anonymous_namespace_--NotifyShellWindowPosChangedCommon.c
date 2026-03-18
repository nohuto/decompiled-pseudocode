/*
 * XREFs of _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x19C27B
 * Callers:
 *     ?TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z @ 0x19C335 (-TrackedWindowPosChanged@NotifyShell@@YGXPAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x19C38C (_anonymous_namespace_--WindowSizingUpdate.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x17536 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     ?IsSemiMaximized@@YG_NPBUtagWND@@@Z @ 0x35818 (-IsSemiMaximized@@YG_NPBUtagWND@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

int __fastcall anonymous_namespace_::NotifyShellWindowPosChangedCommon(_DWORD *a1, char a2, char a3, int a4)
{
  int v4; // esi
  bool v5; // zf
  int v6; // edx
  char v7; // al
  int v8; // eax
  int v10; // [esp-4h] [ebp-3Ch]
  _DWORD v11[4]; // [esp+4h] [ebp-34h] BYREF
  _DWORD v12[8]; // [esp+14h] [ebp-24h] BYREF

  v11[0] = *a1;
  v11[1] = a4;
  v4 = 0;
  v5 = a2 == 0;
  v6 = a1[5];
  memset(v12, 0, sizeof(v12));
  v11[2] = !v5;
  v7 = *(_BYTE *)(v6 + 23);
  if ( (v7 & 1) != 0 )
  {
    v4 = 1;
    goto LABEL_9;
  }
  if ( (v7 & 0x20) != 0 )
  {
    v10 = 2;
LABEL_8:
    v4 = v10;
    goto LABEL_9;
  }
  if ( a3 && IsSemiMaximized(a1) )
  {
    v10 = 3;
    goto LABEL_8;
  }
LABEL_9:
  v8 = a1[3];
  v11[3] = v4;
  TransformRectBetweenCoordinateSpaces(v12, v6 + 52, *(_DWORD *)(v8 + 200), a1);
  return anonymous_namespace_::NotifyIAMWindowManagementEvent(v11);
}
