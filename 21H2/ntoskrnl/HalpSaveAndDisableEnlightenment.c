/*
 * XREFs of HalpSaveAndDisableEnlightenment @ 0x1404C3390
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14037AEA4 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x1404D58F8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpSaveAndDisableEnlightenment()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C4A3DC = dword_140C4A1BC;
    qword_140C4A3E0 = (__int64)qword_140C4A1C0;
    dword_140C4A3C4 = dword_140C4A1A4;
    qword_140C4A3F0 = qword_140C4A1D0;
    qword_140C4A3F8 = qword_140C4A1D8;
    qword_140C4A400 = qword_140C4A1E0;
    qword_140C4A408 = qword_140C4A1E8;
    qword_140C4A410 = qword_140C4A1F0;
    qword_140C4A418 = qword_140C4A1F8;
    qword_140C4A430 = (__int64)qword_140C4A210;
    qword_140C4A458 = (__int64)qword_140C4A238;
    qword_140C4A460 = qword_140C4A240;
    qword_140C4A468 = qword_140C4A248;
    qword_140C4A470 = qword_140C4A250;
    qword_140C4A478 = qword_140C4A258;
    qword_140C4A480 = qword_140C4A260;
    HalpEnlightenmentHbSaved = HalpEnlightenment;
    qword_140C4A530 = (__int64)qword_140C4A310;
    qword_140C4A538 = qword_140C4A318;
    qword_140C4A4A8 = (__int64)qword_140C4A288;
    qword_140C4A4B0 = qword_140C4A290;
    xmmword_140C4A3C8 = xmmword_140C4A1A8;
    qword_140C4A420 = qword_140C4A200;
    qword_140C4A428 = qword_140C4A208;
    qword_140C4A438 = (__int64)qword_140C4A218;
    qword_140C4A440 = (__int64)qword_140C4A220;
    qword_140C4A448 = (__int64)qword_140C4A228;
    qword_140C4A450 = qword_140C4A230;
    qword_140C4A490 = (__int64)qword_140C4A270;
    qword_140C4A498 = (__int64)qword_140C4A278;
    qword_140C4A4A0 = qword_140C4A280;
    qword_140C4A4B8 = qword_140C4A298;
    qword_140C4A4C0 = qword_140C4A2A0;
    qword_140C4A4C8 = qword_140C4A2A8;
    qword_140C4A4D0 = qword_140C4A2B0;
    qword_140C4A4D8 = qword_140C4A2B8;
    qword_140C4A4E0 = qword_140C4A2C0;
    qword_140C4A4E8 = qword_140C4A2C8;
    qword_140C4A4F0 = qword_140C4A2D0;
    qword_140C4A4F8 = qword_140C4A2D8;
    qword_140C4A500 = qword_140C4A2E0;
    qword_140C4A508 = qword_140C4A2E8;
    qword_140C4A510 = qword_140C4A2F0;
    qword_140C4A518 = qword_140C4A2F8;
    qword_140C4A520 = qword_140C4A300;
    qword_140C4A528 = qword_140C4A308;
    HalpEnlightenment = 0;
    dword_140C4A1BC = -1;
    qword_140C4A1C0 = 0LL;
    dword_140C4A1A4 = 0;
    qword_140C4A1D0 = 0LL;
    qword_140C4A1D8 = 0LL;
    qword_140C4A1E0 = 0LL;
    qword_140C4A1E8 = 0LL;
    qword_140C4A1F0 = 0LL;
    qword_140C4A1F8 = 0LL;
    qword_140C4A210 = 0LL;
    qword_140C4A238 = 0LL;
    qword_140C4A240 = 0LL;
    qword_140C4A248 = 0LL;
    qword_140C4A250 = 0LL;
    qword_140C4A258 = 0LL;
    qword_140C4A260 = 0LL;
    qword_140C4A310 = 0LL;
    qword_140C4A288 = 0LL;
    qword_140C4A290 = 0LL;
    xmmword_140C4A1A8 = 0uLL;
    qword_140C4A200 = 0LL;
    qword_140C4A208 = 0LL;
    qword_140C4A218 = 0LL;
    qword_140C4A220 = 0LL;
    qword_140C4A228 = 0LL;
    qword_140C4A230 = 0LL;
    qword_140C4A270 = 0LL;
    qword_140C4A278 = 0LL;
    qword_140C4A280 = 0LL;
    qword_140C4A298 = 0LL;
    qword_140C4A2A0 = 0LL;
    qword_140C4A2A8 = 0LL;
    qword_140C4A2B0 = 0LL;
    qword_140C4A2B8 = 0LL;
    qword_140C4A2C0 = 0LL;
    qword_140C4A2C8 = 0LL;
    qword_140C4A2D0 = 0LL;
    qword_140C4A2D8 = 0LL;
    qword_140C4A2E0 = 0LL;
    qword_140C4A2E8 = 0LL;
    qword_140C4A2F0 = 0LL;
    qword_140C4A2F8 = 0LL;
    qword_140C4A300 = 0LL;
    qword_140C4A308 = 0LL;
    return HalpTimerUpdateApiConsumers();
  }
  return result;
}
