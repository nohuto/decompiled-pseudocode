/*
 * XREFs of sub_1800CBB3C @ 0x1800CBB3C
 * Callers:
 *     sub_18006AEB0 @ 0x18006AEB0 (sub_18006AEB0.c)
 *     sub_18006B7A4 @ 0x18006B7A4 (sub_18006B7A4.c)
 *     sub_18007643C @ 0x18007643C (sub_18007643C.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_1800CBB3C(__int64 a1, int a2, int a3, int a4)
{
  _QWORD *v4; // rdx
  int v5; // r9d
  int v6; // r9d
  __int64 *v8; // rax
  _QWORD v9[4]; // [rsp+30h] [rbp-88h] BYREF
  _QWORD v10[4]; // [rsp+50h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+70h] [rbp-48h] BYREF

  v4 = (_QWORD *)(a1 + 32 * (a3 + 5LL * a2));
  if ( !a4 )
    return *v4;
  v5 = a4 - 1;
  if ( !v5 )
    return v4[1];
  v6 = v5 - 1;
  if ( !v6 )
    return v4[3];
  if ( v6 != 1 )
  {
    sub_18000FD48(v10);
    v8 = sub_18000FD48(v9);
    sub_1800CB940(pExceptionObject, v8, 45LL, (__int64)v10, 1);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  return v4[2];
}
