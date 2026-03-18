/*
 * XREFs of HalpHvInitDiscard @ 0x140A71E3C
 * Callers:
 *     HalpHvInitSystem @ 0x1409A3E90 (HalpHvInitSystem.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140405F40 (_guard_dispatch_icall.c)
 *     memset @ 0x140411300 (memset.c)
 */

__int64 HalpHvInitDiscard()
{
  _QWORD v1[64]; // [rsp+20h] [rbp-E0h] BYREF

  memset(v1, 0, 0x1F8uLL);
  if ( qword_140C00710 )
  {
    qword_140C00710(v1);
    if ( !LODWORD(v1[3]) && HIDWORD(v1[3]) && ((HIDWORD(v1[3]) + 1) & HIDWORD(v1[3])) == 0 )
    {
      HalpEnlightenment = v1[0];
      dword_140C4A25C = HIDWORD(v1[3]);
      qword_140C4A260 = (__int64 (__fastcall *)(_QWORD))v1[4];
      qword_140C4A268 = (__int64 (__fastcall *)(_QWORD))v1[5];
      qword_140C4A288 = v1[9];
      qword_140C4A290 = v1[10];
      qword_140C4A298 = v1[11];
      qword_140C4A270 = v1[6];
      qword_140C4A278 = v1[7];
      qword_140C4A280 = v1[8];
      qword_140C4A2B0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[14];
      qword_140C4A2D8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[19];
      qword_140C4A2E0 = (__int64 (__fastcall *)(_QWORD))v1[20];
      qword_140C4A2E8 = (__int64 (*)(void))v1[21];
      qword_140C4A2F0 = v1[22];
      qword_140C4A2F8 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[23];
      qword_140C4A300 = v1[24];
      qword_140C4A308 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[25];
      qword_140C4A3B0 = (__int64 (__fastcall *)(_QWORD))v1[46];
      qword_140C4A3B8 = v1[47];
      qword_140C4A310 = (__int64 (*)(void))v1[26];
      qword_140C4A318 = (__int64 (__fastcall *)(_QWORD))v1[27];
      qword_140C4A320 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[28];
      qword_140C4A328 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD, _DWORD, _DWORD, _QWORD))v1[29];
      qword_140C4A330 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[30];
      xmmword_140C4A248 = *(_OWORD *)&v1[1];
      qword_140C4A2A0 = v1[12];
      qword_140C4A2A8 = v1[13];
      qword_140C4A2B8 = (__int64 (*)(void))v1[15];
      qword_140C4A2C0 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[16];
      qword_140C4A2C8 = (__int64 (__fastcall *)(_QWORD))v1[17];
      qword_140C4A2D0 = v1[18];
      qword_140C4A338 = v1[31];
      qword_140C4A340 = v1[32];
      qword_140C4A348 = v1[33];
      qword_140C4A350 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[34];
      qword_140C4A358 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))v1[35];
      qword_140C4A360 = v1[36];
      qword_140C4A368 = v1[37];
      qword_140C4A370 = v1[38];
      qword_140C4A378 = v1[39];
      qword_140C4A380 = v1[40];
      qword_140C4A388 = v1[41];
      qword_140C4A390 = v1[42];
      qword_140C4A398 = v1[43];
      qword_140C4A3A0 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[44];
      qword_140C4A3A8 = v1[45];
      qword_140C4A3C0 = v1[48];
      qword_140C4A3C8 = v1[49];
      qword_140C4A3D0 = v1[50];
      qword_140C4A3D8 = v1[51];
      qword_140C4A3E0 = v1[52];
      qword_140C4A3E8 = v1[53];
      qword_140C4A3F0 = v1[54];
      qword_140C4A3F8 = v1[55];
      qword_140C4A418 = (__int64 (__fastcall *)(_QWORD, _QWORD))v1[59];
      qword_140C4A428 = (__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))v1[61];
      qword_140C4A400 = v1[56];
      qword_140C4A408 = v1[57];
      qword_140C4A410 = v1[58];
      qword_140C4A430 = v1[62];
    }
  }
  if ( HalpHvCpuManager )
  {
    if ( qword_140C4A270 )
      HalpHvSleepEnlightenedCpuManager = 1;
    if ( qword_140C4A2B0 )
      HalpHvWheaEnlightenedCpuManager = 1;
  }
  off_140C00698[0] = (__int64 (__fastcall *)())HalpPrepareForBugcheck;
  off_140C007A0[0] = HalpSaveAndDisableEnlightenment;
  off_140C007A8[0] = HalpRestoreHvEnlightenment;
  return 0LL;
}
