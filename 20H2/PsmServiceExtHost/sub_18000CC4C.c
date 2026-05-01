/*
 * XREFs of sub_18000CC4C @ 0x18000CC4C
 * Callers:
 *     sub_18000C860 @ 0x18000C860 (sub_18000C860.c)
 * Callees:
 *     sub_180007084 @ 0x180007084 (sub_180007084.c)
 *     sub_18000CE18 @ 0x18000CE18 (sub_18000CE18.c)
 *     sub_18000D704 @ 0x18000D704 (sub_18000D704.c)
 *     _guard_dispatch_icall_nop @ 0x180046860 (_guard_dispatch_icall_nop.c)
 *     sub_180085678 @ 0x180085678 (sub_180085678.c)
 */

__int64 __fastcall sub_18000CC4C(__int64 a1, __int64 a2, char a3)
{
  HANDLE v3; // rsi
  __int64 v6; // rax
  int v7; // edi
  int v8; // eax
  HANDLE Handle; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0LL;
  Handle = 0LL;
  if ( (a3 & 2) != 0
    || (v6 = sub_18000D704((int)a1 + 544, (int)a2 + 24, (int)a2 + 488, *(_DWORD *)(a2 + 556), *(_QWORD *)(a2 - 32)),
        (*(_QWORD *)(a2 + 584) = v6) != 0LL)
    || (*(_BYTE *)(a2 + 772) & 1) == 0 )
  {
    v7 = sub_18000CE18(a2, a2 + 576);
    if ( v7 >= 0 )
    {
      v7 = TpAllocWork(a2 + 632, &sub_180018AF0, a2 - 64, 0LL);
      if ( v7 >= 0 )
      {
        v7 = TpAllocWork(a2 + 624, sub_180005750, a2, 0LL);
        if ( v7 >= 0 )
        {
          if ( (*(_BYTE *)(a2 + 772) & 1) != 0 )
          {
            v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a2 - 16) + 40LL)
                                                                                               + 168LL))(
                   *(_QWORD *)(a2 + 1136),
                   sub_18007DB80,
                   a2,
                   a2 + 792);
            if ( v7 >= 0 )
            {
              v7 = (*(__int64 (__fastcall **)(_QWORD, __int64 (__fastcall *)(), __int64, __int64))(*(_QWORD *)(*(_QWORD *)(a2 - 16) + 40LL)
                                                                                                 + 168LL))(
                     *(_QWORD *)(a2 + 1136),
                     sub_180036DD0,
                     a2,
                     a2 + 992);
              if ( v7 >= 0 )
              {
                if ( *(_DWORD *)(a2 + 560) != 2
                  || (v8 = sub_18000CE18(a2, &Handle), v3 = Handle, v7 = v8, v8 >= 0)
                  && (v7 = sub_180007084(a1 + 432, *(_QWORD *)(a2 - 32), Handle, (_QWORD *)(a2 + 1040)), v7 >= 0) )
                {
                  v7 = 0;
                }
                if ( v3 )
                  NtClose(v3);
              }
            }
          }
          else
          {
            return 0;
          }
        }
      }
    }
  }
  else
  {
    sub_180085678();
    return (unsigned int)-1058275322;
  }
  return (unsigned int)v7;
}
