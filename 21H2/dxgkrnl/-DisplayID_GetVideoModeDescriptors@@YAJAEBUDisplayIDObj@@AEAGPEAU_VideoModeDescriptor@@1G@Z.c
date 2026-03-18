/*
 * XREFs of ?DisplayID_GetVideoModeDescriptors@@YAJAEBUDisplayIDObj@@AEAGPEAU_VideoModeDescriptor@@1G@Z @ 0x1C0072BD8
 * Callers:
 *     ?DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z @ 0x1C0072AE4 (-DisplayID_GetSupportedModes@@YAJPEBUDisplayIDObj@@PEAK1PEAU_VideoModeDescriptor@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1C000CD40 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     memset @ 0x1C002CFC0 (memset.c)
 *     ?AddVideoModesWithStereoCode@@YAXW4__WMI_MONITOR_VIDEO_MODE_STEREO_TYPE@@_NGPEAU_VideoModeDescriptor@@AEAG2@Z @ 0x1C0072624 (-AddVideoModesWithStereoCode@@YAXW4__WMI_MONITOR_VIDEO_MODE_STEREO_TYPE@@_NGPEAU_VideoModeDescri.c)
 *     ?DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_HEADER@@@Z @ 0x1C00726F4 (-DisplayID_GetBlock@@YAJAEBUDisplayIDObj@@W4_DISPLAYID_DATA_BLOCK_TYPE@@AEAPEBU_DISPLAYID_BLOCK_.c)
 *     ?DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z @ 0x1C0072928 (-DisplayID_GetPhysicalSize@@YAJPEBUDisplayIDObj@@PEAI1@Z.c)
 *     ?DisplayID_GetVideoModeFromType7Desc@@YAJAEBU_DISPLAYID_DETAILED_TIMING_DESCRIPTOR@@AEAU_VideoModeDescriptor@@@Z @ 0x1C0072FE8 (-DisplayID_GetVideoModeFromType7Desc@@YAJAEBU_DISPLAYID_DETAILED_TIMING_DESCRIPTOR@@AEAU_VideoMo.c)
 *     ?IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ @ 0x1C00732B8 (-IsValidBlock@DisplayID_Type7Timing_Parser@@QEBA_NXZ.c)
 */

