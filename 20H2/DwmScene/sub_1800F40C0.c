/*
 * XREFs of sub_1800F40C0 @ 0x1800F40C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

void __noreturn sub_1800F40C0()
{
  __int64 *v0; // rax
  _QWORD v1[4]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v2[4]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+70h] [rbp-48h] BYREF

  sub_18000FD48(v2);
  v0 = sub_18000FD48(v1);
  sub_1800CB940(pExceptionObject, v0, 26LL, (__int64)v2, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
