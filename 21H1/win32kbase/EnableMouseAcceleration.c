/*
 * XREFs of EnableMouseAcceleration @ 0x1C0051DC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CDeviceAcceleration *__fastcall EnableMouseAcceleration(char a1)
{
  CDeviceAcceleration *result; // rax

  result = qword_1C0247098;
  *((_BYTE *)qword_1C0247098 + 112) = a1;
  return result;
}
