/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj@VCStreamConnectionManagerImpl@@@std@@QEAA@XZ @ 0x180061D00
 * Callers:
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x180061BBC (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 * Callees:
 *     ??0CMonitorManager@@QEAA@XZ @ 0x180061D94 (--0CMonitorManager@@QEAA@XZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006AC9C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x18006B69C (memset_0.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Ref_count_obj<CStreamConnectionManagerImpl>::_Ref_count_obj<CStreamConnectionManagerImpl>(
        __int64 a1)
{
  CMonitorManager *v2; // rdi
  CMonitorManager *v3; // rax
  CMonitorManager *v4; // rsi

  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<CStreamConnectionManagerImpl>::`vftable';
  *(_QWORD *)(a1 + 16) = &CStreamConnectionManagerImpl::`vftable';
  v2 = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  v3 = (CMonitorManager *)operator new(0x178uLL, (const struct std::nothrow_t *)&std::nothrow);
  v4 = v3;
  if ( v3 )
  {
    memset_0(v3, 0, 0x178uLL);
    v2 = CMonitorManager::CMonitorManager(v4);
  }
  *(_QWORD *)(a1 + 24) = v2;
  return a1;
}
