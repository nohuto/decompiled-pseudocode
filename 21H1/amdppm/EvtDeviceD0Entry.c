/*
 * XREFs of EvtDeviceD0Entry @ 0x1C00038A0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C0001FD0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_D @ 0x1C0003AB4 (WPP_RECORDER_SF_D.c)
 *     _guard_dispatch_icall_nop @ 0x1C000EA90 (_guard_dispatch_icall_nop.c)
 *     AcpiEval_PPC @ 0x1C0024AAC (AcpiEval_PPC.c)
 *     AcpiEval_TPC @ 0x1C002534C (AcpiEval_TPC.c)
 *     ProcLibCapChange @ 0x1C0027914 (ProcLibCapChange.c)
 */

__int64 __fastcall EvtDeviceD0Entry(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v2; // rax
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  unsigned int v11; // [rsp+60h] [rbp+18h] BYREF

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C0013018);
  v2 = *(_QWORD *)(v1 + 272);
  if ( (v2 & 0x80000000) == 0 )
  {
    v3 = 0;
    if ( *(_BYTE *)(v1 + 76) )
    {
      *(_BYTE *)(v1 + 76) = 0;
      v4 = 0;
      v11 = 0;
      if ( (v2 & 0x70000000) != 0 )
      {
        v5 = AcpiEval_PPC(v1, &v11);
        if ( v5 >= 0 )
        {
          v4 = v11;
        }
        else if ( v5 == -1073741772 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x12u,
              (__int64)&WPP_ea6247e0c89d3525a20904d64520788c_Traceguids);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v6) = 3;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v6,
            3,
            19,
            (__int64)&WPP_ea6247e0c89d3525a20904d64520788c_Traceguids,
            v5);
        }
      }
      v7 = *(_DWORD *)(v1 + 272);
      v11 = 0;
      if ( (v7 & 0x3000000) != 0 )
      {
        v8 = AcpiEval_TPC(v1, &v11);
        if ( v8 >= 0 )
        {
          v3 = v11;
        }
        else if ( v8 == -1073741772 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              4u,
              2u,
              0x14u,
              (__int64)&WPP_ea6247e0c89d3525a20904d64520788c_Traceguids);
        }
        else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v9) = 3;
          WPP_RECORDER_SF_D(
            WPP_GLOBAL_Control->DeviceExtension,
            v9,
            3,
            21,
            (__int64)&WPP_ea6247e0c89d3525a20904d64520788c_Traceguids,
            v8);
        }
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 2504))(
        WdfDriverGlobals,
        qword_1C00133F8,
        0LL);
      if ( v4 != *(_DWORD *)(v1 + 448) || v3 != *(_DWORD *)(v1 + 496) )
      {
        ProcLibCapChange(v1, v4, v3, 100LL);
        ((void (__fastcall *)(__int64))qword_1C00137C8)(v1);
      }
      (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 2512))(
        WdfDriverGlobals,
        qword_1C00133F8);
    }
  }
  return 0LL;
}
