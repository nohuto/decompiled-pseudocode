/*
 * XREFs of Interrupter_PrepareInterrupter @ 0x1C006EE98
 * Callers:
 *     Interrupter_PrepareHardware @ 0x1C006ED2C (Interrupter_PrepareHardware.c)
 * Callees:
 *     Debug_FreAssertMsg @ 0x1C00028EC (Debug_FreAssertMsg.c)
 *     RtlStringCchPrintfA @ 0x1C000597C (RtlStringCchPrintfA.c)
 *     WPP_RECORDER_SF_ @ 0x1C000A588 (WPP_RECORDER_SF_.c)
 *     XilRegister_WriteUlong @ 0x1C0013B7C (XilRegister_WriteUlong.c)
 *     XilCommonBuffer_AcquireBufferEx @ 0x1C0016368 (XilCommonBuffer_AcquireBufferEx.c)
 *     WPP_RECORDER_SF_qDD @ 0x1C0016390 (WPP_RECORDER_SF_qDD.c)
 *     __security_check_cookie @ 0x1C0018EB0 (__security_check_cookie.c)
 *     XilCommonBuffer_ReleaseBuffer @ 0x1C0019034 (XilCommonBuffer_ReleaseBuffer.c)
 *     _guard_dispatch_icall_nop @ 0x1C00199B0 (_guard_dispatch_icall_nop.c)
 *     Interrupter_DetermineSegmentSizeAndCount @ 0x1C006F148 (Interrupter_DetermineSegmentSizeAndCount.c)
 */

