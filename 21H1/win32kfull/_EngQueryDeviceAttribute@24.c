/*
 * XREFs of _EngQueryDeviceAttribute@24 @ 0x1E9A82
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

BOOL __stdcall EngQueryDeviceAttribute(
        HDEV hdev,
        ENG_DEVICE_ATTRIBUTE devAttr,
        PVOID pvIn,
        ULONG cjInSize,
        PVOID pvOut,
        ULONG cjOutSize)
{
  BOOL result; // eax

  result = 0;
  if ( pvOut && devAttr == QDA_ACCELERATION_LEVEL && cjOutSize == 4 )
  {
    *(_DWORD *)(struct HDEV__ *)pvOut = hdev[464];
    return 1;
  }
  return result;
}
