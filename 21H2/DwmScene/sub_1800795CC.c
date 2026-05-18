/*
 * XREFs of sub_1800795CC @ 0x1800795CC
 * Callers:
 *     sub_18000F8A8 @ 0x18000F8A8 (sub_18000F8A8.c)
 *     sub_180017764 @ 0x180017764 (sub_180017764.c)
 *     sub_180017874 @ 0x180017874 (sub_180017874.c)
 *     sub_180017984 @ 0x180017984 (sub_180017984.c)
 *     sub_180024740 @ 0x180024740 (sub_180024740.c)
 *     sub_18002C82C @ 0x18002C82C (sub_18002C82C.c)
 *     sub_1800964A0 @ 0x1800964A0 (sub_1800964A0.c)
 *     sub_1800965B0 @ 0x1800965B0 (sub_1800965B0.c)
 *     sub_1800A1664 @ 0x1800A1664 (sub_1800A1664.c)
 *     sub_1800A1774 @ 0x1800A1774 (sub_1800A1774.c)
 *     sub_1800A1884 @ 0x1800A1884 (sub_1800A1884.c)
 *     sub_1800A1994 @ 0x1800A1994 (sub_1800A1994.c)
 *     sub_1800A1AA4 @ 0x1800A1AA4 (sub_1800A1AA4.c)
 *     sub_1800A76CC @ 0x1800A76CC (sub_1800A76CC.c)
 *     sub_1800F39EC @ 0x1800F39EC (sub_1800F39EC.c)
 *     sub_1800F65C4 @ 0x1800F65C4 (sub_1800F65C4.c)
 * Callees:
 *     sub_180066E3C @ 0x180066E3C (sub_180066E3C.c)
 *     sub_180067014 @ 0x180067014 (sub_180067014.c)
 *     sub_180067304 @ 0x180067304 (sub_180067304.c)
 *     sub_18006730C @ 0x18006730C (sub_18006730C.c)
 *     sub_180067F88 @ 0x180067F88 (sub_180067F88.c)
 *     ?SetScheduler@?$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEAVSchedulerBase@23@@Z @ 0x18006810C (-SetScheduler@-$ListArray@VScheduleGroupBase@details@Concurrency@@@details@Concurrency@@QEAAXPEA.c)
 *     sub_18006821C @ 0x18006821C (sub_18006821C.c)
 *     sub_18007AC9C @ 0x18007AC9C (sub_18007AC9C.c)
 *     sub_18007AD60 @ 0x18007AD60 (sub_18007AD60.c)
 *     sub_18007ADCC @ 0x18007ADCC (sub_18007ADCC.c)
 *     __security_check_cookie @ 0x180123FC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180125480 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
char __fastcall sub_1800795CC(__int64 a1, __int64 a2, int a3)
{
  unsigned __int32 v6; // eax
  unsigned __int32 v7; // esi
  __int64 v8; // rax
  volatile signed __int32 *v9; // rbx
  __int64 v10; // rax
  volatile signed __int32 *v11; // rbx
  _BYTE v13[8]; // [rsp+20h] [rbp-50h] BYREF
  volatile signed __int32 *v14; // [rsp+28h] [rbp-48h]
  _BYTE v15[8]; // [rsp+30h] [rbp-40h] BYREF
  volatile signed __int32 *v16; // [rsp+38h] [rbp-38h]
  __int128 v17; // [rsp+40h] [rbp-30h] BYREF
  __int128 v18; // [rsp+50h] [rbp-20h] BYREF

  Concurrency::details::ListArray<Concurrency::details::ScheduleGroupBase>::SetScheduler(a2, a1);
  LOBYTE(v6) = sub_180067F88(a2, 1);
  if ( (_BYTE)v6 )
  {
    if ( a3 == 2 )
    {
      v18 = 0LL;
      sub_180066E3C(a1 + 1104, (__int64)&v18);
      v17 = 0LL;
      sub_180067014(a1 + 112, (__int64)&v17);
      v7 = 0;
      v6 = sub_18007AD60(a1);
      if ( v6 )
      {
        do
        {
          v8 = sub_18007AC9C(a1, v13, v7);
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v8);
          v9 = v14;
          if ( v14 )
          {
            if ( !_InterlockedDecrement(v14 + 2) )
            {
              (**(void (__fastcall ***)(volatile signed __int32 *))v9)(v9);
              if ( !_InterlockedDecrement(v9 + 3) )
                (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 8LL))(v9);
            }
          }
          ++v7;
          v6 = sub_18007AD60(a1);
        }
        while ( v7 < v6 );
      }
      if ( BYTE8(v17) )
        LOBYTE(v6) = sub_18006730C(v17);
      if ( BYTE8(v18) )
        LOBYTE(v6) = sub_180067304(v18);
    }
    if ( a3 == 1 )
    {
      v10 = sub_18007ADCC(a1, v15, 0LL);
      LOBYTE(v6) = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a2 + 16LL))(a2, v10);
      v11 = v16;
      if ( v16 )
      {
        v6 = _InterlockedDecrement(v16 + 2);
        if ( !v6 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
          v6 = _InterlockedDecrement(v11 + 3);
          if ( !v6 )
            LOBYTE(v6) = (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
        }
      }
    }
    if ( !*(_DWORD *)(a1 + 552) )
      LOBYTE(v6) = sub_18006821C(a2, 8, 1);
  }
  return v6;
}
