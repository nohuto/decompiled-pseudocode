/*
 * XREFs of ?DisplayID_GetNativeLuminance@@YAJPEBUDisplayIDObj@@PEAK11PEAI@Z @ 0x1C00611AC
 * Callers:
 *     ?_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z @ 0x1C01695C8 (-_DispatchInternalIOCtrl@DXGMONITOR@@QEAAJKKPEAXK0PEA_K@Z.c)
 *     ?_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ @ 0x1C02FA6E4 (-_ParseDisplayIDForHDRParams@DXGMONITOR@@AEAAJXZ.c)
 * Callees:
 *     ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEAU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x1C0060304 (-DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEAU_DISPLAYID_BLOCK_.c)
 *     ?IsValidBlock@DisplayID_DisplayParameters_Parser@@QEBA_NXZ @ 0x1C0060EC8 (-IsValidBlock@DisplayID_DisplayParameters_Parser@@QEBA_NXZ.c)
 *     ?ConvertHalfToFloat@@YAMG@Z @ 0x1C0060F24 (-ConvertHalfToFloat@@YAMG@Z.c)
 */

__int64 __fastcall DisplayID_GetNativeLuminance(
        const struct DisplayIDObj *a1,
        unsigned int *a2,
        unsigned int *a3,
        unsigned int *a4,
        unsigned int *a5)
{
  unsigned int *v8; // rbx
  __int64 v10; // r10
  float v11; // xmm0_4
  __int64 v12; // r10
  __int16 v13; // r11
  __int16 v14; // cx
  float v15; // xmm0_4
  __int64 v16; // r10
  __int16 v17; // r11
  __int16 v18; // cx
  __int64 v19; // r10
  __int64 v20; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 )
  {
    if ( a2 )
    {
      if ( a3 )
      {
        if ( a4 )
        {
          v8 = a5;
          if ( a5 )
          {
            if ( !*((_BYTE *)a1 + 16) )
              return 3223126019LL;
            v20 = 0LL;
            if ( (int)DisplayID_GetBlock((__int64 *)a1, 33, &v20) < 0 )
              return 3221226021LL;
            if ( DisplayID_DisplayParameters_Parser::IsValidBlock((DisplayID_DisplayParameters_Parser *)&v20) )
            {
              v11 = ConvertHalfToFloat(*(unsigned __int8 *)(v10 + 24) + (*(unsigned __int8 *)(v10 + 25) << 8));
              v14 = v13 * *(unsigned __int8 *)(v12 + 27);
              *a2 = (int)(float)(v11 * 10000.0);
              v15 = ConvertHalfToFloat(*(unsigned __int8 *)(v12 + 26) + v14);
              v18 = v17 * *(unsigned __int8 *)(v16 + 29);
              *a3 = (int)(float)(v15 * 10000.0);
              *a4 = (int)(float)(ConvertHalfToFloat(*(unsigned __int8 *)(v16 + 28) + v18) * 10000.0);
              *v8 = *(unsigned __int8 *)(v19 + 31) + 100;
              return 0LL;
            }
          }
        }
      }
    }
  }
  return 3221225485LL;
}
