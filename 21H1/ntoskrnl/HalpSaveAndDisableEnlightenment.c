/*
 * XREFs of HalpSaveAndDisableEnlightenment @ 0x1404BDB80
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x140378614 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x1404D0298 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpSaveAndDisableEnlightenment()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C4A13C = dword_140C4A35C;
    qword_140C4A140 = (__int64)qword_140C4A360;
    dword_140C4A124 = dword_140C4A344;
    qword_140C4A150 = qword_140C4A370;
    qword_140C4A158 = qword_140C4A378;
    qword_140C4A160 = qword_140C4A380;
    qword_140C4A168 = qword_140C4A388;
    qword_140C4A170 = qword_140C4A390;
    qword_140C4A178 = qword_140C4A398;
    qword_140C4A190 = (__int64)qword_140C4A3B0;
    qword_140C4A1B8 = (__int64)qword_140C4A3D8;
    qword_140C4A1C0 = qword_140C4A3E0;
    qword_140C4A1C8 = qword_140C4A3E8;
    qword_140C4A1D0 = qword_140C4A3F0;
    qword_140C4A1D8 = qword_140C4A3F8;
    qword_140C4A1E0 = qword_140C4A400;
    HalpEnlightenmentHbSaved = HalpEnlightenment;
    qword_140C4A290 = (__int64)qword_140C4A4B0;
    qword_140C4A298 = (__int64)qword_140C4A4B8;
    qword_140C4A208 = (__int64)qword_140C4A428;
    qword_140C4A210 = qword_140C4A430;
    xmmword_140C4A128 = xmmword_140C4A348;
    qword_140C4A180 = qword_140C4A3A0;
    qword_140C4A188 = qword_140C4A3A8;
    qword_140C4A198 = (__int64)qword_140C4A3B8;
    qword_140C4A1A0 = (__int64)qword_140C4A3C0;
    qword_140C4A1A8 = (__int64)qword_140C4A3C8;
    qword_140C4A1B0 = qword_140C4A3D0;
    qword_140C4A1F0 = (__int64)qword_140C4A410;
    qword_140C4A1F8 = (__int64)qword_140C4A418;
    qword_140C4A200 = qword_140C4A420;
    qword_140C4A218 = qword_140C4A438;
    qword_140C4A220 = qword_140C4A440;
    qword_140C4A228 = qword_140C4A448;
    qword_140C4A230 = qword_140C4A450;
    qword_140C4A238 = qword_140C4A458;
    qword_140C4A240 = qword_140C4A460;
    qword_140C4A248 = qword_140C4A468;
    qword_140C4A250 = qword_140C4A470;
    qword_140C4A258 = qword_140C4A478;
    qword_140C4A260 = qword_140C4A480;
    qword_140C4A268 = qword_140C4A488;
    qword_140C4A270 = qword_140C4A490;
    qword_140C4A278 = qword_140C4A498;
    qword_140C4A280 = qword_140C4A4A0;
    qword_140C4A288 = qword_140C4A4A8;
    HalpEnlightenment = 0;
    dword_140C4A35C = -1;
    qword_140C4A360 = 0LL;
    dword_140C4A344 = 0;
    qword_140C4A370 = 0LL;
    qword_140C4A378 = 0LL;
    qword_140C4A380 = 0LL;
    qword_140C4A388 = 0LL;
    qword_140C4A390 = 0LL;
    qword_140C4A398 = 0LL;
    qword_140C4A3B0 = 0LL;
    qword_140C4A3D8 = 0LL;
    qword_140C4A3E0 = 0LL;
    qword_140C4A3E8 = 0LL;
    qword_140C4A3F0 = 0LL;
    qword_140C4A3F8 = 0LL;
    qword_140C4A400 = 0LL;
    qword_140C4A4B0 = 0LL;
    qword_140C4A428 = 0LL;
    qword_140C4A430 = 0LL;
    xmmword_140C4A348 = 0uLL;
    qword_140C4A3A0 = 0LL;
    qword_140C4A3A8 = 0LL;
    qword_140C4A3B8 = 0LL;
    qword_140C4A3C0 = 0LL;
    qword_140C4A3C8 = 0LL;
    qword_140C4A3D0 = 0LL;
    qword_140C4A410 = 0LL;
    qword_140C4A418 = 0LL;
    qword_140C4A420 = 0LL;
    qword_140C4A438 = 0LL;
    qword_140C4A440 = 0LL;
    qword_140C4A448 = 0LL;
    qword_140C4A450 = 0LL;
    qword_140C4A458 = 0LL;
    qword_140C4A460 = 0LL;
    qword_140C4A468 = 0LL;
    qword_140C4A470 = 0LL;
    qword_140C4A478 = 0LL;
    qword_140C4A480 = 0LL;
    qword_140C4A488 = 0LL;
    qword_140C4A490 = 0LL;
    qword_140C4A498 = 0LL;
    qword_140C4A4A0 = 0LL;
    qword_140C4A4A8 = 0LL;
    return HalpTimerUpdateApiConsumers();
  }
  return result;
}
