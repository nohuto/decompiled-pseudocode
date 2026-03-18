/*
 * XREFs of ?_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C02F5E14
 * Callers:
 *     ?_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C02F652C (-_ProcessDisplayIDBlob@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 * Callees:
 *     ?DisplayID_GetColorDataRaw@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE_COLOR_DEPTH@@PEA_N@Z @ 0x1C005F13C (-DisplayID_GetColorDataRaw@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE.c)
 *     ?DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C005F290 (-DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_.c)
 *     ?DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z @ 0x1C005F34C (-DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z.c)
 *     ?_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ @ 0x1C02F6B60 (-_SetColorPrimariesToBT709@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall DXGMONITOR::_ParseDisplayIDForHDRParams(DXGMONITOR *this)
{
  const struct DisplayIDObj *v2; // rsi
  int ColorDataRaw; // eax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // rax
  int ColorimetryData; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdi
  int v14; // eax
  char v15; // al
  char v16; // dl
  char v17; // dl
  char v18; // cl
  bool v19; // cl
  __int64 v20; // rax
  int NativeLuminance; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rdi
  unsigned int v25; // edx
  unsigned int v26; // ecx
  unsigned int v27; // eax
  __int64 v28; // rax
  __int128 v30; // [rsp+30h] [rbp-20h] BYREF
  __int128 v31; // [rsp+40h] [rbp-10h]
  unsigned int v32; // [rsp+80h] [rbp+30h] BYREF
  unsigned int v33; // [rsp+88h] [rbp+38h] BYREF
  unsigned int v34; // [rsp+90h] [rbp+40h] BYREF
  unsigned int v35; // [rsp+98h] [rbp+48h] BYREF

  if ( *((_DWORD *)this + 165) != 2 )
  {
    v2 = (DXGMONITOR *)((char *)this + 168);
    v33 = 0;
    LOBYTE(v32) = 0;
    v30 = 0LL;
    v31 = 0LL;
    ColorDataRaw = DisplayID_GetColorDataRaw(
                     (DXGMONITOR *)((char *)this + 168),
                     (struct DISPLAY_COLOR_DATA_RAW *)&v30,
                     (enum DISPLAY_NATIVE_COLOR_DEPTH *)&v33,
                     (bool *)&v32);
    v4 = ColorDataRaw;
    if ( ColorDataRaw < 0 )
    {
      DXGMONITOR::_SetColorPrimariesToBT709(this);
      v8 = WdLogNewEntry5_WdWarning(v6, v5, v7);
      *(_QWORD *)(v8 + 24) = v4;
      *(_QWORD *)(v8 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v8);
    }
    else
    {
      *((_DWORD *)this + 157) = (unsigned int)v30 >> 2;
      *((_DWORD *)this + 158) = DWORD1(v30) >> 2;
      *((_DWORD *)this + 159) = DWORD2(v30) >> 2;
      *((_DWORD *)this + 160) = HIDWORD(v30) >> 2;
      *((_DWORD *)this + 161) = (unsigned int)v31 >> 2;
      *((_DWORD *)this + 162) = DWORD1(v31) >> 2;
      *((_DWORD *)this + 163) = DWORD2(v31) >> 2;
      *((_DWORD *)this + 164) = HIDWORD(v31) >> 2;
      *((_DWORD *)this + 165) = 6;
    }
    LOBYTE(v32) = 0;
    LODWORD(v31) = 0;
    v30 = 0LL;
    ColorimetryData = DisplayID_GetColorimetryData(
                        v2,
                        (struct DISPLAYID_COLORIMETRY_DATA *)&v32,
                        (struct DISPLAY_COLOR_DEPTHS *)&v30);
    v13 = ColorimetryData;
    if ( ColorimetryData < 0 )
    {
      *(_QWORD *)((char *)this + 620) = 0LL;
      *(_OWORD *)((char *)this + 600) = 0LL;
      *((_DWORD *)this + 154) = 0;
      *((_BYTE *)this + 700) = 0;
      v20 = WdLogNewEntry5_WdWarning(v11, v10, v12);
      *(_QWORD *)(v20 + 24) = v13;
      *(_QWORD *)(v20 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v20);
    }
    else
    {
      v14 = v31;
      *(_OWORD *)((char *)this + 600) = v30;
      *((_DWORD *)this + 154) = v14;
      v15 = v32;
      v16 = (unsigned __int8)v32 >> 5;
      *((_BYTE *)this + 624) = (v32 & 8) != 0;
      v17 = v16 & 1;
      if ( !v17 || (v18 = 1, (*((_DWORD *)this + 150) & 0x3C) == 0) )
        v18 = 0;
      *((_BYTE *)this + 627) = v18;
      v19 = v17
         && ((*((_DWORD *)this + 151) & 0x3C) != 0
          || (*((_DWORD *)this + 152) & 0x3C) != 0
          || (*((_DWORD *)this + 153) & 0x3C) != 0);
      *((_BYTE *)this + 626) = v19;
      *((_BYTE *)this + 700) = (v15 & 0x40) != 0;
      *((_BYTE *)this + 625) = 0;
      *(_WORD *)((char *)this + 621) = 0;
      *((_BYTE *)this + 623) = 0;
      *((_BYTE *)this + 620) = 0;
    }
    v34 = 0;
    v32 = 0;
    v33 = 0;
    v35 = 0;
    NativeLuminance = DisplayID_GetNativeLuminance(v2, &v34, &v32, &v33, &v35);
    v24 = NativeLuminance;
    *((_BYTE *)this + 692) = 0;
    if ( NativeLuminance < 0 )
    {
      *((_DWORD *)this + 174) = 3;
      *((_DWORD *)this + 167) = 2700000;
      *((_DWORD *)this + 166) = 5000;
      *((_DWORD *)this + 168) = 2700000;
      *((_DWORD *)this + 170) = 2700000;
      *((_DWORD *)this + 169) = 5000;
      *((_DWORD *)this + 171) = 2700000;
      v28 = WdLogNewEntry5_WdWarning(5000LL, v22, v23);
      *(_QWORD *)(v28 + 24) = v24;
      *(_QWORD *)(v28 + 32) = *((unsigned int *)this + 11);
      WdLogEvent5_WdWarning(v28);
    }
    else
    {
      v25 = v32;
      v26 = v33;
      v27 = v34;
      *((_DWORD *)this + 167) = v32;
      *((_DWORD *)this + 166) = v26;
      *((_DWORD *)this + 168) = v27;
      *((_DWORD *)this + 170) = v25;
      *((_DWORD *)this + 169) = v26;
      *((_DWORD *)this + 171) = v27;
      *((_DWORD *)this + 174) = 7;
    }
  }
  return 0LL;
}
