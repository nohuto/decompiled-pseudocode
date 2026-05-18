/*
 * XREFs of sub_180108F00 @ 0x180108F00
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180067278 @ 0x180067278 (sub_180067278.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18007067C @ 0x18007067C (sub_18007067C.c)
 *     sub_1800D1210 @ 0x1800D1210 (sub_1800D1210.c)
 *     sub_1800E1280 @ 0x1800E1280 (sub_1800E1280.c)
 *     sub_1800E12F4 @ 0x1800E12F4 (sub_1800E12F4.c)
 *     sub_1800E1408 @ 0x1800E1408 (sub_1800E1408.c)
 *     sub_1800E1544 @ 0x1800E1544 (sub_1800E1544.c)
 *     sub_1800E1604 @ 0x1800E1604 (sub_1800E1604.c)
 *     sub_1800E1730 @ 0x1800E1730 (sub_1800E1730.c)
 *     sub_1800E1764 @ 0x1800E1764 (sub_1800E1764.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180108F00(__int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // r14
  _QWORD *v4; // rax
  volatile signed __int32 *v5; // rdi
  __int64 *v6; // rax
  _QWORD *v7; // rsi
  _QWORD *v8; // rdi
  _QWORD *v9; // rax
  __int64 *v11; // rax
  __int64 v12; // [rsp+30h] [rbp-D0h]
  __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  volatile signed __int32 *v14; // [rsp+48h] [rbp-B8h]
  __int64 v15; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v16; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v17[4]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v18[4]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD pExceptionObject[8]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v20[22]; // [rsp+F0h] [rbp-10h] BYREF
  _QWORD v21[22]; // [rsp+1A0h] [rbp+A0h] BYREF

  v2 = a1 + 8;
  v12 = a1 + 8;
  sub_180067278(a1 + 8);
  if ( *(_DWORD *)(a1 + 16) != 1 )
  {
    sub_18000FE28(v18);
    v11 = sub_18000FE28(v17);
    sub_1800D1210(pExceptionObject, v11, 268LL, (__int64)v18, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v3 = a1 + 32;
  if ( sub_1800E1544() )
  {
    v4 = sub_1800E1730(a1 + 32, &v13);
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v4 + 72LL))(*v4);
    v5 = v14;
    if ( v14 )
    {
      if ( _InterlockedExchangeAdd(v14 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v5)(v5);
        if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 8LL))(v5);
      }
      v2 = v12;
    }
    v6 = (__int64 *)sub_18007067C(*(_QWORD *)(a1 + 24), (__int64)v21);
    v7 = (_QWORD *)(a1 + 216);
    sub_1800E1408((__int64)v7, v6);
    sub_1800E12F4(v21);
    if ( sub_1800E1544() )
    {
      v8 = sub_1800E1764(v3, &v15);
      v9 = sub_1800E1730(v3, &v16);
      sub_1800E1604(v7, v9, v8);
    }
    else
    {
      sub_1800E1280((__int64)v20);
      sub_1800E1408(v3, v20);
      sub_1800E12F4(v20);
    }
  }
  return sub_180067304(v2);
}
