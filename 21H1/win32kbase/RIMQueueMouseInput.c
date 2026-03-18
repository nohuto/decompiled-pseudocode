/*
 * XREFs of RIMQueueMouseInput @ 0x1C017295C
 * Callers:
 *     RIMIDEInjectMouseInput @ 0x1C0171F00 (RIMIDEInjectMouseInput.c)
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01B68AC (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0064264 (WPP_RECORDER_SF_ddd.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C016EE8C (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMQueueMouseInput(struct RawInputManagerObject *a1, struct RIMDEV *a2, _OWORD *a3, unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // esi
  __int64 v6; // rdi
  unsigned int v10; // eax
  _OWORD *v11; // rdx
  __int64 v12; // r8
  __int64 v13; // rax
  __int128 v14; // xmm0
  __int64 v15; // rcx

  v4 = *((_DWORD *)a2 + 46);
  v5 = 0;
  v6 = a4;
  if ( (v4 & 0x2000) == 0 && (v4 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( (unsigned int)v6 > 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v10 = *((_DWORD *)a2 + 230);
  if ( v10 + (unsigned int)v6 < v10 || v10 + (unsigned int)v6 > 0x10 )
  {
    InputTraceLogging::RIM::DropInput((__int64)a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd(
        (__int64)gRimLog,
        2u,
        1u,
        0x2Fu,
        (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
        *((_DWORD *)a2 + 230),
        16,
        v6);
    return (unsigned int)-1073741789;
  }
  else
  {
    if ( (_DWORD)v6 )
    {
      v11 = a3;
      v12 = v6;
      do
      {
        v13 = ((unsigned __int8)*((_DWORD *)a2 + 231) + 1) & 0xF;
        *((_DWORD *)a2 + 231) = v13;
        v14 = *v11;
        v11 = (_OWORD *)((char *)v11 + 24);
        v15 = 3 * v13;
        *(_OWORD *)((char *)a2 + 8 * v15 + 928) = v14;
        *((_QWORD *)a2 + v15 + 118) = *((_QWORD *)v11 - 1);
        ++*((_DWORD *)a2 + 230);
        --v12;
      }
      while ( v12 );
    }
    *(_OWORD *)((char *)a2 + 860) = *(_OWORD *)((char *)a3 + 24 * (unsigned int)(v6 - 1));
    *(_QWORD *)((char *)a2 + 876) = *((_QWORD *)a3 + 3 * (unsigned int)(v6 - 1) + 2);
    rimProcessDeviceBufferAndStartRead(a1, a2);
  }
  return v5;
}
