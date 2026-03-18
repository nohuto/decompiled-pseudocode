/*
 * XREFs of ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x1C0063CB8
 * Callers:
 *     PowerUnDimMonitor @ 0x1C0063A00 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x1C0063B80 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x1C0120DB0 (PowerDimMonitor.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C006DE40 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@44443@Z @ 0x1C011F058 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@55554@Z @ 0x1C011F1FC (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@U3@.c)
 *     TlgAggregateFlush @ 0x1C01FBB24 (TlgAggregateFlush.c)
 */

void __fastcall PowerMonitorDimStateTelemetry(struct _DIM_UNDIM_TELEMETRY_DATA *a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ecx
  int v5; // r9d
  int *v6; // r10
  char v7; // r11
  char v8; // r8
  int v9; // r8d
  int *v10; // r10
  char v11; // r9
  bool v12; // [rsp+60h] [rbp+17h] BYREF
  char v13; // [rsp+61h] [rbp+18h] BYREF
  char v14; // [rsp+62h] [rbp+19h] BYREF
  char v15; // [rsp+63h] [rbp+1Ah] BYREF
  bool v16; // [rsp+64h] [rbp+1Bh] BYREF
  bool v17[3]; // [rsp+65h] [rbp+1Ch] BYREF
  int v18; // [rsp+68h] [rbp+1Fh] BYREF
  int v19; // [rsp+6Ch] [rbp+23h] BYREF
  int v20; // [rsp+70h] [rbp+27h] BYREF
  int v21; // [rsp+74h] [rbp+2Bh] BYREF
  __int64 v22; // [rsp+78h] [rbp+2Fh] BYREF
  __int64 v23; // [rsp+80h] [rbp+37h] BYREF
  __int64 v24; // [rsp+88h] [rbp+3Fh] BYREF
  char v25; // [rsp+B0h] [rbp+67h] BYREF
  char v26; // [rsp+B8h] [rbp+6Fh] BYREF
  char v27; // [rsp+C0h] [rbp+77h] BYREF
  bool v28; // [rsp+C8h] [rbp+7Fh] BYREF

  if ( *((_BYTE *)a1 + 5) )
  {
    if ( (unsigned int)dword_1C0241378 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0241378, 0x400000000100LL, a3, a4) )
    {
      v8 = *((_BYTE *)v6 + 6);
      LOBYTE(v4) = gfSwitchInProgress != 0;
      LOBYTE(v5) = *((_BYTE *)v6 + 4);
      v18 = dword_1C024D140;
      v12 = gProtocolType == 0;
      v19 = *v6;
      v25 = v8;
      v26 = v7;
      v27 = v5;
      v28 = gfSwitchInProgress != 0;
      v22 = 16779264LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v4,
        (unsigned int)&unk_1C021422C,
        (_DWORD)v6 + 8,
        v5,
        (__int64)&v22,
        (__int64)&v19,
        (__int64)&v12,
        (__int64)&v28,
        (__int64)&v27,
        (__int64)&v26,
        (__int64)&v25,
        (__int64)&v18);
    }
  }
  else
  {
    if ( (unsigned int)dword_1C0241378 > 5 && (unsigned __int8)tlgKeywordOn(&dword_1C0241378, 0x400000000100LL, a3, a4) )
    {
      v11 = *((_BYTE *)v10 + 4);
      LOBYTE(v9) = gfSwitchInProgress != 0;
      v13 = *((_BYTE *)v10 + 6);
      v17[0] = gProtocolType == 0;
      v21 = *v10;
      v15 = v11;
      v20 = dword_1C024D140;
      v14 = 0;
      v16 = gfSwitchInProgress != 0;
      v23 = 16779264LL;
      v24 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        dword_1C024D140,
        (unsigned int)&unk_1C0214156,
        v9,
        (unsigned int)&v24,
        (__int64)&v23,
        (__int64)&v21,
        (__int64)v17,
        (__int64)&v16,
        (__int64)&v15,
        (__int64)&v14,
        (__int64)&v13,
        (__int64)&v20);
    }
    if ( (dword_1C024CE78 & 1) == 0 )
    {
      dword_1C024CE78 |= 1u;
      qword_1C024CE80 = MEMORY[0xFFFFF78000000008] + 36000000000LL;
    }
    if ( MEMORY[0xFFFFF78000000008] > (unsigned __int64)qword_1C024CE80 )
    {
      qword_1C024CE80 = MEMORY[0xFFFFF78000000008] + 36000000000LL;
      TlgAggregateFlush();
    }
  }
}
