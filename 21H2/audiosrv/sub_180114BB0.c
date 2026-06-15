/*
 * XREFs of sub_180114BB0 @ 0x180114BB0
 * Callers:
 *     sub_180114B90 @ 0x180114B90 (sub_180114B90.c)
 * Callees:
 *     sub_18000DF70 @ 0x18000DF70 (sub_18000DF70.c)
 *     sub_18000F708 @ 0x18000F708 (sub_18000F708.c)
 *     _guard_dispatch_icall_nop @ 0x180074470 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall sub_180114BB0(_DWORD *a1, unsigned int a2, int a3, int a4, bool *a5, __int64 a6)
{
  int v7; // r9d
  bool *v8; // rbx
  int v9; // esi
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF

  if ( a4 != a1[16] )
    return 2147943568LL;
  v7 = a1[19];
  v8 = a5;
  v11 = 0LL;
  v9 = sub_18000DF70(qword_18019E608, a2, a3, v7, a5, (__int64)&v11);
  if ( v9 >= 0 )
  {
    v9 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 40LL))(v11, a6);
    if ( v9 >= 0 )
    {
      if ( v8 )
      {
        if ( !*v8 )
          *v8 = (a1[20] & 2) != 0;
      }
    }
  }
  sub_18000F708(&v11);
  return (unsigned int)v9;
}
