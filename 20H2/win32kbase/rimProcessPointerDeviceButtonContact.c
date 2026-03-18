/*
 * XREFs of rimProcessPointerDeviceButtonContact @ 0x1C017B0F0
 * Callers:
 *     rimCreateAndProcessPointerDeviceButtonOnlyFrame @ 0x1C01783B8 (rimCreateAndProcessPointerDeviceButtonOnlyFrame.c)
 *     rimDoProcessAnyPointerDeviceInput @ 0x1C017863C (rimDoProcessAnyPointerDeviceInput.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C004F07C (WPP_RECORDER_SF_.c)
 *     RIMAddToActiveDevices @ 0x1C015BDA8 (RIMAddToActiveDevices.c)
 *     RIMGetPointerInputType @ 0x1C015E880 (RIMGetPointerInputType.c)
 *     rimExtractButtonPageButtonUsages @ 0x1C0178E74 (rimExtractButtonPageButtonUsages.c)
 *     RIMCmActivateButtonContact @ 0x1C017E1C4 (RIMCmActivateButtonContact.c)
 *     RIMCmGetButtonContact @ 0x1C017E994 (RIMCmGetButtonContact.c)
 *     RIMCmIsContactDeliveringPointerData @ 0x1C017E9EC (RIMCmIsContactDeliveringPointerData.c)
 *     RIMCmIsContactSuppressed @ 0x1C017EA1C (RIMCmIsContactSuppressed.c)
 *     RIMCmIsContactSuppressedByArbitrationOnly @ 0x1C017EA48 (RIMCmIsContactSuppressedByArbitrationOnly.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C01FA2AC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
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
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbx
  _UNKNOWN **v16; // rcx
  int v17; // edx
  int v18; // ecx
  int v19; // eax
  __int64 v20; // rax
  _UNKNOWN **result; // rax
  int v22; // [rsp+68h] [rbp+10h] BYREF

  v6 = *(_QWORD *)(a2 + 480);
  v10 = *(struct _HIDP_PREPARSED_DATA **)(*(_QWORD *)(a2 + 464) + 16LL);
  ButtonContact = RIMCmGetButtonContact(v6);
  v22 = 0;
  v15 = ButtonContact;
  v16 = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v12) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v12, 1, 32, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  if ( *(_DWORD *)(v6 + 24) != 7 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v12, v13, v14);
  if ( !v15 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM(v16, v12, v13, v14);
  if ( rimExtractButtonPageButtonUsages(v6, v10, a3, a4, &v22) >= 0 )
  {
    v18 = *(_DWORD *)(v15 + 32);
    if ( (v22 & 4) != 0 )
    {
      if ( !__CFSHR__(*(_DWORD *)(v15 + 32), 2) )
      {
        RIMCmActivateButtonContact(v6);
        if ( *(_DWORD *)(v6 + 952) == 1 )
          RIMAddToActiveDevices(a1, v6);
      }
      v18 = *(_DWORD *)(v15 + 32);
    }
    else if ( __CFSHR__(*(_DWORD *)(v15 + 32), 2) )
    {
      *(_DWORD *)(v15 + 2340) |= 4u;
    }
    if ( (v18 & 2) != 0
      && (!(unsigned int)RIMCmIsContactSuppressed(v15)
       || (unsigned int)RIMCmIsContactDeliveringPointerData(v15)
       || (unsigned int)RIMCmIsContactSuppressedByArbitrationOnly(v15)) )
    {
      v19 = a5;
      *(_DWORD *)(v15 + 44) = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
      *(_DWORD *)(v15 + 2392) = v19;
      *(_DWORD *)(v15 + 2408) = RIMGetPointerInputType(v6);
      *(_DWORD *)(v15 + 2420) = v22;
      *(_DWORD *)(v15 + 2472) = *(_DWORD *)(v6 + 788);
      *(_QWORD *)(v15 + 2488) = *(_QWORD *)(v6 + 816);
      if ( (*(_DWORD *)(a2 + 184) & 0x2000) != 0 )
        v20 = *(_QWORD *)(a2 + 24);
      else
        v20 = *(_QWORD *)(a2 + 16);
      *(_DWORD *)(v15 + 2340) |= 1u;
      *(_QWORD *)(v15 + 2424) = v20;
    }
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v17) = 4;
    return (_UNKNOWN **)WPP_RECORDER_SF_(
                          (_DWORD)gRimLog,
                          v17,
                          1,
                          33,
                          (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
  }
  return result;
}
