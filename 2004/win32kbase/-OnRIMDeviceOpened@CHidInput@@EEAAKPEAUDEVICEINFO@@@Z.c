/*
 * XREFs of ?OnRIMDeviceOpened@CHidInput@@EEAAKPEAUDEVICEINFO@@@Z @ 0x1C005BFA0
 * Callers:
 *     <none>
 * Callees:
 *     IsPublicPointerDevice @ 0x1C005C068 (IsPublicPointerDevice.c)
 *     ?OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z @ 0x1C0195B8C (-OnRimDeviceOpened@CTouchProcessor@@QEAAXPEAX@Z.c)
 *     ?UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z @ 0x1C01A7AE8 (-UpdatePointerDeviceCount@CHidInput@@AEAAKK@Z.c)
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
