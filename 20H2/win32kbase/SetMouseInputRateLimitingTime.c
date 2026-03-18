/*
 * XREFs of SetMouseInputRateLimitingTime @ 0x1C01A9C60
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z @ 0x1C0007CBC (-SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z.c)
 */

__int64 __fastcall SetMouseInputRateLimitingTime(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = qword_1C023F018 == 0LL ? 0xC0000225 : 0;
  if ( qword_1C023F018 )
    return CMouseSensor::SetInputRateLimitingTime(qword_1C023F018, a1, a3, a4);
  return result;
}
