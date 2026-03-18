/*
 * XREFs of HalpRestoreHvEnlightenment @ 0x1404BDEF0
 * Callers:
 *     <none>
 * Callees:
 *     HalpTimerUpdateApiConsumers @ 0x1404D0748 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpRestoreHvEnlightenment()
{
  HalpEnlightenment = HalpEnlightenmentHbSaved;
  *(&HalpEnlightenment + 1) = dword_140C49FC4;
  *(&HalpEnlightenment + 7) = dword_140C49FDC;
  *((_QWORD *)&HalpEnlightenment + 4) = qword_140C49FE0;
  *((_QWORD *)&HalpEnlightenment + 6) = qword_140C49FF0;
  *((_QWORD *)&HalpEnlightenment + 7) = qword_140C49FF8;
  *((_QWORD *)&HalpEnlightenment + 8) = qword_140C4A000;
  *((_QWORD *)&HalpEnlightenment + 9) = qword_140C4A008;
  *((_QWORD *)&HalpEnlightenment + 10) = qword_140C4A010;
  *((_QWORD *)&HalpEnlightenment + 11) = qword_140C4A018;
  *((_QWORD *)&HalpEnlightenment + 14) = qword_140C4A030;
  *((_QWORD *)&HalpEnlightenment + 19) = qword_140C4A058;
  *((_QWORD *)&HalpEnlightenment + 20) = qword_140C4A060;
  *((_QWORD *)&HalpEnlightenment + 21) = qword_140C4A068;
  *((_QWORD *)&HalpEnlightenment + 22) = qword_140C4A070;
  *((_QWORD *)&HalpEnlightenment + 23) = qword_140C4A078;
  *((_QWORD *)&HalpEnlightenment + 24) = qword_140C4A080;
  *((_QWORD *)&HalpEnlightenment + 46) = qword_140C4A130;
  *((_QWORD *)&HalpEnlightenment + 47) = qword_140C4A138;
  *((_QWORD *)&HalpEnlightenment + 29) = qword_140C4A0A8;
  *((_QWORD *)&HalpEnlightenment + 30) = qword_140C4A0B0;
  *((_QWORD *)&HalpEnlightenment + 1) = qword_140C49FC8;
  *((_QWORD *)&HalpEnlightenment + 2) = qword_140C49FD0;
  *((_QWORD *)&HalpEnlightenment + 12) = qword_140C4A020;
  *((_QWORD *)&HalpEnlightenment + 13) = qword_140C4A028;
  *((_QWORD *)&HalpEnlightenment + 15) = qword_140C4A038;
  *((_QWORD *)&HalpEnlightenment + 16) = qword_140C4A040;
  *((_QWORD *)&HalpEnlightenment + 17) = qword_140C4A048;
  *((_QWORD *)&HalpEnlightenment + 18) = qword_140C4A050;
  *((_QWORD *)&HalpEnlightenment + 26) = qword_140C4A090;
  *((_QWORD *)&HalpEnlightenment + 27) = qword_140C4A098;
  *((_QWORD *)&HalpEnlightenment + 28) = qword_140C4A0A0;
  *((_QWORD *)&HalpEnlightenment + 31) = qword_140C4A0B8;
  *((_QWORD *)&HalpEnlightenment + 32) = qword_140C4A0C0;
  *((_QWORD *)&HalpEnlightenment + 33) = qword_140C4A0C8;
  *((_QWORD *)&HalpEnlightenment + 34) = qword_140C4A0D0;
  *((_QWORD *)&HalpEnlightenment + 35) = qword_140C4A0D8;
  *((_QWORD *)&HalpEnlightenment + 36) = qword_140C4A0E0;
  *((_QWORD *)&HalpEnlightenment + 37) = qword_140C4A0E8;
  *((_QWORD *)&HalpEnlightenment + 38) = qword_140C4A0F0;
  *((_QWORD *)&HalpEnlightenment + 39) = qword_140C4A0F8;
  *((_QWORD *)&HalpEnlightenment + 40) = qword_140C4A100;
  *((_QWORD *)&HalpEnlightenment + 41) = qword_140C4A108;
  *((_QWORD *)&HalpEnlightenment + 42) = qword_140C4A110;
  *((_QWORD *)&HalpEnlightenment + 43) = qword_140C4A118;
  *((_QWORD *)&HalpEnlightenment + 44) = qword_140C4A120;
  *((_QWORD *)&HalpEnlightenment + 45) = qword_140C4A128;
  return HalpTimerUpdateApiConsumers();
}
