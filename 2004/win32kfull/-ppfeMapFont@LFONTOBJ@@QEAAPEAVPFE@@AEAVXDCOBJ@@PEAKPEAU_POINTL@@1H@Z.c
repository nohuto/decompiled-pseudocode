/*
 * XREFs of ?ppfeMapFont@LFONTOBJ@@QEAAPEAVPFE@@AEAVXDCOBJ@@PEAKPEAU_POINTL@@1H@Z @ 0x1C009F6C0
 * Callers:
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C007DD90 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     GreGetTextFaceW @ 0x1C009F270 (GreGetTextFaceW.c)
 *     GreGetCharSet @ 0x1C00A1BE0 (GreGetCharSet.c)
 *     GreGetOutlineTextMetricsInternalW @ 0x1C00DAC84 (GreGetOutlineTextMetricsInternalW.c)
 *     ?dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z @ 0x1C028BBA4 (-dwGetFontLanguageInfo@@YAKAEAVXDCOBJ@@@Z.c)
 * Callees:
 *     ?ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z @ 0x1C009DE60 (-ppfeGetAMatch@@YAPEAVPFE@@AEAVXDCOBJ@@PEAUtagENUMLOGFONTEXDVW@@PEBGKKPEAKPEAU_POINTL@@3H@Z.c)
 *     memmove @ 0x1C015BD40 (memmove.c)
 *     ?pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ @ 0x1C02BBC34 (-pPvtDataMatch@PFFOBJ@@QEAAPEAUtagPvtData@@XZ.c)
 */

