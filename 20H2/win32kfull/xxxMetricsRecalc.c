/*
 * XREFs of xxxMetricsRecalc @ 0x1C01D7544
 * Callers:
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C0023004 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxSystemParametersInfoWorker @ 0x1C002F978 (xxxSystemParametersInfoWorker.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x1C01D6DD8 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     _GetDesktopWindow @ 0x1C0046F20 (_GetDesktopWindow.c)
 *     FreeHwndList @ 0x1C0049620 (FreeHwndList.c)
 *     BuildHwndList @ 0x1C00496B0 (BuildHwndList.c)
 *     xxxSetWindowPos @ 0x1C004AF5C (xxxSetWindowPos.c)
 *     _GetProp @ 0x1C004C9B4 (_GetProp.c)
 *     xxxSendTransformableMessageTimeout @ 0x1C0053BA0 (xxxSendTransformableMessageTimeout.c)
 *     HMValidateHandleNoSecure @ 0x1C00B3898 (HMValidateHandleNoSecure.c)
 *     IsNonImmersiveBand @ 0x1C00C9C04 (IsNonImmersiveBand.c)
 */

struct tagBWL *__fastcall xxxMetricsRecalc(char a1, int a2, int a3, int a4, int a5, int a6, int a7)
{
  char v7; // r15
  __int64 v8; // rbx
  struct tagBWL *result; // rax
  struct tagBWL *v10; // r13
  unsigned __int64 *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rax
  unsigned __int64 v14; // rsi
  int v15; // r12d
  unsigned __int64 v16; // rbx
  unsigned int v17; // r14d
  __int64 v18; // r8
  _DWORD *v19; // rdx
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rcx
  _DWORD *Prop; // rax
  __int64 v24; // r9
  int v25; // ecx
  __int64 v26; // rax
  char v27; // r8
  int v28; // ecx
  __int64 DesktopWindow; // rax
  __int64 v30; // rdx
  int v31; // r8d
  int v32; // r10d
  unsigned int v33; // r11d
  __int64 v34; // rax
  int v35; // r9d
  __int64 v36; // r10
  unsigned __int64 *v37; // [rsp+58h] [rbp-41h]
  struct tagBWL *v38; // [rsp+68h] [rbp-31h]
  __int128 v39; // [rsp+70h] [rbp-29h]
  __int128 v40; // [rsp+80h] [rbp-19h] BYREF
  __int64 v41; // [rsp+90h] [rbp-9h]

