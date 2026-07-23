/*
 * XREFs of HalpRestoreHvEnlightenment @ 0x1404C3020
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerUpdateApiConsumers @ 0x1404D58F8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpRestoreHvEnlightenment()
{
  HalpEnlightenment = HalpEnlightenmentHbSaved;
  *(&HalpEnlightenment + 1) = dword_140C4A3C4;
  *(&HalpEnlightenment + 7) = dword_140C4A3DC;
  *((_QWORD *)&HalpEnlightenment + 4) = qword_140C4A3E0;
  *((_QWORD *)&HalpEnlightenment + 6) = qword_140C4A3F0;
  *((_QWORD *)&HalpEnlightenment + 7) = qword_140C4A3F8;
  *((_QWORD *)&HalpEnlightenment + 8) = qword_140C4A400;
  *((_QWORD *)&HalpEnlightenment + 9) = qword_140C4A408;
  *((_QWORD *)&HalpEnlightenment + 10) = qword_140C4A410;
  *((_QWORD *)&HalpEnlightenment + 11) = qword_140C4A418;
  *((_QWORD *)&HalpEnlightenment + 14) = qword_140C4A430;
  *((_QWORD *)&HalpEnlightenment + 19) = qword_140C4A458;
  *((_QWORD *)&HalpEnlightenment + 20) = qword_140C4A460;
  *((_QWORD *)&HalpEnlightenment + 21) = qword_140C4A468;
  *((_QWORD *)&HalpEnlightenment + 22) = qword_140C4A470;
  *((_QWORD *)&HalpEnlightenment + 23) = qword_140C4A478;
  *((_QWORD *)&HalpEnlightenment + 24) = qword_140C4A480;
  *((_QWORD *)&HalpEnlightenment + 46) = qword_140C4A530;
  *((_QWORD *)&HalpEnlightenment + 47) = qword_140C4A538;
  *((_QWORD *)&HalpEnlightenment + 29) = qword_140C4A4A8;
  *((_QWORD *)&HalpEnlightenment + 30) = qword_140C4A4B0;
  *((_QWORD *)&HalpEnlightenment + 1) = qword_140C4A3C8;
  *((_QWORD *)&HalpEnlightenment + 2) = qword_140C4A3D0;
  *((_QWORD *)&HalpEnlightenment + 12) = qword_140C4A420;
  *((_QWORD *)&HalpEnlightenment + 13) = qword_140C4A428;
  *((_QWORD *)&HalpEnlightenment + 15) = qword_140C4A438;
  *((_QWORD *)&HalpEnlightenment + 16) = qword_140C4A440;
  *((_QWORD *)&HalpEnlightenment + 17) = qword_140C4A448;
  *((_QWORD *)&HalpEnlightenment + 18) = qword_140C4A450;
  *((_QWORD *)&HalpEnlightenment + 26) = qword_140C4A490;
  *((_QWORD *)&HalpEnlightenment + 27) = qword_140C4A498;
  *((_QWORD *)&HalpEnlightenment + 28) = qword_140C4A4A0;
  *((_QWORD *)&HalpEnlightenment + 31) = qword_140C4A4B8;
  *((_QWORD *)&HalpEnlightenment + 32) = qword_140C4A4C0;
  *((_QWORD *)&HalpEnlightenment + 33) = qword_140C4A4C8;
  *((_QWORD *)&HalpEnlightenment + 34) = qword_140C4A4D0;
  *((_QWORD *)&HalpEnlightenment + 35) = qword_140C4A4D8;
  *((_QWORD *)&HalpEnlightenment + 36) = qword_140C4A4E0;
  *((_QWORD *)&HalpEnlightenment + 37) = qword_140C4A4E8;
  *((_QWORD *)&HalpEnlightenment + 38) = qword_140C4A4F0;
  *((_QWORD *)&HalpEnlightenment + 39) = qword_140C4A4F8;
  *((_QWORD *)&HalpEnlightenment + 40) = qword_140C4A500;
  *((_QWORD *)&HalpEnlightenment + 41) = qword_140C4A508;
  *((_QWORD *)&HalpEnlightenment + 42) = qword_140C4A510;
  *((_QWORD *)&HalpEnlightenment + 43) = qword_140C4A518;
  *((_QWORD *)&HalpEnlightenment + 44) = qword_140C4A520;
  *((_QWORD *)&HalpEnlightenment + 45) = qword_140C4A528;
  return HalpTimerUpdateApiConsumers();
}
