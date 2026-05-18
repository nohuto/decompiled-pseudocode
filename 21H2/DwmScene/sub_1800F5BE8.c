/*
 * XREFs of sub_1800F5BE8 @ 0x1800F5BE8
 * Callers:
 *     sub_180092DDC @ 0x180092DDC (sub_180092DDC.c)
 *     sub_1800A6C5C @ 0x1800A6C5C (sub_1800A6C5C.c)
 *     sub_1800DD57C @ 0x1800DD57C (sub_1800DD57C.c)
 *     sub_1800F4F40 @ 0x1800F4F40 (sub_1800F4F40.c)
 *     sub_1800F9F20 @ 0x1800F9F20 (sub_1800F9F20.c)
 *     sub_180111970 @ 0x180111970 (sub_180111970.c)
 *     sub_180111E90 @ 0x180111E90 (sub_180111E90.c)
 * Callees:
 *     sub_1800F295C @ 0x1800F295C (sub_1800F295C.c)
 *     sub_1800F5C80 @ 0x1800F5C80 (sub_1800F5C80.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_1800F5BE8(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int16 v5; // ax
  __int64 result; // rax
  volatile signed __int32 *v7; // rbx
  signed __int32 v8; // eax
  bool v9; // zf
  _QWORD v10[3]; // [rsp+20h] [rbp-18h] BYREF

  v5 = sub_1800F295C(*(_QWORD *)(a1 + 16), a2);
  v10[0] = *a3;
  v10[1] = a3[1];
  *a3 = 0LL;
  a3[1] = 0LL;
  result = sub_1800F5C80(a1, v5, v10);
  v7 = (volatile signed __int32 *)a3[1];
  if ( v7 )
  {
    v8 = _InterlockedExchangeAdd(v7 + 2, 0xFFFFFFFF);
    v9 = v8 == 1;
    result = (unsigned int)(v8 - 1);
    if ( v9 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v7)(v7);
      result = (unsigned int)_InterlockedDecrement(v7 + 3);
      if ( !(_DWORD)result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v7 + 8LL))(v7);
    }
  }
  return result;
}
