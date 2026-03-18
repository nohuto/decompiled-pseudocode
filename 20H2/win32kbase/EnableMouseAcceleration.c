/*
 * XREFs of EnableMouseAcceleration @ 0x1C00BFC40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

CDeviceAcceleration *__fastcall EnableMouseAcceleration(char a1)
{
  CDeviceAcceleration *result; // rax

  result = qword_1C023F098;
  *((_BYTE *)qword_1C023F098 + 112) = a1;
  return result;
}
