/*
 * XREFs of ?OnWatchdogTimeout@CDwmRenderThreadWatchdog@@EEAAXXZ @ 0x180156470
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180156384 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgPr.c)
 *     ??B_Atomic_int@std@@QEBAHXZ @ 0x180156404 (--B_Atomic_int@std@@QEBAHXZ.c)
 */

void __fastcall CDwmRenderThreadWatchdog::OnWatchdogTimeout(CDwmRenderThreadWatchdog *this)
{
  volatile signed __int32 *v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned int v4; // eax
  volatile signed __int32 v5; // [rsp+40h] [rbp+8h] BYREF
  __int64 v6; // [rsp+48h] [rbp+10h] BYREF

  if ( (unsigned int)std::_Atomic_int::operator int((unsigned int *)this + 10) )
    v4 = *(_DWORD *)(v2 + 52);
  else
    v4 = *(_DWORD *)(v2 + 48);
  _InterlockedExchangeAdd(v1, v4);
  if ( (unsigned int)dword_180341EF0 > 5
    && (qword_180341F00 & 0x400000000000LL) != 0
    && (qword_180341F08 & 0x400000000000LL) == qword_180341F08 )
  {
    v5 = *v1;
    v6 = 0x1000000LL;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>>(
      (__int64)&dword_180341EF0,
      byte_1802E0BDC,
      0x400000000000LL,
      v3,
      (__int64)&v6,
      (__int64)&v5);
  }
}
