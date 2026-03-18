/*
 * XREFs of ?GetPointerRawData@CTouchProcessor@@AEAAHPEBUCPointerInputFrame@@KGIPEBUtagPOINTER_DEVICE_PROPERTY@@PEAJ@Z @ 0x1C01931F8
 * Callers:
 *     ?GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z @ 0x1C0193360 (-GetPointerRawDataWithHistory@CTouchProcessor@@QEAAH_KIIPEBUtagPOINTER_DEVICE_PROPERTY@@IPEAJ@Z.c)
 * Callees:
 *     RIMExtractPointerPropertyValues @ 0x1C015FBA0 (RIMExtractPointerPropertyValues.c)
 *     ?CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ @ 0x1C0188AC0 (-CTouchProcessorLockShared@CTouchProcessor@@QEAAHXZ.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FBBDC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall CTouchProcessor::GetPointerRawData(
        PERESOURCE *this,
        const struct CPointerInputFrame *a2,
        unsigned int a3,
        unsigned __int16 a4,
        unsigned int a5,
        const struct tagPOINTER_DEVICE_PROPERTY *a6,
        int *a7)
{
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 i; // rcx

  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v12, v11, v13, v14);
  if ( !CTouchProcessor::CTouchProcessorLockShared(this) )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v15, v17, v18);
  if ( a3 && a3 <= *((_DWORD *)a2 + 14) )
  {
    for ( i = *((_QWORD *)a2 + 16); i && *(_DWORD *)(i + 4) != a3; i = *(_QWORD *)(i + 24) )
      ;
  }
  else
  {
    i = 0LL;
  }
  if ( i )
    return RIMExtractPointerPropertyValues(
             *((_QWORD *)a2 + 19),
             a4,
             *(_DWORD *)(i + 8),
             *(char **)(i + 16),
             a5,
             (__int64)a6,
             (__int64)a7);
  else
    return 0LL;
}
