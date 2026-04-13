/*
 * XREFs of ?_Osfx@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAXXZ @ 0x1800372DC
 * Callers:
 *     ??1sentry@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAA@XZ @ 0x1800344F0 (--1sentry@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAA@XZ.c)
 *     ?flush@?$basic_ostream@GU?$char_traits@G@std@@@std@@QEAAAEAV12@XZ @ 0x1800350FC (-flush@-$basic_ostream@GU-$char_traits@G@std@@@std@@QEAAAEAV12@XZ.c)
 *     ??$?6GU?$char_traits@G@std@@@std@@YAAEAV?$basic_ostream@GU?$char_traits@G@std@@@0@AEAV10@PEBG@Z @ 0x180048788 (--$-6GU-$char_traits@G@std@@@std@@YAAEAV-$basic_ostream@GU-$char_traits@G@std@@@0@AEAV10@PEBG@Z.c)
 * Callees:
 *     ?clear@ios_base@std@@QEAAXH_N@Z @ 0x18002A930 (-clear@ios_base@std@@QEAAXH_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800CEB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall std::basic_ostream<unsigned short>::_Osfx(__int64 a1)
{
  __int64 v2; // rcx
  __int64 v3; // rcx
  __int64 v4; // rcx
  int v5; // edx

  v2 = *(int *)(*(_QWORD *)a1 + 4LL);
  if ( !*(_DWORD *)(v2 + a1 + 16) && (*(_BYTE *)(v2 + a1 + 24) & 2) != 0 )
  {
    v3 = *(_QWORD *)(v2 + a1 + 72);
    try
    {
      if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v3 + 104LL))(v3) == -1 )
      {
        v4 = a1 + *(int *)(*(_QWORD *)a1 + 4LL);
        v5 = *(_DWORD *)(v4 + 16);
        if ( !*(_QWORD *)(v4 + 72) )
          LOBYTE(v5) = v5 | 4;
        std::ios_base::clear((std::ios_base *)v4, v5 | 4, 0);
      }
    }
    catch ( ... )
    {
    }
  }
}
