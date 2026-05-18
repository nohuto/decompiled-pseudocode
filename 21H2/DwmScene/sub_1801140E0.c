/*
 * XREFs of sub_1801140E0 @ 0x1801140E0
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
 *     sub_1800C3030 @ 0x1800C3030 (sub_1800C3030.c)
 *     sub_1800C3600 @ 0x1800C3600 (sub_1800C3600.c)
 * Callees:
 *     sub_1801143D8 @ 0x1801143D8 (sub_1801143D8.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall sub_1801140E0(_QWORD *a1, _QWORD *a2, __int64 a3, int a4, __int64 a5, __int64 a6, char a7)
{
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // al
  volatile signed __int32 *v12; // rbx

  *a1 = 0LL;
  a1[1] = 0LL;
  *a1 = *a2;
  a1[1] = a2[1];
  *a2 = 0LL;
  a2[1] = 0LL;
  *((_DWORD *)a1 + 4) = a4;
  a1[3] = a3;
  v9 = a5;
  a1[4] = a5;
  v10 = a6;
  a1[5] = a6;
  v11 = a7;
  *((_BYTE *)a1 + 48) = a7;
  a1[7] = 0LL;
  if ( v11 )
  {
    (*(void (__fastcall **)(_QWORD, __int64 *))(**(_QWORD **)(*a1 + 16LL) + 8LL))(*(_QWORD *)(*a1 + 16LL), &a5);
    a1[7] = a5;
  }
  else
  {
    sub_1801143D8(*a1, 1, a3, a4, v9, v10);
  }
  v12 = (volatile signed __int32 *)a2[1];
  if ( v12 )
  {
    if ( _InterlockedExchangeAdd(v12 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v12)(v12);
      if ( _InterlockedExchangeAdd(v12 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v12 + 8LL))(v12);
    }
  }
  return a1;
}
