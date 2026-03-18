/*
 * XREFs of UsbDevice_UcxEvtUpdate @ 0x1C0017640
 * Callers:
 *     <none>
 * Callees:
 *     Command_SendCommand @ 0x1C00068E0 (Command_SendCommand.c)
 *     Controller_IsControllerAccessible @ 0x1C0006E10 (Controller_IsControllerAccessible.c)
 *     UsbDevice_UpdateUsbDevice @ 0x1C0017ADC (UsbDevice_UpdateUsbDevice.c)
 *     __security_check_cookie @ 0x1C0018DB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00191C0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00194C0 (memset.c)
 */

char __fastcall UsbDevice_UcxEvtUpdate(__int64 a1, __int64 a2)
{
  unsigned int v2; // edi
  __int64 v4; // rbp
  __int64 v5; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  unsigned int v11; // edx
  void *v12; // rcx
  __int64 v13; // r8
  int v14; // edx
  int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rcx
  _OWORD v22[2]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v23; // [rsp+40h] [rbp-38h]

  memset(v22, 0, sizeof(v22));
  v2 = 0;
  v23 = 0LL;
  LOWORD(v22[0]) = 40;
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _OWORD *))(WdfFunctions_01023 + 2128))(
    WdfDriverGlobals,
    a2,
    v22);
  v4 = *((_QWORD *)&v22[0] + 1);
  v5 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         *(_QWORD *)(*((_QWORD *)&v22[0] + 1) + 16LL),
         off_1C00602C0);
  v6 = v5;
  v7 = *(_QWORD *)(v5 + 8);
  v8 = *(_QWORD *)(v7 + 144);
  v9 = *(_QWORD *)(v7 + 88);
  if ( (*(_DWORD *)(v4 + 24) & 4) != 0 )
  {
    v10 = *(_QWORD *)((*(_BYTE *)(v5 + 657) != 0 ? 648LL : 640LL) + v5);
    if ( v10 )
      v11 = *(_DWORD *)(v10 + 44);
    else
      v11 = 0;
    if ( v10 )
      v12 = *(void **)(v10 + 16);
    else
      v12 = 0LL;
    memset(v12, 0, v11);
    v13 = *(_QWORD *)((*(_BYTE *)(v6 + 657) != 0 ? 648LL : 640LL) + v6);
    if ( v13 )
      v13 = *(_QWORD *)(v13 + 16);
    v14 = *(_DWORD *)(v9 + 100);
    *(_DWORD *)(v13 + 4) |= 1u;
    v15 = v14 & 4;
    *(_WORD *)((v15 != 0 ? 0x20 : 0) + v13 + 36) = *(_WORD *)(v4 + 48);
    v16 = v15 != 0 ? 0x20 : 0;
    *(_DWORD *)(v16 + 40 + v13) &= 0x3FFFFFu;
    memset((void *)(v6 + 456), 0, 0x60uLL);
    *(_QWORD *)(v6 + 504) = v6;
    *(_QWORD *)(v6 + 496) = UsbDevice_UpdateCompletion;
    *(_DWORD *)(v6 + 492) = *(_DWORD *)(v6 + 492) & 0xFFFF03FF | 0x3400;
    *(_BYTE *)(v6 + 495) = *(_BYTE *)(v6 + 135);
    v17 = *(_QWORD *)((*(_BYTE *)(v6 + 657) != 0 ? 648LL : 640LL) + v6);
    if ( v17 )
      v17 = *(_QWORD *)(v17 + 24);
    *(_QWORD *)(v6 + 480) = v17;
    v18 = *(_QWORD *)((*(_BYTE *)(v6 + 657) != 0 ? 648LL : 640LL) + v6);
    if ( v18 )
      v18 = *(_QWORD *)(v18 + 16);
    *(_QWORD *)(v6 + 528) = v18;
    v19 = *(_QWORD *)((*(_BYTE *)(v6 + 657) != 0 ? 648LL : 640LL) + v6);
    if ( v19 )
      LODWORD(v19) = *(_DWORD *)(v19 + 44);
    v20 = *(_QWORD *)(v6 + 8);
    *(_DWORD *)(v6 + 536) = v19;
    *(_DWORD *)(v6 + 540) = 1;
    *(_QWORD *)(v6 + 544) = v6;
    if ( Controller_IsControllerAccessible(v20) )
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
