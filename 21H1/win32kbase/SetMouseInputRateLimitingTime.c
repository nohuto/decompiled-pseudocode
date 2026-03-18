/*
 * XREFs of SetMouseInputRateLimitingTime @ 0x1C01B1D40
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z @ 0x1C0038D1C (-SetInputRateLimitingTime@CMouseSensor@@QEAAJK@Z.c)
 */

__int64 __fastcall SetMouseInputRateLimitingTime(unsigned int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax

  result = qword_1C0247018 == 0LL ? 0xC0000225 : 0;
  if ( qword_1C0247018 )
    return CMouseSensor::SetInputRateLimitingTime(qword_1C0247018, a1, a3, a4);
  return result;
}
