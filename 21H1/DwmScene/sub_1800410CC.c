/*
 * XREFs of sub_1800410CC @ 0x1800410CC
 * Callers:
 *     sub_180041A10 @ 0x180041A10 (sub_180041A10.c)
 * Callees:
 *     sub_18000FD48 @ 0x18000FD48 (sub_18000FD48.c)
 *     sub_180024694 @ 0x180024694 (sub_180024694.c)
 *     sub_1800265A4 @ 0x1800265A4 (sub_1800265A4.c)
 *     sub_180041234 @ 0x180041234 (sub_180041234.c)
 *     sub_1800CB9E8 @ 0x1800CB9E8 (sub_1800CB9E8.c)
 *     _CxxThrowException @ 0x18011E088 (_CxxThrowException.c)
 *     __security_check_cookie @ 0x18011E6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18011FBB0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall sub_1800410CC(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 *a5)
{
  __int64 v9; // r9
  __int64 v10; // rdx
  int v11; // ebx
  __int64 result; // rax
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // [rsp+40h] [rbp-91h] BYREF
  _QWORD v17[4]; // [rsp+48h] [rbp-89h] BYREF
  _QWORD v18[5]; // [rsp+68h] [rbp-69h] BYREF
  _BYTE pExceptionObject[64]; // [rsp+90h] [rbp-41h] BYREF
  __int64 v20; // [rsp+D0h] [rbp-1h] BYREF
  __int64 v21; // [rsp+D8h] [rbp+7h] BYREF

  v21 = 0LL;
  sub_180024694(a2, &v21);
  v20 = 0LL;
  v9 = *a5;
  if ( *a5 == a5[1] )
    v10 = (unsigned int)(*((_DWORD *)a5 + 8) - *((_DWORD *)a5 + 6));
  else
    v10 = a5[1] - v9;
  if ( v9 == a5[1] )
    v9 = a5[3];
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, __int64, __int64, __int64 *))(*(_QWORD *)v21 + 88LL))(
          v21,
          a3,
          a4,
          v9,
          v10,
          &v20);
  sub_1800265A4(a2, v11);
  if ( v11 < 0 )
  {
    sub_18000FD48(v18);
    v15 = (unsigned int)sub_18000FD48(v17);
    sub_1800CB9E8((unsigned int)pExceptionObject, v15, 251, v11, (__int64)v18, 0);
    throw (Spectre::Engine::EngineException *)pExceptionObject;
  }
  v16 = v20;
  v20 = 0LL;
  result = sub_180041234(a1, &v16);
  v13 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  }
  v14 = v21;
  if ( v21 )
  {
    v21 = 0LL;
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return result;
}
