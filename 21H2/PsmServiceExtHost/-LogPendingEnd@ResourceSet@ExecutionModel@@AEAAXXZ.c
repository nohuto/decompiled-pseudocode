/*
 * XREFs of ?LogPendingEnd@ResourceSet@ExecutionModel@@AEAAXXZ @ 0x180012894
 * Callers:
 *     ?CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z @ 0x180015250 (-CompleteAcquire@ResourceSet@ExecutionModel@@QEAAXK@Z.c)
 * Callees:
 *     ?RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z @ 0x18000FFE0 (-RmpSystemMemoryMetricsQuery@@YAXPEAU_RM_PARTITION@@PEAU_RM_SYSTEM_MEMORY_METRICS@@@Z.c)
 *     __security_check_cookie @ 0x1800448B0 (__security_check_cookie.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@U1@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@33444@Z @ 0x180072E50 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@U1@U2@U2@U2@@-$_tlgWriteTemplate@$.c)
 */

void __fastcall ExecutionModel::ResourceSet::LogPendingEnd(ExecutionModel::ResourceSet *this)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  int v4; // ecx
  int v5; // eax
  int v6; // r8d
  int v7; // r9d
  int v8; // edx
  int v9; // [rsp+68h] [rbp-39h] BYREF
  int v10; // [rsp+6Ch] [rbp-35h] BYREF
  int v11; // [rsp+70h] [rbp-31h] BYREF
  unsigned __int64 v12; // [rsp+78h] [rbp-29h] BYREF
  __int64 v13; // [rsp+80h] [rbp-21h] BYREF
  __int64 v14; // [rsp+88h] [rbp-19h] BYREF
  __int64 v15; // [rsp+90h] [rbp-11h] BYREF
  _BYTE v16[24]; // [rsp+98h] [rbp-9h] BYREF
  __int64 v17; // [rsp+B0h] [rbp+Fh]
  __int64 v18; // [rsp+C8h] [rbp+27h]

  if ( dword_1800B31E0 )
  {
    RmpSystemMemoryMetricsQuery(
      *(struct _RM_PARTITION **)(*((_QWORD *)this + 164) + 64LL),
      (struct _RM_SYSTEM_MEMORY_METRICS *)v16);
    v2 = *((_DWORD *)this + 441);
    v3 = *((_DWORD *)this + 442);
    RtlQueryUnbiasedInterruptTime(&v12);
    if ( v2 <= v3 )
      v2 = v3;
    v5 = *((_DWORD *)this + 440);
    v6 = *((_DWORD *)this + 441) - v5;
    v7 = *((_DWORD *)this + 442) - v5;
    v8 = v12 / 0x2710 - v2;
    if ( (unsigned int)dword_1800B31E0 > 4 && (byte_1800B31F0 & 1) != 0 && (qword_1800B31F8 & 1) == qword_1800B31F8 )
    {
      v13 = v17;
      v14 = v18;
      LODWORD(v12) = *((_DWORD *)this + 334);
      v15 = *((_QWORD *)this + 219);
      v10 = v8;
      v9 = v7;
      v11 = v6;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v4,
        (unsigned int)&unk_18009D49A,
        v6,
        v7,
        (__int64)&v15,
        (__int64)&v12,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9);
    }
  }
}
