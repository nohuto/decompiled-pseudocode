/*
 * XREFs of _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C023D170
 * Callers:
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023D268 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C023D3A8 (_anonymous_namespace_--WindowSizingUpdate.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00C1608 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyShellWindowPosChangedCommon(__int64 *a1, char a2, char a3, int a4)
{
  __int64 v5; // rax
  int v6; // ecx
  bool v7; // zf
  __int64 v8; // rdx
  char v9; // al
  __int64 v10; // r8
  int v12[4]; // [rsp+20h] [rbp-48h] BYREF
  _OWORD v13[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-18h]

  v14 = 0LL;
  v5 = *a1;
  v6 = 0;
  *(_QWORD *)&v12[2] = 0LL;
  v7 = a2 == 0;
  *(_QWORD *)v12 = v5;
  v8 = a1[5];
  v12[2] = a4;
  memset(v13, 0, sizeof(v13));
  LODWORD(v13[0]) = !v7;
  v9 = *(_BYTE *)(v8 + 31);
  if ( (v9 & 1) != 0 )
  {
    v6 = 1;
  }
  else if ( (v9 & 0x20) != 0 )
  {
    v6 = 2;
  }
  else if ( a3 && (*(_BYTE *)(v8 + 233) & 3) != 0 )
  {
    v6 = 3;
  }
  v10 = a1[3];
  DWORD1(v13[0]) = v6;
  TransformRectBetweenCoordinateSpaces((char *)v13 + 8, v8 + 88, *(_QWORD *)(v10 + 328), a1);
  return anonymous_namespace_::NotifyIAMWindowManagementEvent((__int64)v12);
}
