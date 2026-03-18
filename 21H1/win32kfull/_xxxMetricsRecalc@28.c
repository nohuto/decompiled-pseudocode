/*
 * XREFs of _xxxMetricsRecalc@28 @ 0x145FE4
 * Callers:
 *     xxxSystemParametersInfoWorker @ 0x270DA (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetAndDrawMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@@Z @ 0xD9E9E (-xxxSetAndDrawMinMetrics@@YGHPAU_UNICODE_STRING@@PAUtagMINIMIZEDMETRICS@@@Z.c)
 *     ?xxxSetAndDrawNCMetrics@@YGHPAU_UNICODE_STRING@@HPAUtagNONCLIENTMETRICSW@@@Z @ 0x145A20 (-xxxSetAndDrawNCMetrics@@YGHPAU_UNICODE_STRING@@HPAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     _FreeHwndList@4 @ 0x2D2D0 (_FreeHwndList@4.c)
 *     _BuildHwndList@12 @ 0x2D340 (_BuildHwndList@12.c)
 *     _IsNonImmersiveBand@4 @ 0x2D3DC (_IsNonImmersiveBand@4.c)
 *     _xxxSetWindowPos@28 @ 0x32F7A (_xxxSetWindowPos@28.c)
 *     __GetDesktopWindow@4 @ 0x381A0 (__GetDesktopWindow@4.c)
 *     @HMValidateHandleNoSecure@8 @ 0x3C46E (@HMValidateHandleNoSecure@8.c)
 *     _xxxSendTransformableMessageTimeout@36 @ 0x402E0 (_xxxSendTransformableMessageTimeout@36.c)
 *     __GetProp@12 @ 0x6E54C (__GetProp@12.c)
 *     _HasImmersiveAppRight@4 @ 0x7C7B4 (_HasImmersiveAppRight@4.c)
 */

