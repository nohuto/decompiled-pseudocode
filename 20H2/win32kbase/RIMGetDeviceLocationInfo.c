/*
 * XREFs of RIMGetDeviceLocationInfo @ 0x1C015E00C
 * Callers:
 *     RIMEnableMonitorMappingForDevice @ 0x1C01563A0 (RIMEnableMonitorMappingForDevice.c)
 *     RIMCreatePointerDeviceInfo @ 0x1C015C3E8 (RIMCreatePointerDeviceInfo.c)
 *     RIMIDECreatePointerDeviceInfo @ 0x1C0167698 (RIMIDECreatePointerDeviceInfo.c)
 * Callees:
 *     RIMGetPanelId @ 0x1C000A380 (RIMGetPanelId.c)
 *     RIMGetContainerId @ 0x1C015DC0C (RIMGetContainerId.c)
 */

__int64 __fastcall RIMGetDeviceLocationInfo(struct _DEVICE_OBJECT *a1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG v6; // r8d

  *(_DWORD *)(a2 + 16) = 2;
  RIMGetContainerId(a1, (void *)a2, (_DWORD *)(a2 + 16), a4);
  return RIMGetPanelId(a1, (_WORD *)(a2 + 20), v6);
}
