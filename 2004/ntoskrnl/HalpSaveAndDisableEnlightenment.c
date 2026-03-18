/*
 * XREFs of HalpSaveAndDisableEnlightenment @ 0x1404BE260
 * Callers:
 *     <none>
 * Callees:
 *     HalpInterruptModel @ 0x1403793D4 (HalpInterruptModel.c)
 *     HalpTimerUpdateApiConsumers @ 0x1404D0748 (HalpTimerUpdateApiConsumers.c)
 */

__int64 HalpSaveAndDisableEnlightenment()
{
  __int64 result; // rax

  result = HalpInterruptModel();
  if ( (_DWORD)result == 1 )
  {
    dword_140C49FDC = dword_140C4A1FC;
    qword_140C49FE0 = (__int64)qword_140C4A200;
    dword_140C49FC4 = dword_140C4A1E4;
    qword_140C49FF0 = qword_140C4A210;
    qword_140C49FF8 = qword_140C4A218;
    qword_140C4A000 = qword_140C4A220;
    qword_140C4A008 = qword_140C4A228;
    qword_140C4A010 = qword_140C4A230;
    qword_140C4A018 = qword_140C4A238;
    qword_140C4A030 = (__int64)qword_140C4A250;
    qword_140C4A058 = (__int64)qword_140C4A278;
    qword_140C4A060 = qword_140C4A280;
    qword_140C4A068 = qword_140C4A288;
    qword_140C4A070 = qword_140C4A290;
    qword_140C4A078 = qword_140C4A298;
    qword_140C4A080 = qword_140C4A2A0;
    HalpEnlightenmentHbSaved = HalpEnlightenment;
    qword_140C4A130 = (__int64)qword_140C4A350;
    qword_140C4A138 = (__int64)qword_140C4A358;
    qword_140C4A0A8 = (__int64)qword_140C4A2C8;
    qword_140C4A0B0 = qword_140C4A2D0;
    xmmword_140C49FC8 = xmmword_140C4A1E8;
    qword_140C4A020 = qword_140C4A240;
    qword_140C4A028 = qword_140C4A248;
    qword_140C4A038 = (__int64)qword_140C4A258;
    qword_140C4A040 = (__int64)qword_140C4A260;
    qword_140C4A048 = (__int64)qword_140C4A268;
    qword_140C4A050 = qword_140C4A270;
    qword_140C4A090 = (__int64)qword_140C4A2B0;
    qword_140C4A098 = (__int64)qword_140C4A2B8;
    qword_140C4A0A0 = qword_140C4A2C0;
    qword_140C4A0B8 = qword_140C4A2D8;
    qword_140C4A0C0 = qword_140C4A2E0;
    qword_140C4A0C8 = qword_140C4A2E8;
    qword_140C4A0D0 = qword_140C4A2F0;
    qword_140C4A0D8 = qword_140C4A2F8;
    qword_140C4A0E0 = qword_140C4A300;
    qword_140C4A0E8 = qword_140C4A308;
    qword_140C4A0F0 = qword_140C4A310;
    qword_140C4A0F8 = qword_140C4A318;
    qword_140C4A100 = qword_140C4A320;
    qword_140C4A108 = qword_140C4A328;
    qword_140C4A110 = qword_140C4A330;
    qword_140C4A118 = qword_140C4A338;
    qword_140C4A120 = qword_140C4A340;
    qword_140C4A128 = qword_140C4A348;
    HalpEnlightenment = 0;
    dword_140C4A1FC = -1;
    qword_140C4A200 = 0LL;
    dword_140C4A1E4 = 0;
    qword_140C4A210 = 0LL;
    qword_140C4A218 = 0LL;
    qword_140C4A220 = 0LL;
    qword_140C4A228 = 0LL;
    qword_140C4A230 = 0LL;
    qword_140C4A238 = 0LL;
    qword_140C4A250 = 0LL;
    qword_140C4A278 = 0LL;
    qword_140C4A280 = 0LL;
    qword_140C4A288 = 0LL;
    qword_140C4A290 = 0LL;
    qword_140C4A298 = 0LL;
    qword_140C4A2A0 = 0LL;
    qword_140C4A350 = 0LL;
    qword_140C4A2C8 = 0LL;
    qword_140C4A2D0 = 0LL;
    xmmword_140C4A1E8 = 0uLL;
    qword_140C4A240 = 0LL;
    qword_140C4A248 = 0LL;
    qword_140C4A258 = 0LL;
    qword_140C4A260 = 0LL;
    qword_140C4A268 = 0LL;
    qword_140C4A270 = 0LL;
    qword_140C4A2B0 = 0LL;
    qword_140C4A2B8 = 0LL;
    qword_140C4A2C0 = 0LL;
    qword_140C4A2D8 = 0LL;
    qword_140C4A2E0 = 0LL;
    qword_140C4A2E8 = 0LL;
    qword_140C4A2F0 = 0LL;
    qword_140C4A2F8 = 0LL;
    qword_140C4A300 = 0LL;
    qword_140C4A308 = 0LL;
    qword_140C4A310 = 0LL;
    qword_140C4A318 = 0LL;
    qword_140C4A320 = 0LL;
    qword_140C4A328 = 0LL;
    qword_140C4A330 = 0LL;
    qword_140C4A338 = 0LL;
    qword_140C4A340 = 0LL;
    qword_140C4A348 = 0LL;
    return HalpTimerUpdateApiConsumers();
  }
  return result;
}
