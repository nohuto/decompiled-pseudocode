/*
 * XREFs of sub_1800F95C0 @ 0x1800F95C0
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 */

void __noreturn sub_1800F95C0()
{
  __int64 *v0; // rax
  _QWORD v1[4]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v2[4]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+70h] [rbp-48h] BYREF

  sub_18000FE28(v2);
  v0 = sub_18000FE28(v1);
  sub_1800D1210(pExceptionObject, v0, 17LL, (__int64)v2, 0);
  throw (Spectre::Engine::EngineException *)pExceptionObject;
}
