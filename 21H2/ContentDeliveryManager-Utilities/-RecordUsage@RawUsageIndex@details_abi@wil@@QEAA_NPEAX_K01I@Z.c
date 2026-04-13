/*
 * XREFs of ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180009D24
 * Callers:
 *     ?RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z @ 0x18000B0D0 (-RecordFeatureError@FeatureStateData@details_abi@wil@@QEAA_NIAEBUFEATURE_ERROR@@@Z.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800164AC (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$01@details_abi@wil@@QEAA_NW4wil_.c)
 *     ?RecordUsage@?$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil_details_ServiceReportingKind@@II@Z @ 0x1800164E4 (-RecordUsage@-$UsageIndex@W4wil_details_ServiceReportingKind@@I$0A@@details_abi@wil@@QEAA_NW4wil.c)
 *     ??R?$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEAA_N$$QEAPEAX$$QEA_K01$$QEAI@Z @ 0x18001C0A0 (--R-$__func@V_lambda_8db0ce862824541f40dfb767113f1e28_@@$$A6A_NPEAX_K01I@Z@__function@wistd@@UEA.c)
 * Callees:
 *     ?reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z @ 0x180008FF0 (-reserve@heap_buffer@details_abi@wil@@QEAA_N_K@Z.c)
 *     ?SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z @ 0x180009BE8 (-SetBuffer@RawUsageIndex@details_abi@wil@@QEAAXPEAX_K1@Z.c)
 *     ?RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z @ 0x18000A174 (-RecordUsageInternal@RawUsageIndex@details_abi@wil@@AEAA_NPEAX_K01I@Z.c)
 */

// Hidden C++ exception states: #wind=1
bool __fastcall wil::details_abi::RawUsageIndex::RecordUsage(
        wil::details_abi::RawUsageIndex *this,
        void *Buf1,
        size_t Size,
        void *a4,
        size_t a5,
        unsigned int a6)
{
  unsigned __int64 v11; // rdx
  void *v12; // rdi
  void *v13; // rsi
  HANDLE ProcessHeap; // rax
  HANDLE v15; // rax
  unsigned __int64 v16; // r8
  void *v17[2]; // [rsp+38h] [rbp-50h] BYREF
  __int128 v18; // [rsp+48h] [rbp-40h]

  if ( wil::details_abi::RawUsageIndex::RecordUsageInternal(this, Buf1, Size, a4, a5, a6) )
    return 1;
  v11 = Size + a5 + 32;
  if ( *((_QWORD *)this + 3) )
  {
    if ( *((_BYTE *)this + 58) )
    {
      v16 = *((_QWORD *)this + 5) - *((_QWORD *)this + 3);
      if ( v11 + *((_QWORD *)this + 4) - *((_QWORD *)this + 3) >= v16 )
      {
        if ( v11 < 2 * v16 )
          v11 = 2 * v16;
        wil::details_abi::heap_buffer::reserve((wil::details_abi::RawUsageIndex *)((char *)this + 24), v11);
      }
    }
  }
  else
  {
    *(_OWORD *)v17 = 0LL;
    v18 = 0LL;
    if ( wil::details_abi::heap_buffer::reserve((wil::details_abi::heap_buffer *)v17, v11 + 10) )
    {
      wil::details_abi::RawUsageIndex::SetBuffer(
        this,
        (_WORD *)v17[0],
        0LL,
        (const char *)(v18 - (unsigned __int64)v17[0]));
      v12 = 0LL;
      v13 = (void *)*((_QWORD *)this + 6);
      *((_QWORD *)this + 6) = *((_QWORD *)&v18 + 1);
      if ( v13 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, v13);
      }
      *((_BYTE *)this + 58) = 1;
    }
    else
    {
      v12 = (void *)*((_QWORD *)&v18 + 1);
    }
    if ( v12 )
    {
      v15 = GetProcessHeap();
      HeapFree(v15, 0, v12);
    }
  }
  return wil::details_abi::RawUsageIndex::RecordUsageInternal(this, Buf1, Size, a4, a5, a6);
}
