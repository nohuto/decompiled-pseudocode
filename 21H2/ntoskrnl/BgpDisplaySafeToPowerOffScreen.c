/*
 * XREFs of BgpDisplaySafeToPowerOffScreen @ 0x1405C56AC
 * Callers:
 *     BgDisplaySafeToPowerOffScreen @ 0x1405C446C (BgDisplaySafeToPowerOffScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x1405C44A4 (BgpClearScreen.c)
 *     BcpDisplayCriticalString @ 0x1405C4B7C (BcpDisplayCriticalString.c)
 *     BcpGetDisplayType @ 0x1405C5508 (BcpGetDisplayType.c)
 */

__int64 BgpDisplaySafeToPowerOffScreen()
{
  unsigned int v0; // ebx
  unsigned int DisplayType; // esi
  __int64 v2; // r8
  int *v3; // rax
  int v4; // ecx
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_140C134F0 & 2) != 0 )
  {
    v6[0] = DWORD2(BgInternal);
    v6[1] = DWORD1(BgInternal);
    v6[2] = HIDWORD(BgInternal);
    DisplayType = BcpGetDisplayType(v6);
    *(_DWORD *)(*(_QWORD *)(qword_140C53F30 + 24) + 40LL) = -16777216;
    BgpClearScreen(0xFF000000);
    v0 = 0;
    v3 = &dword_140C10EF0[18 * DisplayType + 5];
    LODWORD(BcpCursor) = dword_140C10EF0[18 * DisplayType + 4];
    v4 = *v3;
    HIDWORD(BcpCursor) = *v3;
    if ( v3 )
      dword_140C4C628 = v4;
    BcpDisplayCriticalString(&stru_140C53F20.Length, dword_140C10EF0[18 * DisplayType + 2], v2, DisplayType);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v0;
}
