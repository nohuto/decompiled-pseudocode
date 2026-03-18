/*
 * XREFs of xxxInternalToUnicode @ 0x1C0059060
 * Callers:
 *     xxxToUnicodeEx @ 0x1C0058F50 (xxxToUnicodeEx.c)
 * Callees:
 *     InternalVkKeyScanEx @ 0x1C0058BB0 (InternalVkKeyScanEx.c)
 *     HKLtoPKL @ 0x1C00593E0 (HKLtoPKL.c)
 *     GetModifierBits @ 0x1C0059450 (GetModifierBits.c)
 *     WPP_RECORDER_SF_hD @ 0x1C00594AC (WPP_RECORDER_SF_hD.c)
 *     WPP_RECORDER_SF_ @ 0x1C00678DC (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1C006ACC8 (WPP_RECORDER_SF_d.c)
 *     W32GetThreadWin32Thread @ 0x1C0085450 (W32GetThreadWin32Thread.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     ?ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z @ 0x1C01B4460 (-ComposeDeadKeys@@YAHPEAUtagKL@@PEAUDEADKEY@@GPEAGHIH@Z.c)
 *     WPP_RECORDER_SF_hDhD @ 0x1C01B4678 (WPP_RECORDER_SF_hDhD.c)
 *     ApiSetEditionClientCharToWchar @ 0x1C01CD054 (ApiSetEditionClientCharToWchar.c)
 *     ApiSetEditionMessageBeep @ 0x1C01CEFA4 (ApiSetEditionMessageBeep.c)
 */

__int64 __fastcall xxxInternalToUnicode(
        unsigned int a1,
        __int16 a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5,
        char a6,
        int *a7,
        __int64 a8)
{
  __int64 ThreadWin32Thread; // rax
  int *v13; // r9
  int v14; // esi
  __int64 v15; // rbp
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // r15
  unsigned __int16 v19; // bx
  int v20; // r13d
  unsigned __int16 ModifierBits; // ax
  char v22; // r10
  _UNKNOWN **v23; // rdx
  unsigned __int16 v24; // r14
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 result; // rax
  char *v28; // rbx
  unsigned __int8 v29; // r8
  __int64 v30; // r8
  int v31; // ecx
  __int64 v32; // rsi
  struct tagKL *v33; // r14
  struct DEADKEY *v34; // rdx
  __int16 v35; // ax
  int v36; // esi
  __int64 v37; // rcx
  unsigned int v38; // eax
  int v39; // edx
  int v40; // r9d
  int v41; // esi
  __int16 v42; // bx
  char v43; // al
  char v44; // al
  int v45; // edx
  int v46; // ecx
  __int16 v47; // ax
  unsigned __int16 v48; // r8
  char *v49; // rcx
  char v50; // al
  char v51; // dl
  int v52; // esi
  int v53; // ebx
  unsigned __int16 *v54; // rdi
  unsigned __int16 v55; // dx
  int v56; // eax
  int v57; // [rsp+20h] [rbp-68h]
  char v58; // [rsp+28h] [rbp-60h]
  struct tagKL *v59; // [rsp+58h] [rbp-30h]

  ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
  v13 = a7;
  v14 = a2 & 0x8000;
  v15 = ThreadWin32Thread;
  *a7 = v14;
  if ( (_BYTE)a1 == 0xFF )
    return 0LL;
  if ( a8 || (v17 = *(_QWORD *)(ThreadWin32Thread + 432), (v59 = (struct tagKL *)v17) == 0LL) )
  {
    v16 = HKLtoPKL(ThreadWin32Thread, a8);
    v59 = (struct tagKL *)v16;
    v17 = v16;
    if ( !v16 )
      return 0LL;
    v13 = a7;
    v18 = *(_QWORD *)(*(_QWORD *)(v16 + 48) + 32LL);
  }
  else
  {
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 48) + 32LL);
  }
  v19 = word_1C0253060;
  v20 = a2 & 0x1FF;
  if ( v14 )
  {
    if ( a1 != 18 )
    {
      if ( a1 == (unsigned __int16)word_1C0253064 )
        word_1C0253064 = 0;
      goto LABEL_9;
    }
    if ( !word_1C0253060 )
    {
      if ( byte_1C0253062 )
        byte_1C0253062 = 0;
      goto LABEL_9;
    }
    if ( byte_1C0253062 == 3 )
      goto LABEL_63;
    if ( byte_1C0253062 )
    {
      v37 = *(unsigned __int16 *)(v17 + 72);
    }
    else
    {
      if ( (*(_DWORD *)(v15 + 480) & 8) != 0 )
      {
        *v13 = v14 | 0x4000000;
LABEL_63:
        *a4 = v19;
LABEL_76:
        gfInNumpadHexInput &= ~2u;
        result = 1LL;
        word_1C0253064 = 0;
        byte_1C0253062 = 0;
        word_1C0253060 = 0;
        return result;
      }
      v37 = NlsOemCodePage;
    }
    v38 = (unsigned __int16)v37;
    if ( (unsigned __int16)(v37 - 932) <= 0x12u && (v39 = 393233, LOWORD(v38) = v37 - 932, _bittest(&v39, v38)) )
    {
      if ( (word_1C0253060 & 0xFF00) != 0 )
      {
        v19 = _byteswap_ushort(word_1C0253060);
        word_1C0253060 = v19;
      }
      else if ( ((_WORD)v37 != 932 || (unsigned __int16)(word_1C0253060 - 161) > 0x3Eu)
             && (unsigned __int16)(word_1C0253060 - 128) <= 0x7Fu )
      {
        v37 = 1252LL;
      }
    }
    else
    {
      HIBYTE(word_1C0253060) = 0;
      v19 = word_1C0253060;
    }
    *a4 = ApiSetEditionClientCharToWchar(v37, v19, 932LL, v13);
    goto LABEL_76;
  }
