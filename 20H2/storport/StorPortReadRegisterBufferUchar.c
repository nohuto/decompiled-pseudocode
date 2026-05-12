/*
 * XREFs of StorPortReadRegisterBufferUchar @ 0x1C0039990
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_UNKNOWN **__fastcall StorPortReadRegisterBufferUchar(__int64 a1, const void *a2, void *a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = &retaddr;
  qmemcpy(a3, a2, a4);
  return result;
}
