/*
 * XREFs of ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x180034CAC
 * Callers:
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x1800340E8 (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ?_Ipfx@?$basic_istream@GU?$char_traits@G@std@@@std@@QEAA_N_N@Z @ 0x180036F00 (-_Ipfx@-$basic_istream@GU-$char_traits@G@std@@@std@@QEAA_N_N@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18002A510 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     ??0sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@AEAV12@@Z @ 0x1800340E8 (--0sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@AEAV12@@Z.c)
 *     ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x180036E8C (-_Osfx@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAXXZ.c)
 *     ?uncaught_exception@std@@YA_NXZ @ 0x1800B103C (-uncaught_exception@std@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800CE6C0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 *__fastcall std::basic_ostream<unsigned short>::flush(__int64 *a1)
{
  __int64 v2; // rcx
  char *v3; // rcx
  int v4; // edx
  __int64 v5; // rcx
  __int64 v7; // [rsp+28h] [rbp-20h] BYREF
  char v8; // [rsp+30h] [rbp-18h]

  if ( *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 72) )
  {
    std::basic_ostream<unsigned short>::sentry::sentry((__int64)&v7, a1);
    if ( v8 )
    {
      v2 = *(__int64 *)((char *)a1 + *(int *)(*a1 + 4) + 72);
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v2 + 104LL))(v2) == -1 )
      {
        v3 = (char *)a1 + *(int *)(*a1 + 4);
        v4 = *((_DWORD *)v3 + 4);
        if ( !*((_QWORD *)v3 + 9) )
          LOBYTE(v4) = v4 | 4;
        std::ios_base::clear((std::ios_base *)v3, v4 | 4, 0);
      }
    }
    if ( !std::uncaught_exception() )
      std::basic_ostream<unsigned short>::_Osfx(v7);
    v5 = *(_QWORD *)(*(int *)(*(_QWORD *)v7 + 4LL) + v7 + 72);
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  return a1;
}
