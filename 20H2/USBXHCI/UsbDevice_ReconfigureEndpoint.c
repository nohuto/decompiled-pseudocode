/*
 * XREFs of UsbDevice_ReconfigureEndpoint @ 0x1C00477DC
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003B840 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003BB10 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Command_SendCommand @ 0x1C0006C80 (Command_SendCommand.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C0007FF4 (UsbDevice_InitializeEndpointContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 */

char __fastcall UsbDevice_ReconfigureEndpoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 v7; // r15
  __int64 v8; // r13
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rax
  unsigned int v12; // edx
  void *v13; // rcx
  __int64 v14; // rbp
  _DWORD *v15; // rbp
  char v16; // al
  char *v17; // rsi
  int v18; // ecx
  __int64 v19; // rdx
  int v20; // r14d
  __int64 v21; // r8
  __int64 v22; // r8
  unsigned int i; // r8d
  int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v31; // [rsp+80h] [rbp+8h]

  v6 = *(_QWORD **)(a1 + 8);
  v7 = a2;
  v8 = v6[11];
  v31 = v6[18];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *(_DWORD *)(a2 + 144);
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_dd(
      v6[9],
      a2,
      12,
      69,
      (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids,
      *(_BYTE *)(a1 + 135),
      v9);
  }
  v10 = 0;
  v11 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v11 )
    v12 = *(_DWORD *)(v11 + 44);
  else
    v12 = 0;
  if ( v11 )
    v13 = *(void **)(v11 + 16);
  else
    v13 = 0LL;
  memset(v13, 0, v12);
  v14 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v14 )
    v15 = *(_DWORD **)(v14 + 16);
  else
    v15 = 0LL;
  v16 = -(*(_DWORD *)(v8 + 100) & 4);
  v15[1] |= 1u;
  v17 = (char *)v15 + (v16 != 0 ? 64LL : 32LL);
  if ( *(_BYTE *)(a1 + 136) )
  {
    v18 = *(_DWORD *)v17 | 0x4000000;
    *(_DWORD *)v17 = v18;
    v17[7] = *(_BYTE *)(a1 + 140);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 144) > 1u )
        *(_DWORD *)v17 = v18 | 0x2000000;
      *((_DWORD *)v17 + 2) ^= (*((_DWORD *)v17 + 2) ^ (*(_DWORD *)(a1 + 148) << 16)) & 0x30000;
    }
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(a1 + 136) )
  {
    v19 = *(_QWORD *)(a1 + 24);
    if ( v19 )
    {
      if ( *(int *)(a1 + 20) < 2
        && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                         WdfDriverGlobals,
                         v19,
                         off_1C00612C0)
                     + 144) > 1u )
      {
        *(_DWORD *)v17 |= 0x2000000u;
      }
    }
  }
  v20 = *(_DWORD *)(v7 + 144);
  v21 = (unsigned int)(v20 - 1) + 2LL;
  if ( (*(_DWORD *)(v8 + 100) & 4) != 0 )
    v22 = v21 << 6;
  else
    v22 = 32 * v21;
  UsbDevice_InitializeEndpointContext(a1, v7, (__int64)v15 + v22);
  for ( i = 0; i < 0x20; ++i )
  {
    v24 = *(_DWORD *)(a1 + 152);
    if ( _bittest(&v24, i) )
      *(_DWORD *)v17 = (i << 27) | *(_DWORD *)v17 & 0x7FFFFFF;
  }
  v15[1] |= 1 << v20;
  *v15 |= 1 << v20;
  memset((void *)(a1 + 456), 0, 0x60uLL);
  *(_QWORD *)(a1 + 504) = a1;
  *(_QWORD *)(a1 + 496) = UsbDevice_ConfigureEndpointCompletion;
  *(_DWORD *)(a1 + 492) = *(_DWORD *)(a1 + 492) & 0xFFFF01FF | 0x3000;
  *(_BYTE *)(a1 + 495) = *(_BYTE *)(a1 + 135);
  v25 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v25 )
    v26 = *(_QWORD *)(v25 + 24);
  else
    v26 = 0LL;
  *(_QWORD *)(a1 + 480) = v26;
  v27 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v27 )
    v28 = *(_QWORD *)(v27 + 16);
  else
    v28 = 0LL;
  *(_QWORD *)(a1 + 528) = v28;
  v29 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v29 )
    v10 = *(_DWORD *)(v29 + 44);
  *(_QWORD *)(a1 + 552) = a3;
  *(_DWORD *)(a1 + 536) = v10;
  *(_DWORD *)(a1 + 540) = 1;
  *(_QWORD *)(a1 + 544) = a1;
  *(_QWORD *)(a1 + 560) = a4;
  return Command_SendCommand(v31, a1 + 456);
}
