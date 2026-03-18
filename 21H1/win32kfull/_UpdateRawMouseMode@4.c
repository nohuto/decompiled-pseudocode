/*
 * XREFs of _UpdateRawMouseMode@4 @ 0x448A8
 * Callers:
 *     _SetNewForegroundQueue@4 @ 0x18960 (_SetNewForegroundQueue@4.c)
 *     _SetWakeBit@8 @ 0x44776 (_SetWakeBit@8.c)
 *     _EditionUpdateRawMouseMode@4 @ 0x4488C (_EditionUpdateRawMouseMode@4.c)
 *     _UnlockCaptureWindow@4 @ 0x9D16E (_UnlockCaptureWindow@4.c)
 *     _TransferWakeBit@8 @ 0xA255A (_TransferWakeBit@8.c)
 *     _DestroyThreadHidObjects@4 @ 0xA52E4 (_DestroyThreadHidObjects@4.c)
 *     _LockCaptureWindow@8 @ 0xC5242 (_LockCaptureWindow@8.c)
 *     _zzzAttachToQueue@16 @ 0xC7DF0 (_zzzAttachToQueue@16.c)
 *     ?AdjustLegacyDeviceFlags@@YGXPAUtagPROCESSINFO@@@Z @ 0xC9E3A (-AdjustLegacyDeviceFlags@@YGXPAUtagPROCESSINFO@@@Z.c)
 * Callees:
 *     _HasHidTable@4 @ 0x7498A (_HasHidTable@4.c)
 */

int __thiscall UpdateRawMouseMode(_DWORD *this)
{
  int result; // eax
  int v3; // esi
  int v4; // eax
  int v5; // eax

  result = _gpqForeground;
  if ( this == (_DWORD *)_gpqForeground )
  {
    v3 = this[14];
    if ( v3 )
      v4 = *(_DWORD *)(v3 + 8);
    else
      v4 = this[12];
    result = 0;
    if ( HasHidTable(v4) )
    {
      v5 = v3 ? *(_DWORD *)(v3 + 8) : this[12];
      if ( (*(_BYTE *)(*(_DWORD *)(*(_DWORD *)(v5 + 232) + 472) + 52) & 1) != 0 )
        result = 1;
    }
    gForegroundQRawMouseRequested = result;
  }
  return result;
}
