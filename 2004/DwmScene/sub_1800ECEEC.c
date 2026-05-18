/*
 * XREFs of sub_1800ECEEC @ 0x1800ECEEC
 * Callers:
 *     sub_18008DDD8 @ 0x18008DDD8 (sub_18008DDD8.c)
 *     sub_18008F218 @ 0x18008F218 (sub_18008F218.c)
 *     sub_18008FA00 @ 0x18008FA00 (sub_18008FA00.c)
 *     sub_180090154 @ 0x180090154 (sub_180090154.c)
 *     sub_18009027C @ 0x18009027C (sub_18009027C.c)
 *     sub_1800A1930 @ 0x1800A1930 (sub_1800A1930.c)
 *     sub_1800A4718 @ 0x1800A4718 (sub_1800A4718.c)
 *     sub_1800E4960 @ 0x1800E4960 (sub_1800E4960.c)
 *     sub_1800E6880 @ 0x1800E6880 (sub_1800E6880.c)
 *     sub_1800E6D90 @ 0x1800E6D90 (sub_1800E6D90.c)
 *     sub_1800EA830 @ 0x1800EA830 (sub_1800EA830.c)
 *     sub_1800EF7D8 @ 0x1800EF7D8 (sub_1800EF7D8.c)
 *     sub_18012997C @ 0x18012997C (sub_18012997C.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180027FF4 @ 0x180027FF4 (sub_180027FF4.c)
 *     sub_1800A0394 @ 0x1800A0394 (sub_1800A0394.c)
 *     sub_1800ECD30 @ 0x1800ECD30 (sub_1800ECD30.c)
 *     sub_1800ED434 @ 0x1800ED434 (sub_1800ED434.c)
 *     sub_1800ED4BC @ 0x1800ED4BC (sub_1800ED4BC.c)
 *     sub_1800EFB3C @ 0x1800EFB3C (sub_1800EFB3C.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1800ECEEC(__int64 a1)
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
    sub_18000FD48(v11);
    v6 = sub_18000FD48(v10);
    sub_180027FF4(pExceptionObject, v6, 526, (__int64)v11, 0);
    throw (Spectre::Engine::EngineInvalidArgException *)pExceptionObject;
  }
  *(_BYTE *)(a1 + 1242) = *(_QWORD *)(a1 + 56) == *(_QWORD *)(a1 + 64);
  sub_1800ED434(a1, 16LL);
  sub_1800ECD30(a1);
  result = sub_1800ED434(a1, 0LL);
  *(_DWORD *)(a1 + 1168) = 1;
  if ( *(_BYTE *)(a1 + 1241) )
  {
    v3 = sub_1800A0394(*(_QWORD *)(a1 + 1152), &v8);
    v4 = sub_1800EFB3C(*v3, v7);
    result = sub_1800ED4BC(a1, v4);
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
