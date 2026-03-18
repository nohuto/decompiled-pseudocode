/*
 * XREFs of ?GreGetStringBitmapW@@YAIPEAUHDC__@@PEAGIPEAUSTRINGBITMAP@@I@Z @ 0x1C0297584
 * Callers:
 *     NtGdiGetStringBitmapW @ 0x1C02984D0 (NtGdiGetStringBitmapW.c)
 * Callees:
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z @ 0x1C00A9250 (-bInit@RFONTOBJ@@QEAAHAEAVXDCOBJ@@HK@Z.c)
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x1C00AFAAC (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ??1ESTROBJ@@QEAA@XZ @ 0x1C015DFFC (--1ESTROBJ@@QEAA@XZ.c)
 *     vStringBitmapTextOut @ 0x1C015E214 (vStringBitmapTextOut.c)
 *     memset @ 0x1C015F880 (memset.c)
 *     ?ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z @ 0x1C02A6B58 (-ptlBaseLineAdjustSet@ESTROBJ@@QEAAXAEAU_POINTL@@@Z.c)
 *     ?vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z @ 0x1C02BDAEC (-vInitSimple@ESTROBJ@@QEAAXPEAGJAEAVXDCOBJ@@AEAVRFONTOBJ@@JJPEAX@Z.c)
 */

__int64 __fastcall GreGetStringBitmapW(
        HDC a1,
        unsigned __int16 *a2,
        __int64 a3,
        struct STRINGBITMAP *a4,
        unsigned int a5)
{
  unsigned int v7; // edi
  int v8; // r8d
  int v9; // esi
  __int64 v10; // rcx
  int v11; // ebx
  unsigned int v12; // r15d
  unsigned int v13; // eax
  bool v14; // zf
  int v15; // esi
  _DWORD *v16; // rbx
  int v17; // r8d
  int v18; // ecx
  GLYPHPOS *pgp; // rax
  int v21; // [rsp+28h] [rbp-D8h]
  int v22; // [rsp+30h] [rbp-D0h]
  void *v23; // [rsp+38h] [rbp-C8h]
  __int64 v24; // [rsp+40h] [rbp-C0h] BYREF
  struct _POINTL v25; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD *v26; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v27[2]; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h] BYREF
  __int64 v29; // [rsp+70h] [rbp-90h] BYREF
  STROBJ v30; // [rsp+80h] [rbp-80h] BYREF
  int v31; // [rsp+B0h] [rbp-50h]
  _QWORD *v32; // [rsp+B8h] [rbp-48h]
  __int64 v33; // [rsp+C0h] [rbp-40h]
  int *v34; // [rsp+150h] [rbp+50h]
  int v35; // [rsp+168h] [rbp+68h]
  int v36; // [rsp+16Ch] [rbp+6Ch]

  DCOBJ::DCOBJ((DCOBJ *)v27, a1);
  if ( !v27[0] )
  {
    EngSetLastError(6u);
LABEL_4:
    v7 = 0;
    goto LABEL_37;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)&v29, (struct XDCOBJ *)v27, 516);
  if ( (*(_BYTE *)(v29 + 32) & 0x43) != 0x43 )
    goto LABEL_4;
  v24 = 0LL;
  if ( (unsigned int)RFONTOBJ::bInit((RFONTOBJ *)&v24, (struct XDCOBJ *)v27, 0, 2u) )
    GreAcquireSemaphore(*(_QWORD *)(v24 + 504));
  if ( !v24 || (*(_DWORD *)(v24 + 88) & 2) != 0 || (v8 = *(_DWORD *)(v24 + 392), v8 | *(_DWORD *)(v27[0] + 1740LL)) )
  {
    v7 = 0;
    goto LABEL_36;
  }
  v35 = 0;
  ESTROBJ::vInitSimple((ESTROBJ *)&v30, a2, v8, (struct XDCOBJ *)v27, (struct RFONTOBJ *)&v24, v21, v22, v23);
  if ( (v35 & 4) != 0 )
  {
    v9 = v30.rclBkGround.bottom - v30.rclBkGround.top;
    v10 = *(_QWORD *)(v33 + 24LL * (v30.cGlyphs - 1) + 8);
    v11 = v30.rclBkGround.right
        + (*(int *)(*(_QWORD *)(v33 + 8) + 16LL) >> 4)
        + ((*(_DWORD *)(v10 + 12) - *(_DWORD *)(v10 + 20)) >> 4)
        - v30.rclBkGround.left;
    v12 = (unsigned int)(v11 + 7) >> 3;
    v13 = (v30.rclBkGround.bottom - v30.rclBkGround.top) * v12;
    v7 = v13 + 8;
    if ( a5 < v13 + 8 )
      goto LABEL_33;
    memset((char *)a4 + 8, 0, v13);
    v14 = (v35 & 0x1400) == 0;
    *((_DWORD *)a4 + 1) = v9;
    v15 = 0;
    *(_DWORD *)a4 = v11;
    v16 = 0LL;
    v25 = 0LL;
    if ( !v14 )
    {
      v15 = *v34;
      if ( *v34 )
      {
        if ( *v34 == 1 )
        {
          v16 = *(_DWORD **)(v24 + 720);
        }
        else if ( *v34 == 2 )
        {
          v16 = *(_DWORD **)(v24 + 728);
        }
        else
        {
          v16 = *v34 == 3
              ? *(_DWORD **)(v24 + 736)
              : *(_DWORD **)(*(_QWORD *)(v24 + 744) + 8LL * (unsigned int)(v15 - 4));
        }
        if ( v16 )
        {
          v17 = *(_DWORD *)(v24 + 316);
          v18 = v16[80];
          if ( v17 < v16[79] - v18 )
            v18 = v16[79] - v17;
          pgp = v30.pgp;
          v25.y = v18 >> 4;
          v28 = 0LL;
          if ( v18 >> 4 )
            pgp = 0LL;
          v30.pgp = pgp;
          RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v28);
        }
      }
    }
    v36 = v15;
    v31 = 0;
    v26 = v16;
    if ( v16 )
    {
      if ( (v16[22] & 2) != 0 )
      {
        v7 = 0;
        goto LABEL_32;
      }
      v32 = &v26;
    }
    ESTROBJ::ptlBaseLineAdjustSet((ESTROBJ *)&v30, &v25);
    vStringBitmapTextOut(&v30, a4, v12);
LABEL_32:
    v26 = 0LL;
    RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v26);
    goto LABEL_33;
  }
  v7 = 0;
LABEL_33:
  ESTROBJ::~ESTROBJ((ESTROBJ *)&v30);
LABEL_36:
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v24);
LABEL_37:
  if ( v27[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v27);
  return v7;
}
