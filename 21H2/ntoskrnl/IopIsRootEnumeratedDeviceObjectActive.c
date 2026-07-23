/*
 * XREFs of IopIsRootEnumeratedDeviceObjectActive @ 0x14074F240
 * Callers:
 *     IopInitializeDeviceInstanceKey @ 0x14074EF10 (IopInitializeDeviceInstanceKey.c)
 *     PiCMCreateDevice @ 0x1408AF5A0 (PiCMCreateDevice.c)
 * Callees:
 *     <none>
 */

bool __fastcall IopIsRootEnumeratedDeviceObjectActive(__int64 a1)
{
  _DWORD *v1; // rax
  __int64 v2; // rcx
  bool result; // al

  v1 = *(_DWORD **)(a1 + 64);
  result = 0;
  if ( !v1 || (*v1 & 1) == 0 )
  {
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
    if ( !v2 || (*(_DWORD *)(v2 + 396) & 0x10000) == 0 )
      return 1;
  }
  return result;
}