struct tagBWL *__fastcall xxxMetricsRecalc(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  int v7; // esi
  struct tagBWL *result; // eax
  unsigned int *v9; // ecx
  int v10; // ebx
  _DWORD *v11; // eax
  _DWORD *v12; // edi
  _DWORD *v13; // ebx
  int *v14; // esi
  int v15; // esi
  int v16; // edx
  _DWORD *v17; // esi
  int v18; // eax
  int v19; // eax
  BOOL v20; // eax
  int Prop; // eax
  int v22; // ecx
  int v23; // edx
  char v24; // bl
  int v25; // edx
  int v26; // esi
  int v27; // esi
  int v28; // eax
  int v29; // eax
  char v30; // cl
  int v31; // eax
  int v32; // ecx
  int v33; // eax
  int v34; // edx
  int v35; // ecx
  int v36; // ecx
  char v37; // al
  char v38; // dl
  int v39; // ecx
  int v40; // ebx
  int v41; // [esp+Ch] [ebp-4Ch]
  int v42; // [esp+10h] [ebp-48h]
  int v43; // [esp+14h] [ebp-44h]
  int v44; // [esp+18h] [ebp-40h]
  int v47; // [esp+24h] [ebp-34h]
  int v48; // [esp+28h] [ebp-30h]
  int v49; // [esp+2Ch] [ebp-2Ch]
  char *v50; // [esp+30h] [ebp-28h]
  struct tagBWL *v51; // [esp+38h] [ebp-20h]
  int v52; // [esp+3Ch] [ebp-1Ch] BYREF
  _DWORD *v53; // [esp+40h] [ebp-18h]
  int v54; // [esp+44h] [ebp-14h]
  int v55; // [esp+48h] [ebp-10h]
  int v56; // [esp+4Ch] [ebp-Ch]
  int v57; // [esp+50h] [ebp-8h]
  int v58; // [esp+54h] [ebp-4h]

  v52 = 0;
  v53 = 0;
  v54 = 0;
  v7 = _gptiCurrent;
  result = (struct tagBWL *)BuildHwndList(*(_DWORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 252) + 12) + 60), 3, 0);
  v51 = result;
  if ( !result )
    return result;
  v9 = (unsigned int *)((char *)result + 16);
  v50 = (char *)result + 16;
  v10 = (*((_DWORD *)result + 1) - (int)result - 16) >> 2;
  v49 = v10;
  if ( v10 <= 0 )
    return FreeHwndList(result);
  do
  {
    v11 = (_DWORD *)HMValidateHandleNoSecure(*v9, 1);
    v12 = v11;
    v43 = (int)v11;
    if ( !v11 || !IsNonImmersiveBand(v11) || HasImmersiveAppRight(*(_DWORD **)(v12[2] + 232)) )
      goto LABEL_52;
    v52 = *(_DWORD *)(v7 + 228);
    *(_DWORD *)(v7 + 228) = &v52;
    v53 = v12;
    HMLockObject(v12);
    v48 = 0;
    v13 = v12 + 5;
    if ( (a1 & 4) != 0 && (*(_BYTE *)(*v13 + 23) & 0x20) != 0 )
    {
      v14 = (int *)(*v13 + 52);
      v55 = *v14++;
      v56 = *v14++;
      v57 = *v14;
      v58 = v14[1];
      v15 = a3 + v58;
      v16 = a2 + v57;
      v12 = (_DWORD *)v43;
      v44 = v56;
      v42 = v55;
LABEL_34:
      v41 = v16;
      v58 = v15;
      goto LABEL_35;
    }
    v17 = v12 + 5;
    v20 = 0;
    if ( (*(_DWORD *)(*v13 + 20) & 0xC00000) == 12582912 || (*(_DWORD *)(*v13 + 20) & 0x40000) != 0 )
    {
      v18 = v12[2];
      v19 = *(_DWORD *)(v18 + 340) <= 0x9900u ? *(_DWORD *)(v18 + 352) : 0;
      if ( (v19 & 0x30000000) == 0 )
        v20 = 1;
    }
    if ( (a1 & 1) == 0 || (*(_BYTE *)(*v13 + 22) & 4) == 0 && !v20 )
      goto LABEL_39;
    Prop = _GetProp((int)v12, LOWORD(WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc), 1);
    v22 = *v17;
    v23 = a6;
    v24 = *(_BYTE *)(*v17 + 22) & 4;
    if ( !v24 )
      v23 = a7;
    v25 = a2 + v23;
    v26 = a6;
    if ( !v24 )
      v26 = a7;
    v27 = a3 + v26;
    if ( Prop && (*(_BYTE *)(Prop + 48) & 0x40) != 0 )
    {
      *(_DWORD *)(Prop + 40) -= v25;
      *(_DWORD *)(Prop + 44) -= v27;
      v22 = v12[5];
    }
    if ( (*(_BYTE *)(v22 + 23) & 0x20) != 0 )
    {
      if ( Prop )
      {
        *(_DWORD *)Prop -= v25;
        *(_DWORD *)(Prop + 8) += v25;
        *(_DWORD *)(Prop + 4) -= v27;
        *(_DWORD *)(Prop + 12) += v27;
      }
      v13 = v12 + 5;
      goto LABEL_39;
    }
    v28 = *(_DWORD *)(v22 + 52) - v25;
    v16 = *(_DWORD *)(v22 + 60) + v25;
    v42 = v28;
    v55 = v28;
    v29 = *(_DWORD *)(v22 + 56) - v27;
    v41 = v16;
    v15 = *(_DWORD *)(v22 + 64) + v27;
    v30 = *(_BYTE *)(v22 + 8);
    v44 = v29;
    v56 = v29;
    v58 = v15;
    if ( (v30 & 8) != 0 )
    {
      v15 += a4;
      v58 = v15;
    }
    v13 = v12 + 5;
    if ( (v30 & 1) != 0 )
    {
      v15 += a5;
      goto LABEL_34;
    }
LABEL_35:
    v48 = 1;
    v47 = v12[14];
    if ( v47 == _GetDesktopWindow(v12) )
    {
      v35 = v41;
      v34 = v44;
    }
    else
    {
      v31 = *(_DWORD *)(v47 + 20);
      v32 = -*(_DWORD *)(v31 + 72);
      v33 = -*(_DWORD *)(v31 + 68);
      v15 += v32;
      v58 = v15;
      v42 += v33;
      v55 = v42;
      v34 = v32 + v44;
      v56 = v32 + v44;
      v35 = v33 + v41;
    }
    xxxSetWindowPos((int)v12, 0, v42, v34, v35 - v42, v15 - v34, 316);
LABEL_39:
    if ( (a1 & 2) != 0 )
    {
      if ( a4 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout((int)v12, 0x80u, 3u, 0, 0, 0, 0, 1u, 1);
      }
      v36 = *v13;
      v37 = *(_BYTE *)(*v13 + 23);
      if ( (v37 & 0x20) == 0 && !v48 )
      {
        v38 = *(_BYTE *)(v36 + 8);
        v55 = *(_DWORD *)(v36 + 52);
        v56 = *(_DWORD *)(v36 + 56);
        v57 = *(_DWORD *)(v36 + 60);
        v58 = *(_DWORD *)(v36 + 64);
        v39 = v58;
        if ( (v38 & 1) != 0 )
        {
          v39 = a5 + v58;
          v58 += a5;
        }
        if ( (v38 & 8) != 0
          && (v39 += a4, v58 = v39, (v37 & 0x41) == 0x41)
          && (v40 = *(_DWORD *)(*(_DWORD *)(v43 + 56) + 20), (*(_WORD *)(v40 + 30) & 0x3FFF) == 0x2A7) )
        {
          xxxSetWindowPos(
            v43,
            0,
            v55 - *(_DWORD *)(v40 + 52),
            v56 - *(_DWORD *)(v40 + 56) - a4,
            v57 - v55,
            v39 - v56,
            60);
        }
        else
        {
          xxxSetWindowPos(v43, 0, 0, 0, v57 - v55, v39 - v56, 318);
        }
      }
    }
    ThreadUnlock1();
    v10 = v49;
    v7 = _gptiCurrent;
LABEL_52:
    --v10;
    v9 = (unsigned int *)(v50 + 4);
    v49 = v10;
    v50 += 4;
  }
  while ( v10 > 0 );
  result = v51;
  return FreeHwndList(result);
}
