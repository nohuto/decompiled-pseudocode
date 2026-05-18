/*
 * XREFs of sub_180049068 @ 0x180049068
 * Callers:
 *     sub_1800428D0 @ 0x1800428D0 (sub_1800428D0.c)
 *     sub_1800464F0 @ 0x1800464F0 (sub_1800464F0.c)
 * Callees:
 *     sub_18000FE28 @ 0x18000FE28 (sub_18000FE28.c)
 *     sub_180029F64 @ 0x180029F64 (sub_180029F64.c)
 *     sub_18002BE74 @ 0x18002BE74 (sub_18002BE74.c)
 *     sub_1800D12B8 @ 0x1800D12B8 (sub_1800D12B8.c)
 *     _CxxThrowException @ 0x180123958 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall sub_180049068(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, int a6)
{
  int v8; // eax
  __int128 *v9; // rcx
  __int128 *v10; // r8
  int v11; // edi
  __int64 v12; // rcx
  unsigned int v14; // eax
  _QWORD v15[4]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v16[5]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+90h] [rbp-70h] BYREF
  __int128 v18; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v19; // [rsp+E0h] [rbp-20h] BYREF
  int v20; // [rsp+E8h] [rbp-18h] BYREF
  int v21; // [rsp+ECh] [rbp-14h]
  int v22; // [rsp+F0h] [rbp-10h]
  __int64 v23; // [rsp+F4h] [rbp-Ch]
  int v24; // [rsp+FCh] [rbp-4h]

  v23 = 0LL;
  v24 = 0;
  v20 = *(_DWORD *)(a4 + 16);
  v8 = 0;
  v9 = &v18;
  do
  {
    *(_DWORD *)v9 = v8++;
    v9 = (__int128 *)((char *)v9 + 4);
  }
  while ( v8 < 4 );
  v21 = *((_DWORD *)&v18 + *(unsigned int *)(a4 + 24));
  v22 = a6;
  v19 = 0LL;
  sub_180029F64(a3, &v19);
  v18 = 0LL;
  v10 = 0LL;
  if ( v21 == 2 )
  {
    LODWORD(v23) = 0x10000;
  }
  else
  {
    *(_QWORD *)&v18 = a5;
    v10 = &v18;
  }
  *a1 = 0LL;
  *a1 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, int *, __int128 *, _QWORD *))(*(_QWORD *)v19 + 24LL))(v19, &v20, v10, a1);
  sub_18002BE74(a3, v11);
  if ( v11 < 0 )
  {
    sub_18000FE28(v16);
    v14 = (unsigned int)sub_18000FE28(v15);
    sub_1800D12B8((unsigned int)pExceptionObject, v14, 84, v11, (__int64)v16, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v12 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  }
  return a1;
}
