/*
 * XREFs of ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C0168154
 * Callers:
 *     LogMonitorHandleOnOffState @ 0x1C016809C (LogMonitorHandleOnOffState.c)
 *     ?_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C0176864 (-_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     ??1DXGMONITOR@@AEAA@XZ @ 0x1C02F852C (--1DXGMONITOR@@AEAA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C000AE58 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@U4@U4@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@6677@Z @ 0x1C005D864 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWra.c)
 */

char __fastcall DXGMONITOR::LogMonitorObjectOnOffState(char *a1, __int64 a2, int a3, char a4)
{
  _UNKNOWN **v4; // rax
  char v7; // si
  __int64 v8; // rbx
  __int64 v9; // rdx
  const GUID *v10; // r9
  __int64 v11; // rcx
  char v13; // [rsp+78h] [rbp+7h] BYREF
  char v14; // [rsp+79h] [rbp+8h] BYREF
  __int16 v15; // [rsp+7Ah] [rbp+9h] BYREF
  int v16; // [rsp+7Ch] [rbp+Bh] BYREF
  int v17; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v18; // [rsp+88h] [rbp+17h]
  __int64 v19; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v20; // [rsp+98h] [rbp+27h] BYREF
  __int64 v21; // [rsp+A0h] [rbp+2Fh] BYREF
  const GUID *v22; // [rsp+A8h] [rbp+37h] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  char v24; // [rsp+F0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  if ( a4 == 1 )
    v7 = 2 - (a3 != 0);
  else
    v7 = *a1;
  if ( a4 != 1 || v7 != *a1 )
  {
    v8 = MEMORY[0xFFFFF78000000014];
    v9 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 8LL) + 16LL);
    LODWORD(v18) = *(_DWORD *)(v9 + 316);
    LODWORD(v4) = *(_DWORD *)(v9 + 320);
    HIDWORD(v18) = (_DWORD)v4;
    if ( (unsigned int)dword_1C00B09E8 > 5 )
    {
      LOBYTE(v4) = tlgKeywordOn((__int64)&dword_1C00B09E8, 0x400000000010LL);
      if ( (_BYTE)v4 )
      {
        v11 = (unsigned int)dword_1C00B367C;
        v13 = v7;
        v20 = v8;
        v14 = a4;
        v22 = v10;
        ++dword_1C00B367C;
        v24 = *a1;
        v19 = *((_QWORD *)a1 + 1);
        v16 = *((_DWORD *)a1 + 11);
        v21 = v18;
        v17 = v11;
        v15 = 1;
        LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                       v11,
                       byte_1C008133A,
                       v10,
                       (__int64)v10,
                       (__int64)&v15,
                       (__int64)&v17,
                       (__int64 *)&v22,
                       (__int64)&v21,
                       (__int64)&v16,
                       (__int64)&v14,
                       (__int64)&v20,
                       (__int64)&v19,
                       (__int64)&v13,
                       (__int64)&v24);
      }
    }
    if ( a4 == 1 )
    {
      *((_QWORD *)a1 + 1) = v8;
      *a1 = v7;
    }
  }
  return (char)v4;
}
