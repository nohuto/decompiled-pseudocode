/*
 * XREFs of ?_ReadSettingsFromRegKey@PalmRejection@@YGXXZ @ 0x16DA9C
 * Callers:
 *     ?CreateEdgePalmRejectionZones@PalmRejection@@YGHPAX@Z @ 0x16D99A (-CreateEdgePalmRejectionZones@PalmRejection@@YGHPAX@Z.c)
 * Callees:
 *     _GetLocalMachineRegistryDWORDValues@12 @ 0x997D6 (_GetLocalMachineRegistryDWORDValues@12.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

void PalmRejection::_ReadSettingsFromRegKey()
{
  int v0; // ecx
  int *v1; // esi
  int v2; // edi
  _DWORD v3[2]; // [esp+8h] [ebp-28h] BYREF
  unsigned int v4; // [esp+10h] [ebp-20h]
  const wchar_t *v5; // [esp+14h] [ebp-1Ch]
  int v6; // [esp+18h] [ebp-18h]
  unsigned int v7; // [esp+1Ch] [ebp-14h]
  const wchar_t *v8; // [esp+20h] [ebp-10h]
  int v9; // [esp+24h] [ebp-Ch]
  unsigned int v10; // [esp+28h] [ebp-8h]

  v0 = 1000;
  v3[0] = L"HorizEdgeThreshold";
  v3[1] = 1000;
  v4 = 1000;
  v1 = v3;
  v5 = L"VertEdgeThreshold";
  v6 = 530;
  v7 = 530;
  v8 = L"TopEdgeThreshold";
  v9 = 1000;
  v10 = 1000;
  v2 = 3;
  do
  {
    GetLocalMachineRegistryDWORDValues(
      v0,
      (int)L"\\Software\\Microsoft\\Windows NT\\CurrentVersion\\Windows\\Input\\EdgePalmRejection",
      v1);
    v1 += 3;
    --v2;
  }
  while ( v2 );
  gPalmRejectHEdgeThr = v4;
  if ( v4 >= 0x5DC )
    gPalmRejectHEdgeThr = 1500;
  gPalmRejectVEdgeThr = v7;
  if ( v7 >= 0x5DC )
    gPalmRejectVEdgeThr = 1500;
  gPalmRejectTopEdgeThr = v10;
  if ( v10 >= 0x5DC )
    gPalmRejectTopEdgeThr = 1500;
}
