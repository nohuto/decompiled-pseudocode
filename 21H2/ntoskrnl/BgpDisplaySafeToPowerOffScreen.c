/*
 * XREFs of BgpDisplaySafeToPowerOffScreen @ 0x14064E738
 * Callers:
 *     BgDisplaySafeToPowerOffScreen @ 0x14064D474 (BgDisplaySafeToPowerOffScreen.c)
 * Callees:
 *     BgpClearScreen @ 0x14064D4AC (BgpClearScreen.c)
 *     BcpDisplayCriticalString @ 0x14064DC1C (BcpDisplayCriticalString.c)
 *     BcpGetDisplayType @ 0x14064E594 (BcpGetDisplayType.c)
 */

__int64 BgpDisplaySafeToPowerOffScreen()
{
  unsigned int v0; // ebx
  unsigned int DisplayType; // esi
  __int64 v2; // r8
  int *v3; // rax
  int v4; // ecx
  _DWORD v6[6]; // [rsp+20h] [rbp-18h] BYREF

  if ( (dword_140C0DF90 & 2) != 0 )
  {
    v6[0] = DWORD2(BgInternal);
    v6[1] = DWORD1(BgInternal);
    v6[2] = HIDWORD(BgInternal);
    DisplayType = BcpGetDisplayType(v6);
    *(_DWORD *)(*(_QWORD *)(qword_140C5A830 + 24) + 40LL) = -16777216;
    BgpClearScreen(0xFF000000);
    v0 = 0;
    v3 = &dword_140C0B2E0[18 * DisplayType + 5];
    LODWORD(BcpCursor) = dword_140C0B2E0[18 * DisplayType + 4];
    v4 = *v3;
    HIDWORD(BcpCursor) = *v3;
    if ( v3 )
      dword_140C4EF80 = v4;
    BcpDisplayCriticalString(&stru_140C5A820.Length, dword_140C0B2E0[18 * DisplayType + 2], v2, DisplayType);
  }
  else
  {
    return (unsigned int)-1073741823;
  }
  return v0;
}
