/*
 * XREFs of sub_180103630 @ 0x180103630
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_1800619A8 @ 0x1800619A8 (sub_1800619A8.c)
 *     sub_180061A34 @ 0x180061A34 (sub_180061A34.c)
 *     sub_18006ADAC @ 0x18006ADAC (sub_18006ADAC.c)
 *     sub_1800CB940 @ 0x1800CB940 (sub_1800CB940.c)
 *     sub_1800DB9B0 @ 0x1800DB9B0 (sub_1800DB9B0.c)
 *     sub_1800DBA24 @ 0x1800DBA24 (sub_1800DBA24.c)
 *     sub_1800DBB38 @ 0x1800DBB38 (sub_1800DBB38.c)
 *     sub_1800DBC74 @ 0x1800DBC74 (sub_1800DBC74.c)
 *     sub_1800DBD34 @ 0x1800DBD34 (sub_1800DBD34.c)
 *     sub_1800DBE60 @ 0x1800DBE60 (sub_1800DBE60.c)
 *     sub_1800DBE94 @ 0x1800DBE94 (sub_1800DBE94.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall sub_180103630(__int64 a1)
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
  sub_1800619A8(a1 + 8);
  if ( *(_DWORD *)(a1 + 16) != 1 )
  {
    sub_18000FD48(v18);
    v11 = sub_18000FD48(v17);
    sub_1800CB940(pExceptionObject, v11, 268LL, (__int64)v18, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v3 = a1 + 32;
  if ( sub_1800DBC74() )
  {
    v4 = sub_1800DBE60(a1 + 32, &v13);
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
    v6 = (__int64 *)sub_18006ADAC(*(_QWORD *)(a1 + 24), (__int64)v21);
    v7 = (_QWORD *)(a1 + 216);
    sub_1800DBB38((__int64)v7, v6);
    sub_1800DBA24(v21);
    if ( sub_1800DBC74() )
    {
      v8 = sub_1800DBE94(v3, &v15);
      v9 = sub_1800DBE60(v3, &v16);
      sub_1800DBD34(v7, v9, v8);
    }
    else
    {
      sub_1800DB9B0((__int64)v20);
      sub_1800DBB38(v3, v20);
      sub_1800DBA24(v20);
    }
  }
  return sub_180061A34(v2);
}
