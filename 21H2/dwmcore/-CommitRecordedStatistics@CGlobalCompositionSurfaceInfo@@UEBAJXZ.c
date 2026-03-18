/*
 * XREFs of ?CommitRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAJXZ @ 0x180016120
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800734B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x1801051D0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CommitRecordedStatistics(CGlobalCompositionSurfaceInfo *this)
{
  int v1; // eax
  unsigned int v2; // ecx
  unsigned int v3; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 48LL))(*((_QWORD *)this + 13));
  v3 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v1, 0x12Au, 0LL);
  return v3;
}
