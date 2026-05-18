/*
 * XREFs of sub_180076E98 @ 0x180076E98
 * Callers:
 *     sub_18007A4C0 @ 0x18007A4C0 (sub_18007A4C0.c)
 *     sub_18007C500 @ 0x18007C500 (sub_18007C500.c)
 *     sub_18007C7D8 @ 0x18007C7D8 (sub_18007C7D8.c)
 *     sub_18007D258 @ 0x18007D258 (sub_18007D258.c)
 *     sub_18007D560 @ 0x18007D560 (sub_18007D560.c)
 *     sub_18007DFAC @ 0x18007DFAC (sub_18007DFAC.c)
 *     sub_18007F0D4 @ 0x18007F0D4 (sub_18007F0D4.c)
 *     sub_18007FB54 @ 0x18007FB54 (sub_18007FB54.c)
 *     sub_180080510 @ 0x180080510 (sub_180080510.c)
 *     _setlocale_set_cat_0 @ 0x1800AFE94 (_setlocale_set_cat_0.c)
 *     sub_1800B0380 @ 0x1800B0380 (sub_1800B0380.c)
 *     sub_1800C3030 @ 0x1800C3030 (sub_1800C3030.c)
 *     sub_1800C3600 @ 0x1800C3600 (sub_1800C3600.c)
 *     sub_18010A840 @ 0x18010A840 (sub_18010A840.c)
 * Callees:
 *     sub_1800E9864 @ 0x1800E9864 (sub_1800E9864.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_180076E98(_QWORD *a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // rdx
  __int64 v6; // rbx
  __int64 v7; // rdi
  volatile signed __int32 *v8; // rcx
  signed __int32 v10; // eax
  __int128 v11; // [rsp+28h] [rbp-18h]

  *a1 = 0LL;
  a1[1] = 0LL;
  a1[2] = 0LL;
  v11 = 0LL;
  v5 = a2[1];
  if ( v5 )
  {
    while ( 1 )
    {
      v10 = *(_DWORD *)(v5 + 8);
      if ( !v10 )
        break;
      if ( v10 == _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 8), v10 + 1, v10) )
      {
        v7 = *a2;
        *(_QWORD *)&v11 = *a2;
        v6 = a2[1];
        *((_QWORD *)&v11 + 1) = v6;
        goto LABEL_3;
      }
    }
  }
  v6 = 0LL;
  v7 = 0LL;
LABEL_3:
  if ( v7 )
  {
    a1[2] = sub_1800E9864(v7, a3);
    if ( v6 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(v6 + 12));
      v6 = *((_QWORD *)&v11 + 1);
      v7 = v11;
    }
    *a1 = v7;
    v8 = (volatile signed __int32 *)a1[1];
    a1[1] = v6;
    if ( v8 )
    {
      if ( _InterlockedExchangeAdd(v8 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v8 + 8LL))(v8);
      v6 = *((_QWORD *)&v11 + 1);
    }
  }
  if ( v6 )
  {
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v6 + 8), 0xFFFFFFFF) == 1 )
    {
      (***((void (__fastcall ****)(_QWORD))&v11 + 1))(*((_QWORD *)&v11 + 1));
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v11 + 1) + 12LL), 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(_QWORD))(**((_QWORD **)&v11 + 1) + 8LL))(*((_QWORD *)&v11 + 1));
    }
  }
  return a1;
}
