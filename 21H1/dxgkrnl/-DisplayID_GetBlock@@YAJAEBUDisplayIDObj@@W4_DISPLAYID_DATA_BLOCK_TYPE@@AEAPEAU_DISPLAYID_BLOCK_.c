/*
 * XREFs of ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEAU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x1C005E4A4
 * Callers:
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C005E6CC (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x1C005E97C (-DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z.c)
 *     ?DisplayID_GetColorDataRaw@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE_COLOR_DEPTH@@PEA_N@Z @ 0x1C005F13C (-DisplayID_GetColorDataRaw@@YAJPEBUDisplayIDObj@@PEAUDISPLAY_COLOR_DATA_RAW@@PEAW4DISPLAY_NATIVE.c)
 *     ?DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_COLOR_DEPTHS@@@Z @ 0x1C005F290 (-DisplayID_GetColorimetryData@@YAJPEBUDisplayIDObj@@PEAUDISPLAYID_COLORIMETRY_DATA@@PEAUDISPLAY_.c)
 *     ?DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z @ 0x1C005F34C (-DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DisplayID_GetBlock(__int64 *a1, int a2, _QWORD *a3)
{
  int v3; // r11d
  int v4; // esi
  __int64 v6; // r10
  unsigned __int8 v8; // r9
  int v9; // r8d
  unsigned __int8 *v10; // rdx
  int v11; // edi
  int v12; // ecx

  *a3 = 0LL;
  v3 = 0;
  v4 = *((_DWORD *)a1 + 5);
  v6 = *a1;
  if ( v4 > 0 )
  {
    do
    {
      v8 = *(_BYTE *)(v6 + 1);
      v9 = v8;
      if ( v8 )
      {
        v10 = (unsigned __int8 *)((v6 + 4) & -(__int64)(v8 != 0));
        do
        {
          v11 = *v10;
          if ( !(_BYTE)v11 )
            break;
          v12 = v10[2] + 3;
          if ( (unsigned int)v9 < 3 || v9 < v12 )
            break;
          if ( v11 == a2 )
          {
            *a3 = v10;
            return 0LL;
          }
          v9 -= v12;
          v10 += (unsigned int)v12;
        }
        while ( v9 > 0 );
      }
      ++v3;
      v6 += (unsigned __int8)(v8 + 5);
    }
    while ( v3 < v4 );
  }
  return 3221225659LL;
}