LABEL_9:
  if ( (v14 & 0x8000) != 0 && (a6 & 2) == 0 )
    return 0LL;
  ModifierBits = GetModifierBits(*(_QWORD *)v18, a3, v17, v13);
  v22 = a6;
  v23 = &WPP_RECORDER_INITIALIZED;
  v24 = ModifierBits;
  if ( !v14 && (ModifierBits & 0xFFF7u) - 4 <= 1 )
  {
    if ( (a6 & 1) != 0 )
    {
LABEL_58:
      word_1C0253064 = 0;
      v24 = ModifierBits & 0xFFFB;
      byte_1C0253062 = 0;
      gfInNumpadHexInput &= ~2u;
      word_1C0253060 = 0;
      goto LABEL_12;
    }
    if ( !gfEnableHexNumpad )
    {
LABEL_54:
      if ( (unsigned int)(v20 - 71) <= 0xB )
      {
        v41 = (unsigned __int8)aVkNumpad[v20 - 71];
        if ( v41 == 255 )
          goto LABEL_58;
        v36 = v41 - 96;
        goto LABEL_57;
      }
      if ( (gfInNumpadHexInput & 2) != 0 )
      {
        if ( a1 >= 0x41 && a1 <= 0x46 )
        {
          v36 = a1 - 55;
          goto LABEL_57;
        }
        if ( a1 >= 0x30 && a1 <= 0x39 )
        {
          v36 = a1 - 48;
          goto LABEL_57;
        }
      }
      v36 = -1;
LABEL_57:
      if ( v36 < 0 )
        goto LABEL_58;
      if ( (unsigned __int16)word_1C0253064 == a1 )
        return 0LL;
      if ( (unsigned __int8)(byte_1C0253062 - 2) > 1u )
      {
        word_1C0253060 = v36 + 10 * v19;
        if ( !word_1C0253060 )
        {
          v43 = byte_1C0253062;
          if ( !v36 )
            v43 = 1;
          byte_1C0253062 = v43;
        }
      }
      else
      {
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = 4;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            (_DWORD)v23,
            16,
            20,
            (__int64)&WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids,
            v19);
          v19 = word_1C0253060;
          v23 = &WPP_RECORDER_INITIALIZED;
        }
        v42 = v36 + 16 * v19;
        word_1C0253060 = v42;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(v23) = 4;
          WPP_RECORDER_SF_d(
            WPP_MAIN_CB.Queue.ListEntry.Flink,
            (_DWORD)v23,
            16,
            21,
            (__int64)&WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids,
            v42);
        }
      }
