/*
 * XREFs of TryUpdatePTPConfigFromRegistry @ 0x1C00111D4
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0010D30 (_GetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     GetDWORDSettingValuesEx @ 0x1C0010A70 (GetDWORDSettingValuesEx.c)
 */

void TryUpdatePTPConfigFromRegistry()
{
  if ( !gTouchPadMonitor && (unsigned int)GetDWORDSettingValuesEx(0LL, (__int64)off_1C02470D8, 0xDu, 1) )
  {
    if ( *((_DWORD *)off_1C02470D8 + 7) )
      HIDWORD(gTouchPadParameters) |= 4u;
    if ( *((_DWORD *)off_1C02470D8 + 11) )
      HIDWORD(gTouchPadParameters) |= 8u;
    if ( *((_DWORD *)off_1C02470D8 + 3) <= 4u )
      DWORD2(gTouchPadParameters) = *((_DWORD *)off_1C02470D8 + 3);
    if ( (unsigned int)(*((_DWORD *)off_1C02470D8 + 31) - 1) <= 0x13 )
      qword_1C0250FC0 = *((_DWORD *)off_1C02470D8 + 31);
    if ( !*((_DWORD *)off_1C02470D8 + 15) )
      HIDWORD(gTouchPadParameters) &= ~0x80u;
    if ( !*((_DWORD *)off_1C02470D8 + 19) )
      HIDWORD(gTouchPadParameters) &= ~0x100u;
    if ( *((_DWORD *)off_1C02470D8 + 51) )
      *(&qword_1C0250FC0 + 1) |= 0x40u;
    if ( !*((_DWORD *)off_1C02470D8 + 35) )
      *(&qword_1C0250FC0 + 1) &= ~1u;
    if ( !*((_DWORD *)off_1C02470D8 + 39) )
      *(&qword_1C0250FC0 + 1) &= ~2u;
    if ( !*((_DWORD *)off_1C02470D8 + 43) )
      *(&qword_1C0250FC0 + 1) &= ~4u;
    if ( !*((_DWORD *)off_1C02470D8 + 23) )
      HIDWORD(gTouchPadParameters) &= ~0x200u;
    if ( !*((_DWORD *)off_1C02470D8 + 27) )
      HIDWORD(gTouchPadParameters) &= ~0x400u;
    LODWORD(gTouchPadParameters) = 0;
    gTouchPadMonitor = 1;
  }
}
