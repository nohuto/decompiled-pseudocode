/*
 * XREFs of HUBDRIVER_EtwRundownUsbDevice @ 0x1C0072970
 * Callers:
 *     HUBDRIVER_EtwEnableCallback @ 0x1C0072FA8 (HUBDRIVER_EtwEnableCallback.c)
 * Callees:
 *     McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer @ 0x1C00013DC (McTemplateK0ppqzznhUR6zuqQ6qqqqqqqqqsssuuxttqq_EtwWriteTransfer.c)
 *     HUBMISC_GetDeviceInterfacePath @ 0x1C0030334 (HUBMISC_GetDeviceInterfacePath.c)
 *     __security_check_cookie @ 0x1C00428D0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0042A60 (_guard_dispatch_icall_nop.c)
 *     memmove @ 0x1C0042A80 (memmove.c)
 *     memset @ 0x1C0042D40 (memset.c)
 */

void __fastcall HUBDRIVER_EtwRundownUsbDevice(const GUID *a1, __int64 a2)
{
  __int64 v3; // r13
  __int64 v4; // rax
  GUID *v5; // rcx
  PVOID PoolWithTag; // rax
  void *v7; // r15
  void *v8; // r12
  PVOID v9; // rax
  __int64 v10; // rcx
  char *v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  unsigned __int16 *v14; // rcx
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
  struct _UNICODE_STRING DestinationString; // [rsp+170h] [rbp-30h] BYREF
  const wchar_t *v43; // [rsp+180h] [rbp-20h]
  void *Src[2]; // [rsp+188h] [rbp-18h] BYREF
  __int128 v45; // [rsp+198h] [rbp-8h] BYREF
  __int64 v46; // [rsp+1A8h] [rbp+8h]
  __int64 v47; // [rsp+1B0h] [rbp+10h]
  __int128 v48; // [rsp+1B8h] [rbp+18h]
  __int64 v49; // [rsp+1C8h] [rbp+28h]
  __int64 v50; // [rsp+1D0h] [rbp+30h]
  __int64 v51; // [rsp+1D8h] [rbp+38h]
  const GUID *v52; // [rsp+1E0h] [rbp+40h]
  int v53; // [rsp+1E8h] [rbp+48h] BYREF
  char v54; // [rsp+1ECh] [rbp+4Ch] BYREF

  v52 = a1;
  v40 = 0LL;
  DestinationString = 0LL;
  *(_OWORD *)Src = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C00660D0);
  v41 = 0LL;
  v49 = 0LL;
  v46 = 0LL;
  v47 = 0x100000001LL;
  v45 = 0LL;
  LODWORD(v45) = 56;
  v48 = (unsigned __int64)a2;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015
                                                                                                  + 656))(
         WdfDriverGlobals,
         a2,
         0LL,
         (unsigned int)ExDefaultNonPagedPoolType,
         &v45,
         &v41) < 0 )
    v43 = 0LL;
  else
    v43 = (const wchar_t *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, _QWORD))(WdfFunctions_01015 + 1552))(
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
    PoolWithTag = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, DestinationString.Length + 2LL, 0x64334855u);
    v7 = PoolWithTag;
    if ( PoolWithTag )
    {
      memset(PoolWithTag, 0, DestinationString.Length + 2LL);
      memmove(v7, DestinationString.Buffer, DestinationString.Length);
    }
  }
  v37 = 0LL;
  v49 = 0LL;
  v46 = 0LL;
  v47 = 0x100000001LL;
  v45 = 0LL;
  LODWORD(v45) = 56;
  v8 = 0LL;
  v48 = (unsigned __int64)a2;
  if ( (*(int (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int128 *, __int64 *))(WdfFunctions_01015 + 2464))(
         WdfDriverGlobals,
         0LL,
         &v45,
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
    v9 = ExAllocatePoolWithTag(ExDefaultNonPagedPoolType, LOWORD(Src[0]) + 2LL, 0x64334855u);
    v8 = v9;
    if ( v9 )
    {
      memset(v9, 0, LOWORD(Src[0]) + 2LL);
      memmove(v8, Src[1], LOWORD(Src[0]));
    }
  }
  v10 = *(_QWORD *)(v3 + 16);
  v11 = &v54;
  v12 = 5LL;
  v13 = *(unsigned __int16 *)(v10 + 320);
  v14 = (unsigned __int16 *)(v10 + 322);
  v53 = v13;
  do
  {
    v15 = *v14++;
    *(_DWORD *)v11 = v15;
    v11 += 4;
    --v12;
  }
  while ( v12 );
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
      v43,
      (const wchar_t *)v7,
      v27,
      v18 + 1988,
      v36,
      v51,
      (const wchar_t *)v8,
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
