/*
 * XREFs of HalpRestoreHvEnlightenment @ 0x14050F200
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerUpdateApiConsumers @ 0x1405229E8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpRestoreHvEnlightenment()
{
  HalpEnlightenment = HalpEnlightenmentHbSaved;
  *(&HalpEnlightenment + 1) = dword_140C4C224;
  *(&HalpEnlightenment + 7) = dword_140C4C23C;
  *((_QWORD *)&HalpEnlightenment + 4) = qword_140C4C240;
  *((_QWORD *)&HalpEnlightenment + 6) = qword_140C4C250;
  *((_QWORD *)&HalpEnlightenment + 7) = qword_140C4C258;
  *((_QWORD *)&HalpEnlightenment + 8) = qword_140C4C260;
  *((_QWORD *)&HalpEnlightenment + 9) = qword_140C4C268;
  *((_QWORD *)&HalpEnlightenment + 10) = qword_140C4C270;
  *((_QWORD *)&HalpEnlightenment + 11) = qword_140C4C278;
  *((_QWORD *)&HalpEnlightenment + 14) = qword_140C4C290;
  *((_QWORD *)&HalpEnlightenment + 19) = qword_140C4C2B8;
  *((_QWORD *)&HalpEnlightenment + 20) = qword_140C4C2C0;
  *((_QWORD *)&HalpEnlightenment + 21) = qword_140C4C2C8;
  *((_QWORD *)&HalpEnlightenment + 22) = qword_140C4C2D0;
  *((_QWORD *)&HalpEnlightenment + 23) = qword_140C4C2D8;
  *((_QWORD *)&HalpEnlightenment + 24) = qword_140C4C2E0;
  *((_QWORD *)&HalpEnlightenment + 46) = qword_140C4C390;
  *((_QWORD *)&HalpEnlightenment + 47) = qword_140C4C398;
  *((_QWORD *)&HalpEnlightenment + 29) = qword_140C4C308;
  *((_QWORD *)&HalpEnlightenment + 30) = qword_140C4C310;
  *((_QWORD *)&HalpEnlightenment + 1) = qword_140C4C228;
  *((_QWORD *)&HalpEnlightenment + 2) = qword_140C4C230;
  *((_QWORD *)&HalpEnlightenment + 12) = qword_140C4C280;
  *((_QWORD *)&HalpEnlightenment + 13) = qword_140C4C288;
  *((_QWORD *)&HalpEnlightenment + 15) = qword_140C4C298;
  *((_QWORD *)&HalpEnlightenment + 16) = qword_140C4C2A0;
  *((_QWORD *)&HalpEnlightenment + 17) = qword_140C4C2A8;
  *((_QWORD *)&HalpEnlightenment + 18) = qword_140C4C2B0;
  *((_QWORD *)&HalpEnlightenment + 26) = qword_140C4C2F0;
  *((_QWORD *)&HalpEnlightenment + 27) = qword_140C4C2F8;
  *((_QWORD *)&HalpEnlightenment + 28) = qword_140C4C300;
  *((_QWORD *)&HalpEnlightenment + 31) = qword_140C4C318;
  *((_QWORD *)&HalpEnlightenment + 32) = qword_140C4C320;
  *((_QWORD *)&HalpEnlightenment + 33) = qword_140C4C328;
  *((_QWORD *)&HalpEnlightenment + 34) = qword_140C4C330;
  *((_QWORD *)&HalpEnlightenment + 35) = qword_140C4C338;
  *((_QWORD *)&HalpEnlightenment + 36) = qword_140C4C340;
  *((_QWORD *)&HalpEnlightenment + 37) = qword_140C4C348;
  *((_QWORD *)&HalpEnlightenment + 38) = qword_140C4C350;
  *((_QWORD *)&HalpEnlightenment + 39) = qword_140C4C358;
  *((_QWORD *)&HalpEnlightenment + 40) = qword_140C4C360;
  *((_QWORD *)&HalpEnlightenment + 41) = qword_140C4C368;
  *((_QWORD *)&HalpEnlightenment + 42) = qword_140C4C370;
  *((_QWORD *)&HalpEnlightenment + 43) = qword_140C4C378;
  *((_QWORD *)&HalpEnlightenment + 44) = qword_140C4C380;
  *((_QWORD *)&HalpEnlightenment + 45) = qword_140C4C388;
  return HalpTimerUpdateApiConsumers();
}
