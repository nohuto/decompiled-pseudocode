/*
 * XREFs of rimExtractPointerDeviceUsages @ 0x1C0181948
 * Callers:
 *     rimPopulateContactFrameData @ 0x1C0182A9C (rimPopulateContactFrameData.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     rimHidP_GetUsageValue @ 0x1C016BF8C (rimHidP_GetUsageValue.c)
 *     rimHidP_GetUsageValueArray @ 0x1C016BFFC (rimHidP_GetUsageValueArray.c)
 *     rimHidP_GetUsages @ 0x1C016C064 (rimHidP_GetUsages.c)
 *     RIMEnsureUsageWithinLogicalBoundary @ 0x1C017F500 (RIMEnsureUsageWithinLogicalBoundary.c)
 *     rimExtractData @ 0x1C0181074 (rimExtractData.c)
 *     rimExtractDigitizerPageButtonUsages @ 0x1C0181134 (rimExtractDigitizerPageButtonUsages.c)
 *     rimExtractGeometryPoints @ 0x1C01813B4 (rimExtractGeometryPoints.c)
 *     rimExtractPenInfo @ 0x1C0181858 (rimExtractPenInfo.c)
 *     rimExtractTouchInfo @ 0x1C018217C (rimExtractTouchInfo.c)
 *     MicrosoftTelemetryAssertTriggeredNoArgsKM @ 0x1C02015EC (MicrosoftTelemetryAssertTriggeredNoArgsKM.c)
 */

