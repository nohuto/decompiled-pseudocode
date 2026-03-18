/*
 * XREFs of ?bDetermineAlphaBlendFunction@@YGHPAVSURFACE@@0PAVXEPALOBJ@@1PAVXLATE@@JPAU_ALPHA_DISPATCH_FORMAT@@H@Z @ 0x52E72
 * Callers:
 *     _EngAlphaBlend@28 @ 0x526B0 (_EngAlphaBlend@28.c)
 * Callees:
 *     <none>
 */

int __userpurge bDetermineAlphaBlendFunction@<eax>(
        int a1@<edx>,
        int a2@<ecx>,
        struct SURFACE *a3,
        struct SURFACE *a4,
        struct XEPALOBJ *a5,
        struct XEPALOBJ *a6,
        struct XLATE *a7,
        int a8,
        struct _ALPHA_DISPATCH_FORMAT *a9,
        int a10)
{
  char v10; // al
  int v11; // eax
  void (__stdcall *v12)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // ebx
  void (__stdcall *v13)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // edx
  void (__stdcall *v14)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // edi
  int v15; // edx
  void *v16; // eax
  void (__stdcall *v17)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // ecx
  int v18; // ecx
  _DWORD *v19; // eax
  int v20; // ecx
  void (__stdcall *v22)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // eax
  _DWORD *v23; // eax
  int v24; // eax
  _DWORD *v25; // eax
  void *v26; // eax
  void (__stdcall *v27)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *); // ecx
  _DWORD *v28; // eax
  void *v29; // eax
  void (__stdcall *v30)(unsigned int *, unsigned __int8 *, int, int, XLATEOBJ *); // ecx
  int v31; // eax
  _DWORD *v32; // eax
  _DWORD *v33; // eax
  int v34; // eax
  int v36; // [esp+10h] [ebp-4h]

  v36 = 1;
  v10 = *((_BYTE *)a7 + 27);
  *((_DWORD *)a7 + 7) = 0;
  v11 = v10 & 1;
  if ( v11 && *((_BYTE *)a7 + 26) == 0xFF )
  {
    *((_DWORD *)a7 + 5) = vAlphaPerPixelOnly;
    if ( (int)a6 >= 8 && gbMMXProcessor && !a8 )
    {
      *((_DWORD *)a7 + 5) = mmxAlphaPerPixelOnly;
LABEL_7:
      *((_DWORD *)a7 + 7) = 1;
    }
  }
  else if ( v11 )
  {
    *((_DWORD *)a7 + 5) = vAlphaPerPixelAndConst;
    if ( gbMMXProcessor && (int)a6 >= 8 && !a8 )
    {
      *((_DWORD *)a7 + 5) = mmxAlphaPerPixelAndConst;
      goto LABEL_7;
    }
  }
  else
  {
    *((_DWORD *)a7 + 5) = vAlphaConstOnly;
  }
  v12 = vLoadAndConvertRGB32ToBGRA;
  v13 = vLoadAndConvertBGR24ToBGRA;
  v14 = vLoadAndConvert16BitfieldsToBGRA;
  switch ( *(_DWORD *)(a2 + 60) )
  {
    case 1:
      *((_DWORD *)a7 + 3) = vLoadAndConvert1ToBGRA;
      *((_DWORD *)a7 + 4) = &vConvertAndSaveBGRATo1;
      *(_DWORD *)a7 = 1;
      break;
    case 2:
      *((_DWORD *)a7 + 3) = vLoadAndConvert4ToBGRA;
      *((_DWORD *)a7 + 4) = &vConvertAndSaveBGRATo4;
      *(_DWORD *)a7 = 4;
      break;
    case 3:
      *((_DWORD *)a7 + 3) = vLoadAndConvert8ToBGRA;
      *((_DWORD *)a7 + 4) = &vConvertAndSaveBGRATo8;
      *(_DWORD *)a7 = 8;
      break;
    case 4:
      v28 = *(_DWORD **)(*(_DWORD *)a3 + 76);
      if ( *v28 == 63488 && v28[1] == 2016 && v28[2] == 31 )
      {
        v29 = &vConvertAndSaveBGRAToRGB16_565;
        v30 = vLoadAndConvertRGB16_565ToBGRA;
      }
      else if ( *v28 == 31744 && v28[1] == 992 && v28[2] == 31 )
      {
        v29 = &vConvertAndSaveBGRAToRGB16_555;
        v30 = vLoadAndConvertRGB16_555ToBGRA;
      }
      else
      {
        v29 = &vConvertAndSaveBGRAToRGB16Bitfields;
        v30 = vLoadAndConvert16BitfieldsToBGRA;
      }
      *((_DWORD *)a7 + 3) = v30;
      *((_DWORD *)a7 + 4) = v29;
      *(_DWORD *)a7 = 16;
      break;
    case 5:
      v24 = *(_DWORD *)(*(_DWORD *)a3 + 16);
      if ( (v24 & 8) != 0
        || (v24 & 2) != 0
        && ((v25 = *(_DWORD **)(*(_DWORD *)a3 + 76), *v25 == 16711680) && v25[1] == 65280 && v25[2] == 255
         || !*v25 && !v25[1] && !v25[2]) )
      {
        v26 = &vConvertAndSaveBGRAToBGR24;
        v27 = vLoadAndConvertBGR24ToBGRA;
      }
      else
      {
        v26 = &vConvertAndSaveBGRAToRGB24;
        v27 = vLoadAndConvertRGB24ToBGRA;
      }
      *((_DWORD *)a7 + 3) = v27;
      *((_DWORD *)a7 + 4) = v26;
      *(_DWORD *)a7 = 24;
      break;
    case 6:
      v15 = *(_DWORD *)(*(_DWORD *)a3 + 16);
      if ( (v15 & 8) != 0
        || (v15 & 2) != 0
        && ((v23 = *(_DWORD **)(*(_DWORD *)a3 + 76), *v23 == 16711680) && v23[1] == 65280 && v23[2] == 255
         || !*v23 && !v23[1] && !v23[2]) )
      {
        v16 = 0;
        v17 = 0;
      }
      else if ( (v15 & 4) != 0 )
      {
        v16 = &vConvertAndSaveBGRAToRGB32;
        v17 = vLoadAndConvertRGB32ToBGRA;
      }
      else
      {
        v16 = &vConvertAndSaveBGRATo32Bitfields;
        v17 = vLoadAndConvert32BitfieldsToBGRA;
      }
      *((_DWORD *)a7 + 3) = v17;
      v13 = vLoadAndConvertBGR24ToBGRA;
      *((_DWORD *)a7 + 4) = v16;
      *(_DWORD *)a7 = 32;
      break;
    default:
      v36 = 0;
      break;
  }
  switch ( *(_DWORD *)(a1 + 60) )
  {
    case 1:
      *((_DWORD *)a7 + 2) = vLoadAndConvert1ToBGRA;
      *((_DWORD *)a7 + 1) = 1;
      goto LABEL_31;
    case 2:
      *((_DWORD *)a7 + 2) = vLoadAndConvert4ToBGRA;
      *((_DWORD *)a7 + 1) = 4;
      goto LABEL_31;
    case 3:
      *((_DWORD *)a7 + 2) = vLoadAndConvert8ToBGRA;
      *((_DWORD *)a7 + 1) = 8;
LABEL_31:
      v20 = v36;
      goto LABEL_32;
    case 4:
      v33 = *(_DWORD **)(*(_DWORD *)a4 + 76);
      if ( *v33 == 63488 && v33[1] == 2016 && v33[2] == 31 )
      {
        v14 = vLoadAndConvertRGB16_565ToBGRA;
      }
      else if ( *v33 == 31744 && v33[1] == 992 && v33[2] == 31 )
      {
        v14 = vLoadAndConvertRGB16_555ToBGRA;
      }
      *((_DWORD *)a7 + 2) = v14;
      *((_DWORD *)a7 + 1) = 16;
      goto LABEL_31;
    case 5:
      v31 = *(_DWORD *)(*(_DWORD *)a4 + 16);
      if ( (v31 & 8) == 0 )
      {
        if ( (v31 & 2) == 0
          || ((v32 = *(_DWORD **)(*(_DWORD *)a4 + 76), *v32 != 16711680) || v32[1] != 65280 || v32[2] != 255)
          && (*v32 || v32[1] || v32[2]) )
        {
          v13 = vLoadAndConvertRGB24ToBGRA;
        }
      }
      *((_DWORD *)a7 + 2) = v13;
      *((_DWORD *)a7 + 1) = 24;
      goto LABEL_31;
    case 6:
      if ( !a5
        || (v18 = *(_DWORD *)(*(_DWORD *)a4 + 16), (v18 & 8) != 0)
        || (v18 & 2) != 0
        && ((v19 = *(_DWORD **)(*(_DWORD *)a4 + 76), *v19 == 16711680) && v19[1] == 65280 && v19[2] == 255
         || !*v19 && !v19[1] && !v19[2]) )
      {
        v12 = 0;
      }
      else if ( (v18 & 4) == 0 )
      {
        v12 = vLoadAndConvert32BitfieldsToBGRA;
      }
      *((_DWORD *)a7 + 2) = v12;
      *((_DWORD *)a7 + 1) = 32;
      goto LABEL_31;
  }
  v20 = 0;
