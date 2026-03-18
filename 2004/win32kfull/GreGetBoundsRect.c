/*
 * XREFs of GreGetBoundsRect @ 0x1C00F61E8
 * Callers:
 *     NtGdiGetBoundsRect @ 0x1C00F6180 (NtGdiGetBoundsRect.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00199EC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bWrapped@ERECTL@@QEBAHXZ @ 0x1C001BAB8 (-bWrapped@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075A68 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F7658 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00FEC0C (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall GreGetBoundsRect(HDC a1, struct _POINTL *a2, __int16 a3)
{
  DC *v5; // r9
  unsigned int v6; // edi
  LONG *v7; // rbx
  struct _DC_ATTR *UserAttr; // rax
  __int64 v9; // rbx
  __m128i v11; // xmm1
  char *v12; // rcx
  LONG v13; // edx
  signed __int32 v14; // r8d
  int v15; // eax
  LONG v16; // ecx
  LONG v17; // r9d
  LONG v18; // eax
  LONG v19; // eax
  LONG v20; // eax
  LONG v21; // eax
  __int128 v22; // xmm0
  LONG v23; // ecx
  LONG v24; // eax
  LONG v25; // edx
  LONG v26; // r8d
  LONG v27; // eax
  LONG v28; // r9d
  LONG v29; // eax
  LONG v30; // eax
  LONG v31; // eax
  LONG v32; // eax
  LONG v33; // eax
  LONG v34; // edx
  LONG v35; // r8d
  LONG v36; // ecx
  LONG v37; // eax
  LONG v38; // eax
  LONG v39; // r9d
  LONG v40; // eax
  LONG v41; // eax
  LONG v42; // eax
  LONG v43; // eax
  LONG v44; // eax
  DC *v45; // [rsp+20h] [rbp-79h] BYREF
  __int64 v46; // [rsp+28h] [rbp-71h]
  int v47; // [rsp+30h] [rbp-69h] BYREF
  _QWORD v48[3]; // [rsp+38h] [rbp-61h] BYREF
  _BYTE v49[32]; // [rsp+50h] [rbp-49h] BYREF
  _QWORD v50[2]; // [rsp+70h] [rbp-29h] BYREF
  __int16 v51; // [rsp+80h] [rbp-19h]
  struct _POINTL v52[2]; // [rsp+A0h] [rbp+7h] BYREF
  LONG x; // [rsp+B0h] [rbp+17h]
  LONG y; // [rsp+B4h] [rbp+1Bh]
  LONG v55; // [rsp+B8h] [rbp+1Fh]
  LONG v56; // [rsp+BCh] [rbp+23h]

  v45 = 0LL;
  v46 = 0LL;
  XDCOBJ::vLock((XDCOBJ *)&v45, a1);
  v5 = v45;
  v6 = 3;
  if ( !v45 )
    return 0;
  v7 = 0LL;
  if ( a3 < 0 )
  {
    v7 = (LONG *)((char *)v45 + 1064);
    if ( *((_DWORD *)v45 + 266) < *((_DWORD *)v45 + 268) && *((_DWORD *)v45 + 267) < *((_DWORD *)v45 + 269) )
      goto LABEL_17;
    goto LABEL_4;
  }
  if ( (a3 & 0x4000) == 0 )
  {
    if ( ERECTL::bWrapped((DC *)((char *)v45 + 1096)) )
      goto LABEL_4;
    v50[0] = 0LL;
    v50[1] = 0LL;
    v51 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v49, (struct XDCOBJ *)&v45, 0);
    if ( (v49[24] & 1) != 0 )
    {
      v11 = *((__m128i *)XDCOBJ::prgnEffRao(&v45) + 6);
      v7 = (LONG *)((char *)v45 + 1096);
      v12 = (char *)v45 + 1024;
      if ( (*((_DWORD *)v45 + 10) & 1) == 0 )
        v12 = (char *)v45 + 1016;
      v13 = v11.m128i_i32[0] - *(_DWORD *)v12;
      v14 = _mm_srli_si128(v11, 8).m128i_u32[0] - *(_DWORD *)v12;
      v15 = *((_DWORD *)v12 + 1);
      v16 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 4)) - v15;
      v17 = _mm_cvtsi128_si32(_mm_srli_si128(v11, 12)) - v15;
      v18 = *v7;
      if ( *v7 <= v13 )
        v18 = v13;
      a2->x = v18;
      v19 = v7[2];
      if ( v19 >= v14 )
        v19 = v14;
      a2[1].x = v19;
      v20 = v7[1];
      if ( v20 <= v16 )
        v20 = v16;
      a2->y = v20;
      v21 = v7[3];
      if ( v21 >= v17 )
        v21 = v17;
      a2[1].y = v21;
      EXFORMOBJ::vQuickInit((EXFORMOBJ *)v48, (struct XDCOBJ *)&v45, 0x402u);
      if ( !v48[0] )
        goto LABEL_40;
      if ( (*(_DWORD *)(v48[0] + 32LL) & 1) != 0 )
      {
        if ( (unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v48, a2, 2LL) )
          goto LABEL_36;
        goto LABEL_40;
      }
      v22 = *(_OWORD *)&a2->x;
      x = a2->x;
      y = a2[1].y;
      v55 = a2[1].x;
      v56 = a2->y;
      *(_OWORD *)&v52[0].x = v22;
      if ( !(unsigned int)EXFORMOBJ::bXform((EXFORMOBJ *)v48, v52, 4LL) )
      {
LABEL_40:
        v6 = 0;
        goto LABEL_36;
      }
      v23 = v52[1].x;
      v24 = v52[1].x;
      v25 = v52[0].x;
      v26 = x;
      if ( v52[0].x < v52[1].x )
        v24 = v52[0].x;
      if ( v24 >= x )
      {
        v27 = x;
      }
      else
      {
        v27 = v52[1].x;
        if ( v52[0].x < v52[1].x )
          v27 = v52[0].x;
      }
      v28 = v55;
      if ( v27 >= v55 )
      {
        v30 = v55;
      }
      else
      {
        v29 = v52[1].x;
        if ( v52[0].x < v52[1].x )
          v29 = v52[0].x;
        if ( v29 >= x )
        {
          v30 = x;
        }
        else
        {
          v30 = v52[1].x;
          if ( v52[0].x < v52[1].x )
            v30 = v52[0].x;
        }
      }
      a2->x = v30;
      v31 = v23;
      if ( v25 > v23 )
        v31 = v25;
      if ( v31 <= v26 )
      {
        v32 = v26;
      }
      else
      {
        v32 = v23;
        if ( v25 > v23 )
          v32 = v25;
      }
      if ( v32 <= v28 )
      {
        v23 = v28;
      }
      else
      {
        v33 = v23;
        if ( v25 > v23 )
          v33 = v25;
        if ( v33 <= v26 )
        {
          v23 = v26;
        }
        else if ( v25 > v23 )
        {
          v23 = v25;
        }
      }
      v34 = v52[0].y;
      v35 = y;
      a2[1].x = v23;
      v36 = v52[1].y;
      v37 = v52[1].y;
      if ( v34 < v52[1].y )
        v37 = v34;
      if ( v37 >= v35 )
      {
        v38 = v35;
      }
      else
      {
        v38 = v52[1].y;
        if ( v34 < v52[1].y )
          v38 = v34;
      }
      v39 = v56;
      if ( v38 >= v56 )
      {
        v41 = v56;
      }
      else
      {
        v40 = v52[1].y;
        if ( v34 < v52[1].y )
          v40 = v34;
        if ( v40 >= v35 )
        {
          v41 = v35;
        }
        else
        {
          v41 = v52[1].y;
          if ( v34 < v52[1].y )
            v41 = v34;
        }
      }
      a2->y = v41;
      v42 = v36;
      if ( v34 > v36 )
        v42 = v34;
      if ( v42 <= v35 )
      {
        v43 = v35;
      }
      else
      {
        v43 = v36;
        if ( v34 > v36 )
          v43 = v34;
      }
      if ( v43 <= v39 )
      {
        v36 = v39;
      }
      else
      {
        v44 = v36;
        if ( v34 > v36 )
          v44 = v34;
        if ( v44 <= v35 )
        {
          v36 = v35;
        }
        else if ( v34 > v36 )
        {
          v36 = v34;
        }
      }
      a2[1].y = v36;
    }
    else
    {
      v6 = XDCOBJ::bFullScreen((XDCOBJ *)&v45) != 0;
    }
LABEL_36:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v49);
    if ( v50[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v50);
    v5 = v45;
    if ( v6 != 3 )
      goto LABEL_5;
    goto LABEL_18;
  }
  v7 = (LONG *)((char *)v45 + 1080);
  if ( !ERECTL::bWrapped((DC *)((char *)v45 + 1080)) )
  {
LABEL_17:
    *(_OWORD *)&a2->x = *(_OWORD *)v7;
LABEL_18:
    if ( (a3 & 1) != 0 )
    {
      v7[1] = 0x7FFFFFFF;
      *v7 = 0x7FFFFFFF;
      v7[3] = 0x80000000;
      v7[2] = 0x80000000;
      v5 = v45;
    }
    goto LABEL_5;
  }
LABEL_4:
  v6 = 1;
LABEL_5:
  if ( v5 )
  {
    if ( (_DWORD)v46 && (*((_DWORD *)v5 + 11) & 2) != 0 )
    {
      if ( !HIDWORD(v46) )
      {
        UserAttr = XDCOBJ::GetUserAttr((XDCOBJ *)&v45);
        if ( UserAttr )
          DC::RestoreAttributes(v45, UserAttr);
        v5 = v45;
      }
      *((_DWORD *)v5 + 11) &= ~2u;
      v5 = v45;
      LODWORD(v46) = 0;
    }
    v47 = 0;
    v9 = *(_QWORD *)v5;
    HmgDecrementExclusiveReferenceCountEx(v5, HIDWORD(v46), &v47);
    if ( v47 )
      bDeleteDCInternalEx(v9, 0LL);
  }
  return v6;
}
