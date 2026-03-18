/*
 * XREFs of ?_ValidateDdiVideoSignalModeInfo@DMMVIDEOSIGNALMODE@@SAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C001107C
 * Callers:
 *     ?Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE@@PEAU_D3DDDI_RATIONAL@@@Z @ 0x1C0010FC8 (-Initialize@DMMVIDPNTARGETMODE@@QEAAJAEBU_D3DKMDT_VIDEO_SIGNAL_INFO@@T_D3DKMDT_WIRE_FORMAT_AND_P.c)
 *     ?ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z @ 0x1C00273C8 (-ConvertVideoSignalInfo@@YAJPEBU_VideoModeDescriptor@@PEAU_D3DKMDT_VIDEO_SIGNAL_INFO@@@Z.c)
 *     ?_InsertMonitorSourceMode@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z @ 0x1C020DB90 (-_InsertMonitorSourceMode@MonitorModes@DxgMonitor@@QEAAJQEBU_D3DKMDT_MONITOR_SOURCE_MODE@@@Z.c)
 * Callees:
 *     ?DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING@@PEAE@Z @ 0x1C01BE360 (-DmmMapVSyncFromRationalToInteger@@YAIAEBU_D3DDDI_RATIONAL@@W4_D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDE.c)
 */

__int64 __fastcall DMMVIDEOSIGNALMODE::_ValidateDdiVideoSignalModeInfo(const struct _D3DKMDT_VIDEO_SIGNAL_INFO *a1)
{
  D3DDDI_RATIONAL *p_VSyncFreq; // rdi
  unsigned __int64 Numerator; // r10
  __int64 Denominator; // rdx
  unsigned __int64 v5; // rdx
  __int64 v6; // rax
  int v7; // ecx
  unsigned int v9; // eax
  __int64 cx; // rcx
  const struct _D3DKMDT_VIDEO_SIGNAL_INFO *v11; // r9
  __int64 v12; // r8
  unsigned __int64 v13; // rdx
  __int64 cy; // rax

  p_VSyncFreq = &a1->VSyncFreq;
  Numerator = a1->VSyncFreq.Numerator;
  if ( *(_QWORD *)&a1->VSyncFreq != 0xFFFFFFFEFFFFFFFEuLL )
  {
    Denominator = a1->VSyncFreq.Denominator;
    if ( !(_DWORD)Denominator
      || Numerator < 5 * Denominator
      || Numerator > ((-(__int64)DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates & 0x1F4) + 500)
                   * (unsigned __int64)(unsigned int)Denominator )
    {
      cy = a1->ActiveSize.cy;
      v12 = a1->VSyncFreq.Denominator;
      cx = a1->ActiveSize.cx;
      v13 = Numerator;
      v11 = a1;
      goto LABEL_24;
    }
  }
  v5 = a1->HSyncFreq.Numerator;
  if ( *(_QWORD *)&a1->HSyncFreq != 0xFFFFFFFEFFFFFFFEuLL )
  {
    v6 = a1->HSyncFreq.Denominator;
    if ( !(_DWORD)v6
      || v5 < 1000 * v6
      || v5 > ((-(__int64)DMMVIDEOSIGNALMODE::EnableExperimentalRefreshRates & 0xF4240) + 1000000)
            * (unsigned __int64)(unsigned int)v6 )
    {
      LODWORD(cy) = DmmMapVSyncFromRationalToInteger(
                      p_VSyncFreq,
                      (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
                      0LL);
      cx = a1->ActiveSize.cy;
      v11 = (const struct _D3DKMDT_VIDEO_SIGNAL_INFO *)a1->ActiveSize.cx;
      v12 = a1->HSyncFreq.Denominator;
      v13 = a1->HSyncFreq.Numerator;
      cy = (unsigned int)cy;
LABEL_24:
      WdLogSingleEntry5(2LL, v13, v12, v11, cx, cy);
      return 3223192330LL;
    }
  }
  if ( a1->PixelRate - 1000000 > 0x253FCA1C0LL )
  {
    v9 = DmmMapVSyncFromRationalToInteger(
           p_VSyncFreq,
           (enum _D3DDDI_VIDEO_SIGNAL_SCANLINE_ORDERING)((int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29),
           0LL);
    WdLogSingleEntry4(2LL, a1->PixelRate, a1->ActiveSize.cx, a1->ActiveSize.cy, v9);
    return 3223192330LL;
  }
  if ( a1->ActiveSize.cx < 0x64 || a1->ActiveSize.cy < 0x64 )
  {
    WdLogSingleEntry3(2LL, a1->ActiveSize.cx, a1->ActiveSize.cy, a1);
    return 3223192331LL;
  }
  else if ( a1->TotalSize.cx < 0x64 || a1->TotalSize.cy < 0x64 )
  {
    WdLogSingleEntry3(2LL, a1->TotalSize.cx, a1->TotalSize.cy, a1);
    return 3223192332LL;
  }
  else
  {
    v7 = (int)(*(_DWORD *)&a1->AdditionalSignalInfo << 29) >> 29;
    if ( (unsigned int)(v7 - 1) > 2 )
    {
      WdLogSingleEntry2(2LL, v7, a1);
      return 3223192402LL;
    }
    else
    {
      return 0LL;
    }
  }
}
