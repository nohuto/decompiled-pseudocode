/*
 * XREFs of Endpoint_OnCancelStopCompletion @ 0x1C000FBA0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dd @ 0x1C0005520 (WPP_RECORDER_SF_dd.c)
 *     ESM_AddEvent @ 0x1C0008850 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddLLi @ 0x1C000FF4C (WPP_RECORDER_SF_ddLLi.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C0010020 (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     UsbDevice_GetEndpointState @ 0x1C0010088 (UsbDevice_GetEndpointState.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C0015850 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031CC4 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032BA0 (Controller_ReportFatalError.c)
 */

void __fastcall Endpoint_OnCancelStopCompletion(__int64 a1, int a2, __int64 a3)
{
  __m128i **v3; // rbx
  char v6; // al
  int v7; // edx
  int EndpointState; // edi
  int v9; // r9d
  __m128i *v10; // rcx
  int v11; // edi
  int v12; // edi
  unsigned __int32 v13; // eax

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
        77,
        (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
        v3[2][8].m128i_i8[7],
        *((_DWORD *)v3 + 36));
    }
    _m_prefetchw(v3 + 4);
    v6 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    goto LABEL_5;
  }
  EndpointState = UsbDevice_GetEndpointState(v3[2], *((unsigned int *)v3 + 36));
  UsbDevice_GetXhciEndpointDequeuePointer(v3[2], *((unsigned int *)v3 + 36));
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_ddLLi((unsigned int)v3[10], *(unsigned __int8 *)(a1 + 60), v3[2][8].m128i_u8[7], v9);
  v10 = *v3;
  v7 = 32;
  if ( (_mm_srli_si128((*v3)[21], 8).m128i_u8[0] & 0x20) != 0 && *(_BYTE *)(a1 + 60) == 19 && EndpointState == 4 )
  {
LABEL_33:
    v7 = 16;
    goto LABEL_34;
  }
  if ( *(_BYTE *)(a1 + 60) == 1 )
  {
    if ( EndpointState != 3 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 2;
        WPP_RECORDER_SF_ddL(
          (unsigned int)v3[10],
          v7,
          13,
          79,
          (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
          v3[2][8].m128i_i8[7],
          *((_DWORD *)v3 + 36),
          EndpointState);
        v10 = *v3;
      }
      Controller_ReportFatalError((_DWORD)v10, 2, 4131, 0, (__int64)v3[2], (__int64)v3, 0LL);
      _m_prefetchw(v3 + 4);
      v6 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
      goto LABEL_5;
    }
    v13 = *((_DWORD *)v3 + 39);
    if ( v13 != 1 && v13 > v10[31].m128i_i32[3] )
    {
      v10[31].m128i_i32[3] = v13;
      v10[29].m128i_i8[8] = 1;
    }
    goto LABEL_33;
  }
  if ( *(_BYTE *)(a1 + 60) == 19 )
  {
    v11 = EndpointState - 1;
    if ( !v11 )
    {
      ++v10[31].m128i_i32[2];
      v10[29].m128i_i8[8] = 1;
      goto LABEL_34;
    }
    v12 = v11 - 1;
    if ( v12 )
    {
      if ( v12 == 1 )
      {
        ++v10[31].m128i_i32[2];
        v7 = 36;
        v10[29].m128i_i8[8] = 1;
        goto LABEL_34;
      }
      Controller_ReportFatalError((_DWORD)v10, 2, 4100, 0, (__int64)v3[2], (__int64)v3, 0LL);
      _m_prefetchw(v3 + 4);
      v6 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    }
    else
    {
      if ( (*((_BYTE *)v3 + 99) & 3) != 1 )
      {
        v7 = 28;
        goto LABEL_34;
      }
      Controller_ReportFatalError((_DWORD)v10, 2, 4099, 0, (__int64)v3[2], (__int64)v3, 0LL);
      _m_prefetchw(v3 + 4);
      v6 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    }
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v7) = 2;
      WPP_RECORDER_SF_ddL(
        (unsigned int)v3[10],
        v7,
        13,
        80,
        (__int64)&WPP_e17193f9e7953bf0d59f9dd2738aa1c9_Traceguids,
        v3[2][8].m128i_i8[7],
        *((_DWORD *)v3 + 36),
        *(_BYTE *)(a1 + 60));
      v10 = *v3;
    }
    Controller_HwVerifierBreakIfEnabled(
      (_DWORD)v10,
      (unsigned int)v3[1],
      (unsigned int)v3[3],
      0x800000,
      (__int64)"Stop Endpoint Command failed",
      a1 + 24,
      a3);
    Controller_ReportFatalError((unsigned int)*v3, 2, 4099, 0, (__int64)v3[2], (__int64)v3, 0LL);
    _m_prefetchw(v3 + 4);
    v6 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
  }
LABEL_5:
  if ( (v6 & 2) != 0 )
    return;
  v7 = 12;
LABEL_34:
  ESM_AddEvent((KSPIN_LOCK *)v3 + 36, v7);
}
