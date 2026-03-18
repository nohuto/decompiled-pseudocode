/*
 * XREFs of UsbDevice_UcxEvtUpdate @ 0x1C00185D0
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x1C0003D94 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C0004288 (Controller_IsControllerAccessible.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C001843C (UsbDevice_UpdateUsbDevice.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0019CC0 (memset.c)
 */

__int64 __fastcall UsbDevice_UcxEvtUpdate(__int64 a1, __int64 a2)
{
  unsigned int v2; // esi
  __int64 v4; // r14
  __int64 v5; // rax
  __int64 v6; // rdi
  __int64 v7; // rcx
  __int64 v8; // r12
  __int64 v9; // r13
  __int64 v10; // rcx
  size_t v11; // r8
  __int64 *v12; // rsi
  _QWORD **v13; // rcx
  _QWORD *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // r8
  int v17; // edx
  int v18; // edx
  __int64 v19; // rax
  __int64 *v20; // rax
  char v21; // cl
  __int64 v22; // rax
  __int64 *v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rcx
  _OWORD v28[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v29; // [rsp+40h] [rbp-38h]

  memset(v28, 0, sizeof(v28));
  v2 = 0;
  v29 = 0LL;
  LOWORD(v28[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v28);
  v4 = *((_QWORD *)&v28[0] + 1);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v28[0] + 1) + 16LL),
         off_1C00612C0);
  v6 = v5;
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v7 + 144);
  v9 = *(_QWORD *)(v7 + 88);
  if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
  {
    v10 = *(_QWORD *)((*(_BYTE *)(v5 + 657) != 0 ? 8 : 0) + v5 + 640);
    if ( v10 )
      v11 = *(unsigned int *)(v10 + 44);
    else
      v11 = 0LL;
    v12 = (__int64 *)(v5 + 648);
    v13 = (_QWORD **)(v5 + 648);
    if ( !*(_BYTE *)(v5 + 657) )
      v13 = (_QWORD **)(v5 + 640);
    v14 = *v13;
    if ( v14 )
      v14 = (_QWORD *)v14[2];
    memset(v14, 0, v11);
    v15 = (__int64 *)(v6 + 648);
    if ( !*(_BYTE *)(v6 + 657) )
      v15 = (__int64 *)(v6 + 640);
    v16 = *v15;
    if ( *v15 )
      v16 = *(_QWORD *)(v16 + 16);
    v17 = *(_DWORD *)(v9 + 100);
    *(_DWORD *)(v16 + 4) |= 1u;
    v18 = v17 & 4;
    *(_WORD *)((v18 != 0 ? 0x20 : 0) + v16 + 36) = *(_WORD *)(v4 + 48);
    v19 = v18 != 0 ? 0x20 : 0;
    *(_DWORD *)(v19 + v16 + 40) &= 0x3FFFFFu;
    memset((void *)(v6 + 456), 0, 0x60uLL);
    *(_QWORD *)(v6 + 504) = v6;
    *(_QWORD *)(v6 + 496) = UsbDevice_UpdateCompletion;
    *(_DWORD *)(v6 + 492) = *(_DWORD *)(v6 + 492) & 0xFFFF03FF | 0x3400;
    *(_BYTE *)(v6 + 495) = *(_BYTE *)(v6 + 135);
    v20 = (__int64 *)(v6 + 648);
    v21 = *(_BYTE *)(v6 + 657);
    if ( !v21 )
      v20 = (__int64 *)(v6 + 640);
    v22 = *v20;
    if ( v22 )
      v22 = *(_QWORD *)(v22 + 24);
    *(_QWORD *)(v6 + 480) = v22;
    v23 = (__int64 *)(v6 + 648);
    if ( !v21 )
      v23 = (__int64 *)(v6 + 640);
    v24 = *v23;
    if ( v24 )
      v24 = *(_QWORD *)(v24 + 16);
    *(_QWORD *)(v6 + 528) = v24;
    if ( !v21 )
      v12 = (__int64 *)(v6 + 640);
    v25 = *v12;
    if ( *v12 )
      LODWORD(v25) = *(_DWORD *)(v25 + 44);
    v26 = *(_QWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 536) = v25;
    *(_DWORD *)(v6 + 540) = 1;
    *(_QWORD *)(v6 + 544) = v6;
    if ( Controller_IsControllerAccessible(v26) )
    {
      *(_QWORD *)(v6 + 424) = a2;
      *(_BYTE *)(v6 + 432) = 0;
      return Command_SendCommand(v8, v6 + 456);
    }
    v2 = -1073741810;
  }
  else
  {
    UsbDevice_UpdateUsbDevice(v5, v4);
  }
  *(_QWORD *)(v6 + 424) = 0LL;
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01023 + 2104))(
           WdfDriverGlobals,
           a2,
           v2);
}
