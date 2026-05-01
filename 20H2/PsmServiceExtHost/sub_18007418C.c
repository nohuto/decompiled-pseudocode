/*
 * XREFs of sub_18007418C @ 0x18007418C
 * Callers:
 *     sub_180074024 @ 0x180074024 (sub_180074024.c)
 * Callees:
 *     sub_180010470 @ 0x180010470 (sub_180010470.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180073EEC @ 0x180073EEC (sub_180073EEC.c)
 */

__int64 __fastcall sub_18007418C(__int64 a1, char *a2)
{
  __int64 result; // rax
  __int64 v5; // r9
  char v6; // di
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r10
  _QWORD v10[5]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v11; // [rsp+70h] [rbp+8h] BYREF
  __int64 v12; // [rsp+80h] [rbp+18h] BYREF
  __int64 v13; // [rsp+88h] [rbp+20h] BYREF

  result = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, _QWORD, _QWORD, unsigned __int64 *))(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 40LL) + 88LL))(
             a1 + 552,
             *(unsigned int *)(a1 + 620),
             a1 + 88,
             *(unsigned int *)(a1 + 624),
             *(_QWORD *)(a1 + 32),
             &v11);
  if ( (int)result >= 0 )
  {
    v5 = v11;
    if ( v11 <= *(_QWORD *)(a1 + 1216) )
    {
      v6 = 0;
    }
    else
    {
      v6 = 1;
      if ( (unsigned int)dword_1800B31E0 > 4 )
      {
        if ( sub_180010470((__int64)&dword_1800B31E0, 1LL) )
        {
          v12 = v5;
          v13 = v9;
          v10[0] = a1;
          sub_180073EEC(v7, byte_18009DC0E, v8, v5, (__int64)v10, (__int64)&v13, (__int64)&v12);
          v5 = v11;
        }
      }
      *(_QWORD *)(a1 + 1216) = v5;
    }
    *a2 = v6;
    return 0LL;
  }
  return result;
}