LABEL_82:
      v22 = a6;
      word_1C0253064 = a1;
      goto LABEL_12;
    }
    if ( v20 == 83 )
    {
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_58;
      byte_1C0253062 = 2;
      gfInNumpadHexInput |= 2u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_82;
      v40 = 18;
    }
    else
    {
      if ( v20 != 78 )
        goto LABEL_54;
      if ( (gfInNumpadHexInput & 2) != 0 )
        goto LABEL_58;
      byte_1C0253062 = 3;
      gfInNumpadHexInput |= 2u;
      if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        goto LABEL_82;
      v40 = 19;
    }
    LOBYTE(v23) = 4;
    WPP_RECORDER_SF_(
      WPP_MAIN_CB.Queue.ListEntry.Flink,
      (_DWORD)v23,
      16,
      v40,
      (__int64)&WPP_452ce174e4dd36ee8a008521dfdf54c5_Traceguids);
    goto LABEL_82;
  }
LABEL_12:
  if ( a1 == 8 && (*(_DWORD *)(v18 + 80) & 4) != 0 )
  {
    v25 = a3;
    v44 = *(_BYTE *)(a3 + 40);
    if ( (v44 & 1) != 0 )
    {
      v35 = 8206;
      goto LABEL_39;
    }
    if ( (v44 & 4) != 0 )
    {
      v35 = 8207;
      goto LABEL_39;
    }
  }
  else
  {
    if ( (_WORD)a1 == 231 && !(_BYTE)v20 )
    {
      *a4 = *((_WORD *)gptiCurrent + 433);
      return 1LL;
    }
    v25 = a3;
  }
  v26 = *(_QWORD *)(v18 + 8);
  if ( !v26 )
    return 0LL;
