/*
 * XREFs of BgpDisplaySafeToPowerOffScreen @ 0x1405C3C4C
 * Callers:
 *     BgDisplaySafeToPowerOffScreen @ 0x1405C2A0C (BgDisplaySafeToPowerOffScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x1405C2A44 (BgpClearScreen.c)
 *     BcpDisplayCriticalString @ 0x1405C311C (BcpDisplayCriticalString.c)
 *     BcpGetDisplayType @ 0x1405C3AA8 (BcpGetDisplayType.c)
 */

__int64 BgpDisplaySafeToPowerOffScreen()
{
  unsigned int v0; // ebx
  unsigned int DisplayType; // esi
  __int64 v2; // r8
  int *v3; // rax
  int v4; // ecx
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_140C13330 & 2) != 0 )
  {
    v6[0] = DWORD2(BgInternal);
    v6[1] = DWORD1(BgInternal);
    v6[2] = HIDWORD(BgInternal);
    DisplayType = BcpGetDisplayType(v6);
    *(_DWORD *)(*(_QWORD *)(qword_140C53D70 + 24) + 40LL) = -16777216;
    BgpClearScreen(0xFF000000);
    v0 = 0;
    v3 = &dword_140C10E90[18 * DisplayType + 5];
    LODWORD(BcpCursor) = dword_140C10E90[18 * DisplayType + 4];
    v4 = *v3;
    HIDWORD(BcpCursor) = *v3;
    if ( v3 )
      dword_140C4C448 = v4;
    BcpDisplayCriticalString(&stru_140C53D60.Length, dword_140C10E90[18 * DisplayType + 2], v2, DisplayType);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v0;
}
