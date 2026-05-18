/*
 * XREFs of sub_1800F27BC @ 0x1800F27BC
 * Callers:
 *     sub_1800936A8 @ 0x1800936A8 (sub_1800936A8.c)
 *     sub_180094AE8 @ 0x180094AE8 (sub_180094AE8.c)
 *     sub_1800952D0 @ 0x1800952D0 (sub_1800952D0.c)
 *     sub_180095A24 @ 0x180095A24 (sub_180095A24.c)
 *     sub_180095B4C @ 0x180095B4C (sub_180095B4C.c)
 *     sub_1800A7200 @ 0x1800A7200 (sub_1800A7200.c)
 *     sub_1800A9FE8 @ 0x1800A9FE8 (sub_1800A9FE8.c)
 *     sub_1800EA230 @ 0x1800EA230 (sub_1800EA230.c)
 *     sub_1800EC150 @ 0x1800EC150 (sub_1800EC150.c)
 *     sub_1800EC660 @ 0x1800EC660 (sub_1800EC660.c)
 *     sub_1800F0100 @ 0x1800F0100 (sub_1800F0100.c)
 *     sub_1800F50A8 @ 0x1800F50A8 (sub_1800F50A8.c)
 *     sub_18012F294 @ 0x18012F294 (sub_18012F294.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_18002D8C4 @ 0x18002D8C4 (sub_18002D8C4.c)
 *     sub_1800A5C64 @ 0x1800A5C64 (sub_1800A5C64.c)
 *     sub_1800F2600 @ 0x1800F2600 (sub_1800F2600.c)
 *     sub_1800F2D04 @ 0x1800F2D04 (sub_1800F2D04.c)
 *     sub_1800F2D8C @ 0x1800F2D8C (sub_1800F2D8C.c)
 *     sub_1800F540C @ 0x1800F540C (sub_1800F540C.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800F27BC(__int64 a1)
{
  __int64 result; // rax
  _QWORD *v3; // rax
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  __int64 *v6; // rax
  _BYTE v7[16]; // [rsp+30h] [rbp-A8h] BYREF
  __int64 v8; // [rsp+40h] [rbp-98h] BYREF
  volatile signed __int32 *v9; // [rsp+48h] [rbp-90h]
  _QWORD v10[4]; // [rsp+50h] [rbp-88h] BYREF
  _QWORD v11[4]; // [rsp+70h] [rbp-68h] BYREF
  _QWORD pExceptionObject[9]; // [rsp+90h] [rbp-48h] BYREF

  if ( *(_DWORD *)(a1 + 1168) )
  {
    sub_18000FE28(v11);
    v6 = sub_18000FE28(v10);
    sub_18002D8C4(pExceptionObject, v6, 526, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 1242) = *(_QWORD *)(a1 + 56) == *(_QWORD *)(a1 + 64);
  sub_1800F2D04(a1, 16LL);
  sub_1800F2600(a1);
  result = sub_1800F2D04(a1, 0LL);
  *(_DWORD *)(a1 + 1168) = 1;
  if ( *(_BYTE *)(a1 + 1241) )
  {
    v3 = sub_1800A5C64(*(_QWORD *)(a1 + 1152), &v8);
    v4 = sub_1800F540C(*v3, v7);
    result = sub_1800F2D8C(a1, v4);
    v5 = v9;
    if ( v9 )
    {
      result = (unsigned int)_InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF);
      if ( (_DWORD)result == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        result = (unsigned int)_InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF);
        if ( (_DWORD)result == 1 )
          return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
    }
  }
  return result;
}