__int64 __fastcall rimExtractPointerDeviceUsages(
        __int64 a1,
        struct _HIDP_PREPARSED_DATA *a2,
        char *a3,
        unsigned int a4,
        int a5,
        unsigned int a6,
        __int64 a7,
        _DWORD *a8,
        _DWORD *a9,
        _DWORD *a10,
        _DWORD *a11)
{
  int v11; // ebp
  __int64 v12; // r14
  __int64 v13; // rsi
  struct _HIDP_PREPARSED_DATA *v14; // r10
  __int64 v15; // rdx
  _DWORD *v16; // r11
  unsigned int v17; // r15d
  int DigitizerPageButtonUsages; // ebx
  _DWORD *v21; // r13
  int v22; // eax
  __int64 v23; // rcx
  unsigned int v24; // ebp
  unsigned __int16 v25; // r9
  unsigned __int16 v26; // r8
  int v27; // ebp
  int v28; // edx
  _DWORD *v29; // r15
  int UsageValue; // eax
  __int16 v31; // ax
  _DWORD *v32; // rax
  int v33; // r9d
  int v34; // edx
  int v35; // edx
  __int64 v36; // rcx
  int v37; // edx
  __int64 v38; // rcx
  int v39; // eax
  unsigned __int16 v40; // r8
  int v42; // [rsp+28h] [rbp-70h]
  __int64 v43; // [rsp+A0h] [rbp+8h]
  char v45; // [rsp+B0h] [rbp+18h] BYREF
  unsigned int v46; // [rsp+B8h] [rbp+20h]

  v46 = a4;
  v11 = (unsigned __int8)*a3;
  v12 = a1 + 352;
  v13 = a7;
  v14 = a2;
  v15 = *(_QWORD *)(a1 + 712);
  v16 = 0LL;
  v43 = v15;
  v17 = a4;
  DigitizerPageButtonUsages = 0;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v15) = 4;
    WPP_RECORDER_SF_((_DWORD)gRimLog, v15, 1, 60, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
    v15 = v43;
    v14 = a2;
    v16 = 0LL;
  }
  v21 = a8;
  LODWORD(a7) = 0;
  *a8 = 1;
  *a9 = 0;
  *a10 = 0;
  *a11 = 0;
  if ( !*(_DWORD *)(a1 + 724) )
  {
LABEL_43:
    *(_DWORD *)(v13 + 4) = rimExtractData(a1, 1, 48, 0, v16);
    *(_DWORD *)(v13 + 8) = rimExtractData(a1, 1, 49, 0, 0LL);
    v36 = *(unsigned int *)(a1 + 24);
    if ( (unsigned int)(v36 - 1) > 3 )
    {
      if ( (_DWORD)v36 != 7 )
      {
        if ( (unsigned int)(v36 - 5) > 1 )
        {
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          {
            LOBYTE(v35) = 4;
            WPP_RECORDER_SF_((_DWORD)gRimLog, v35, 1, 63, (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids);
          }
          MicrosoftTelemetryAssertTriggeredNoArgsKM(v36);
        }
        else
        {
          v37 = a6;
          *(_DWORD *)(v13 + 64) = 3;
          rimExtractPenInfo(a1, v37, (_DWORD *)v13);
        }
LABEL_53:
        DigitizerPageButtonUsages = rimExtractDigitizerPageButtonUsages(a1, a2, a3, v17, v13);
        if ( DigitizerPageButtonUsages >= 0 )
        {
          v39 = *(_DWORD *)(a1 + 312);
          if ( (v39 & 8) != 0 && (v39 & 0x2000) == 0 )
          {
            v40 = *(_WORD *)(v13 + 58);
            LODWORD(a10) = 1;
            LOWORD(a9) = 0;
            if ( rimHidP_GetUsages(v38, 0xFF00u, v40, (unsigned __int16 *)&a9, (unsigned int *)&a10, a2, a3, v17) >= 0
              && (_DWORD)a10 == 1
              && (_WORD)a9 == 207 )
            {
              *a11 = 1;
            }
          }
        }
LABEL_60:
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v34) = 4;
          WPP_RECORDER_SF_d(
            (_DWORD)gRimLog,
            v34,
            1,
            64,
            (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
            DigitizerPageButtonUsages);
        }
        return (unsigned int)DigitizerPageButtonUsages;
      }
      *(_DWORD *)(v13 + 64) = 5;
    }
    else
    {
      *(_DWORD *)(v13 + 64) = 2;
    }
    rimExtractTouchInfo(a1, a6, v13);
    goto LABEL_53;
  }
  v22 = v11;
  v23 = 1LL;
  LODWORD(a8) = v11;
  v24 = 0;
  while ( 1 )
  {
    if ( v22 != *(_DWORD *)(v12 + 4) )
      goto LABEL_34;
    v25 = *(_WORD *)(v12 + 12);
    v26 = *(_WORD *)(v13 + 58);
    v27 = (int)v16;
    LOBYTE(v27) = (unsigned __int16)(v25 - 48) <= 1u;
    if ( v15 && *(_WORD *)(v15 + 8) > (unsigned __int16)v16 && *(_WORD *)v12 == 1 && v27 )
    {
      *(_DWORD *)(v12 + 48) = (_DWORD)v16;
      v23 = *(unsigned __int16 *)(v13 + 58);
      v26 = *(_WORD *)(*(_QWORD *)(v15 + 24) + 8 * v23 + 2);
    }
    if ( (*(_DWORD *)(a1 + 312) & 0x200) != 0 && *(_WORD *)v12 == 1 && v27 )
    {
      DigitizerPageButtonUsages = rimHidP_GetUsageValueArray(v23, 1u, v26, v25, &v45, v42, v14, a3, v17);
      if ( DigitizerPageButtonUsages < 0 )
      {
        if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
          return (unsigned int)DigitizerPageButtonUsages;
        v33 = 61;
        goto LABEL_38;
      }
      v29 = (_DWORD *)(v12 + 52);
      rimExtractGeometryPoints(
        *(unsigned __int16 *)(v12 + 12),
        v13,
        v12 + 52,
        (__int64)&v45,
        *(unsigned __int16 *)(v12 + 56));
      v16 = 0LL;
      goto LABEL_17;
    }
    v29 = (_DWORD *)(v12 + 52);
    UsageValue = rimHidP_GetUsageValue(HidP_Input, *(_WORD *)v12, v26, v25, (unsigned int *)(v12 + 52), v14, a3, v46);
    v16 = 0LL;
    DigitizerPageButtonUsages = UsageValue;
    if ( UsageValue < 0 )
      break;
LABEL_17:
    if ( *(_DWORD *)(v12 + 16) )
    {
      if ( *v29 < *(_DWORD *)(v12 + 32) || *v29 > *(_DWORD *)(v12 + 36) )
      {
        if ( *(_WORD *)v12 == 1 && v27 && *(_DWORD *)(a1 + 24) == 5 )
        {
          v31 = *(_WORD *)(v12 + 12);
          if ( v31 == 48 )
          {
            v32 = a9;
          }
          else
          {
            if ( v31 != 49 )
            {
              MicrosoftTelemetryAssertTriggeredNoArgsKM(49LL);
              v16 = 0LL;
            }
            v32 = a10;
          }
          *v32 = 1;
        }
      }
      else
      {
        *v21 = 0;
      }
    }
    else
    {
      *v21 = 0;
      if ( !v27 || a5 )
        RIMEnsureUsageWithinLogicalBoundary(v12);
    }
    v22 = (int)a8;
    v23 = 1LL;
    v17 = v46;
    v24 = a7;
LABEL_34:
    ++v24;
    v12 += 60LL;
    LODWORD(a7) = v24;
    if ( v24 >= *(_DWORD *)(a1 + 724) )
    {
      if ( DigitizerPageButtonUsages < 0 )
      {
        MicrosoftTelemetryAssertTriggeredNoArgsKM(1LL);
        v16 = 0LL;
      }
      goto LABEL_43;
    }
    v15 = v43;
    v14 = a2;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v33 = 62;
LABEL_38:
    LOBYTE(v28) = 4;
    WPP_RECORDER_SF_d(
      (_DWORD)gRimLog,
      v28,
      1,
      v33,
      (__int64)&WPP_fa968752f5ee31807da3aa7ca7449649_Traceguids,
      DigitizerPageButtonUsages);
    goto LABEL_60;
  }
  return (unsigned int)DigitizerPageButtonUsages;
}
