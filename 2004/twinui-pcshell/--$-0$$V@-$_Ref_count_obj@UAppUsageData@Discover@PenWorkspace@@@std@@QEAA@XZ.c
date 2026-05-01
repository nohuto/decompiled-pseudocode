/*
 * XREFs of ??$?0$$V@?$_Ref_count_obj@UAppUsageData@Discover@PenWorkspace@@@std@@QEAA@XZ @ 0x1800852C8
 * Callers:
 *     ??$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA?AV?$shared_ptr@UAppUsageData@Discover@PenWorkspace@@@0@XZ @ 0x18008528C (--$make_shared@UAppUsageData@Discover@PenWorkspace@@$$V@std@@YA-AV-$shared_ptr@UAppUsageData@Dis.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj<PenWorkspace::Discover::AppUsageData>::_Ref_count_obj<PenWorkspace::Discover::AppUsageData>(
        __int64 a1)
{
  *(_DWORD *)(a1 + 8) = 1;
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &std::_Ref_count_obj<PenWorkspace::Discover::AppUsageData>::`vftable';
  *(_OWORD *)(a1 + 16) = 0LL;
  *(_OWORD *)(a1 + 32) = 0LL;
  *(_OWORD *)(a1 + 48) = 0LL;
  *(_QWORD *)(a1 + 64) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 7LL;
  *(_WORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 52) = 0LL;
  *(_BYTE *)(a1 + 60) = 0;
  InitializeSRWLock((PSRWLOCK)(a1 + 64));
  return a1;
}
