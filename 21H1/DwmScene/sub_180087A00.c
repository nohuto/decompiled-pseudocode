/*
 * XREFs of sub_180087A00 @ 0x180087A00
 * Callers:
 *     sub_180011AD0 @ 0x180011AD0 (sub_180011AD0.c)
 *     sub_180015B80 @ 0x180015B80 (sub_180015B80.c)
 *     sub_180019860 @ 0x180019860 (sub_180019860.c)
 *     sub_18001DA88 @ 0x18001DA88 (sub_18001DA88.c)
 *     sub_1800861F0 @ 0x1800861F0 (sub_1800861F0.c)
 *     sub_1800BC4B0 @ 0x1800BC4B0 (sub_1800BC4B0.c)
 *     sub_1800C4498 @ 0x1800C4498 (sub_1800C4498.c)
 *     sub_1800D6F28 @ 0x1800D6F28 (sub_1800D6F28.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_18001269C @ 0x18001269C (sub_18001269C.c)
 *     unknown_libname_101 @ 0x1800129D4 (unknown_libname_101.c)
 *     sub_18001EF80 @ 0x18001EF80 (sub_18001EF80.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_18002C218 @ 0x18002C218 (sub_18002C218.c)
 *     sub_180043BDC @ 0x180043BDC (sub_180043BDC.c)
 *     sub_180061810 @ 0x180061810 (sub_180061810.c)
 *     sub_180087518 @ 0x180087518 (sub_180087518.c)
 *     sub_180087B70 @ 0x180087B70 (sub_180087B70.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall sub_180087A00(__int64 a1, __int64 a2, __int64 *a3)
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
  sub_180061810(a1 + 16);
  *(_OWORD *)v12 = 0LL;
  v13[2] = 0LL;
  v13[3] = 0LL;
  sub_18001269C(v13, (__int64)a3);
  sub_180087518(a1, v12, v13);
  if ( !v12[0] )
  {
    v8 = sub_18001EF80(v15);
    v9 = (_QWORD *)sub_180043BDC((__int64)v16, (__int64)"Scene::GetRootNode() - layer ", (__int64)v8);
    v10 = sub_18002C218((__int64)v17, v9, " not found");
    v11 = sub_18000FD48(v14);
    sub_180027FF4(pExceptionObject, v11, 735, v10, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  sub_180087B70(v12[0], a2);
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
  unknown_libname_101(a3);
  return a2;
}
