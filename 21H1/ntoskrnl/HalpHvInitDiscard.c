/*
 * XREFs of HalpHvInitDiscard @ 0x140A6B2D0
 * Callers:
 *     HalpHvInitSystem @ 0x14099C5F0 (HalpHvInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1403FE9E0 (_guard_dispatch_icall.c)
 *     memset @ 0x140408F80 (memset.c)
 */

__int64 HalpHvInitDiscard()
{
  _QWORD v1[62]; // [rsp+20h] [rbp-E0h] BYREF

  memset(v1, 0, sizeof(v1));
  if ( qword_140C00710 )
  {
    qword_140C00710(v1);
    if ( !LODWORD(v1[3]) && HIDWORD(v1[3]) && ((HIDWORD(v1[3]) + 1) & HIDWORD(v1[3])) == 0 )
    {
      HalpEnlightenment = v1[0];
      dword_140C4A35C = HIDWORD(v1[3]);
      qword_140C4A360 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[4];
      qword_140C4A368 = v1[5];
      qword_140C4A388 = v1[9];
      qword_140C4A390 = v1[10];
      qword_140C4A398 = v1[11];
      qword_140C4A370 = v1[6];
      qword_140C4A378 = v1[7];
      qword_140C4A380 = v1[8];
      qword_140C4A3B0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[14];
      qword_140C4A3D8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[19];
      qword_140C4A3E0 = (__int64 (__fastcall *)(_QWORD))v1[20];
      qword_140C4A3E8 = (__int64 (*)(void))v1[21];
      qword_140C4A3F0 = v1[22];
      qword_140C4A3F8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[23];
      qword_140C4A400 = v1[24];
      qword_140C4A408 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[25];
      qword_140C4A4B0 = (__int64 (__fastcall *)(_QWORD))v1[46];
      qword_140C4A4B8 = (__int64 (*)(void))v1[47];
      qword_140C4A410 = (__int64 (*)(void))v1[26];
      qword_140C4A418 = (__int64 (__fastcall *)(_QWORD))v1[27];
      qword_140C4A420 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[28];
      qword_140C4A428 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD))v1[29];
      qword_140C4A430 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[30];
      xmmword_140C4A348 = *(_OWORD *)&v1[1];
      qword_140C4A3A0 = v1[12];
      qword_140C4A3A8 = v1[13];
      qword_140C4A3B8 = (__int64 (*)(void))v1[15];
      qword_140C4A3C0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[16];
      qword_140C4A3C8 = (__int64 (__fastcall *)(_QWORD))v1[17];
      qword_140C4A3D0 = v1[18];
      qword_140C4A438 = v1[31];
      qword_140C4A440 = v1[32];
      qword_140C4A448 = v1[33];
      qword_140C4A450 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[34];
      qword_140C4A458 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[35];
      qword_140C4A460 = v1[36];
      qword_140C4A468 = v1[37];
      qword_140C4A470 = v1[38];
      qword_140C4A478 = v1[39];
      qword_140C4A480 = v1[40];
      qword_140C4A488 = v1[41];
      qword_140C4A490 = v1[42];
      qword_140C4A498 = v1[43];
      qword_140C4A4A0 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[44];
      qword_140C4A4A8 = v1[45];
      qword_140C4A4C0 = v1[48];
      qword_140C4A4C8 = v1[49];
      qword_140C4A4D0 = v1[50];
      qword_140C4A4D8 = v1[51];
      qword_140C4A4E0 = v1[52];
      qword_140C4A4E8 = v1[53];
      qword_140C4A4F0 = v1[54];
      qword_140C4A4F8 = v1[55];
      qword_140C4A518 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[59];
      qword_140C4A500 = v1[56];
      qword_140C4A508 = v1[57];
      qword_140C4A510 = v1[58];
      qword_140C4A528 = v1[61];
    }
  }
  if ( HalpHvCpuManager )
  {
    if ( qword_140C4A370 )
      HalpHvSleepEnlightenedCpuManager = 1;
    if ( qword_140C4A3B0 )
      HalpHvWheaEnlightenedCpuManager = 1;
  }
  off_140C00698[0] = (__int64 (__fastcall *)())HalpPrepareForBugcheck;
  off_140C007A0[0] = HalpSaveAndDisableEnlightenment;
  off_140C007A8[0] = HalpRestoreHvEnlightenment;
  return 0LL;
}