  v41 = 0LL;
  v7 = a1;
  v40 = 0LL;
  v8 = gptiCurrent;
  result = BuildHwndList(*(struct tagWND **)(*(_QWORD *)(*(_QWORD *)(gptiCurrent + 464LL) + 24LL) + 112LL), 3, 0LL);
  v38 = result;
  v10 = result;
  if ( !result )
    return result;
  v11 = (unsigned __int64 *)((char *)result + 32);
  v37 = (unsigned __int64 *)((char *)result + 32);
  v12 = (*((_QWORD *)result + 1) - (_QWORD)result - 32LL) >> 3;
  if ( (int)v12 <= 0 )
    return (struct tagBWL *)FreeHwndList(v10);
  do
  {
    v13 = HMValidateHandleNoSecure(*v11, 1);
    v14 = v13;
    if ( !v13
      || !IsNonImmersiveBand(v13)
      || (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v14 + 16) + 424LL) + 820LL) & 0x30) == 0x10 )
    {
      goto LABEL_47;
    }
    *(_QWORD *)&v40 = *(_QWORD *)(v8 + 416);
    *(_QWORD *)(v8 + 416) = &v40;
    *((_QWORD *)&v40 + 1) = v14;
    HMLockObject(v14);
    v15 = 0;
    v16 = v14 + 40;
    if ( (v7 & 4) != 0 && (*(_BYTE *)(*(_QWORD *)v16 + 31LL) & 0x20) != 0 )
    {
      v17 = *(_OWORD *)(*(_QWORD *)v16 + 88LL);
LABEL_36:
      v15 = 1;
      DesktopWindow = GetDesktopWindow(v14);
      if ( v30 != DesktopWindow )
      {
        v34 = *(_QWORD *)(v30 + 40);
        v31 -= *(_DWORD *)(v34 + 108);
        v17 -= *(_DWORD *)(v34 + 104);
        v33 -= *(_DWORD *)(v34 + 108);
        v32 -= *(_DWORD *)(v34 + 104);
      }
      xxxSetWindowPos((struct tagWND *)v14, 0LL, v17, v33, v32 - v17, v31 - v33, 316);
      v11 = v37;
      goto LABEL_28;
    }
    v18 = *(_QWORD *)v16;
    v19 = (_DWORD *)*(unsigned int *)(*(_QWORD *)v16 + 28LL);
    v22 = 0;
    if ( (*(_DWORD *)(*(_QWORD *)v16 + 28LL) & 0xC00000) == 12582912 || ((unsigned int)v19 & 0x40000) != 0 )
    {
      v20 = *(_QWORD *)(v14 + 16);
      v21 = *(_DWORD *)(v20 + 632) <= 0x9900u ? *(_DWORD *)(v20 + 648) : 0;
      if ( (v21 & 0x30000000) == 0 )
        v22 = 1;
    }
    if ( (a1 & 1) != 0 && ((*(_BYTE *)(v18 + 30) & 4) != 0 || (_DWORD)v22) )
    {
      Prop = (_DWORD *)GetProp(v14, LOWORD(WPP_MAIN_CB.DeviceQueue.Lock), 1LL);
      v24 = *(_QWORD *)v16;
      v19 = Prop;
      v25 = a6;
      if ( (*(_BYTE *)(*(_QWORD *)v16 + 30LL) & 4) == 0 )
        v25 = a7;
      v18 = (unsigned int)(v25 + a2);
      v22 = (unsigned int)(a3 + v25);
      if ( Prop && (Prop[12] & 0x40) != 0 )
      {
        Prop[10] -= v18;
        Prop[11] -= v22;
        v24 = *(_QWORD *)(v14 + 40);
      }
      if ( (*(_BYTE *)(v24 + 31) & 0x20) == 0 )
      {
        v17 = *(_DWORD *)(v24 + 88) - v18;
        v7 = a1;
        goto LABEL_36;
      }
      if ( Prop )
      {
        *Prop -= v18;
        Prop[2] += v18;
        Prop[1] -= v22;
        Prop[3] += v22;
      }
    }
    v7 = a1;
LABEL_28:
    if ( (v7 & 2) != 0 )
    {
      if ( a4 )
      {
        _InterlockedIncrement(&glSendMessage);
        xxxSendTransformableMessageTimeout(v14, 0x80u, 3uLL, 0LL, 0, 0, 0LL, 1, 1);
      }
      v26 = *(_QWORD *)v16;
      LOBYTE(v19) = *(_BYTE *)(*(_QWORD *)v16 + 31LL);
      if ( ((unsigned __int8)v19 & 0x20) == 0 && !v15 )
      {
        v27 = *(_BYTE *)(v26 + 16);
        v39 = *(_OWORD *)(v26 + 88);
        if ( (v27 & 1) != 0 )
          v28 = a5 + HIDWORD(v39);
        else
          v28 = HIDWORD(*(_OWORD *)(v26 + 88));
        if ( (v27 & 8) != 0
          && (v35 = v28 + a4, v28 += a4, ((unsigned __int8)v19 & 0x41) == 0x41)
          && (v36 = *(_QWORD *)(*(_QWORD *)(v14 + 104) + 40LL), (*(_WORD *)(v36 + 42) & 0x2FFF) == 0x2A7) )
        {
          xxxSetWindowPos(
            (struct tagWND *)v14,
            0LL,
            (unsigned int)(v39 - *(_DWORD *)(v36 + 88)),
            (unsigned int)(DWORD1(v39) - *(_DWORD *)(v36 + 92) - a4),
            DWORD2(v39) - v39,
            v35 - DWORD1(v39),
            60);
        }
        else
        {
          xxxSetWindowPos((struct tagWND *)v14, 0LL, 0LL, 0LL, DWORD2(v39) - v39, v28 - DWORD1(v39), 318);
        }
      }
      v7 = a1;
    }
    ThreadUnlock1(v22, v19, v18);
    v8 = gptiCurrent;
LABEL_47:
    ++v11;
    LODWORD(v12) = v12 - 1;
    v37 = v11;
  }
  while ( (int)v12 > 0 );
  v10 = v38;
  return (struct tagBWL *)FreeHwndList(v10);
}