__int64 __fastcall DisplayID_GetVideoModeDescriptors(
        const struct DisplayIDObj *a1,
        unsigned __int16 *a2,
        struct _VideoModeDescriptor *a3,
        unsigned __int16 *a4,
        unsigned __int16 a5)
{
  unsigned __int16 *v5; // r14
  const struct DisplayIDObj *v7; // r13
  __int64 result; // rax
  __int64 v9; // r9
  bool v10; // r12
  unsigned __int64 v11; // rax
  char v12; // bl
  char v13; // al
  int v14; // edx
  __int64 v15; // rcx
  unsigned __int16 v16; // di
  __int16 v17; // r10
  unsigned int v18; // r15d
  _BYTE *v19; // r14
  char v20; // al
  unsigned __int64 v21; // rcx
  int v22; // r9d
  unsigned int v23; // r11d
  unsigned __int8 v24; // r8
  unsigned __int8 v25; // r13
  __int64 v26; // rax
  const struct _DISPLAYID_DETAILED_TIMING_DESCRIPTOR *v27; // rcx
  __int64 v28; // r8
  unsigned __int8 v29; // al
  unsigned __int16 v30; // dx
  USHORT v31; // dx
  USHORT *p_HorizontalImageSize; // rax
  USHORT v33; // r8
  __int64 v34; // rcx
  int v35; // [rsp+38h] [rbp-91h] BYREF
  int v36; // [rsp+3Ch] [rbp-8Dh]
  unsigned int v37[2]; // [rsp+40h] [rbp-89h] BYREF
  __int64 v38; // [rsp+48h] [rbp-81h]
  _BYTE *v39; // [rsp+50h] [rbp-79h] BYREF
  PVOID P; // [rsp+58h] [rbp-71h]
  __int64 v41; // [rsp+60h] [rbp-69h]
  struct _VideoModeDescriptor *v42; // [rsp+68h] [rbp-61h]
  unsigned __int64 v43; // [rsp+70h] [rbp-59h]
  __int64 v44; // [rsp+78h] [rbp-51h]
  _BYTE *v45; // [rsp+80h] [rbp-49h] BYREF
  char v46; // [rsp+88h] [rbp-41h]
  char v49; // [rsp+138h] [rbp+6Fh]

  v5 = a4;
  v7 = a1;
  if ( !a3 )
    return 3221225485LL;
  v38 = *a2;
  memset(a3, 0, 56 * v38);
  v37[0] = 0;
  *v5 = -1;
  v37[1] = 0;
  result = DisplayID_GetPhysicalSize(v7, v37, &v37[1]);
  if ( (int)result >= 0 )
  {
    v39 = 0LL;
    v49 = 0;
    v10 = (int)DisplayID_GetBlock((__int64 *)v7, 39, &v39) >= 0;
    P = 0LL;
    if ( !a5 )
      goto LABEL_9;
    v11 = 56LL * a5;
    if ( !is_mul_ok(a5, 0x38uLL) )
      v11 = -1LL;
    P = (PVOID)operator new[](v11, 0x32444944u, 256LL, v9);
    if ( P )
    {
LABEL_9:
      v12 = 0;
      if ( v10 )
      {
        if ( *v39 == 39 && (unsigned __int8)(v39[2] - 3) <= 0xF5u && v39[3] > 1u )
        {
          v13 = v39[1];
          if ( (v13 & 7) != 0 )
          {
            if ( (v13 & 0x40) != 0 )
            {
              v10 = 0;
            }
            else if ( v13 < 0 )
            {
              v49 = 1;
            }
          }
          else
          {
            v49 = (unsigned __int8)v13 >> 7;
          }
          v12 = 5;
          if ( v39[4] )
          {
            if ( v39[4] == 1 )
            {
              v12 = 6;
            }
            else if ( v39[4] == 3 )
            {
              v12 = (v39[5] != 0) + 3;
            }
          }
          else
          {
            v12 = (v39[5] != 0) + 1;
          }
        }
        else
        {
          v10 = 0;
        }
      }
      v14 = 0;
      v15 = *(_QWORD *)v7;
      v16 = 0;
      v41 = *(_QWORD *)v7;
      v36 = 0;
      LOWORD(v35) = 0;
      if ( *((int *)v7 + 5) > 0 )
      {
        v17 = v38;
        do
        {
          v18 = *(unsigned __int8 *)(v15 + 1);
          if ( v18 >= 3 )
          {
            v19 = (_BYTE *)((v15 + 4) & -(__int64)((_BYTE)v18 != 0));
            do
            {
              v20 = *v19;
              if ( !*v19 )
                break;
              v21 = (unsigned __int8)v19[2];
              v22 = v21 + 3;
              LODWORD(v39) = v21 + 3;
              v23 = v21 + 3;
              v44 = (unsigned int)(v21 + 3);
              if ( (int)v18 < (int)v21 + 3 )
                break;
              if ( v20 == 34 )
              {
                v45 = v19;
                v43 = v21 / 0x14;
                v46 = v21 / 0x14;
                if ( DisplayID_Type7Timing_Parser::IsValidBlock((DisplayID_Type7Timing_Parser *)&v45) )
                {
                  v25 = 0;
                  if ( v24 )
                  {
                    while ( 1 )
                    {
                      v26 = v38;
                      if ( !(_WORD)v38 )
                        break;
                      LOWORD(v26) = v38 - 1;
                      v38 = v26;
                      v42 = &a3[v16];
                      if ( v25 >= v24 )
                        v27 = 0LL;
                      else
                        v27 = (const struct _DISPLAYID_DETAILED_TIMING_DESCRIPTOR *)&v19[20 * v25 + 3];
                      if ( (int)DisplayID_GetVideoModeFromType7Desc(v27, &a3[v16]) >= 0 )
                      {
                        if ( v10 )
                        {
                          AddVideoModesWithStereoCode(v12, v49, v28, (__int64)P, &v35, (__int64)a3);
                          v16 = v35;
                        }
                        else
                        {
                          v42->StereoModeType = 0;
                          LOWORD(v35) = ++v16;
                        }
                      }
                      v24 = v43;
                      if ( ++v25 >= (unsigned __int8)v43 )
                      {
                        v22 = (int)v39;
                        v17 = v38;
                        v23 = v44;
                        goto LABEL_45;
                      }
                    }
                    v17 = 0;
                    break;
                  }
LABEL_45:
                  if ( !v17 )
                    break;
                }
              }
              v18 -= v22;
              v19 += v23;
            }
            while ( v18 >= 3 );
            v15 = v41;
            v5 = a4;
            v14 = v36;
            v7 = a1;
          }
          if ( !v14 && v16 )
            *v5 = 0;
          if ( !v17 )
            break;
          ++v14;
          v29 = *(_BYTE *)(v15 + 1) + 5;
          v36 = v14;
          v15 += v29;
          v41 = v15;
        }
        while ( v14 < *((_DWORD *)v7 + 5) );
      }
      *a2 = v16;
      if ( P )
        ExFreePoolWithTag(P, 0);
      if ( v16 )
      {
        if ( *v5 == 0xFFFF )
        {
          *v5 = 0;
          v30 = 0;
          while ( !(unsigned __int16)_mm_extract_epi16(*(__m128i *)&a3[v30].HorizontalSyncPulseWidth, 2) )
          {
            if ( ++v30 >= v16 )
              goto LABEL_65;
          }
          *v5 = v30;
        }
LABEL_65:
        v31 = v37[0];
        p_HorizontalImageSize = &a3->HorizontalImageSize;
        v33 = v37[1];
        v34 = v16;
        do
        {
          *((_BYTE *)p_HorizontalImageSize + 17) = 2;
          *p_HorizontalImageSize = v31;
          p_HorizontalImageSize[1] = v33;
          p_HorizontalImageSize += 28;
          --v34;
        }
        while ( v34 );
        return 0LL;
      }
      else
      {
        return 3221225659LL;
      }
    }
    else
    {
      return 3221225495LL;
    }
  }
  return result;
}
