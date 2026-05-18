/*
 * XREFs of sub_1800B1F80 @ 0x1800B1F80
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __noreturn sub_1800B1F80()
{
  unsigned int v0; // eax
  _QWORD v1[4]; // [rsp+38h] [rbp-90h] BYREF
  _QWORD v2[5]; // [rsp+58h] [rbp-70h] BYREF
  _BYTE pExceptionObject[72]; // [rsp+80h] [rbp-48h] BYREF

  sub_18000FD48(v2);
  v0 = (unsigned int)sub_18000FD48(v1);
  sub_1800CB940((unsigned int)pExceptionObject, v0, 119, (unsigned int)v2, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
