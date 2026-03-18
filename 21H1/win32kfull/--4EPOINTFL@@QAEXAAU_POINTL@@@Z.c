/*
 * XREFs of ??4EPOINTFL@@QAEXAAU_POINTL@@@Z @ 0x22E22
 * Callers:
 *     ?bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z @ 0x22A5E (-bRoundRect@@YGHAAVEPATHOBJ@@AAVEBOX@@JJ@Z.c)
 *     _NtGdiArcInternal@40 @ 0x2158FA (_NtGdiArcInternal@40.c)
 * Callees:
 *     _ltoef_c@8 @ 0xEEE68 (_ltoef_c@8.c)
 */

int __thiscall EPOINTFL::operator=(char *this, _DWORD *a2)
{
  ltoef_c(*a2, this);
  return ltoef_c(a2[1], this + 8);
}
