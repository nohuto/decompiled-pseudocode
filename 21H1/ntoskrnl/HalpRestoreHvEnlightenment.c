/*
 * XREFs of HalpRestoreHvEnlightenment @ 0x1404BD810
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerUpdateApiConsumers @ 0x1404D0298 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpRestoreHvEnlightenment()
{
  HalpEnlightenment = HalpEnlightenmentHbSaved;
  *(&HalpEnlightenment + 1) = dword_140C4A124;
  *(&HalpEnlightenment + 7) = dword_140C4A13C;
  *((_QWORD *)&HalpEnlightenment + 4) = qword_140C4A140;
  *((_QWORD *)&HalpEnlightenment + 6) = qword_140C4A150;
  *((_QWORD *)&HalpEnlightenment + 7) = qword_140C4A158;
  *((_QWORD *)&HalpEnlightenment + 8) = qword_140C4A160;
  *((_QWORD *)&HalpEnlightenment + 9) = qword_140C4A168;
  *((_QWORD *)&HalpEnlightenment + 10) = qword_140C4A170;
  *((_QWORD *)&HalpEnlightenment + 11) = qword_140C4A178;
  *((_QWORD *)&HalpEnlightenment + 14) = qword_140C4A190;
  *((_QWORD *)&HalpEnlightenment + 19) = qword_140C4A1B8;
  *((_QWORD *)&HalpEnlightenment + 20) = qword_140C4A1C0;
  *((_QWORD *)&HalpEnlightenment + 21) = qword_140C4A1C8;
  *((_QWORD *)&HalpEnlightenment + 22) = qword_140C4A1D0;
  *((_QWORD *)&HalpEnlightenment + 23) = qword_140C4A1D8;
  *((_QWORD *)&HalpEnlightenment + 24) = qword_140C4A1E0;
  *((_QWORD *)&HalpEnlightenment + 46) = qword_140C4A290;
  *((_QWORD *)&HalpEnlightenment + 47) = qword_140C4A298;
  *((_QWORD *)&HalpEnlightenment + 29) = qword_140C4A208;
  *((_QWORD *)&HalpEnlightenment + 30) = qword_140C4A210;
  *((_QWORD *)&HalpEnlightenment + 1) = qword_140C4A128;
  *((_QWORD *)&HalpEnlightenment + 2) = qword_140C4A130;
  *((_QWORD *)&HalpEnlightenment + 12) = qword_140C4A180;
  *((_QWORD *)&HalpEnlightenment + 13) = qword_140C4A188;
  *((_QWORD *)&HalpEnlightenment + 15) = qword_140C4A198;
  *((_QWORD *)&HalpEnlightenment + 16) = qword_140C4A1A0;
  *((_QWORD *)&HalpEnlightenment + 17) = qword_140C4A1A8;
  *((_QWORD *)&HalpEnlightenment + 18) = qword_140C4A1B0;
  *((_QWORD *)&HalpEnlightenment + 26) = qword_140C4A1F0;
  *((_QWORD *)&HalpEnlightenment + 27) = qword_140C4A1F8;
  *((_QWORD *)&HalpEnlightenment + 28) = qword_140C4A200;
  *((_QWORD *)&HalpEnlightenment + 31) = qword_140C4A218;
  *((_QWORD *)&HalpEnlightenment + 32) = qword_140C4A220;
  *((_QWORD *)&HalpEnlightenment + 33) = qword_140C4A228;
  *((_QWORD *)&HalpEnlightenment + 34) = qword_140C4A230;
  *((_QWORD *)&HalpEnlightenment + 35) = qword_140C4A238;
  *((_QWORD *)&HalpEnlightenment + 36) = qword_140C4A240;
  *((_QWORD *)&HalpEnlightenment + 37) = qword_140C4A248;
  *((_QWORD *)&HalpEnlightenment + 38) = qword_140C4A250;
  *((_QWORD *)&HalpEnlightenment + 39) = qword_140C4A258;
  *((_QWORD *)&HalpEnlightenment + 40) = qword_140C4A260;
  *((_QWORD *)&HalpEnlightenment + 41) = qword_140C4A268;
  *((_QWORD *)&HalpEnlightenment + 42) = qword_140C4A270;
  *((_QWORD *)&HalpEnlightenment + 43) = qword_140C4A278;
  *((_QWORD *)&HalpEnlightenment + 44) = qword_140C4A280;
  *((_QWORD *)&HalpEnlightenment + 45) = qword_140C4A288;
  return HalpTimerUpdateApiConsumers();
}
