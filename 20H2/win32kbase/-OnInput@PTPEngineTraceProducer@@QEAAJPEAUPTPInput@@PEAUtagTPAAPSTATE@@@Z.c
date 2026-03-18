/*
 * XREFs of ?OnInput@PTPEngineTraceProducer@@QEAAJPEAUPTPInput@@PEAUtagTPAAPSTATE@@@Z @ 0x1C01C4050
 * Callers:
 *     ?ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z @ 0x1C01A1B84 (-ProcessInput@CPTPProcessor@@QEAAXPEAX0HHH@Z.c)
 *     ?OnInput@PTPEngineTraceProducer@@UEAAJPEAUPTPInput@@@Z @ 0x1C01C4190 (-OnInput@PTPEngineTraceProducer@@UEAAJPEAUPTPInput@@@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0066CD0 (_tlgKeywordOn.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@@Z @ 0x1C01C3BB4 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@@-$_tlgWriteTempl.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU_tlgWrapperBinary@@5@Z @ 0x1C01C3C58 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U_tlgWrapperBinary@@U3@@-$_tlgWriteTe.c)
 */

__int64 __fastcall PTPEngineTraceProducer::OnInput(PTPEngineTraceProducer *this, struct PTPInput *a2, __int64 a3)
{
  __int64 v3; // r9
  __int16 v6; // dx
  __int64 v7; // rcx
  __int64 v8; // r8
  int v9; // edx
  __int64 v10; // r9
  __int16 v11; // cx
  __int64 v12; // rcx
  __int64 v14; // [rsp+40h] [rbp-20h] BYREF
  __int16 v15; // [rsp+48h] [rbp-18h]
  struct PTPInput *v16; // [rsp+50h] [rbp-10h] BYREF
  __int16 v17; // [rsp+58h] [rbp-8h]
  int v18; // [rsp+70h] [rbp+10h] BYREF
  __int64 v19; // [rsp+78h] [rbp+18h] BYREF

  LODWORD(v3) = dword_1C0243170;
  if ( (unsigned int)dword_1C0243170 > 5 && tlgKeywordOn((__int64)&dword_1C0243170, 3LL) )
  {
    v14 = a3;
    v8 = -a3;
    v16 = a2;
    v18 = 4;
    v15 = v8 != 0 ? 0x80 : 0;
    v17 = v6 + 53;
    v19 = *((_QWORD *)this + 69);
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary,_tlgWrapperBinary>(
      v7,
      byte_1C021A47A,
      v8,
      v3,
      (__int64)&v19,
      (__int64)&v18,
      (__int64 *)&v16,
      &v14);
    LODWORD(v3) = dword_1C0243170;
  }
  if ( *((_DWORD *)a2 + 12) && (unsigned int)v3 > 5 && tlgKeywordOn((__int64)&dword_1C0243170, 3LL) )
  {
    v11 = *((_WORD *)a2 + 24);
    v16 = (struct PTPInput *)((char *)a2 + 56);
    v18 = v9;
    v19 = *((_QWORD *)this + 69);
    v12 = (unsigned __int16)(96 * v11);
    v17 = v12;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperBinary>(
      v12,
      byte_1C021A439,
      a3,
      v10,
      (__int64)&v19,
      (__int64)&v18,
      (__int64 *)&v16);
  }
  return (*(__int64 (__fastcall **)(_QWORD, struct PTPInput *, __int64))(**((_QWORD **)this + 3) + 16LL))(
           *((_QWORD *)this + 3),
           a2,
           a3);
}