LABEL_19:
  v28 = *(char **)v26;
  if ( !*(_QWORD *)v26 )
    return 0LL;
  while ( 1 )
  {
    if ( !*v28 )
    {
      v26 += 16LL;
      goto LABEL_19;
    }
    if ( *v28 == (_BYTE)a1 )
      break;
    v28 += *(unsigned __int8 *)(v26 + 9);
  }
  v29 = v28[1];
  if ( (v29 & 8) != 0 && (*(_BYTE *)(v25 + 5) & 8) != 0 )
  {
    v24 |= 8u;
  }
  else if ( (((v24 & 0xFFFE) == 0) & v29) != 0 && (*(_BYTE *)(v25 + 5) & 2) != 0
         || (v29 & 4) != 0 && (v24 & 6) == 6 && (*(_BYTE *)(v25 + 5) & 2) != 0 )
  {
    v24 ^= 1u;
  }
  if ( (v29 & 2) != 0 && (v24 & 0xFFFE) == 0 && (*(_BYTE *)(v25 + 5) & 2) != 0 )
    v28 += *(unsigned __int8 *)(v26 + 9);
  if ( v24 > *(_WORD *)(*(_QWORD *)v18 + 8LL) )
    return 0LL;
  _mm_lfence();
  v30 = *(unsigned __int8 *)(v24 + *(_QWORD *)v18 + 10LL);
  if ( (_DWORD)v30 == 15 )
    return 0LL;
  if ( (unsigned __int16)v30 >= *(unsigned __int8 *)(v26 + 8)
    || (v31 = *(unsigned __int16 *)&v28[2 * v30 + 2],
        v32 = *(unsigned __int8 *)(v24 + *(_QWORD *)v18 + 10LL),
        (_WORD)v31 == 0xF000) )
  {
    if ( ((v24 - 2) & 0xFFF6) == 0 )
    {
      if ( a1 >= 0x41 && a1 <= 0x5A )
      {
        *a4 = a1 & 0x1F;
        return 1LL;
      }
      if ( a1 >= 0xFF61 && a1 <= 0xFF91 )
      {
        v35 = InternalVkKeyScanEx(a1, (_QWORD *)v18) & 0x1F;
        goto LABEL_39;
      }
    }
    return 0LL;
  }
  if ( (_WORD)v31 == 0xF001 )
  {
    v33 = v59;
    v28 += *(unsigned __int8 *)(v26 + 9);
    v45 = *((unsigned __int16 *)v59 + 37);
    if ( (_WORD)v45 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v46 = *(unsigned __int16 *)&v28[2 * v30 + 2];
        WPP_RECORDER_SF_hDhD(v46, v45, v30, 23, v57, v45, v45, *(_WORD *)&v28[2 * v30 + 2], v46);
      }
      if ( qword_1C0258B88 )
        v47 = qword_1C0258B88(1024LL);
      else
        v47 = 0;
      if ( (v47 & 0x8000) == 0 )
        goto LABEL_37;
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v58 = *(_WORD *)&v28[2 * v30 + 2];
      WPP_RECORDER_SF_hD(v31, v45, v30, 22, v57, v58, v58);
    }
    v48 = *(_WORD *)&v28[2 * v32 + 2];
    *a4 = v48;
    if ( (*a7 & 0x8000) == 0 && (a6 & 4) == 0 )
      *((_WORD *)v59 + 37) = v48;
    return 0xFFFFFFFFLL;
  }
  if ( (_WORD)v31 == 0xF002 )
  {
    if ( *(_WORD *)(v18 + 82) )
    {
      v49 = *(char **)(v18 + 88);
      if ( v49 )
      {
        v50 = *v49;
        if ( *v49 )
        {
          v51 = *v28;
          v52 = 0;
          v53 = 0;
          while ( v50 != v51 || *((_WORD *)v49 + 1) != (_WORD)v30 )
          {
            v49 += *(unsigned __int8 *)(v18 + 85);
            v50 = *v49;
            if ( !*v49 )
              goto LABEL_144;
          }
          if ( *(_BYTE *)(v18 + 84) )
          {
            v54 = (unsigned __int16 *)(v49 + 4);
            do
            {
              if ( v53 >= a5 )
                break;
              v55 = *v54;
              if ( *v54 == 0xF000 )
                break;
              if ( *((_WORD *)v59 + 37) )
              {
                v56 = ComposeDeadKeys(v59, *(struct DEADKEY **)(v18 + 16), v55, &a4[v53], a5 - v53, v22, *a7 & 0x8000);
                if ( v56 > 0 )
                  v53 += v56;
              }
              else
              {
                a4[v53++] = v55;
              }
              ++v52;
              v22 = a6;
              ++v54;
            }
            while ( v52 < *(unsigned __int8 *)(v18 + 84) );
            if ( v53 )
              *a7 |= 0x8000000u;
          }
          return (unsigned int)v53;
        }
      }
    }
LABEL_144:
    ApiSetEditionMessageBeep();
    return 0LL;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_hD(v31, v26, v30, 24, v57, v31, *(_WORD *)&v28[2 * v30 + 2]);
  v33 = v59;
LABEL_37:
  v34 = *(struct DEADKEY **)(v18 + 16);
  if ( !v34 || !*((_WORD *)v33 + 37) )
  {
    v35 = *(_WORD *)&v28[2 * v32 + 2];
LABEL_39:
    *a4 = v35;
    return 1LL;
  }
  result = ComposeDeadKeys(v33, v34, *(_WORD *)&v28[2 * v32 + 2], a4, a5, a6, *a7 & 0x8000);
  if ( (_DWORD)result )
    *a7 |= 0x8000000u;
  return result;
}
