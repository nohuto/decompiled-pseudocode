/*
 * XREFs of HalpSaveAndDisableEnlightenment @ 0x1404C3150
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14037B354 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x1404D56B8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpSaveAndDisableEnlightenment()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C4A39C = dword_140C4A17C;
    qword_140C4A3A0 = (__int64)qword_140C4A180;
    dword_140C4A384 = dword_140C4A164;
    qword_140C4A3B0 = qword_140C4A190;
    qword_140C4A3B8 = qword_140C4A198;
    qword_140C4A3C0 = qword_140C4A1A0;
    qword_140C4A3C8 = qword_140C4A1A8;
    qword_140C4A3D0 = qword_140C4A1B0;
    qword_140C4A3D8 = qword_140C4A1B8;
    qword_140C4A3F0 = (__int64)qword_140C4A1D0;
    qword_140C4A418 = (__int64)qword_140C4A1F8;
    qword_140C4A420 = qword_140C4A200;
    qword_140C4A428 = qword_140C4A208;
    qword_140C4A430 = qword_140C4A210;
    qword_140C4A438 = qword_140C4A218;
    qword_140C4A440 = qword_140C4A220;
    HalpEnlightenmentHbSaved = HalpEnlightenment;
    qword_140C4A4F0 = (__int64)qword_140C4A2D0;
    qword_140C4A4F8 = qword_140C4A2D8;
    qword_140C4A468 = (__int64)qword_140C4A248;
    qword_140C4A470 = qword_140C4A250;
    xmmword_140C4A388 = xmmword_140C4A168;
    qword_140C4A3E0 = qword_140C4A1C0;
    qword_140C4A3E8 = qword_140C4A1C8;
    qword_140C4A3F8 = (__int64)qword_140C4A1D8;
    qword_140C4A400 = (__int64)qword_140C4A1E0;
    qword_140C4A408 = (__int64)qword_140C4A1E8;
    qword_140C4A410 = qword_140C4A1F0;
    qword_140C4A450 = (__int64)qword_140C4A230;
    qword_140C4A458 = (__int64)qword_140C4A238;
    qword_140C4A460 = qword_140C4A240;
    qword_140C4A478 = qword_140C4A258;
    qword_140C4A480 = qword_140C4A260;
    qword_140C4A488 = qword_140C4A268;
    qword_140C4A490 = qword_140C4A270;
    qword_140C4A498 = qword_140C4A278;
    qword_140C4A4A0 = qword_140C4A280;
    qword_140C4A4A8 = qword_140C4A288;
    qword_140C4A4B0 = qword_140C4A290;
    qword_140C4A4B8 = qword_140C4A298;
    qword_140C4A4C0 = qword_140C4A2A0;
    qword_140C4A4C8 = qword_140C4A2A8;
    qword_140C4A4D0 = qword_140C4A2B0;
    qword_140C4A4D8 = qword_140C4A2B8;
    qword_140C4A4E0 = qword_140C4A2C0;
    qword_140C4A4E8 = qword_140C4A2C8;
    HalpEnlightenment = 0;
    dword_140C4A17C = -1;
    qword_140C4A180 = 0LL;
    dword_140C4A164 = 0;
    qword_140C4A190 = 0LL;
    qword_140C4A198 = 0LL;
    qword_140C4A1A0 = 0LL;
    qword_140C4A1A8 = 0LL;
    qword_140C4A1B0 = 0LL;
    qword_140C4A1B8 = 0LL;
    qword_140C4A1D0 = 0LL;
    qword_140C4A1F8 = 0LL;
    qword_140C4A200 = 0LL;
    qword_140C4A208 = 0LL;
    qword_140C4A210 = 0LL;
    qword_140C4A218 = 0LL;
    qword_140C4A220 = 0LL;
    qword_140C4A2D0 = 0LL;
    qword_140C4A248 = 0LL;
    qword_140C4A250 = 0LL;
    xmmword_140C4A168 = 0uLL;
    qword_140C4A1C0 = 0LL;
    qword_140C4A1C8 = 0LL;
    qword_140C4A1D8 = 0LL;
    qword_140C4A1E0 = 0LL;
    qword_140C4A1E8 = 0LL;
    qword_140C4A1F0 = 0LL;
    qword_140C4A230 = 0LL;
    qword_140C4A238 = 0LL;
    qword_140C4A240 = 0LL;
    qword_140C4A258 = 0LL;
    qword_140C4A260 = 0LL;
    qword_140C4A268 = 0LL;
    qword_140C4A270 = 0LL;
    qword_140C4A278 = 0LL;
    qword_140C4A280 = 0LL;
    qword_140C4A288 = 0LL;
    qword_140C4A290 = 0LL;
    qword_140C4A298 = 0LL;
    qword_140C4A2A0 = 0LL;
    qword_140C4A2A8 = 0LL;
    qword_140C4A2B0 = 0LL;
    qword_140C4A2B8 = 0LL;
    qword_140C4A2C0 = 0LL;
    qword_140C4A2C8 = 0LL;
    return HalpTimerUpdateApiConsumers();
  }
  return result;
}
