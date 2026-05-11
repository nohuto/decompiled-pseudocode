/*
 * XREFs of USBHwStopAllMIDIPipes @ 0x1C002DEB4
 * Callers:
 *     USBDeviceStop @ 0x1C002C100 (USBDeviceStop.c)
 *     USBDeviceSetPowerState @ 0x1C002C3D0 (USBDeviceSetPowerState.c)
 * Callees:
 *     USBHwStopMIDIPipe @ 0x1C0003B0C (USBHwStopMIDIPipe.c)
 */

__int64 __fastcall USBHwStopAllMIDIPipes(__int64 a1)
{
  __int64 result; // rax
  __int64 *v3; // rdi
  __int64 i; // rbx
  unsigned int j; // esi

  result = 0LL;
  v3 = (__int64 *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL) + 192LL);
  for ( i = *v3; (__int64 *)i != v3; i = *(_QWORD *)i )
  {
    for ( j = 0; j < *(_DWORD *)(i + 32); ++j )
      result = USBHwStopMIDIPipe(a1, i, j);
    *(_BYTE *)(i + 16) = 0;
  }
  return result;
}
