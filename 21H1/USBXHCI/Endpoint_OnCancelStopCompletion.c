/*
 * XREFs of Endpoint_OnCancelStopCompletion @ 0x1C000F3B0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     ESM_AddEvent @ 0x1C0007E70 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddLLi @ 0x1C000F4BC (WPP_RECORDER_SF_ddLLi.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C000F590 (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     UsbDevice_GetEndpointState @ 0x1C000F5F8 (UsbDevice_GetEndpointState.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0016684 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C00314E4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C00323C0 (Controller_ReportFatalError.c)
 */

void __fastcall Endpoint_OnCancelStopCompletion(__int64 a1, int a2, __int64 a3)
{
  __m128i **v3; // rbx
  int EndpointState; // edi
  int v7; // r9d
  __m128i *v8; // r10
  int v9; // edx
  char v10; // al
  int v11; // edi
  int v12; // edi

  v3 = *(__m128i ***)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_dd(
        (unsigned int)v3[10],
        a2,
        13,
        76,
        (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
        v3[2][8].m128i_i8[7],
        *((_DWORD *)v3 + 36));
    }
    _m_prefetchw(v3 + 4);
    v10 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
  }
  else
  {
    EndpointState = UsbDevice_GetEndpointState(v3[2], *((unsigned int *)v3 + 36));
    UsbDevice_GetXhciEndpointDequeuePointer(v3[2], *((unsigned int *)v3 + 36));
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_ddLLi((unsigned int)v3[10], *(unsigned __int8 *)(a1 + 60), v3[2][8].m128i_u8[7], v7);
    v8 = *v3;
    v9 = 32;
    if ( (_mm_srli_si128((*v3)[21], 8).m128i_u8[0] & 0x20) != 0 && *(_BYTE *)(a1 + 60) == 19 && EndpointState == 4 )
      goto LABEL_8;
    if ( *(_BYTE *)(a1 + 60) == 1 )
    {
      if ( EndpointState == 3 )
      {
LABEL_8:
        v9 = 16;
LABEL_9:
        ESM_AddEvent((KSPIN_LOCK *)v3 + 36, v9);
        return;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_ddL(
          (unsigned int)v3[10],
          v9,
          13,
          78,
          (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
          v3[2][8].m128i_i8[7],
          *((_DWORD *)v3 + 36),
          EndpointState);
        v8 = *v3;
      }
      Controller_ReportFatalError((_DWORD)v8, 2, 4131, 0, (__int64)v3[2], (__int64)v3, 0LL);
      _m_prefetchw(v3 + 4);
      v10 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    }
    else if ( *(_BYTE *)(a1 + 60) == 19 )
    {
      v11 = EndpointState - 1;
      if ( !v11 )
        goto LABEL_9;
      v12 = v11 - 1;
      if ( v12 )
      {
        if ( v12 == 1 )
        {
          v9 = 36;
          goto LABEL_9;
        }
        Controller_ReportFatalError((_DWORD)v8, 2, 4100, 0, (__int64)v3[2], (__int64)v3, 0LL);
        _m_prefetchw(v3 + 4);
        v10 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
      }
      else
      {
        if ( (*((_BYTE *)v3 + 99) & 3) != 1 )
        {
          v9 = 28;
          goto LABEL_9;
        }
        Controller_ReportFatalError((_DWORD)v8, 2, 4099, 0, (__int64)v3[2], (__int64)v3, 0LL);
        _m_prefetchw(v3 + 4);
        v10 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
      }
    }
    else
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_ddL(
          (unsigned int)v3[10],
          v9,
          13,
          79,
          (__int64)&WPP_90fdb84eefba3b5477bce0ca4c98412a_Traceguids,
          v3[2][8].m128i_i8[7],
          *((_DWORD *)v3 + 36),
          *(_BYTE *)(a1 + 60));
        v8 = *v3;
      }
      Controller_HwVerifierBreakIfEnabled(
        (_DWORD)v8,
        (unsigned int)v3[1],
        (unsigned int)v3[3],
        0x800000,
        (__int64)"Stop Endpoint Command failed",
        a1 + 24,
        a3);
      Controller_ReportFatalError((unsigned int)*v3, 2, 4099, 0, (__int64)v3[2], (__int64)v3, 0LL);
      _m_prefetchw(v3 + 4);
      v10 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    }
  }
  if ( (v10 & 2) == 0 )
  {
    v9 = 12;
    goto LABEL_9;
  }
}
