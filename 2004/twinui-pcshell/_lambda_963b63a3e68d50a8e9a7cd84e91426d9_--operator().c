/*
 * XREFs of _lambda_963b63a3e68d50a8e9a7cd84e91426d9_::operator() @ 0x180078608
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___::Run @ 0x180078580 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_d0e8f4979c3957dc3bbaa4bdaf35eba2___--Run.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800EEEF0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall lambda_963b63a3e68d50a8e9a7cd84e91426d9_::operator()(_QWORD *a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  char v4; // r8
  bool v5; // cl
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF
  __int64 v8; // [rsp+38h] [rbp+10h] BYREF

  v1 = a1[1];
  v3 = a1[2];
  v4 = 1;
  v7 = v1;
  v8 = v3;
  v5 = (int)v1 > 0 && SHIDWORD(v1) > 0;
  if ( (int)v3 <= 0 || SHIDWORD(v3) <= 0 )
    v4 = 0;
  return (*(__int64 (__fastcall **)(_QWORD, unsigned __int64, unsigned __int64))(**(_QWORD **)(*a1 + 120LL) + 184LL))(
           *(_QWORD *)(*a1 + 120LL),
           (unsigned __int64)&v7 & -(__int64)v5,
           (unsigned __int64)&v8 & -(__int64)(v4 != 0));
}
