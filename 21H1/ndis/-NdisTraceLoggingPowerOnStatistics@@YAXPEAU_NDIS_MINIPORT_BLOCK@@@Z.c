/*
 * XREFs of ?NdisTraceLoggingPowerOnStatistics@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C008B72C
 * Callers:
 *     ?ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z @ 0x1C005ADC8 (-ndisCsStateChange@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E_K@Z.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0023384 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$00@@U2@U2@U2@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$00@@444444444@Z @ 0x1C008A734 (--$Write@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$00@@U2@U2@U2@U.c)
 *     ?ndisConvertInterruptTimeToLocalTime@@YAX_KPEAT_LARGE_INTEGER@@@Z @ 0x1C008BD94 (-ndisConvertInterruptTimeToLocalTime@@YAX_KPEAT_LARGE_INTEGER@@@Z.c)
 */

void __fastcall NdisTraceLoggingPowerOnStatistics(struct _NDIS_MINIPORT_BLOCK *a1)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rbx
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r9
  bool v6; // zf
  __int64 v7; // rax
  __int64 v8; // [rsp+80h] [rbp-9h] BYREF
  __int64 v9; // [rsp+88h] [rbp-1h] BYREF
  __int64 v10; // [rsp+90h] [rbp+7h] BYREF
  __int64 v11; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v12; // [rsp+A0h] [rbp+17h] BYREF
  __int64 v13; // [rsp+A8h] [rbp+1Fh] BYREF
  union _LARGE_INTEGER v14; // [rsp+B0h] [rbp+27h] BYREF
  __int64 v15; // [rsp+B8h] [rbp+2Fh] BYREF
  _GUID *p_InterfaceGuid; // [rsp+C0h] [rbp+37h] BYREF
  bool v17; // [rsp+F0h] [rbp+67h] BYREF
  union _LARGE_INTEGER v18; // [rsp+F8h] [rbp+6Fh] BYREF
  __int64 v19; // [rsp+100h] [rbp+77h] BYREF
  __int64 v20; // [rsp+108h] [rbp+7Fh] BYREF

  AoAc = a1->AoAc;
  if ( AoAc )
  {
    v18.QuadPart = 0LL;
    ndisConvertInterruptTimeToLocalTime((unsigned __int64)a1, &v18);
    if ( (unsigned int)dword_1C00E30F8 > 5 )
    {
      if ( tlgKeywordOn((__int64)&dword_1C00E30F8, 0x400000000000LL) )
      {
        v6 = a1->MediaConnectState == MediaConnectStateConnected;
        v19 = *((_QWORD *)AoAc + 147);
        v7 = *((_QWORD *)AoAc + 146);
        v17 = v6;
        v20 = v7;
        v8 = *((_QWORD *)AoAc + 145);
        v9 = *((unsigned int *)AoAc + 288);
        v10 = *((_QWORD *)AoAc + 143);
        v11 = *((_QWORD *)AoAc + 142);
        v12 = *((_QWORD *)AoAc + 141);
        v13 = *((unsigned int *)AoAc + 278);
        v14 = v18;
        v15 = *((unsigned __int16 *)&a1->NetLuid.Info + 3);
        p_InterfaceGuid = &a1->InterfaceGuid;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>>(
          v3,
          byte_1C00CE35B,
          v4,
          v5,
          (__int64 *)&p_InterfaceGuid,
          (__int64)&v15,
          (__int64)&v17,
          (__int64)&v14,
          (__int64)&v13,
          (__int64)&v12,
          (__int64)&v11,
          (__int64)&v10,
          (__int64)&v9,
          (__int64)&v8,
          (__int64)&v20,
          (__int64)&v19);
      }
    }
  }
}
