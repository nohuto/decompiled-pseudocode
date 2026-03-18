/*
 * XREFs of _EditionxxxBroadcastSPIChange@8 @ 0x145BD6
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 * Callees:
 *     _RtlInitLargeUnicodeString@8 @ 0x1DCA6 (_RtlInitLargeUnicodeString@8.c)
 *     _xxxBroadcastMessage@28 @ 0xAE8A2 (_xxxBroadcastMessage@28.c)
 */

int __stdcall EditionxxxBroadcastSPIChange(struct tagWND *a1, _WORD *a2)
{
  int v2; // ecx
  _DWORD v4[3]; // [esp+4h] [ebp-1Ch] BYREF
  _DWORD v5[3]; // [esp+10h] [ebp-10h] BYREF
  int v6; // [esp+1Ch] [ebp-4h] BYREF

  v6 = 0;
  memset(v4, 0, sizeof(v4));
  RtlInitLargeUnicodeString(v4, a2);
  UpdateInputSettingWnfState(a1);
  v5[0] = 0;
  v5[2] = &v6;
  v5[1] = 100;
  return xxxBroadcastMessage(v2, 0x1Au, a1, (unsigned int)v4, 6u, (int)v5, 1u);
}