LABEL_32:
  if ( *((int (__stdcall **)(int, int, int, __int16))a7 + 5) != vAlphaConstOnly )
    return v20;
  v22 = (void (__stdcall *)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))*((_DWORD *)a7 + 2);
  if ( v22 == vLoadAndConvertRGB16_555ToBGRA
    && *((void (__stdcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 3) == vLoadAndConvertRGB16_555ToBGRA )
  {
    *((_DWORD *)a7 + 5) = vAlphaConstOnly16_555;
    if ( !gbMMXProcessor || (int)a6 < 8 || a8 )
      goto LABEL_118;
    *((_DWORD *)a7 + 5) = mmxAlphaConstOnly16_555;
    goto LABEL_117;
  }
  if ( v22 == vLoadAndConvertRGB16_565ToBGRA
    && *((void (__stdcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 3) == vLoadAndConvertRGB16_565ToBGRA )
  {
    *((_DWORD *)a7 + 5) = vAlphaConstOnly16_565;
    if ( !gbMMXProcessor || (int)a6 < 8 || a8 )
      goto LABEL_118;
    *((_DWORD *)a7 + 5) = mmxAlphaConstOnly16_565;
LABEL_117:
    *((_DWORD *)a7 + 7) = 1;
LABEL_118:
    v34 = *((unsigned __int8 *)a7 + 26);
    *((_DWORD *)a7 + 2) = 0;
    *((_DWORD *)a7 + 3) = 0;
    *((_DWORD *)a7 + 4) = 0;
    *((_BYTE *)a7 + 26) = (31 * v34 + 128) / 0xFFu;
    return v20;
  }
  if ( v22 == vLoadAndConvertRGB24ToBGRA
    && *((void (__stdcall **)(unsigned int *, unsigned __int8 *, int, int, struct _XLATEOBJ *))a7 + 3) == vLoadAndConvertRGB24ToBGRA )
  {
    *((_DWORD *)a7 + 5) = vAlphaConstOnly24;
    if ( gbMMXProcessor && (int)a6 >= 8 && !a8 )
    {
      *((_DWORD *)a7 + 5) = mmxAlphaConstOnly24;
      *((_DWORD *)a7 + 7) = 1;
    }
    *((_DWORD *)a7 + 2) = 0;
    *((_DWORD *)a7 + 3) = 0;
    *((_DWORD *)a7 + 4) = 0;
  }
  return v20;
}
