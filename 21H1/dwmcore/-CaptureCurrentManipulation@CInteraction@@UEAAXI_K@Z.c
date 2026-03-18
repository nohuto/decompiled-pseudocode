/*
 * XREFs of ?CaptureCurrentManipulation@CInteraction@@UEAAXI_K@Z @ 0x1801C9DB0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180156DB8 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tl.c)
 */

void __fastcall CInteraction::CaptureCurrentManipulation(CInteraction *this, int a2, __int64 a3)
{
  __int64 v3; // [rsp+50h] [rbp+8h] BYREF
  int v4; // [rsp+58h] [rbp+10h] BYREF
  char *v5; // [rsp+60h] [rbp+18h] BYREF

  *((_BYTE *)this + 1152) |= 0x20u;
  *((_DWORD *)this + 292) = a2;
  *((_QWORD *)this + 147) = a3;
  if ( (unsigned int)dword_180346EF0 > 4 && (qword_180346F00 & 2) != 0 && (qword_180346F08 & 2) == qword_180346F08 )
  {
    v4 = a2;
    v3 = a3;
    v5 = (char *)this + 344;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<8>>(
      (__int64)this,
      byte_1802EC983,
      a3,
      (__int64)this + 344,
      (__int64)&v5,
      (__int64)&v4,
      (__int64)&v3);
  }
}
