/*
 * XREFs of ?ScaleCursorShapeCoreBilinear@@YAJAEBUCURSOR_SCALING_INFO@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU2@@Z @ 0x1C032D6D8
 * Callers:
 *     ?ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAU3@4PEBU_DXGK_DRIVERCAPS@@AEAH@Z @ 0x1C01A5940 (-ScaleCursorShape@@YAJAEBUtagRECT@@PEBU1@W4_D3DKMDT_VIDPN_PRESENT_PATH_ROTATION@@PEBU_DXGKARG_SE.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x1C0008E10 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall ScaleCursorShapeCoreBilinear(
        const struct CURSOR_SCALING_INFO *a1,
        const struct _DXGKARG_SETPOINTERSHAPE *a2,
        struct _DXGKARG_SETPOINTERSHAPE *a3)
{
  UINT Value; // r9d
  const struct CURSOR_SCALING_INFO *v6; // rsi
  UINT v7; // r10d
  UINT v8; // r12d
  bool v9; // r9
  bool v10; // r10
  UINT v11; // r14d
  int v12; // ebp
  UINT v13; // ecx
  float v14; // xmm7_4
  float v15; // xmm6_4
  int v16; // r15d
  float v17; // xmm5_4
  __int64 v18; // r12
  int v19; // ebp
  float v20; // xmm4_4
  char *v21; // r11
  __int64 v22; // r13
  UINT Pitch; // ecx
  float v24; // xmm4_4
  float v25; // xmm3_4
  float v26; // xmm1_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  int v30; // r13d
  int v31; // r8d
  int v32; // edx
  int v33; // ecx
  unsigned int v34; // eax
  unsigned int v35; // eax
  int v36; // r8d
  int v37; // edx
  int v38; // r13d
  int v39; // eax
  __int64 v40; // rdx
  unsigned int v41; // ecx
  UINT v42; // eax
  unsigned int v43; // ecx
  int v45; // [rsp+50h] [rbp-A8h]
  int v46; // [rsp+54h] [rbp-A4h]
  __int64 v47; // [rsp+60h] [rbp-98h]
  __int64 v48; // [rsp+68h] [rbp-90h]
  char *v49; // [rsp+70h] [rbp-88h]
  int v50; // [rsp+78h] [rbp-80h]
  UINT v51; // [rsp+80h] [rbp-78h]
  unsigned int v53; // [rsp+108h] [rbp+10h]
  unsigned int v54; // [rsp+118h] [rbp+20h]

  Value = a2->Flags.Value;
  v6 = a1;
  if ( (a2->Flags.Value & 6) == 0 )
  {
    WdLogSingleEntry1(1LL, 741LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pOrigCursorShape->Flags.Color || pOrigCursorShape->Flags.MaskedColor",
      741LL,
      0LL,
      0LL,
      0LL,
      0LL);
    Value = a2->Flags.Value;
  }
  v7 = a3->Flags.Value;
  if ( (a3->Flags.Value & 2) == 0 && (Value & 4) == 0 )
  {
    WdLogSingleEntry1(1LL, 742LL);
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pNewCursorShape->Flags.Color || pOrigCursorShape->Flags.MaskedColor",
      742LL,
      0LL,
      0LL,
      0LL,
      0LL);
    Value = a2->Flags.Value;
    v7 = a3->Flags.Value;
  }
  v8 = *((_DWORD *)v6 + 5);
  v9 = (Value & 4) != 0;
  v10 = (v7 & 4) != 0;
  v51 = v8;
  v11 = *((_DWORD *)v6 + 4);
  v12 = 0;
  v46 = 0;
  v13 = 4 * v11;
  v14 = (float)(int)a2->Width / (float)(int)v11;
  v15 = (float)(int)a2->Height / (float)(int)v8;
  if ( v8 )
  {
    do
    {
      v16 = 0;
      if ( v11 )
      {
        v17 = (float)v12 * v15;
        v18 = v13 * v12;
        v19 = (int)v17;
        do
        {
          v20 = (float)v16 * v14;
          v21 = (char *)a2->pPixels + (unsigned int)(4 * (int)v20) + (unsigned __int64)(v19 * a2->Pitch);
          v22 = a2->Width - 1 != (int)v20 ? 4 : 0;
          Pitch = 0;
          v48 = v22;
          if ( v19 != a2->Height - 1 )
            Pitch = a2->Pitch;
          v47 = Pitch;
          v49 = &v21[v22 + Pitch];
          v54 = *(_DWORD *)&v21[v22];
          v24 = v20 - (float)(int)v20;
          v53 = *(_DWORD *)&v21[Pitch];
          v25 = v17 - (float)v19;
          v26 = (float)((float)(1.0 - v25) * v24) * 256.0;
          v27 = (float)((float)(1.0 - v25) * (float)(1.0 - v24)) * 256.0;
          v28 = (float)((float)(1.0 - v24) * v25) * 256.0;
          v29 = (float)(v25 * v24) * 256.0;
          v50 = (int)v28;
          v30 = (int)v26;
          v31 = (int)v27;
          v32 = (unsigned __int8)((unsigned __int16)(v31 * (unsigned __int8)*(_DWORD *)v21
                                                   + v30 * (unsigned __int8)v54
                                                   + v50 * (unsigned __int8)v53
                                                   + (int)v29 * (unsigned __int8)*(_DWORD *)v49) >> 8) | ((_WORD)v31 * (unsigned __int8)v21[1] + (_WORD)v30 * (unsigned __int8)v21[v48 + 1] + (_WORD)v50 * (unsigned __int8)v21[Pitch + 1] + (unsigned __int16)(int)v29 * (unsigned __int8)v49[1]) & 0xFF00 | ((v31 * (unsigned __int8)v21[2] + v30 * (unsigned __int8)v21[v48 + 2] + v50 * (unsigned __int8)v21[Pitch + 2] + (int)v29 * (unsigned __int8)v49[2]) << 8) & 0xFF0000;
          v45 = v32;
          v33 = (unsigned __int8)v49[3];
          if ( v10 )
          {
            v34 = v32 | ((((_WORD)v31 * (unsigned __int8)v21[3]
                         + (_WORD)v30 * (unsigned __int8)v21[v48 + 3]
                         + (_WORD)v50 * (unsigned __int8)v21[v47 + 3]
                         + (unsigned __int16)(int)v29 * (_WORD)v33) & 0x8000) != 0
                       ? 0xFF000000
                       : 0);
            if ( v34 >= 0x1000000 )
            {
              v35 = v32 & 0xFFFF00FF | ((((_WORD)v31 * (unsigned __int8)v21[3]
                                        + (_WORD)v30 * (unsigned __int8)v21[v48 + 3]
                                        + (_WORD)v50 * (unsigned __int8)v21[v47 + 3]
                                        + (unsigned __int16)(int)v29 * (_WORD)v33) & 0x8000) != 0
                                      ? 0xFF000000
                                      : 0) | (((v54 & (v54 >> 8) | *(_DWORD *)v21 & (*(_DWORD *)v21 >> 8) | *(_DWORD *)v49 & (*(_DWORD *)v49 >> 8) | v53 & (v53 >> 8)) & 0xFFFF0000) != 0
                                            ? 0xFF00
                                            : 0);
              v34 = ((unsigned __int8)(v35 ^ BYTE1(v35)) ^ v35 ^ (((unsigned __int8)(v35 ^ BYTE1(v35)) ^ v35) << 16)) & 0xFF0000 ^ (unsigned __int8)(v35 ^ BYTE1(v35)) ^ v35;
            }
          }
          else
          {
            v36 = (unsigned __int8)v21[3];
            v37 = (unsigned __int8)v21[v47 + 3];
            v38 = (unsigned __int8)v21[v48 + 3];
            if ( v9 )
              v39 = (int)v26 * (255 - v38) + (int)v27 * (255 - v36) + (int)v28 * (255 - v37) + (int)v29 * (255 - v33);
            else
              v39 = (int)v26 * v38 + (int)v27 * v36 + (int)v28 * v37 + (int)v29 * v33;
            v34 = v45 | (v39 << 16) & 0xFF000000;
          }
          v40 = v18 + (unsigned int)(4 * v16++);
          *(_DWORD *)((char *)a3->pPixels + v40) = v34;
        }
        while ( v16 < v11 );
        v12 = v46;
        v8 = v51;
        v13 = 4 * v11;
      }
      v46 = ++v12;
    }
    while ( v12 < v8 );
    v6 = a1;
  }
  a3->VidPnSourceId = a2->VidPnSourceId;
  a3->Pitch = v13;
  v41 = *((_DWORD *)v6 + 2);
  a3->Width = v11;
  a3->Height = v8;
  v42 = (v41 + *(_DWORD *)v6 * a2->XHot - 1) / v41;
  v43 = *((_DWORD *)v6 + 3);
  a3->XHot = v42;
  a3->YHot = (v43 + *((_DWORD *)v6 + 1) * a2->YHot - 1) / v43;
  return 0LL;
}