struct PFE *__fastcall LFONTOBJ::ppfeMapFont(
        LFONTOBJ *this,
        struct XDCOBJ *a2,
        unsigned int *a3,
        struct _POINTL *a4,
        unsigned int *a5,
        int a6)
{
  __int64 v6; // rsi
  struct _POINTL *v7; // r14
  int v8; // ebp
  __int64 v10; // r11
  __int64 v12; // rbx
  char v13; // di
  unsigned int v14; // eax
  int v15; // r12d
  __int64 v16; // rdx
  int v17; // r9d
  int v18; // r10d
  __int64 v19; // rdi
  struct PFE *v20; // r14
  __int64 v21; // rax
  int v22; // ecx
  char v23; // al
  unsigned int *v24; // rdi
  struct PFE *result; // rax
  unsigned int v26; // edx
  __int64 v27; // rcx
  char v28; // r8
  int v29; // edx
  int v30; // eax
  __int64 v31; // rdx
  __int64 v32; // rax
  int v33; // ecx
  struct tagPvtData *v34; // rax
  char v35; // cl
  char v36; // al
  unsigned int v37; // [rsp+50h] [rbp-68h]
  __int64 v38; // [rsp+58h] [rbp-60h]
  _QWORD v39[11]; // [rsp+60h] [rbp-58h] BYREF
  int v40; // [rsp+C0h] [rbp+8h]
  int v41; // [rsp+C8h] [rbp+10h]

  v6 = *(_QWORD *)a2;
  v7 = a4;
  v8 = 0;
  v40 = 0;
  v37 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)a2 + 48LL);
  v12 = *(_QWORD *)this + 40LL;
  v38 = v10;
  if ( (*(_DWORD *)(*(_QWORD *)a2 + 248LL) & 1) != 0 )
  {
    v15 = a6;
  }
  else
  {
    v13 = *(_BYTE *)(*(_QWORD *)this + 302LL);
    if ( ((*(_DWORD *)(v6 + 36) & 1) != 0 || *(_DWORD *)(v6 + 32) == 1)
      && ((gulFontInformation & 2) != 0 && v13 != 3 || (unsigned __int8)(v13 - 4) <= 2u)
      && *(_QWORD *)(v6 + 496) )
    {
      GreAcquireHmgrSemaphore();
      v14 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 496LL) + 96LL);
      v37 = v14;
      if ( v14 == 6 || v14 >= 4 && v14 <= 5 )
      {
        v8 = 0x10000;
        if ( v13 == 6 )
        {
          v8 = 1342242816;
        }
        else if ( v13 == 5 || (gulFontInformation & 0x10) != 0 )
        {
          v8 = 268500992;
        }
      }
      GreReleaseHmgrSemaphore();
      v10 = v38;
    }
    v15 = a6;
    if ( !a6 )
    {
      v16 = *(_QWORD *)this;
      if ( *(_DWORD *)(*(_QWORD *)this + 36LL) != *(_DWORD *)(gpGdiSharedMemory + 1573016LL) )
      {
        *(_DWORD *)(v16 + 32) = 0;
        *(_DWORD *)(*(_QWORD *)this + 36LL) = *(_DWORD *)(gpGdiSharedMemory + 1573016LL);
        v16 = *(_QWORD *)this;
      }
      v17 = 0;
      v40 = 0;
      if ( *(int *)(v16 + 32) > 0 )
      {
        v18 = 1;
        v19 = 0LL;
        v41 = 1;
        while ( 1 )
        {
          if ( v10 == *(_QWORD *)(v19 + v12)
            && *(float *)(v19 + v12 + 8) == *(float *)(v6 + 320)
            && *(float *)(v19 + v12 + 12) == *(float *)(v6 + 324)
            && *(float *)(v19 + v12 + 16) == *(float *)(v6 + 328)
            && *(float *)(v19 + v12 + 20) == *(float *)(v6 + 332) )
          {
            v20 = *(struct PFE **)(v19 + v12 + 24);
            if ( v20 )
            {
              v39[0] = *(_QWORD *)v20;
              if ( *(struct PFT **const *)(v39[0] + 128LL) != gpPFTPrivate
                || (v34 = PFFOBJ::pPvtDataMatch((PFFOBJ *)v39), v17 = v40, v18 = v41, v10 = v38, v34) )
              {
                if ( v8 )
                {
                  if ( (*(_DWORD *)(v19 + v12 + 32) & 0x10010000) == v8 && v37 == *(_DWORD *)(v19 + v12 + 48) )
                  {
LABEL_53:
                    v24 = a5;
                    *a3 = *(_DWORD *)(56LL * v17 + v12 + 32);
                    a4->x = *(_DWORD *)(56LL * v17 + v12 + 36);
                    a4->y = *(_DWORD *)(56LL * v17 + v12 + 40);
                    *a5 = *(_DWORD *)(56LL * v17 + v12 + 44);
                    goto LABEL_54;
                  }
                }
                else if ( (*(_DWORD *)(v19 + v12 + 32) & 0x10000) == 0 )
                {
                  goto LABEL_53;
                }
              }
            }
            v21 = *(_QWORD *)this;
            v22 = *(_DWORD *)(*(_QWORD *)this + 32LL);
            if ( v18 < v22 )
            {
              memmove(
                (void *)(v12 + 56LL * v17),
                (const void *)(v12 + 56LL * v18),
                (unsigned int)(56 * (v22 - v17) - 56));
              v21 = *(_QWORD *)this;
              v17 = v40;
              v18 = v41;
              v10 = v38;
            }
            --*(_DWORD *)(v21 + 32);
            --v17;
            --v18;
            v19 -= 56LL;
          }
          ++v17;
          ++v18;
          v40 = v17;
          v19 += 56LL;
          v41 = v18;
          if ( v17 >= *(_DWORD *)(*(_QWORD *)this + 32LL) )
          {
            v7 = a4;
            break;
          }
        }
      }
    }
  }
  if ( (*(_DWORD *)(*(_QWORD *)this + 28LL) & 2) != 0
    && ((v33 = *(_DWORD *)(*(_QWORD *)a2 + 520LL), (v33 & 1) == 0) || (v33 & 2) != 0) )
  {
    v23 = 64;
  }
  else
  {
    v23 = 0;
  }
  v24 = a5;
  result = ppfeGetAMatch(
             a2,
             (struct tagENUMLOGFONTEXDVW *)(*(_QWORD *)this + 276LL),
             (const unsigned __int16 *)(*(_QWORD *)this + 208LL),
             (__int64)a3,
             v23,
             a3,
             v7,
             a5,
             v15);
  v20 = result;
  if ( result )
  {
    if ( (*(_DWORD *)(*(_QWORD *)a2 + 248LL) & 1) != 0 )
      goto LABEL_54;
    if ( v8 )
    {
      if ( (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 0x40) != 0 )
      {
        v26 = *a3;
        *a3 |= 0x10000u;
        v27 = *(_QWORD *)a2;
        if ( ((*(_DWORD *)(*(_QWORD *)a2 + 36LL) & 1) != 0 || *(_DWORD *)(v27 + 32) == 1)
          && *(_QWORD *)(v27 + 496)
          && (*(_DWORD *)(*((_QWORD *)result + 4) + 48LL) & 1) != 0 )
        {
          v28 = *(_BYTE *)(*(_QWORD *)this + 302LL);
          if ( v28 == 6 )
          {
            v29 = v26 | 0x50010000;
            goto LABEL_47;
          }
          if ( v28 != 4 && (v28 == 5 || (gulFontInformation & 0x12) == 0x12) )
          {
            v29 = v26 | 0x10010000;
LABEL_47:
            *a3 = v29;
          }
        }
      }
    }
    if ( !v15 )
    {
      v30 = v40;
      if ( v40 >= 3 )
      {
        *(_DWORD *)(*(_QWORD *)this + 32LL) = 0;
        v30 = 0;
      }
      v31 = 56LL * v30;
      *(_QWORD *)(v31 + v12) = v38;
      *(_QWORD *)(v31 + v12 + 24) = v20;
      *(_DWORD *)(v31 + v12 + 32) = *a3;
      *(_DWORD *)(v31 + v12 + 36) = a4->x;
      *(_DWORD *)(v31 + v12 + 40) = a4->y;
      v32 = 14LL * v30;
      *(_DWORD *)(v12 + 4 * v32 + 8) = *(_DWORD *)(v6 + 320);
      *(_DWORD *)(v12 + 4 * v32 + 12) = *(_DWORD *)(v6 + 324);
      *(_DWORD *)(v12 + 4 * v32 + 16) = *(_DWORD *)(v6 + 328);
      *(_DWORD *)(v12 + 4 * v32 + 20) = *(_DWORD *)(v6 + 332);
      *(_DWORD *)(v31 + v12 + 44) = *a5;
      *(_DWORD *)(v31 + v12 + 48) = v37;
      ++*(_DWORD *)(*(_QWORD *)this + 32LL);
    }
LABEL_54:
    if ( !fFontAssocStatus || (*(_BYTE *)(*(_QWORD *)this + 301LL) & 0x40) != 0 )
      goto LABEL_55;
    v35 = *((_BYTE *)v24 + 3);
    v36 = fFontAssocStatus | gForceFontAssocCodePage;
    if ( v35 )
    {
      if ( v35 != -1 || (v36 & 1) == 0 )
        goto LABEL_55;
    }
    else if ( (v36 & 2) == 0 )
    {
      goto LABEL_55;
    }
    *v24 = *v24 & 0xFF0000FF | (gSystemAnsiCodePage << 8);
LABEL_55:
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 4LL) = *v24 >> 8;
    result = v20;
    *(_DWORD *)(*(_QWORD *)(*(_QWORD *)a2 + 976LL) + 152LL) &= ~0x10u;
  }
  return result;
}
