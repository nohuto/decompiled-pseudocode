/*
 * XREFs of ?CreateEdgePalmRejectionZones@PalmRejection@@YGHPAX@Z @ 0x16D99A
 * Callers:
 *     _EditionCreateEdgePalmRejectionZones@4 @ 0x16DB48 (_EditionCreateEdgePalmRejectionZones@4.c)
 * Callees:
 *     __GetPointerDeviceRects@12 @ 0xCB44C (__GetPointerDeviceRects@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?_ReadSettingsFromRegKey@PalmRejection@@YGXXZ @ 0x16DA9C (-_ReadSettingsFromRegKey@PalmRejection@@YGXXZ.c)
 */

int __thiscall PalmRejection::CreateEdgePalmRejectionZones(void *ecx0)
{
  PalmRejection *v3; // [esp+0h] [ebp-48h]
  int v5; // [esp+10h] [ebp-38h] BYREF
  unsigned int v6; // [esp+14h] [ebp-34h]
  int v7; // [esp+18h] [ebp-30h]
  int v8; // [esp+1Ch] [ebp-2Ch]
  int v9; // [esp+20h] [ebp-28h]
  unsigned int v10; // [esp+24h] [ebp-24h]
  unsigned int v11; // [esp+28h] [ebp-20h]
  unsigned int v12; // [esp+2Ch] [ebp-1Ch]
  unsigned int v13; // [esp+30h] [ebp-18h]
  unsigned int v14; // [esp+34h] [ebp-14h]
  int v15; // [esp+38h] [ebp-10h]
  unsigned int v16; // [esp+3Ch] [ebp-Ch]

  if ( !gPalmRejectSettingsInitialized )
  {
    PalmRejection::_ReadSettingsFromRegKey(v3);
    gPalmRejectSettingsInitialized = 1;
  }
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = 0;
  _GetPointerDeviceRects((int)ecx0, &v5, 0);
  v9 = 0;
  v5 = 0;
  v10 = gPalmRejectTopEdgeThr;
  v14 = gPalmRejectTopEdgeThr;
  v12 = v8 - gPalmRejectHEdgeThr + 1;
  v16 = v12;
  v6 = v12;
  v11 = gPalmRejectVEdgeThr;
  v13 = v7 - gPalmRejectVEdgeThr + 1;
  v15 = ++v7;
  ++v8;
  AddEdgePalmRejectionZone(ecx0, 1, 0, gPalmRejectTopEdgeThr, gPalmRejectVEdgeThr, v12);
  AddEdgePalmRejectionZone(ecx0, 2, v13, v14, v15, v16);
  AddEdgePalmRejectionZone(ecx0, 3, v5, v6, v7, v8);
  return 1;
}
