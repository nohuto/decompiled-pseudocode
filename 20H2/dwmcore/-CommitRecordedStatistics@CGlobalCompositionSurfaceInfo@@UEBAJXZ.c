/*
 * XREFs of ?CommitRecordedStatistics@CGlobalCompositionSurfaceInfo@@UEBAJXZ @ 0x180021110
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180068608 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800EE9F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGlobalCompositionSurfaceInfo::CommitRecordedStatistics(CGlobalCompositionSurfaceInfo *this)
{
  int v1; // eax
  unsigned int v2; // ecx
  unsigned int v3; // ebx

  v1 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 16) + 48LL))(*((_QWORD *)this + 16));
  v3 = v1;
  if ( v1 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(v2, 0LL, 0, v1, 0xC5u, 0LL);
  return v3;
}
