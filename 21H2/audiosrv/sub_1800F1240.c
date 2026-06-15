/*
 * XREFs of sub_1800F1240 @ 0x1800F1240
 * Callers:
 *     sub_1800EFC8C @ 0x1800EFC8C (sub_1800EFC8C.c)
 *     sub_1800EFD8C @ 0x1800EFD8C (sub_1800EFD8C.c)
 * Callees:
 *     __security_check_cookie @ 0x180069A70 (__security_check_cookie.c)
 *     sub_18006D26C @ 0x18006D26C (sub_18006D26C.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F1240(__int64 *a1, int a2, __int64 a3)
{
  DWORD CurrentProcessId; // eax
  __int64 v7; // rcx
  unsigned int v8; // eax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  _DWORD v12[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  int v15; // [rsp+38h] [rbp-30h]
  int v16; // [rsp+3Ch] [rbp-2Ch]
  __int64 v17; // [rsp+40h] [rbp-28h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]

  v14 = 0LL;
  v16 = 0;
  v12[0] = 40;
  v12[1] = 0x40000;
  CurrentProcessId = GetCurrentProcessId();
  v7 = *a1;
  v13 = CurrentProcessId;
  v15 = a2;
  v17 = a3;
  v8 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 40LL))(v7);
  result = MMDevAPI_12(v12, v8, v9, v10);
  if ( (int)result < 0 )
    return sub_18006D26C(
             (int)retaddr,
             747,
             (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
             result);
  return result;
}
