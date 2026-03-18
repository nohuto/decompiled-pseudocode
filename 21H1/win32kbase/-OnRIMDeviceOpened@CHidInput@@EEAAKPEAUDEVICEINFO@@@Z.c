/*
 * XREFs of ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C004E5B0
 * Callers:
 *     <none>
 * Callees:
 *     IsPublicPointerDevice @ 0x1C004E678 (IsPublicPointerDevice.c)
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C019B87C (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C01AD848 (-UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z.c)
 */

__int64 __fastcall CHidInput::OnRIMDeviceOpened(CHidInput *this, struct DEVICEINFO *a2)
{
  unsigned int v2; // ebx
  void *v6; // rdx

  v2 = 0;
  if ( (*((_DWORD *)a2 + 50) & 0x80u) != 0 )
  {
    v6 = *(void **)a2;
    if ( gpTouchProcessor )
      CTouchProcessor::OnRimDeviceOpened(this, v6);
  }
  if ( (unsigned int)IsPublicPointerDevice(a2) )
    return CHidInput::UpdatePointerDeviceCount(this, 1u);
  return v2;
}
