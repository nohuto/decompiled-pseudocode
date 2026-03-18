/*
 * XREFs of UsbDevice_SetAddress @ 0x1C00111BC
 * Callers:
 *     UsbDevice_EnableCompletion @ 0x1C00109B0 (UsbDevice_EnableCompletion.c)
 *     UsbDevice_UcxEvtAddress @ 0x1C0010AE0 (UsbDevice_UcxEvtAddress.c)
 * Callees:
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     Endpoint_GetDequeuePointer @ 0x1C0004B68 (Endpoint_GetDequeuePointer.c)
 *     WPP_RECORDER_SF_dqq @ 0x1C0011570 (WPP_RECORDER_SF_dqq.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 */

__int64 __fastcall UsbDevice_SetAddress(__int64 a1, char a2)
{
  __int64 v2; // rax
  char v3; // r9
  __int64 v6; // rbp
  __int64 v7; // r15
  unsigned int v8; // ebx
  __int64 v9; // rax
  unsigned int v10; // edx
  __int64 *v11; // rax
  __int64 *v12; // rcx
  __int64 v13; // rcx
  void *v14; // rcx
  __int64 v15; // rsi
  __int64 v16; // rsi
  int v17; // edx
  int v18; // ebp
  __int64 v19; // r14
  unsigned int v20; // eax
  int v21; // ecx
  unsigned int *v22; // r8
  __int64 v23; // r9
  unsigned int v24; // eax
  unsigned int v25; // eax
  int v26; // edx
  int v27; // r8d
  unsigned int v28; // edx
  __int64 v29; // rdx
  __int64 v30; // rax
  char v31; // cl
  __int64 v32; // rdx
  __int64 v33; // rcx
  char v34; // al
  int v35; // ecx
  int v36; // r8d
  __int64 *v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdx
  char v41; // al
  __int64 v42; // rcx
  char v43; // r8
  __int64 v44; // rax
  __int64 *v45; // rax
  __int64 v46; // rax
  __int64 v47; // rax
  int v48; // eax
  __int64 v50; // rax
  __int64 v51; // rax

  v2 = *(_QWORD *)(a1 + 8);
  v3 = *(_BYTE *)(a1 + 657);
  v6 = *(_QWORD *)(v2 + 88);
  v7 = *(_QWORD *)(v2 + 144);
  v8 = 0;
  v9 = *(_QWORD *)((v3 != 0 ? 648LL : 640LL) + a1);
  if ( v9 )
    v10 = *(_DWORD *)(v9 + 44);
  else
    v10 = 0;
  v11 = (__int64 *)(a1 + 640);
  v12 = (__int64 *)(a1 + 648);
  if ( !v3 )
    v12 = v11;
  v13 = *v12;
  if ( v13 )
    v14 = *(void **)(v13 + 16);
  else
    v14 = 0LL;
  memset(v14, 0, v10);
  v15 = *(_QWORD *)((*(_BYTE *)(a1 + 657) != 0 ? 648LL : 640LL) + a1);
  if ( v15 )
    v16 = *(_QWORD *)(v15 + 16);
  else
    v16 = 0LL;
  v17 = 0;
  v18 = *(_DWORD *)(v6 + 100) & 4;
  *(_DWORD *)(v16 + 4) |= 3u;
  v19 = v18 != 0 ? 0x20 : 0;
  *(_DWORD *)(a1 + 152) = *(_DWORD *)(v16 + 4);
  v20 = *(_DWORD *)(a1 + 36);
  if ( v20 > 1 )
  {
    v21 = 0;
    v22 = (unsigned int *)(a1 + 48);
    v23 = v20 - 1;
    do
    {
      v24 = *v22++;
      if ( v24 > 0xF )
        v24 = 15;
      v25 = v24 << v21;
      v21 += 4;
      v17 |= v25;
      --v23;
    }
    while ( v23 );
  }
  v26 = *(_DWORD *)(v19 + v16 + 32) ^ (*(_DWORD *)(v19 + v16 + 32) ^ v17) & 0xFFFFF;
  *(_DWORD *)(v19 + v16 + 32) = v26;
  v27 = *(_DWORD *)(a1 + 20);
  switch ( v27 )
  {
    case 0:
      v28 = v26 & 0xFF0FFFFF | 0x200000;
      goto LABEL_18;
    case 1:
      v28 = v26 & 0xFF0FFFFF | 0x100000;
      goto LABEL_18;
    case 2:
      v28 = v26 & 0xFF0FFFFF | 0x300000;
LABEL_18:
      *(_DWORD *)(v19 + v16 + 32) = v28 & 0x7FFFFFF | 0x8000000;
      *(_BYTE *)(v19 + v16 + 38) = *(_BYTE *)(a1 + 44);
      v29 = *(_QWORD *)(a1 + 24);
      if ( v29 )
      {
        v50 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
                WdfDriverGlobals,
                v29,
                off_1C00612C0);
        if ( *(_DWORD *)(v50 + 144) > 1u )
          *(_DWORD *)(v19 + v16 + 32) |= 0x2000000u;
        *(_BYTE *)(v19 + v16 + 40) = *(_BYTE *)(v50 + 135);
        if ( !*(_BYTE *)(a1 + 136) && *(int *)(a1 + 20) < 2 && *(_DWORD *)(v50 + 144) )
          *(_BYTE *)(a1 + 137) = 1;
      }
      v30 = *(unsigned int *)(a1 + 40);
      if ( (_DWORD)v30 )
        v31 = *(_BYTE *)(a1 + 4 * v30 + 44);
      else
        v31 = 0;
      *(_BYTE *)(v19 + v16 + 41) = v31;
      v32 = v18 != 0 ? 0x40 : 0;
      *(_DWORD *)(v32 + v16 + 68) ^= (*(_DWORD *)(v32 + v16 + 68) ^ (8 * *(_DWORD *)(*(_QWORD *)(a1 + 176) + 120LL))) & 0x38;
      *(_WORD *)(v32 + v16 + 70) = *(_WORD *)(*(_QWORD *)(a1 + 176) + 100LL) & 0x7FF;
      v33 = *(_QWORD *)(a1 + 176);
      v34 = *(_BYTE *)(v33 + 99) & 3;
      if ( v34 == 1 )
      {
        v35 = 0;
      }
      else if ( (*(_QWORD *)(*(_QWORD *)v33 + 336LL) & 0x10000000000000LL) == 0
             || v34 != 3
             || *(char *)(v33 + 98) >= 0
             || (v51 = *(_QWORD *)(v33 + 16), *(_WORD *)(v51 + 124) != 1529)
             || *(_WORD *)(v51 + 126) != 4353
             || (v35 = 0, *(_DWORD *)(v51 + 36) <= 1u) )
      {
        v35 = 6;
      }
      *(_DWORD *)(v32 + v16 + 68) = v35 | *(_DWORD *)(v32 + v16 + 68) & 0xFFFFFFF9;
      *(_DWORD *)(*(_QWORD *)(a1 + 176) + 152LL) = *(unsigned __int16 *)(v32 + v16 + 70);
      *(_QWORD *)((v18 != 0 ? 0x40 : 0) + v16 + 72) = Endpoint_GetDequeuePointer(*(_QWORD *)(a1 + 176), 0);
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v37 = (__int64 *)(a1 + 648);
        if ( !*(_BYTE *)(a1 + 657) )
          v37 = (__int64 *)(a1 + 640);
        v38 = *v37;
        if ( v38 )
          v39 = *(_QWORD *)(v38 + 16);
        else
          LODWORD(v39) = 0;
        WPP_RECORDER_SF_dqq(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL), v39, v36, 21);
      }
      memset((void *)(a1 + 456), 0, 0x60uLL);
      *(_QWORD *)(a1 + 504) = a1;
      *(_QWORD *)(a1 + 496) = UsbDevice_SetAddressCompletion;
      v40 = a1 + 640;
      v41 = *(_BYTE *)(a1 + 135);
      *(_DWORD *)(a1 + 492) = *(_DWORD *)(a1 + 492) & 0xFFFF2DFF | ((a2 & 1 | 0x16) << 9);
      v42 = a1 + 648;
      *(_BYTE *)(a1 + 495) = v41;
      v43 = *(_BYTE *)(a1 + 657);
      if ( !v43 )
        v42 = a1 + 640;
      if ( *(_QWORD *)v42 )
        v44 = *(_QWORD *)(*(_QWORD *)v42 + 24LL);
      else
        v44 = 0LL;
      *(_QWORD *)(a1 + 480) = v44;
      v45 = (__int64 *)(a1 + 640);
      if ( v43 )
        v45 = (__int64 *)(a1 + 648);
      v46 = *v45;
      if ( v46 )
        v47 = *(_QWORD *)(v46 + 16);
      else
        v47 = 0LL;
      *(_QWORD *)(a1 + 528) = v47;
      if ( v43 )
        v40 = a1 + 648;
      if ( *(_QWORD *)v40 )
        v48 = *(_DWORD *)(*(_QWORD *)v40 + 44LL);
      else
        v48 = 0;
      *(_DWORD *)(a1 + 536) = v48;
      *(_DWORD *)(a1 + 540) = 1;
      *(_QWORD *)(a1 + 544) = a1;
      Command_SendCommand(v7, a1 + 456);
      return v8;
    case 3:
      v28 = v26 & 0xFF0FFFFF | 0x400000;
      goto LABEL_18;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v26) = 2;
    WPP_RECORDER_SF_DD(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v26,
      12,
      20,
      (__int64)&WPP_5cc87a4a737631244eec1c43efcd9051_Traceguids,
      *(_BYTE *)(a1 + 135),
      v27);
  }
  return (unsigned int)-1073741811;
}
