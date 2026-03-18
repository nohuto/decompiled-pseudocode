/*
 * XREFs of UsbDevice_SetAddress @ 0x1C001086C
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x1C000E630 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C000EB00 (UsbDevice_UcxEvtAddress.c)
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     Command_SendCommand @ 0x1C0006C80 (Command_SendCommand.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0008334 (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0010C04 (WPP_RECORDER_SF_dqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C001BCF0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C001BFC0 (memset.c)
 */

__int64 __fastcall UsbDevice_SetAddress(__int64 a1, char a2)
{
  __int64 v2; // rax
  __int64 v5; // rbp
  __int64 v6; // r15
  unsigned int v7; // ebx
  __int64 v8; // rax
  unsigned int v9; // edx
  void *v10; // rcx
  __int64 v11; // rsi
  __int64 v12; // rsi
  int v13; // r8d
  int v14; // ebp
  __int64 v15; // r14
  unsigned int v16; // eax
  int v17; // ecx
  int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // rdx
  __int64 v21; // rax
  char v22; // cl
  __int64 v23; // r8
  __int64 v24; // rdx
  char v25; // al
  int v26; // ecx
  int v27; // r8d
  __int64 v28; // rax
  __int64 v29; // rdx
  char v30; // al
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // eax
  int v38; // ecx
  unsigned int *v39; // rdx
  __int64 v40; // r9
  unsigned int v41; // eax
  unsigned int v42; // eax
  int v43; // edx
  __int64 v44; // rax
  __int64 v45; // rax
  __int128 v46; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_QWORD *)(a1 + 8);
  v5 = *(_QWORD *)(v2 + 88);
  v6 = *(_QWORD *)(v2 + 144);
  v7 = 0;
  v8 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v8 )
    v9 = *(_DWORD *)(v8 + 44);
  else
    v9 = 0;
  if ( v8 )
    v10 = *(void **)(v8 + 16);
  else
    v10 = 0LL;
  memset(v10, 0, v9);
  v11 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v11 )
    v12 = *(_QWORD *)(v11 + 16);
  else
    v12 = 0LL;
  v13 = 0;
  v14 = *(_DWORD *)(v5 + 100) & 4;
  *(_DWORD *)(v12 + 4) |= 3u;
  v15 = v14 != 0 ? 0x20 : 0;
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(v12 + 4);
  v16 = *(_DWORD *)(a1 + 36);
  if ( v16 > 1 )
  {
    v38 = 0;
    v39 = (unsigned int *)(a1 + 48);
    v40 = v16 - 1;
    do
    {
      v41 = *v39++;
      if ( v41 > 0xF )
        v41 = 15;
      v42 = v41 << v38;
      v38 += 4;
      v13 |= v42;
      --v40;
    }
    while ( v40 );
  }
  v17 = *(_DWORD *)(v15 + v12 + 32) ^ (v13 ^ *(_DWORD *)(v15 + v12 + 32)) & 0xFFFFF;
  *(_DWORD *)(v15 + v12 + 32) = v17;
  v18 = *(_DWORD *)(a1 + 20);
  if ( !v18 )
  {
    v19 = v17 & 0xFF0FFFFF | 0x200000;
    goto LABEL_11;
  }
  if ( v18 == 1 )
  {
    v19 = v17 & 0xFF0FFFFF | 0x100000;
LABEL_11:
    *(_DWORD *)(v15 + v12 + 32) = v19 & 0x7FFFFFF | 0x8000000;
    *(_BYTE *)(v15 + v12 + 38) = *(_BYTE *)(a1 + 44);
    v20 = *(_QWORD *)(a1 + 24);
    if ( v20 )
    {
      v44 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
              WdfDriverGlobals,
              v20,
              off_1C00612C0);
      if ( *(_DWORD *)(v44 + 144) > 1u )
        *(_DWORD *)(v15 + v12 + 32) |= 0x2000000u;
      *(_BYTE *)(v15 + v12 + 40) = *(_BYTE *)(v44 + 135);
      if ( !*(_BYTE *)(a1 + 136) && *(int *)(a1 + 20) < 2 && *(_DWORD *)(v44 + 144) )
        *(_BYTE *)(a1 + 137) = 1;
    }
    v21 = *(unsigned int *)(a1 + 40);
    if ( (_DWORD)v21 )
      v22 = *(_BYTE *)(a1 + 4 * v21 + 44);
    else
      v22 = 0;
    *(_BYTE *)(v15 + v12 + 41) = v22;
    v23 = v14 != 0 ? 0x40 : 0;
    *(_DWORD *)(v23 + v12 + 68) ^= (*(_DWORD *)(v23 + v12 + 68) ^ (8 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 120LL))) & 0x38;
    *(_WORD *)(v23 + v12 + 70) = *(_WORD *)(*(_QWORD *)(a1 + 176) + 100LL) & 0x7FF;
    v24 = *(_QWORD *)(a1 + 176);
    v25 = *(_BYTE *)(v24 + 99) & 3;
    v46 = *(_OWORD *)(*(_QWORD *)v24 + 336LL);
    if ( v25 == 1 )
    {
      v26 = 0;
    }
    else if ( ((v25 == 3) & _bittest64((const signed __int64 *)&v46, 0x34u)) == 0
           || *(char *)(v24 + 98) >= 0
           || (v45 = *(_QWORD *)(v24 + 16), *(_WORD *)(v45 + 124) != 1529)
           || *(_WORD *)(v45 + 126) != 4353
           || (v26 = 0, *(_DWORD *)(v45 + 36) <= 1u) )
    {
      v26 = 6;
    }
    *(_DWORD *)(v23 + v12 + 68) = v26 | *(_DWORD *)(v23 + v12 + 68) & 0xFFFFFFF9;
    *(_DWORD *)(*(_QWORD *)(a1 + 176) + 152LL) = *(unsigned __int16 *)(v23 + v12 + 70);
    *(_QWORD *)((v14 != 0 ? 0x40 : 0) + v12 + 72) = Endpoint_GetDequeuePointer(*(_QWORD *)(a1 + 176), 0);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v28 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
      if ( v28 )
        v29 = *(_QWORD *)(v28 + 16);
      else
        LODWORD(v29) = 0;
      WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), v29, v27, 21);
    }
    memset((void *)(a1 + 456), 0, 0x60uLL);
    *(_QWORD *)(a1 + 504) = a1;
    *(_QWORD *)(a1 + 496) = UsbDevice_SetAddressCompletion;
    v30 = *(_BYTE *)(a1 + 135);
    *(_DWORD *)(a1 + 492) = *(_DWORD *)(a1 + 492) & 0xFFFF2DFF | ((a2 & 1 | 0x16) << 9);
    *(_BYTE *)(a1 + 495) = v30;
    v31 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
    if ( v31 )
      v32 = *(_QWORD *)(v31 + 24);
    else
      v32 = 0LL;
    *(_QWORD *)(a1 + 480) = v32;
    v33 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
    if ( v33 )
      v34 = *(_QWORD *)(v33 + 16);
    else
      v34 = 0LL;
    *(_QWORD *)(a1 + 528) = v34;
    v35 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
    if ( v35 )
      v36 = *(_DWORD *)(v35 + 44);
    else
      v36 = 0;
    *(_DWORD *)(a1 + 536) = v36;
    *(_DWORD *)(a1 + 540) = 1;
    *(_QWORD *)(a1 + 544) = a1;
    Command_SendCommand(v6, a1 + 456);
    return v7;
  }
  v43 = v18 - 2;
  if ( v18 == 2 )
  {
    v19 = v17 & 0xFF0FFFFF | 0x300000;
    goto LABEL_11;
  }
  if ( v18 == 3 )
  {
    v19 = v17 & 0xFF0FFFFF | 0x400000;
    goto LABEL_11;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v43) = 2;
    WPP_RECORDER_SF_dd(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v43,
      12,
      20,
      (__int64)&WPP_2e14ba44bfb4396fe7ac9baa15c70ba7_Traceguids,
      *(_BYTE *)(a1 + 135),
      v18);
  }
  return (unsigned int)-1073741811;
}
