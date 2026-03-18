/*
 * XREFs of Endpoint_OnCancelStopCompletion @ 0x1C000BDE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_DD @ 0x1C00043B8 (WPP_RECORDER_SF_DD.c)
 *     ESM_AddEvent @ 0x1C0005174 (ESM_AddEvent.c)
 *     WPP_RECORDER_SF_ddLLi @ 0x1C000BEF8 (WPP_RECORDER_SF_ddLLi.c)
 *     UsbDevice_GetXhciEndpointDequeuePointer @ 0x1C000BFCC (UsbDevice_GetXhciEndpointDequeuePointer.c)
 *     UsbDevice_GetEndpointState @ 0x1C000C034 (UsbDevice_GetEndpointState.c)
 *     WPP_RECORDER_SF_ddL @ 0x1C002F238 (WPP_RECORDER_SF_ddL.c)
 *     Controller_HwVerifierBreakIfEnabled @ 0x1C0031C54 (Controller_HwVerifierBreakIfEnabled.c)
 *     Controller_ReportFatalError @ 0x1C0032C20 (Controller_ReportFatalError.c)
 */

void __fastcall Endpoint_OnCancelStopCompletion(__int64 a1, int a2, __int64 a3)
{
  __m128i **v3; // rbx
  int EndpointState; // edi
  int v7; // r9d
  __m128i *v8; // rcx
  int v9; // edx
  unsigned __int32 v10; // eax
  char v11; // al
  int v12; // edi
  int v13; // edi

  v3 = *(__m128i ***)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(a2) = 4;
      WPP_RECORDER_SF_DD(
        (unsigned int)v3[10],
        a2,
        13,
        77,
        (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
        v3[2][8].m128i_i8[7],
        *((_DWORD *)v3 + 36));
    }
    _m_prefetchw(v3 + 4);
    v11 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
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
      goto LABEL_9;
    if ( *(_BYTE *)(a1 + 60) == 1 )
    {
      if ( EndpointState == 3 )
      {
        v10 = *((_DWORD *)v3 + 39);
        if ( v10 != 1 && v10 > v8[31].m128i_i32[3] )
        {
          v8[31].m128i_i32[3] = v10;
          v8[29].m128i_i8[8] = 1;
        }
LABEL_9:
        v9 = 16;
LABEL_10:
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
          79,
          (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
          v3[2][8].m128i_i8[7],
          *((_DWORD *)v3 + 36),
          EndpointState);
        v8 = *v3;
      }
      Controller_ReportFatalError((_DWORD)v8, 2, 4131, 0, (__int64)v3[2], (__int64)v3, 0LL);
      _m_prefetchw(v3 + 4);
      v11 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    }
    else if ( *(_BYTE *)(a1 + 60) == 19 )
    {
      v12 = EndpointState - 1;
      if ( !v12 )
      {
        ++v8[31].m128i_i32[2];
        v8[29].m128i_i8[8] = 1;
        goto LABEL_10;
      }
      v13 = v12 - 1;
      if ( v13 )
      {
        if ( v13 == 1 )
        {
          ++v8[31].m128i_i32[2];
          v9 = 36;
          v8[29].m128i_i8[8] = 1;
          goto LABEL_10;
        }
        Controller_ReportFatalError((_DWORD)v8, 2, 4100, 0, (__int64)v3[2], (__int64)v3, 0LL);
        _m_prefetchw(v3 + 4);
        v11 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
      }
      else
      {
        if ( (*((_BYTE *)v3 + 99) & 3) != 1 )
        {
          v9 = 28;
          goto LABEL_10;
        }
        Controller_ReportFatalError((_DWORD)v8, 2, 4099, 0, (__int64)v3[2], (__int64)v3, 0LL);
        _m_prefetchw(v3 + 4);
        v11 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
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
          80,
          (__int64)&WPP_60b6c7b69d133891580a7186b105caca_Traceguids,
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
      v11 = _InterlockedOr((volatile signed __int32 *)v3 + 8, 2u);
    }
  }
  if ( (v11 & 2) == 0 )
  {
    v9 = 12;
    goto LABEL_10;
  }
}
