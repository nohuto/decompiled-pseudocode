/*
 * XREFs of GreGetAppClipBox @ 0x1C00F1118
 * Callers:
 *     NtGdiGetAppClipBox @ 0x1C00F10B0 (NtGdiGetAppClipBox.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0097914 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     bCvtPts1 @ 0x1C009F8A0 (bCvtPts1.c)
 *     ?iComplexity@RGNOBJ@@QEBAJXZ @ 0x1C00A0F50 (-iComplexity@RGNOBJ@@QEBAJXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A1148 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00F8FAC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetAppClipBox(HDC a1, LONG *a2)
{
  unsigned __int64 v3; // r9
  DC *v4; // r14
  LONG v5; // r8d
  LONG v6; // r10d
  char *v7; // rcx
  LONG v8; // edx
  LONG v9; // r8d
  LONG v10; // r10d
  int v11; // ecx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edi
  bool v16; // zf
  LONG v17; // edx
  LONG v18; // eax
  LONG x; // r9d
  LONG v20; // r11d
  LONG v21; // eax
  LONG v22; // edi
  LONG v23; // eax
  LONG v24; // eax
  LONG v25; // ecx
  LONG y; // r8d
  bool v27; // cc
  LONG v28; // r10d
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // eax
  LONG v35; // eax
  LONG v36; // eax
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // eax
  LONG v40; // ecx
  DC *v41[2]; // [rsp+20h] [rbp-79h] BYREF
  struct REGION *v42; // [rsp+30h] [rbp-69h] BYREF
  unsigned __int64 v43; // [rsp+38h] [rbp-61h] BYREF
  int v44; // [rsp+44h] [rbp-55h]
  _BYTE v45[32]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v46[2]; // [rsp+70h] [rbp-29h] BYREF
  __int16 v47; // [rsp+80h] [rbp-19h]
  struct _POINTL v48; // [rsp+A0h] [rbp+7h] BYREF
  LONG v49; // [rsp+A8h] [rbp+Fh]
  LONG v50; // [rsp+ACh] [rbp+13h]
  LONG v51; // [rsp+B0h] [rbp+17h]
  int v52; // [rsp+B4h] [rbp+1Bh]
  LONG v53; // [rsp+B8h] [rbp+1Fh]
  int v54; // [rsp+BCh] [rbp+23h]

  v41[0] = 0LL;
  v41[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v41, a1);
  if ( !v41[0] )
  {
    EngSetLastError(6u);
    v14 = 0;
    goto LABEL_19;
  }
  v46[0] = 0LL;
  v46[1] = 0LL;
  v47 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v45, (struct XDCOBJ *)v41, 1);
  if ( (v45[24] & 1) != 0 )
  {
    v42 = XDCOBJ::prgnEffRao(v41);
    *(_OWORD *)a2 = *((_OWORD *)v42 + 6);
    if ( *a2 >= a2[2] || a2[1] >= a2[3] )
    {
      v4 = v41[0];
      v14 = 1;
      *(_QWORD *)a2 = 0LL;
      *((_QWORD *)a2 + 1) = 0LL;
LABEL_15:
      if ( v14 )
      {
        if ( (*(_DWORD *)(*((_QWORD *)v4 + 122) + 108LL) & 1) != 0 )
        {
          v39 = *a2;
          v40 = a2[2];
          if ( *a2 > v40 )
          {
            *a2 = v40;
            a2[2] = v39;
          }
        }
      }
      goto LABEL_17;
    }
    EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v43, (struct XDCOBJ *)v41, 0x80000402);
    v3 = v43;
    if ( v43 )
    {
      v4 = v41[0];
      v5 = a2[2];
      v6 = a2[1];
      v7 = (char *)v41[0] + 1024;
      if ( (*((_DWORD *)v41[0] + 10) & 1) == 0 )
        v7 = (char *)v41[0] + 1016;
      v8 = *a2 - *(_DWORD *)v7;
      *a2 = v8;
      v9 = v5 - *(_DWORD *)v7;
      a2[2] = v9;
      v10 = v6 - *((_DWORD *)v7 + 1);
      a2[1] = v10;
      v11 = a2[3] - *((_DWORD *)v7 + 1);
      a2[3] = v11;
      v12 = *(_DWORD *)(v3 + 32);
      if ( (v12 & 1) != 0 )
      {
        if ( (v12 & 0x43) == 0x43 || (v16 = (unsigned int)bCvtPts1(v3, a2, 2LL) == 0, v13 = 0, !v16) )
          v13 = 1;
        if ( v44 )
        {
          ++*a2;
          ++a2[2];
        }
        if ( v13 )
          v14 = RGNOBJ::iComplexity((RGNOBJ *)&v42);
        else
          v14 = 0;
      }
      else
      {
        v48.x = v8;
        v49 = v9;
        v51 = v8;
        v52 = v11;
        v53 = v9;
        v54 = v11;
        v48.y = v10;
        v50 = v10;
        EXFORMOBJ::bXform((EXFORMOBJ *)&v43, &v48);
        v17 = v49;
        v18 = v49;
        x = v48.x;
        v20 = v51;
        if ( v48.x < v49 )
          v18 = v48.x;
        if ( v18 >= v51 )
        {
          v21 = v51;
        }
        else
        {
          v21 = v49;
          if ( v48.x < v49 )
            v21 = v48.x;
        }
        v22 = v53;
        if ( v21 >= v53 )
        {
          v24 = v53;
        }
        else
        {
          v23 = v49;
          if ( v48.x < v49 )
            v23 = v48.x;
          if ( v23 >= v51 )
          {
            v24 = v51;
          }
          else
          {
            v24 = v49;
            if ( v48.x < v49 )
              v24 = v48.x;
          }
        }
        v25 = v50;
        y = v48.y;
        v27 = v48.y < v50;
        v28 = v52;
        *a2 = v24;
        v29 = v25;
        if ( v27 )
          v29 = y;
        if ( v29 >= v28 )
        {
          v30 = v28;
        }
        else
        {
          v30 = v25;
          if ( y < v25 )
            v30 = y;
        }
        if ( v30 >= v54 )
        {
          v32 = v54;
        }
        else
        {
          v31 = v25;
          if ( y < v25 )
            v31 = y;
          if ( v31 >= v28 )
          {
            v32 = v28;
          }
          else
          {
            v32 = v25;
            if ( y < v25 )
              v32 = y;
          }
        }
        a2[1] = v32;
        v33 = v17;
        if ( x > v17 )
          v33 = x;
        if ( v33 <= v20 )
        {
          v34 = v20;
        }
        else
        {
          v34 = v17;
          if ( x > v17 )
            v34 = x;
        }
        if ( v34 <= v22 )
        {
          v17 = v22;
        }
        else
        {
          v35 = v17;
          if ( x > v17 )
            v35 = x;
          if ( v35 <= v20 )
          {
            v17 = v20;
          }
          else if ( x > v17 )
          {
            v17 = x;
          }
        }
        a2[2] = v17;
        v36 = v25;
        if ( y > v25 )
          v36 = y;
        if ( v36 <= v28 )
        {
          v37 = v28;
        }
        else
        {
          v37 = v25;
          if ( y > v25 )
            v37 = y;
        }
        if ( v37 <= v54 )
        {
          v25 = v54;
        }
        else
        {
          v38 = v25;
          if ( y > v25 )
            v38 = y;
          if ( v38 <= v28 )
          {
            v25 = v28;
          }
          else if ( y > v25 )
          {
            v25 = y;
          }
        }
        a2[3] = v25;
        v14 = 3;
      }
      goto LABEL_15;
    }
  }
  else if ( (unsigned int)XDCOBJ::bFullScreen((XDCOBJ *)v41) )
  {
    *(_QWORD *)a2 = 0LL;
    v14 = 3;
    *((_QWORD *)a2 + 1) = 0LL;
    goto LABEL_17;
  }
  v14 = 0;
LABEL_17:
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v45);
  if ( v46[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v46);
LABEL_19:
  if ( v41[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v41);
  return v14;
}