__int64 __fastcall Interrupter_PrepareInterrupter(__int64 a1, unsigned __int8 a2)
{
  _QWORD *v2; // rdi
  __int64 v4; // rax
  __int64 v5; // r13
  void *v6; // r14
  int v7; // eax
  int v8; // esi
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // edx
  unsigned int v12; // r15d
  _QWORD *v13; // rax
  _QWORD *v14; // rcx
  __int64 v15; // rcx
  _DWORD *v16; // rdx
  __int64 v17; // r8
  _QWORD *v18; // rdx
  __int64 v19; // r9
  __int64 v20; // rcx
  struct _DEVICE_OBJECT *v21; // rax
  __int64 v22; // rcx
  int v23; // eax
  __int64 v24; // rcx
  unsigned int v25; // esi
  int v27; // r9d
  __int64 v28; // rdx
  _QWORD *v29; // rdx
  __int64 v30; // rax
  signed __int32 v31[8]; // [rsp+0h] [rbp-80h] BYREF
  __int64 v32; // [rsp+30h] [rbp-50h]
  __int64 v33; // [rsp+38h] [rbp-48h]
  __int128 v34; // [rsp+40h] [rbp-40h] BYREF
  __int128 v35; // [rsp+50h] [rbp-30h]
  char pszDest[16]; // [rsp+60h] [rbp-20h] BYREF

  v2 = (_QWORD *)(a1 + 160);
  *(_QWORD *)(a1 + 168) = a1 + 160;
  *(_QWORD *)(a1 + 160) = a1 + 160;
  v4 = *(_QWORD *)(a1 + 8);
  v34 = 0LL;
  v35 = 0LL;
  *(_OWORD *)pszDest = 0LL;
  v5 = *(_QWORD *)(v4 + 88);
  v6 = *(void **)(v4 + 120);
  v7 = *(_DWORD *)(v4 + 556);
  if ( v7 )
  {
    if ( (unsigned int)(v7 - 1) > 1 )
    {
      Debug_FreAssertMsg(
        (__int64)"Unexpected DMA Mode",
        0,
        (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\interrupter.c",
        785);
      return (unsigned int)-1073741630;
    }
    v8 = 3;
  }
  else
  {
    v8 = 1;
  }
  *(_DWORD *)(a1 + 96) ^= (*(_DWORD *)(a1 + 96) ^ a2) & 1;
  Interrupter_DetermineSegmentSizeAndCount();
  v10 = XilCommonBuffer_AcquireBufferEx(v6, 16 * *(_DWORD *)(v9 + 108), a1, 0x31746E49u, v8);
  *(_QWORD *)(a1 + 152) = v10;
  if ( !v10 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_29;
    v27 = 28;
    goto LABEL_28;
  }
  v12 = 0;
  if ( !*(_DWORD *)(a1 + 108) )
  {
LABEL_8:
    v15 = *(_QWORD *)(v5 + 40) + 32 * (*(unsigned int *)(a1 + 32) + 1LL);
    *(_QWORD *)(a1 + 24) = v15;
    v16 = (_DWORD *)(v15 + 8);
    if ( *(_BYTE *)(v5 + 129) )
    {
      *v16 = 0;
      _InterlockedOr(v31, 0);
    }
    else
    {
      XilRegister_WriteUlong(v5, v16, 0);
    }
    v17 = 0LL;
    v18 = (_QWORD *)*v2;
    v19 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 16LL);
    while ( v2 != v18 )
    {
      v20 = 2LL * (unsigned int)v17;
      v17 = (unsigned int)(v17 + 1);
      *(_QWORD *)(v19 + 8 * v20) = v18[3];
      *(_WORD *)(v19 + 8 * v20 + 8) = *(_WORD *)(a1 + 116);
      v18 = (_QWORD *)*v18;
    }
    if ( WPP_MAIN_CB.Queue.Wcb.DeviceObject )
    {
      v21 = (struct _DEVICE_OBJECT *)(*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64, __int64))(WdfFunctions_01023 + 248))(
                                       WdfDriverGlobals,
                                       **(_QWORD **)(a1 + 8),
                                       v17,
                                       v19);
      *(_QWORD *)(a1 + 200) = IoAllocateWorkItem(v21);
      KeInitializeEvent((PRKEVENT)(a1 + 176), NotificationEvent, 1u);
    }
    else
    {
      *(_QWORD *)(a1 + 200) = 0LL;
    }
    v22 = *(_QWORD *)(a1 + 8);
    *(_QWORD *)&v35 = 0LL;
    v23 = *(_DWORD *)(a1 + 32);
    *(_QWORD *)&v34 = 48LL;
    pszDest[0] = 0;
    HIDWORD(v35) = 16;
    BYTE8(v35) = 0;
    *((_QWORD *)&v34 + 1) = 0xC800000400LL;
    RtlStringCchPrintfA(pszDest, 0x10uLL, "%02d INT%02d", *(_DWORD *)(v22 + 176), v23);
    if ( (int)imp_WppRecorderLogCreate(WPP_GLOBAL_Control, &v34, a1 + 16) < 0 )
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v24 = *(_QWORD *)(a1 + 8);
      LODWORD(v33) = *(_DWORD *)(a1 + 108);
      LODWORD(v32) = *(_DWORD *)(a1 + 104);
      WPP_RECORDER_SF_qDD(
        *(_QWORD *)(v24 + 72),
        4u,
        9u,
        0x1Eu,
        (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids,
        *(_QWORD *)(a1 + 24),
        v32,
        v33);
    }
    *(_DWORD *)(a1 + 100) = 1;
    return 0;
  }
  while ( 1 )
  {
    v13 = (_QWORD *)XilCommonBuffer_AcquireBufferEx(v6, *(_DWORD *)(a1 + 104), a1, 0x31746E49u, v8);
    if ( !v13 )
      break;
    v14 = (_QWORD *)v2[1];
    if ( (_QWORD *)*v14 != v2 )
LABEL_36:
      __fastfail(3u);
    *v13 = v2;
    ++v12;
    v13[1] = v14;
    *v14 = v13;
    v2[1] = v13;
    if ( v12 >= *(_DWORD *)(a1 + 108) )
      goto LABEL_8;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v27 = 29;
LABEL_28:
    LOBYTE(v11) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 72LL),
      v11,
      9,
      v27,
      (__int64)&WPP_84765f96df013c20a94fd65d5e9532b8_Traceguids);
  }
LABEL_29:
  v25 = -1073741670;
  if ( v6 )
  {
    v28 = *(_QWORD *)(a1 + 152);
    if ( v28 )
    {
      XilCommonBuffer_ReleaseBuffer((__int64)v6, v28);
      *(_QWORD *)(a1 + 152) = 0LL;
    }
    while ( 1 )
    {
      v29 = (_QWORD *)*v2;
      if ( (_QWORD *)*v2 == v2 )
        break;
      if ( (_QWORD *)v29[1] != v2 )
        goto LABEL_36;
      v30 = *v29;
      if ( *(_QWORD **)(*v29 + 8LL) != v29 )
        goto LABEL_36;
      *v2 = v30;
      *(_QWORD *)(v30 + 8) = v2;
      XilCommonBuffer_ReleaseBuffer((__int64)v6, (__int64)v29);
    }
  }
  return v25;
}
