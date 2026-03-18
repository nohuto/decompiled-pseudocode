/*
 * XREFs of ?LogMonitorObjectOnOffState@DXGMONITOR@@QEAAXAEBU_GUID@@IW4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C01E5500
 * Callers:
 *     ?SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_MASKS@@PEAU_DMM_SET_TIMING_RESULT@@EPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01B85D0 (-SetTimingsFromVidPn@VIDPN_MGR@@QEAAJKW4_DMM_CLIENT_TYPE@@PEAVDMMVIDPN@@PEAUD3DKMT_VIDPN_SOURCE_.c)
 *     ?_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z @ 0x1C01F465C (-_MonitorOnOffTelemetry@MONITOR_MGR@@QEAAXAEBU_GUID@@W4Enum@MONITOR_ON_OFF_CALLER_ORIGIN@@@Z.c)
 *     ??1DXGMONITOR@@UEAA@XZ @ 0x1C03B4DFC (--1DXGMONITOR@@UEAA@XZ.c)
 * Callees:
 *     _tlgKeywordOn @ 0x1C0012AB4 (_tlgKeywordOn.c)
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$07@@U2@U?$_tlgWrapperByVal@$00@@U4@U4@U5@U5@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$07@@4AEBU?$_tlgWrapperByVal@$00@@6677@Z @ 0x1C0025774 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByRef@$0BA@@@U-$_tlgWra.c)
 */

char __fastcall DXGMONITOR::LogMonitorObjectOnOffState(__int64 a1, __int64 a2, int a3, char a4)
{
  _UNKNOWN **v4; // rax
  char v7; // si
  __int64 v8; // rbx
  unsigned __int64 v9; // rax
  const GUID *v10; // r9
  __int64 v11; // rcx
  char v13; // [rsp+78h] [rbp+7h] BYREF
  char v14; // [rsp+79h] [rbp+8h] BYREF
  __int16 v15; // [rsp+7Ah] [rbp+9h] BYREF
  __int64 v16; // [rsp+80h] [rbp+Fh] BYREF
  int v17; // [rsp+88h] [rbp+17h] BYREF
  __int64 v18; // [rsp+90h] [rbp+1Fh] BYREF
  __int64 v19; // [rsp+98h] [rbp+27h] BYREF
  __int64 v20; // [rsp+A0h] [rbp+2Fh] BYREF
  const GUID *v21; // [rsp+A8h] [rbp+37h] BYREF
  _UNKNOWN *retaddr; // [rsp+D0h] [rbp+5Fh] BYREF
  char v23; // [rsp+F0h] [rbp+7Fh] BYREF

  v4 = &retaddr;
  if ( a4 == 1 )
  {
    v7 = 2 - (a3 != 0);
    if ( v7 == *(_BYTE *)(a1 + 136) )
      return (char)v4;
  }
  else
  {
    v7 = *(_BYTE *)(a1 + 136);
  }
  v8 = MEMORY[0xFFFFF78000000014];
  v9 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 168) + 24LL) + 16LL) + 404LL);
  LODWORD(v16) = v9;
  v4 = (_UNKNOWN **)HIDWORD(v9);
  HIDWORD(v16) = (_DWORD)v4;
  if ( (unsigned int)dword_1C012F8A8 > 5 )
  {
    LOBYTE(v4) = tlgKeywordOn((__int64)&dword_1C012F8A8, 0x400000000010LL);
    if ( (_BYTE)v4 )
    {
      v11 = (unsigned int)dword_1C01303F8;
      v23 = *(_BYTE *)(a1 + 136);
      v18 = *(_QWORD *)(a1 + 144);
      v17 = *(_DWORD *)(a1 + 180);
      v20 = v16;
      ++dword_1C01303F8;
      v13 = v7;
      v19 = v8;
      v14 = a4;
      v21 = v10;
      LODWORD(v16) = v11;
      v15 = 1;
      LOBYTE(v4) = _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>>(
                     v11,
                     byte_1C009A858,
                     v10,
                     (__int64)v10,
                     (__int64)&v15,
                     (__int64)&v16,
                     (__int64 *)&v21,
                     (__int64)&v20,
                     (__int64)&v17,
                     (__int64)&v14,
                     (__int64)&v19,
                     (__int64)&v18,
                     (__int64)&v13,
                     (__int64)&v23);
    }
  }
  if ( a4 == 1 )
  {
    *(_QWORD *)(a1 + 144) = v8;
    *(_BYTE *)(a1 + 136) = v7;
  }
  return (char)v4;
}
