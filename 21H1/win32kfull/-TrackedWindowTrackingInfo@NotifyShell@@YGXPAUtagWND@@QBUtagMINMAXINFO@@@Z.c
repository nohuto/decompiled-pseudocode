/*
 * XREFs of ?TrackedWindowTrackingInfo@NotifyShell@@YGXPAUtagWND@@QBUtagMINMAXINFO@@@Z @ 0x12FC4
 * Callers:
 *     ?xxxEndGetWidnowTrackInfoAsync@@YGXPAUtagWND@@@Z @ 0x12F80 (-xxxEndGetWidnowTrackInfoAsync@@YGXPAUtagWND@@@Z.c)
 * Callees:
 *     ?TransformWindowTrackInfo@ShellWindowManagement@@YGXPAUtagWND@@PAUtagSIZE@@1W4TransformWindowTrackInfoDirection@1@@Z @ 0x1305E (-TransformWindowTrackInfo@ShellWindowManagement@@YGXPAUtagWND@@PAUtagSIZE@@1W4TransformWindowTra.c)
 *     _anonymous_namespace_::NotifyIAMWindowManagementEvent @ 0x17536 (_anonymous_namespace_--NotifyIAMWindowManagementEvent.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void __fastcall NotifyShell::TrackedWindowTrackingInfo(_DWORD *a1, _DWORD *a2)
{
  int v3; // [esp+4h] [ebp-44h] BYREF
  int v4; // [esp+8h] [ebp-40h]
  int v5; // [esp+Ch] [ebp-3Ch] BYREF
  int v6; // [esp+10h] [ebp-38h]
  _DWORD v7[6]; // [esp+14h] [ebp-34h] BYREF
  __int16 v8; // [esp+2Ch] [ebp-1Ch]
  int v9; // [esp+2Eh] [ebp-1Ah]
  int v10; // [esp+32h] [ebp-16h]
  int v11; // [esp+36h] [ebp-12h]
  int v12; // [esp+3Ah] [ebp-Eh]
  int v13; // [esp+3Eh] [ebp-Ah]
  __int16 v14; // [esp+42h] [ebp-6h]

  v7[1] = 1;
  v14 = 0;
  v5 = a2[8];
  v6 = a2[9];
  v3 = a2[6];
  v4 = a2[7];
  v7[0] = *a1;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  v13 = 0;
  ShellWindowManagement::TransformWindowTrackInfo(a1, &v5, &v3, 0);
  v7[4] = v5;
  v7[5] = v6;
  v7[2] = v3;
  v7[3] = v4;
  v8 = *(_WORD *)(a1[5] + 180);
  anonymous_namespace_::NotifyIAMWindowManagementEvent(v7);
}
