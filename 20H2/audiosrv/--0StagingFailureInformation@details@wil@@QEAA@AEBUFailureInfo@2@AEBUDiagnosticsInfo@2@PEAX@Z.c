/*
 * XREFs of ??0StagingFailureInformation@details@wil@@QEAA@AEBUFailureInfo@2@AEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800B76F0
 * Callers:
 *     ?ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PEAX@Z @ 0x1800BA258 (-ReportFeatureCaughtException@details@wil@@YAXAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@PE.c)
 * Callees:
 *     memset_0 @ 0x18006AD3C (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800741C0 (_guard_dispatch_icall_nop.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x1800B5A38 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     ?GetModuleInformationFromAddress@details@wil@@YA_NPEAXPEAIPEAD_K@Z @ 0x1800B8F64 (-GetModuleInformationFromAddress@details@wil@@YA_NPEAXPEAIPEAD_K@Z.c)
 */

struct DiagnosticsInfo *__fastcall wil::details::StagingFailureInformation::StagingFailureInformation(
        struct DiagnosticsInfo *this,
        const struct wil::FailureInfo *a2,
        const struct DiagnosticsInfo *a3,
        void *a4)
{
  char *v7; // r9
  char *v8; // r9
  wil::details *v9; // rcx
  char *v10; // r9
  unsigned __int64 v12; // [rsp+20h] [rbp-8h]
  unsigned __int64 v13; // [rsp+20h] [rbp-8h]
  unsigned __int64 v14; // [rsp+20h] [rbp-8h]

  memset_0(this, 0, 0x68uLL);
  this->cost = *((_DWORD *)a2 + 1);
  LOWORD(this->flags) = *((_WORD *)a2 + 28);
  this[1] = *(struct DiagnosticsInfo *)((char *)a2 + 48);
  if ( wil::details::GetModuleInformationFromAddress(0LL, 0LL, (unsigned int *)&this[13], v7, v12) )
    this[2] = (struct DiagnosticsInfo)&this[13];
  v9 = (wil::details *)*((_QWORD *)a2 + 17);
  this[3] = *(struct DiagnosticsInfo *)((char *)a2 + 120);
  if ( wil::details::GetModuleInformationFromAddress(v9, &this[4], (unsigned int *)&this[21], v8, v13) )
    this[5] = (struct DiagnosticsInfo)&this[21];
  v10 = (char *)*((_QWORD *)a2 + 2);
  if ( v10 && *(_WORD *)v10 )
  {
    wil::details::StringCchPrintfA((wil::details *)&this[37], (char *)0x60, "%ws", v10);
    this[6] = (struct DiagnosticsInfo)&this[37];
  }
  LOWORD(this[7].cost) = a3[3].cost;
  this[8] = a3[1];
  if ( wil::details::g_pfnGetModuleName )
    this[9] = (struct DiagnosticsInfo)wil::details::g_pfnGetModuleName();
  if ( wil::details::GetModuleInformationFromAddress(
         *(wil::details **)a3,
         &this[10],
         (unsigned int *)&this[29],
         v10,
         v14) )
  {
    this[11] = (struct DiagnosticsInfo)&this[29];
  }
  this[12] = a3[2];
  return this;
}
