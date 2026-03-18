/*
 * XREFs of RIMQueueKeyboardInput @ 0x1C0172830
 * Callers:
 *     RIMIDEInjectKeyboardInput @ 0x1C0171BEC (RIMIDEInjectKeyboardInput.c)
 *     ?DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x1C01B67F4 (-DeliverKeyboardInputToRim@@YAXPEAU_IVKeyboardInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV.c)
 * Callees:
 *     WPP_RECORDER_SF_ddd @ 0x1C0064264 (WPP_RECORDER_SF_ddd.c)
 *     ?DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z @ 0x1C016EE8C (-DropInput@RIM@InputTraceLogging@@SAXPEBURIMDEV@@W4DropReason@12@@Z.c)
 *     rimProcessDeviceBufferAndStartRead @ 0x1C017C48C (rimProcessDeviceBufferAndStartRead.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall RIMQueueKeyboardInput(
        struct RawInputManagerObject *a1,
        struct RIMDEV *a2,
        __int64 *a3,
        unsigned int a4)
{
  int v4; // eax
  unsigned int v5; // esi
  __int64 v6; // rdi
  unsigned int v10; // eax
  __int64 v11; // r8
  __int64 v12; // xmm0_8
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx

  v4 = *((_DWORD *)a2 + 46);
  v5 = 0;
  v6 = a4;
  if ( (v4 & 0x2000) == 0 && (v4 & 0x40) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  if ( (unsigned int)v6 > 0x10 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(a1);
  v10 = *((_DWORD *)a2 + 175);
  if ( v10 + (unsigned int)v6 < v10 || v10 + (unsigned int)v6 > 0x10 )
  {
    InputTraceLogging::RIM::DropInput((__int64)a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddd(
        (__int64)gRimLog,
        2u,
        1u,
        0x2Eu,
        (__int64)&WPP_6618ffd707d032c105188cf3f3e4149b_Traceguids,
        *((_DWORD *)a2 + 175),
        16,
        v6);
    return (unsigned int)-1073741789;
  }
  else
  {
    if ( (_DWORD)v6 )
    {
      v11 = v6;
      do
      {
        v12 = *a3;
        v13 = *((_DWORD *)a3 + 2);
        a3 = (__int64 *)((char *)a3 + 12);
        v14 = ((unsigned __int8)*((_DWORD *)a2 + 176) + 1) & 0xF;
        *((_DWORD *)a2 + 176) = v14;
        v15 = 3 * (v14 + 59);
        *(_QWORD *)((char *)a2 + 4 * v15) = v12;
        *((_DWORD *)a2 + v15 + 2) = v13;
        ++*((_DWORD *)a2 + 175);
        --v11;
      }
      while ( v11 );
    }
    rimProcessDeviceBufferAndStartRead(a1, a2);
  }
  return v5;
}
