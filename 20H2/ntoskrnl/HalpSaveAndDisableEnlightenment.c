/*
 * XREFs of HalpSaveAndDisableEnlightenment @ 0x1404C1780
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x14037B104 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x1404D3CE8 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpSaveAndDisableEnlightenment()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C4A03C = dword_140C4A25C;
    qword_140C4A040 = (__int64)qword_140C4A260;
    dword_140C4A024 = dword_140C4A244;
    qword_140C4A050 = qword_140C4A270;
    qword_140C4A058 = qword_140C4A278;
    qword_140C4A060 = qword_140C4A280;
    qword_140C4A068 = qword_140C4A288;
    qword_140C4A070 = qword_140C4A290;
    qword_140C4A078 = qword_140C4A298;
    qword_140C4A090 = (__int64)qword_140C4A2B0;
    qword_140C4A0B8 = (__int64)qword_140C4A2D8;
    qword_140C4A0C0 = qword_140C4A2E0;
    qword_140C4A0C8 = qword_140C4A2E8;
    qword_140C4A0D0 = qword_140C4A2F0;
    qword_140C4A0D8 = qword_140C4A2F8;
    qword_140C4A0E0 = qword_140C4A300;
    HalpEnlightenmentHbSaved = HalpEnlightenment;
    qword_140C4A190 = (__int64)qword_140C4A3B0;
    qword_140C4A198 = qword_140C4A3B8;
    qword_140C4A108 = (__int64)qword_140C4A328;
    qword_140C4A110 = qword_140C4A330;
    xmmword_140C4A028 = xmmword_140C4A248;
    qword_140C4A080 = qword_140C4A2A0;
    qword_140C4A088 = qword_140C4A2A8;
    qword_140C4A098 = (__int64)qword_140C4A2B8;
    qword_140C4A0A0 = (__int64)qword_140C4A2C0;
    qword_140C4A0A8 = (__int64)qword_140C4A2C8;
    qword_140C4A0B0 = qword_140C4A2D0;
    qword_140C4A0F0 = (__int64)qword_140C4A310;
    qword_140C4A0F8 = (__int64)qword_140C4A318;
    qword_140C4A100 = qword_140C4A320;
    qword_140C4A118 = qword_140C4A338;
    qword_140C4A120 = qword_140C4A340;
    qword_140C4A128 = qword_140C4A348;
    qword_140C4A130 = qword_140C4A350;
    qword_140C4A138 = qword_140C4A358;
    qword_140C4A140 = qword_140C4A360;
    qword_140C4A148 = qword_140C4A368;
    qword_140C4A150 = qword_140C4A370;
    qword_140C4A158 = qword_140C4A378;
    qword_140C4A160 = qword_140C4A380;
    qword_140C4A168 = qword_140C4A388;
    qword_140C4A170 = qword_140C4A390;
    qword_140C4A178 = qword_140C4A398;
    qword_140C4A180 = qword_140C4A3A0;
    qword_140C4A188 = qword_140C4A3A8;
    HalpEnlightenment = 0;
    dword_140C4A25C = -1;
    qword_140C4A260 = 0LL;
    dword_140C4A244 = 0;
    qword_140C4A270 = 0LL;
    qword_140C4A278 = 0LL;
    qword_140C4A280 = 0LL;
    qword_140C4A288 = 0LL;
    qword_140C4A290 = 0LL;
    qword_140C4A298 = 0LL;
    qword_140C4A2B0 = 0LL;
    qword_140C4A2D8 = 0LL;
    qword_140C4A2E0 = 0LL;
    qword_140C4A2E8 = 0LL;
    qword_140C4A2F0 = 0LL;
    qword_140C4A2F8 = 0LL;
    qword_140C4A300 = 0LL;
    qword_140C4A3B0 = 0LL;
    qword_140C4A328 = 0LL;
    qword_140C4A330 = 0LL;
    xmmword_140C4A248 = 0uLL;
    qword_140C4A2A0 = 0LL;
    qword_140C4A2A8 = 0LL;
    qword_140C4A2B8 = 0LL;
    qword_140C4A2C0 = 0LL;
    qword_140C4A2C8 = 0LL;
    qword_140C4A2D0 = 0LL;
    qword_140C4A310 = 0LL;
    qword_140C4A318 = 0LL;
    qword_140C4A320 = 0LL;
    qword_140C4A338 = 0LL;
    qword_140C4A340 = 0LL;
    qword_140C4A348 = 0LL;
    qword_140C4A350 = 0LL;
    qword_140C4A358 = 0LL;
    qword_140C4A360 = 0LL;
    qword_140C4A368 = 0LL;
    qword_140C4A370 = 0LL;
    qword_140C4A378 = 0LL;
    qword_140C4A380 = 0LL;
    qword_140C4A388 = 0LL;
    qword_140C4A390 = 0LL;
    qword_140C4A398 = 0LL;
    qword_140C4A3A0 = 0LL;
    qword_140C4A3A8 = 0LL;
    return HalpTimerUpdateApiConsumers();
  }
  return result;
}
