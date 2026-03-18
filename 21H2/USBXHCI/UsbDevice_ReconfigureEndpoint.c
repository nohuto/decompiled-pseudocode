/*
 * XREFs of UsbDevice_ReconfigureEndpoint @ 0x1C004703C
 * Callers:
 *     Endpoint_UcxEvtEndpointStaticStreamsDisable @ 0x1C003B0F0 (Endpoint_UcxEvtEndpointStaticStreamsDisable.c)
 *     Endpoint_UcxEvtEndpointStaticStreamsEnable @ 0x1C003B3B0 (Endpoint_UcxEvtEndpointStaticStreamsEnable.c)
 * Callees:
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     UsbDevice_InitializeEndpointContext @ 0x1C00049B4 (UsbDevice_InitializeEndpointContext.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 */

__int64 __fastcall UsbDevice_ReconfigureEndpoint(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // rcx
  __int64 v7; // r15
  __int64 v8; // r13
  int v9; // eax
  int v10; // ebx
  __int64 v11; // rax
  size_t v12; // r8
  __int64 *v13; // rcx
  __int64 v14; // rcx
  void *v15; // rcx
  __int64 v16; // rbp
  _DWORD *v17; // rbp
  char v18; // al
  char *v19; // rsi
  int v20; // ecx
  __int64 v21; // rdx
  int v22; // r14d
  __int64 v23; // r8
  __int64 v24; // r8
  unsigned int i; // r8d
  int v26; // eax
  __int64 v27; // rcx
  __int64 v28; // rdx
  char v29; // r8
  __int64 v30; // rax
  __int64 *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v35; // [rsp+80h] [rbp+8h]

  v6 = *(_QWORD **)(a1 + 8);
  v7 = a2;
  v8 = v6[11];
  v35 = v6[18];
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v9 = *(_DWORD *)(a2 + 144);
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_DD(
      v6[9],
      a2,
      12,
      69,
      (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
      *(_BYTE *)(a1 + 135),
      v9);
  }
  v10 = 0;
  v11 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v11 )
    v12 = *(unsigned int *)(v11 + 44);
  else
    v12 = 0LL;
  v13 = (__int64 *)(a1 + 648);
  if ( !*(_BYTE *)(a1 + 657) )
    v13 = (__int64 *)(a1 + 640);
  v14 = *v13;
  if ( v14 )
    v15 = *(void **)(v14 + 16);
  else
    v15 = 0LL;
  memset(v15, 0, v12);
  v16 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v16 )
    v17 = *(_DWORD **)(v16 + 16);
  else
    v17 = 0LL;
  v18 = -(*(_DWORD *)(v8 + 100) & 4);
  v17[1] |= 1u;
  v19 = (char *)v17 + (v18 != 0 ? 64LL : 32LL);
  if ( *(_BYTE *)(a1 + 136) )
  {
    v20 = *(_DWORD *)v19 | 0x4000000;
    *(_DWORD *)v19 = v20;
    v19[7] = *(_BYTE *)(a1 + 140);
    if ( *(_DWORD *)(a1 + 20) == 2 )
    {
      if ( *(_DWORD *)(a1 + 144) > 1u )
        *(_DWORD *)v19 = v20 | 0x2000000;
      *((_DWORD *)v19 + 2) ^= (*((_DWORD *)v19 + 2) ^ (*(_DWORD *)(a1 + 148) << 16)) & 0x30000;
    }
  }
  if ( (*(_QWORD *)(*(_QWORD *)(a1 + 8) + 336LL) & 0x2000000000000000LL) != 0 && !*(_BYTE *)(a1 + 136) )
  {
    v21 = *(_QWORD *)(a1 + 24);
    if ( v21 )
    {
      if ( *(int *)(a1 + 20) < 2
        && *(_DWORD *)((*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                         WdfDriverGlobals,
                         v21,
                         off_1C00612C0)
                     + 144) > 1u )
      {
        *(_DWORD *)v19 |= 0x2000000u;
      }
    }
  }
  v22 = *(_DWORD *)(v7 + 144);
  v23 = (unsigned int)(v22 - 1) + 2LL;
  if ( (*(_DWORD *)(v8 + 100) & 4) != 0 )
    v24 = v23 << 6;
  else
    v24 = 32 * v23;
  UsbDevice_InitializeEndpointContext(a1, v7, (__int64)v17 + v24);
  for ( i = 0; i < 0x20; ++i )
  {
    v26 = *(_DWORD *)(a1 + 152);
    if ( _bittest(&v26, i) )
      *(_DWORD *)v19 = (i << 27) | *(_DWORD *)v19 & 0x7FFFFFF;
  }
  v17[1] |= 1 << v22;
  *v17 |= 1 << v22;
  memset((void *)(a1 + 456), 0, 0x60uLL);
  *(_QWORD *)(a1 + 504) = a1;
  *(_QWORD *)(a1 + 496) = UsbDevice_ConfigureEndpointCompletion;
  v27 = a1 + 648;
  v28 = a1 + 640;
  *(_DWORD *)(a1 + 492) = *(_DWORD *)(a1 + 492) & 0xFFFF01FF | 0x3000;
  *(_BYTE *)(a1 + 495) = *(_BYTE *)(a1 + 135);
  v29 = *(_BYTE *)(a1 + 657);
  if ( !v29 )
    v27 = a1 + 640;
  if ( *(_QWORD *)v27 )
    v30 = *(_QWORD *)(*(_QWORD *)v27 + 24LL);
  else
    v30 = 0LL;
  *(_QWORD *)(a1 + 480) = v30;
  v31 = (__int64 *)(a1 + 640);
  if ( v29 )
    v31 = (__int64 *)(a1 + 648);
  v32 = *v31;
  if ( v32 )
    v33 = *(_QWORD *)(v32 + 16);
  else
    v33 = 0LL;
  *(_QWORD *)(a1 + 528) = v33;
  if ( v29 )
    v28 = a1 + 648;
  if ( *(_QWORD *)v28 )
    v10 = *(_DWORD *)(*(_QWORD *)v28 + 44LL);
  *(_QWORD *)(a1 + 552) = a3;
  *(_DWORD *)(a1 + 536) = v10;
  *(_DWORD *)(a1 + 540) = 1;
  *(_QWORD *)(a1 + 544) = a1;
  *(_QWORD *)(a1 + 560) = a4;
  return Command_SendCommand(v35, a1 + 456);
}
