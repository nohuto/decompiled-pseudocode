/*
 * XREFs of sub_18001BE70 @ 0x18001BE70
 * Callers:
 *     sub_180035610 @ 0x180035610 (sub_180035610.c)
 * Callees:
 *     sub_18001BF70 @ 0x18001BF70 (sub_18001BF70.c)
 *     sub_18002AF64 @ 0x18002AF64 (sub_18002AF64.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_18001BE70(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  int v5; // [rsp+30h] [rbp-28h] BYREF
  int v6; // [rsp+34h] [rbp-24h] BYREF
  __int64 v7; // [rsp+38h] [rbp-20h] BYREF
  _QWORD v8[3]; // [rsp+40h] [rbp-18h] BYREF

  v8[0] = 0LL;
  v5 = 0;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD *))(**(_QWORD **)&dwCreationFlags + 40LL))(
             *(_QWORD *)&dwCreationFlags,
             a1,
             v8);
  if ( (int)result >= 0 )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, int *))(*(_QWORD *)v8[0] + 48LL))(v8[0], &v5);
    if ( (int)result >= 0 && v5 == 1 )
    {
      v7 = 0LL;
      result = (*(__int64 (__fastcall **)(PVOID, __int64, __int64, _QWORD, __int64 *))(*(_QWORD *)pv + 24LL))(
                 pv,
                 a1,
                 1LL,
                 0LL,
                 &v7);
      if ( (int)result >= 0 )
      {
        v6 = 0;
        result = sub_18001BF70(v7, a2, &v6);
        if ( v6 )
          result = sub_18002AF64(a1);
      }
      if ( v7 )
        result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
  }
  if ( v8[0] )
    return (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v8[0] + 16LL))(v8[0]);
  return result;
}
