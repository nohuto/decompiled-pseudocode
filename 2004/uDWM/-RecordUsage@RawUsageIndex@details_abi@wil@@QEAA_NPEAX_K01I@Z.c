/*
 * XREFs of ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x18002F878
 * Callers:
 *     ??R?$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z @ 0x18002F530 (--R-$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEA.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x18002F598 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18007E9C0 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x18007EC70 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 * Callees:
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18002F98C (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 *     ?ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x18002FF54 (-ensure@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180040660 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?MemoryFree@@YAXPEAX@Z @ 0x180042450 (-MemoryFree@@YAXPEAX@Z.c)
 */

bool __fastcall wil::details_abi::RawUsageIndex::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        void *a2,
        unsigned __int64 a3,
        void *a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  unsigned __int64 v11; // rdx
  void *v12; // rcx
  void *v13; // rdi
  void *v14[2]; // [rsp+30h] [rbp-38h] BYREF
  __int128 v15; // [rsp+40h] [rbp-28h]

  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(this, a2, a3, a4, a5, a6) )
    return 1;
  v11 = a3 + a5 + 32;
  if ( *((_QWORD *)this + 3) )
  {
    if ( *((_BYTE *)this + 58) )
      wil::details_abi::heap_buffer::ensure((wil::details_abi::RawUsageIndex *)((char *)this + 24), v11);
  }
  else
  {
    *(_OWORD *)v14 = 0LL;
    v15 = 0LL;
    if ( wil::details_abi::heap_buffer::ensure((wil::details_abi::heap_buffer *)v14, v11 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(this, v14[0], 0LL, v15 - (unsigned __int64)v14[0]);
      v12 = (void *)*((_QWORD *)this + 6);
      v13 = 0LL;
      *((_QWORD *)this + 6) = *((_QWORD *)&v15 + 1);
      if ( v12 )
        MemoryFree(v12);
      *((_BYTE *)this + 58) = 1;
    }
    else
    {
      v13 = (void *)*((_QWORD *)&v15 + 1);
    }
    if ( v13 )
      MemoryFree(v13);
  }
  return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, a2, a3, a4, a5, a6);
}
