/*
 * XREFs of ?GetColorimetryData@DisplayIdMonitorDescriptor@DxgMonitor@@UEBAJAEAUDISPLAY_COLORIMETRY_DATA@@AEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C03BB000
 * Callers:
 *     <none>
 * Callees:
 *     ?DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C0072404 (-DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_.c)
 */

__int64 __fastcall DxgMonitor::DisplayIdMonitorDescriptor::GetColorimetryData(
        DxgMonitor::DisplayIdMonitorDescriptor *this,
        struct DISPLAY_COLORIMETRY_DATA *a2,
        struct DISPLAY_COLOR_DEPTHS *a3)
{
  int ColorimetryData; // r9d
  int v6; // ecx
  char v7; // r8
  char v8; // cl
  bool v9; // al
  __int128 v11; // [rsp+20h] [rbp-20h] BYREF
  int v12; // [rsp+30h] [rbp-10h]
  unsigned __int8 v13; // [rsp+50h] [rbp+10h] BYREF

  v13 = 0;
  v12 = 0;
  v11 = 0LL;
  ColorimetryData = DisplayID_GetColorimetryData(
                      (DxgMonitor::DisplayIdMonitorDescriptor *)((char *)this + 24),
                      (struct DISPLAYID_COLORIMETRY_DATA *)&v13,
                      (struct DISPLAY_COLOR_DEPTHS *)&v11);
  if ( ColorimetryData >= 0 )
  {
    v6 = v12;
    v7 = 1;
    *(_OWORD *)a3 = v11;
    *((_DWORD *)a3 + 4) = v6;
    LOBYTE(v6) = v13 >> 5;
    *((_BYTE *)a2 + 4) = (v13 & 8) != 0;
    v8 = v6 & 1;
    v9 = v8 && (v11 & 0x3C) != 0;
    *((_BYTE *)a2 + 7) = v9;
    if ( !v8 || (BYTE4(v11) & 0x3C) == 0 && (BYTE8(v11) & 0x3C) == 0 && (BYTE12(v11) & 0x3C) == 0 )
      v7 = 0;
    *(_WORD *)((char *)a2 + 1) = 0;
    *((_BYTE *)a2 + 6) = v7;
    *((_BYTE *)a2 + 5) = 0;
    *((_BYTE *)a2 + 3) = 0;
    *(_BYTE *)a2 = 0;
  }
  return (unsigned int)ColorimetryData;
}
