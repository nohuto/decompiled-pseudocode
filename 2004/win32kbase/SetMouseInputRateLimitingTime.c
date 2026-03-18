/*
 * XREFs of SetMouseInputRateLimitingTime @ 0x1C01ABFE0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z @ 0x1C00076C8 (-SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z.c)
 */

__int64 __fastcall SetMouseInputRateLimitingTime(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = qword_1C0241018 == 0LL ? 0xC0000225 : 0;
  if ( qword_1C0241018 )
    return CMouseSensor::SetInputRateLimitingTime(qword_1C0241018, a1, a3, a4);
  return result;
}
