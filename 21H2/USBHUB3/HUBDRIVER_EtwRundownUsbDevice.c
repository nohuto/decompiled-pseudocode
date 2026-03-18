/*
 * XREFs of HUBDRIVER_EtwRundownUsbDevice @ 0x1C0073A54
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0074060 (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer @ 0x1C00013DC (McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C00309D4 (HUBMISC_GetDeviceInterfacePath.c)
 *     __security_check_cookie @ 0x1C00435B0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00437E0 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0043840 (memmove.c)
 */

void __fastcall HUBDRIVER_EtwRundownUsbDevice(const GUID *a1, __int64 a2)
{
  __int64 v3; // r15
  __int64 v4; // rax
  GUID *v5; // rcx
  wchar_t *Pool2; // rax
  wchar_t *v7; // r12
  wchar_t *v8; // r13
  wchar_t *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // ecx
  unsigned __int16 *v13; // rdx
  char *v14; // rcx
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  int v20; // edx
  int v21; // r11d
  __int64 v22; // rax
  const char *v23; // r8
  const char *v24; // rdx
  const char *v25; // rax
  const char *v26; // rcx
  int v27; // [rsp+40h] [rbp-160h]
  char v28; // [rsp+120h] [rbp-80h]
  char v29; // [rsp+124h] [rbp-7Ch]
  __int16 v30; // [rsp+128h] [rbp-78h]
  int v31; // [rsp+12Ch] [rbp-74h]
  int v32; // [rsp+130h] [rbp-70h]
  int v33; // [rsp+134h] [rbp-6Ch]
  int v34; // [rsp+138h] [rbp-68h]
  int v35; // [rsp+13Ch] [rbp-64h]
  unsigned __int16 v36; // [rsp+140h] [rbp-60h]
  __int64 v37; // [rsp+148h] [rbp-58h] BYREF
  int v38; // [rsp+150h] [rbp-50h]
  __int64 v39; // [rsp+158h] [rbp-48h]
  __int64 v40; // [rsp+160h] [rbp-40h] BYREF
  __int64 v41; // [rsp+168h] [rbp-38h] BYREF
  const wchar_t *v42; // [rsp+170h] [rbp-30h]
  struct _UNICODE_STRING DestinationString; // [rsp+178h] [rbp-28h] BYREF
  __int128 v44; // [rsp+188h] [rbp-18h] BYREF
  __int64 v45; // [rsp+198h] [rbp-8h]
  __int64 v46; // [rsp+1A0h] [rbp+0h]
  __int128 v47; // [rsp+1A8h] [rbp+8h]
  __int64 v48; // [rsp+1B8h] [rbp+18h]
  void *Src[2]; // [rsp+1C0h] [rbp+20h] BYREF
  __int64 v50; // [rsp+1D0h] [rbp+30h]
  __int64 v51; // [rsp+1D8h] [rbp+38h]
  const GUID *v52; // [rsp+1E0h] [rbp+40h]
  int v53; // [rsp+1E8h] [rbp+48h] BYREF
  char v54; // [rsp+1ECh] [rbp+4Ch] BYREF

  DWORD1(v44) = 0;
  v52 = a1;
  v40 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)Src = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C00670F8);
  v41 = 0LL;
  v48 = 0LL;
  v45 = 0LL;
  v46 = 0x100000001LL;
  v44 = 0LL;
  LODWORD(v44) = 56;
  v47 = (unsigned __int64)a2;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015
                                                                                                  + 656))(
         WdfDriverGlobals,
         a2,
         0LL,
         (unsigned int)ExDefaultNonPagedPoolType,
         &v44,
         &v41) < 0 )
    v42 = 0LL;
  else
    v42 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
                             WdfDriverGlobals,
                             v41,
                             0LL);
  RtlInitUnicodeString(&DestinationString, 0LL);
  v4 = *(_QWORD *)(v3 + 24);
  v5 = &GUID_DEVINTERFACE_USB_DEVICE;
  if ( (*(_DWORD *)(v4 + 1632) & 2) != 0 )
    v5 = &GUID_DEVINTERFACE_USB_HUB;
  if ( (int)HUBMISC_GetDeviceInterfacePath((__int64)v5, a2, &v40, 0LL, *(_QWORD *)(*(_QWORD *)(v4 + 8) + 1432LL)) < 0 )
  {
    v7 = 0LL;
  }
  else
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, struct _UNICODE_STRING *))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v40,
      &DestinationString);
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, DestinationString.Length + 2LL, 1681082453LL);
    v7 = Pool2;
    if ( Pool2 )
      memmove(Pool2, DestinationString.Buffer, DestinationString.Length);
  }
  v37 = 0LL;
  v48 = 0LL;
  v45 = 0LL;
  v46 = 0x100000001LL;
  v44 = 0LL;
  LODWORD(v44) = 56;
  v8 = 0LL;
  v47 = (unsigned __int64)a2;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         &v44,
         &v37) >= 0
    && (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64))(WdfFunctions_01015 + 320))(
         WdfDriverGlobals,
         a2,
         v37) >= 0 )
  {
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void **))(WdfFunctions_01015 + 2472))(
      WdfDriverGlobals,
      v37,
      Src);
    v9 = (wchar_t *)ExAllocatePool2(64LL, LOWORD(Src[0]) + 2LL, 1681082453LL);
    v8 = v9;
    if ( v9 )
      memmove(v9, Src[1], LOWORD(Src[0]));
  }
  v10 = *(_QWORD *)(v3 + 16);
  v11 = 5LL;
  v12 = *(unsigned __int16 *)(v10 + 320);
  v13 = (unsigned __int16 *)(v10 + 322);
  v53 = v12;
  v14 = &v54;
  do
  {
    v15 = *v13++;
    *(_DWORD *)v14 = v15;
    v14 += 4;
    --v11;
  }
  while ( v11 );
  v16 = *(_QWORD *)(v3 + 16);
  v17 = *(unsigned __int8 *)(v16 + 240);
  if ( (unsigned __int8)v17 < 6u )
  {
    *(&v53 + v17) = *(unsigned __int16 *)(v3 + 48);
    v16 = *(_QWORD *)(v3 + 16);
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.DmaWaitEntry.Blink & 1) != 0 )
  {
    v18 = *(_QWORD *)(v3 + 24);
    v39 = v18;
    v19 = *(_QWORD *)(v18 + 8);
    v50 = v19;
    v20 = *(_DWORD *)(v19 + 204);
    if ( (v20 & 2) != 0 )
      v28 = *(_BYTE *)(v19 + 1341);
    else
      v28 = 0;
    v21 = *(_DWORD *)(v16 + 168);
    v38 = v21;
    if ( v21 == 1 )
    {
      v30 = *(_WORD *)(v16 + 184);
      v32 = *(_DWORD *)(v16 + 176);
      v33 = *(_DWORD *)(v16 + 196);
      v34 = *(_DWORD *)(v16 + 192);
      v35 = *(_DWORD *)(v16 + 188);
      v31 = *(_DWORD *)(v16 + 180);
    }
    else
    {
      LOBYTE(v30) = 0;
      LOBYTE(v31) = -1;
      LOBYTE(v32) = -1;
      LOBYTE(v33) = 0;
      LOBYTE(v34) = 0;
      LOBYTE(v35) = 0;
    }
    v22 = *(_QWORD *)(v18 + 2016);
    v51 = v22;
    if ( v22 )
      v36 = *(_WORD *)(v22 + 2);
    else
      v36 = 0;
    v23 = 0LL;
    v29 = (v20 & 2) != 0;
    v24 = 0LL;
    if ( v21 == 2 )
    {
      v23 = (const char *)(v16 + 186);
      v24 = (const char *)(v16 + 181);
    }
    v25 = (const char *)(v16 + 176);
    v26 = 0LL;
    if ( v21 == 2 )
      v26 = v25;
    McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer(
      v39,
      &USBHUB3_ETW_EVENT_RUNDOWN_DEVICE_INFORMATION_V2,
      v52,
      *(_QWORD *)(*(_QWORD *)(v3 + 16) + 248LL),
      *(_QWORD *)(v39 + 24),
      *(_WORD *)(v3 + 48),
      v42,
      v7,
      v27,
      v18 + 1988,
      v36,
      v51,
      v8,
      (*(_BYTE *)(v3 + 32) & 1) == 0,
      *(_BYTE *)(*(_QWORD *)(v3 + 16) + 240LL) + 1,
      (__int64)&v53,
      v35,
      v34,
      v33,
      v32,
      v31,
      v30,
      *(_DWORD *)(v3 + 384),
      *(_DWORD *)(v39 + 2224),
      v38,
      v26,
      v24,
      v23,
      v29,
      v28,
      *(_QWORD *)(v50 + 1416),
      *(_BYTE *)(v18 + 2704),
      *(_BYTE *)(v18 + 2705),
      *(_DWORD *)(v39 + 2708),
      *(_DWORD *)(v39 + 2712));
  }
  if ( v7 )
    ExFreePoolWithTag(v7, 0x64334855u);
  if ( v40 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v8 )
    ExFreePoolWithTag(v8, 0x64334855u);
  if ( v37 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
  if ( v41 )
    (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1664))(WdfDriverGlobals);
}
