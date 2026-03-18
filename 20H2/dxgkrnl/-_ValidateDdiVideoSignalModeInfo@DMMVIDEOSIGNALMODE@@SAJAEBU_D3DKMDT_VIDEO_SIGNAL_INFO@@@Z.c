/*
 * XREFs of ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C0006200
 * Callers:
 *     ?Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C000619C (-Initialize@DMMVIDEOSIGNALMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ConvertVideoSignalInfo @ 0x1C018757C (ConvertVideoSignalInfo.c)
 *     ?_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C018FAA4 (-_InsertMonitorSourceMode@DXGMONITOR@@AEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ??$?OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z @ 0x1C0006330 (--$-OU_D3DDDI_RATIONAL@@@@YA_NAEBU_D3DDDI_RATIONAL@@0@Z.c)
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C011C560 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(__int64 a1)
{
  D3DDDI_RATIONAL *v1; // rsi
  unsigned __int64 v2; // rdx
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v3; // rdi
  __int64 v4; // rax
  unsigned __int64 Numerator; // rdx
  __int64 Denominator; // rax
  _QWORD *v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // rax
  _QWORD *v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rax
  int v14; // [rsp+30h] [rbp+8h] BYREF
  int v15; // [rsp+34h] [rbp+Ch]

  v1 = (D3DDDI_RATIONAL *)(a1 + 20);
  v2 = *(unsigned int *)(a1 + 20);
  v3 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a1;
  if ( *(_QWORD *)(a1 + 20) != 0xFFFFFFFEFFFFFFFEuLL )
  {
    v4 = *(unsigned int *)(a1 + 24);
    if ( !(_DWORD)v4
      || (a1 = 5 * v4, v2 < 5 * v4)
      || (v14 = 500, v15 = 1, (unsigned __int8)operator><_D3DDDI_RATIONAL>(v1, &v14)) )
    {
      v13 = (_QWORD *)WdLogNewEntry5_WdError(a1, v2);
      v13[3] = v1->Numerator;
      v13[4] = v3->VSyncFreq.Denominator;
      v13[5] = v3;
      v13[6] = v3->ActiveSize.cx;
      v13[7] = v3->ActiveSize.cy;
      v9 = v13;
      goto LABEL_25;
    }
  }
  Numerator = v3->HSyncFreq.Numerator;
  if ( *(_QWORD *)&v3->HSyncFreq != 0xFFFFFFFEFFFFFFFEuLL )
  {
    Denominator = v3->HSyncFreq.Denominator;
    if ( !(_DWORD)Denominator
      || (a1 = 1000 * Denominator, Numerator < 1000 * Denominator)
      || (v14 = 1000000, v15 = 1, (unsigned __int8)operator><_D3DDDI_RATIONAL>(&v3->HSyncFreq, &v14)) )
    {
      v8 = (_QWORD *)WdLogNewEntry5_WdError(a1, Numerator);
      v8[3] = v3->HSyncFreq.Numerator;
      v8[4] = v3->HSyncFreq.Denominator;
      v8[5] = v3->ActiveSize.cx;
      v8[6] = v3->ActiveSize.cy;
      v8[7] = DmmMapVSyncFromRationalToInteger(
                v1,
                (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29),
                0LL);
      goto LABEL_20;
    }
  }
  if ( v3->PixelRate - 1000000 > 0x253FCA1C0LL )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL, Numerator);
    v8[3] = v3->PixelRate;
    v8[4] = v3->ActiveSize.cx;
    v8[5] = v3->ActiveSize.cy;
    v8[6] = DmmMapVSyncFromRationalToInteger(
              v1,
              (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29),
              0LL);
LABEL_20:
    v9 = v8;
LABEL_25:
    WdLogEvent5_WdError(v9);
    return 3223192330LL;
  }
  if ( v3->ActiveSize.cx < 0x64 || v3->ActiveSize.cy < 0x64 )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL, Numerator);
    v12[3] = v3->ActiveSize.cx;
    v12[4] = v3->ActiveSize.cy;
    v12[5] = v3;
    WdLogEvent5_WdError(v12);
    return 3223192331LL;
  }
  else if ( v3->TotalSize.cx < 0x64 || v3->TotalSize.cy < 0x64 )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(9999000000LL, Numerator);
    v11[3] = v3->TotalSize.cx;
    v11[4] = v3->TotalSize.cy;
    v11[5] = v3;
    WdLogEvent5_WdError(v11);
    return 3223192332LL;
  }
  else if ( (unsigned int)(((int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29) - 1) > 2 )
  {
    v10 = WdLogNewEntry5_WdError(9999000000LL, Numerator);
    *(_QWORD *)(v10 + 24) = (int)(*(_DWORD *)&v3->AdditionalSignalInfo << 29) >> 29;
    *(_QWORD *)(v10 + 32) = v3;
    WdLogEvent5_WdError(v10);
    return 3223192402LL;
  }
  else
  {
    return 0LL;
  }
}
