/*
 * XREFs of _anonymous_namespace_::NotifyShellWindowPosChangedCommon @ 0x1C023E410
 * Callers:
 *     ?TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z @ 0x1C023E508 (-TrackedWindowPosChanged@NotifyShell@@YAXPEAUtagWND@@_N@Z.c)
 *     _anonymous_namespace_::WindowSizingUpdate @ 0x1C023E648 (_anonymous_namespace_--WindowSizingUpdate.c)
 * Callees:
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x1C00358C4 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall anonymous_namespace_::NotifyShellWindowPosChangedCommon(
        unsigned __int64 *a1,
        char a2,
        char a3,
        int a4)
{
  unsigned __int64 v5; // rax
  int v6; // ecx
  bool v7; // zf
  unsigned __int64 v8; // rdx
  char v9; // al
  unsigned __int64 v10; // r8
  _OWORD v12[3]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+50h] [rbp-18h]

  v13 = 0LL;
  v5 = *a1;
  v6 = 0;
  v7 = a2 == 0;
  v12[0] = v5;
  v8 = a1[5];
  DWORD2(v12[0]) = a4;
  memset(&v12[1], 0, 32);
  LODWORD(v12[1]) = !v7;
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
  DWORD1(v12[1]) = v6;
  TransformRectBetweenCoordinateSpaces((char *)&v12[1] + 8, v8 + 88, *(_QWORD *)(v10 + 328), a1);
  return anonymous_namespace_::NotifyIAMWindowManagementEvent((int)v12);
}
