/*
 * XREFs of ?SendMouseLatencyTelemetryRandomPick@MousePerfSummary@@AEAAXXZ @ 0x1C01C53B8
 * Callers:
 *     ?CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z @ 0x1C0069480 (-CollectMousePerfTelemetry@MousePerfSummary@@QEAAXAEBU_MousePerf@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0069BE0 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U3@U1@U3@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@5353333333333@Z @ 0x1C01C4F8C (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U3@U1@U3@U1@U1@U1@U1.c)
 */

void __fastcall MousePerfSummary::SendMouseLatencyTelemetryRandomPick(LARGE_INTEGER *this)
{
  LARGE_INTEGER PerformanceCounter; // rdi
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  LARGE_INTEGER v6; // [rsp+A0h] [rbp-19h] BYREF
  LARGE_INTEGER v7; // [rsp+A8h] [rbp-11h] BYREF
  LARGE_INTEGER v8; // [rsp+B0h] [rbp-9h] BYREF
  LARGE_INTEGER v9; // [rsp+B8h] [rbp-1h] BYREF
  LARGE_INTEGER v10; // [rsp+C0h] [rbp+7h] BYREF
  LARGE_INTEGER v11; // [rsp+C8h] [rbp+Fh] BYREF
  LARGE_INTEGER v12; // [rsp+D0h] [rbp+17h] BYREF
  LARGE_INTEGER v13; // [rsp+D8h] [rbp+1Fh] BYREF
  LARGE_INTEGER v14; // [rsp+E0h] [rbp+27h] BYREF
  __int64 HighPart; // [rsp+E8h] [rbp+2Fh] BYREF
  LARGE_INTEGER *v16; // [rsp+F0h] [rbp+37h] BYREF
  __int64 v17[3]; // [rsp+F8h] [rbp+3Fh] BYREF
  DWORD LowPart; // [rsp+120h] [rbp+67h] BYREF
  DWORD v19; // [rsp+128h] [rbp+6Fh] BYREF
  DWORD v20; // [rsp+130h] [rbp+77h] BYREF
  LARGE_INTEGER v21; // [rsp+138h] [rbp+7Fh] BYREF

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  if ( (unsigned __int64)(1000 * (PerformanceCounter.QuadPart - this[67].QuadPart)) / gliQpcFreq.QuadPart > 0x1B7740 )
  {
    if ( (unsigned int)dword_1C024B170 > 5 && tlgKeywordOn((__int64)&dword_1C024B170, 0x400000000000LL) )
    {
      v21 = this[79];
      v6 = this[78];
      v7 = this[77];
      v8 = this[76];
      v9 = this[75];
      v10 = this[74];
      v11 = this[73];
      v12 = this[72];
      v13 = this[71];
      v14 = this[70];
      LowPart = this[85].LowPart;
      HighPart = this[84].HighPart;
      v19 = this[84].LowPart;
      v20 = v19;
      v16 = this + 80;
      v17[0] = 0x2000000LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
        v3,
        byte_1C0221734,
        v4,
        v5,
        (__int64)v17,
        (const WCHAR **)&v16,
        (__int64)&v20,
        (__int64)&v19,
        (__int64)&HighPart,
        (__int64)&LowPart,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v12,
        (__int64)&v11,
        (__int64)&v10,
        (__int64)&v9,
        (__int64)&v8,
        (__int64)&v7,
        (__int64)&v6,
        (__int64)&v21);
    }
    this[68].QuadPart = 0LL;
    this[67] = PerformanceCounter;
    LOBYTE(this[69].LowPart) = 0;
  }
}
