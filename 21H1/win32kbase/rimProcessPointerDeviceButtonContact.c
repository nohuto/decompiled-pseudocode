/*
 * XREFs of rimProcessPointerDeviceButtonContact @ 0x1C0183220
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01804E8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C018076C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     RIMAddToActiveDevices @ 0x1C0164658 (RIMAddToActiveDevices.c)
 *     RIMGetPointerInputType @ 0x1C0167130 (RIMGetPointerInputType.c)
 *     rimExtractButtonPageButtonUsages @ 0x1C0180FA4 (rimExtractButtonPageButtonUsages.c)
 *     RIMCmActivateButtonContact @ 0x1C01862F4 (RIMCmActivateButtonContact.c)
 *     RIMCmGetButtonContact @ 0x1C0186AC4 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C0186B1C (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C0186B4C (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C0186B78 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

_UNKNOWN **__fastcall rimProcessPointerDeviceButtonContact(
        LARGE_INTEGER *a1,
        __int64 a2,
        char *a3,
        unsigned int a4,
        int a5)
{
  __int64 v6; // rdi
  struct _HIDP_PREPARSED_DATA *v10; // r12
  __int64 ButtonContact; // rax
  int v12; // edx
  __int64 v13; // rbx
  _UNKNOWN **v14; // rcx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  __int64 v18; // rax
  _UNKNOWN **result; // rax
  int v20; // [rsp+68h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(a2 + 480);
  v10 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  ButtonContact = RIMCmGetButtonContact(v6);
  v20 = 0;
  v13 = ButtonContact;
  v14 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 32, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  if ( *(_DWORD *)(v6 + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
  if ( !v13 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v14);
  if ( rimExtractButtonPageButtonUsages(v6, v10, a3, a4, &v20) >= 0 )
  {
    v16 = *(_DWORD *)(v13 + 32);
    if ( (v20 & 4) != 0 )
    {
      if ( !__CFSHR__(*(_DWORD *)(v13 + 32), 2) )
      {
        RIMCmActivateButtonContact(v6);
        if ( *(_DWORD *)(v6 + 952) == 1 )
          RIMAddToActiveDevices(a1, v6);
      }
      v16 = *(_DWORD *)(v13 + 32);
    }
    else if ( __CFSHR__(*(_DWORD *)(v13 + 32), 2) )
    {
      *(_DWORD *)(v13 + 2340) |= 4u;
    }
    if ( (v16 & 2) != 0
      && (!(unsigned int)RIMCmIsContactSuppressed(v13)
       || (unsigned int)RIMCmIsContactDeliveringPointerData(v13)
       || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v13)) )
    {
      v17 = a5;
      *(_DWORD *)(v13 + 44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(v13 + 2392) = v17;
      *(_DWORD *)(v13 + 2408) = RIMGetPointerInputType(v6);
      *(_DWORD *)(v13 + 2420) = v20;
      *(_DWORD *)(v13 + 2472) = *(_DWORD *)(v6 + 788);
      *(_QWORD *)(v13 + 2488) = *(_QWORD *)(v6 + 816);
      if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
        v18 = *(_QWORD *)(a2 + 24);
      else
        v18 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v13 + 2340) |= 1u;
      *(_QWORD *)(v13 + 2424) = v18;
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_(
                          (_DWORD)gRimLog,
                          v15,
                          1,
                          33,
                          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  return result;
}
