/*
 * XREFs of sub_18008D2D0 @ 0x18008D2D0
 * Callers:
 *     sub_180011BB0 @ 0x180011BB0 (sub_180011BB0.c)
 *     sub_180015C60 @ 0x180015C60 (sub_180015C60.c)
 *     sub_18001A700 @ 0x18001A700 (sub_18001A700.c)
 *     sub_180023358 @ 0x180023358 (sub_180023358.c)
 *     sub_18008BAC0 @ 0x18008BAC0 (sub_18008BAC0.c)
 *     sub_1800C1D80 @ 0x1800C1D80 (sub_1800C1D80.c)
 *     sub_1800C9D68 @ 0x1800C9D68 (sub_1800C9D68.c)
 *     sub_1800DC7F8 @ 0x1800DC7F8 (sub_1800DC7F8.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18001277C @ 0x18001277C (sub_18001277C.c)
 *     unknown_libname_103 @ 0x180012AB4 (unknown_libname_103.c)
 *     sub_180024850 @ 0x180024850 (sub_180024850.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_180031AE8 @ 0x180031AE8 (sub_180031AE8.c)
 *     sub_1800494AC @ 0x1800494AC (sub_1800494AC.c)
 *     sub_1800670E0 @ 0x1800670E0 (sub_1800670E0.c)
 *     sub_18008CDE8 @ 0x18008CDE8 (sub_18008CDE8.c)
 *     sub_18008D440 @ 0x18008D440 (sub_18008D440.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_18008D2D0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rax
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int64 v12[3]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v13[4]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v14[4]; // [rsp+68h] [rbp-98h] BYREF
  _QWORD v15[4]; // [rsp+88h] [rbp-78h] BYREF
  _BYTE v16[32]; // [rsp+A8h] [rbp-58h] BYREF
  _BYTE v17[40]; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+F0h] [rbp-10h] BYREF

  pExceptionObject[8] = a3;
  sub_1800670E0(a1 + 16);
  *(_OWORD *)v12 = 0LL;
  v13[2] = 0LL;
  v13[3] = 0LL;
  sub_18001277C(v13, (__int64)a3);
  sub_18008CDE8(a1, v12, v13);
  if ( !v12[0] )
  {
    v8 = sub_180024850(v15);
    v9 = (_QWORD *)sub_1800494AC((__int64)v16, (__int64)"Scene::GetRootNode() - layer ", (__int64)v8);
    v10 = sub_180031AE8((__int64)v17, v9, " not found");
    v11 = sub_18000FE28(v14);
    sub_18002D8C4(pExceptionObject, v11, 735, v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_18008D440(v12[0], a2);
  if ( v12[1] )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v12[1] + 8), 0xFFFFFFFF) == 1 )
    {
      v6 = v12[1];
      (**(void (__fastcall ***)(__int64))v12[1])(v12[1]);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 12), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v12[1] + 8LL))(v12[1]);
    }
  }
  unknown_libname_103(a3);
  return a2;
}
