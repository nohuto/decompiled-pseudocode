/*
 * XREFs of ?flush@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAAEAV12@XZ @ 0x180079990
 * Callers:
 *     ??0sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z @ 0x180079C7C (--0sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ?_Ipfx@?$basic_istream@_WU?$char_traits@_W@std@@@std@@QEAA_N_N@Z @ 0x18009768C (-_Ipfx@-$basic_istream@_WU-$char_traits@_W@std@@@std@@QEAA_N_N@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18002A930 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ??0sentry@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z @ 0x180079C7C (--0sentry@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ?_Osfx@?$basic_ostream@_WU?$char_traits@_W@std@@@std@@QEAAXXZ @ 0x180079FF8 (-_Osfx@-$basic_ostream@_WU-$char_traits@_W@std@@@std@@QEAAXXZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x1800B148C (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::wostream::flush(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  int v4; // edx
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]

  if ( *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72) )
  {
    std::wostream::sentry::sentry(&v7, a1);
    if ( v8 )
    {
      v2 = *(_QWORD *)(*(int *)(*(_QWORD *)a1 + 4LL) + a1 + 72);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2) == -1 )
      {
        v3 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
        v4 = *(_DWORD *)(v3 + 16);
        if ( !*(_QWORD *)(v3 + 72) )
          LOBYTE(v4) = v4 | 4;
        std::ios_base::clear((std::ios_base *)v3, v4 | 4, 0);
      }
    }
    if ( !std::uncaught_exception() )
      std::wostream::_Osfx(v7);
    v5 = *(_QWORD *)(*(int *)(*(_QWORD *)v7 + 4LL) + v7 + 72);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
