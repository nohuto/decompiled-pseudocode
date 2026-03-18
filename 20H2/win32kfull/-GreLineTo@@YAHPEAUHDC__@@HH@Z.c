/*
 * XREFs of ?GreLineTo@@YAHPEAUHDC__@@HH@Z @ 0x1C013A240
 * Callers:
 *     NtGdiLineTo @ 0x1C013A190 (NtGdiLineTo.c)
 * Callees:
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C0097914 (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C00993B8 (-vAccumulateTight@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C00A1148 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C00A1580 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F3124 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bFullScreen@XDCOBJ@@QEAAHXZ @ 0x1C00F8FAC (-bFullScreen@XDCOBJ@@QEAAHXZ.c)
 *     ??0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z @ 0x1C0139EEC (--0PATHSTACKOBJ@@QEAA@AEAVXDCOBJ@@H@Z.c)
 *     ?vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z @ 0x1C013A9FC (-vAccumulate@XDCOBJ@@QEAAXPEAVECLIPOBJ@@AEAVERECTL@@@Z.c)
 *     ?ptfxGetCurrent@EPATHOBJ@@QEBA?AU_POINTFIX@@XZ @ 0x1C013AA60 (-ptfxGetCurrent@EPATHOBJ@@QEBA-AU_POINTFIX@@XZ.c)
 *     ?bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z @ 0x1C013B974 (-bStrokeAndOrFill@EPATHOBJ@@QEAAHAEAVXDCOBJ@@PEAU_LINEATTRS@@PEAVEXFORMOBJ@@K@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreLineTo(HDC a1, LONG a2, LONG a3)
{
  LONG v3; // esi
  LONG v4; // r12d
  unsigned int v5; // ebx
  DC *v6; // r8
  __int64 v7; // rdx
  LINEATTRS *v8; // r14
  int v9; // edi
  DC *v10; // r14
  __int64 v11; // rax
  __int64 v12; // rdx
  int v13; // ecx
  BOOL (__stdcall *v14)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rax
  int *v15; // rcx
  int v16; // r8d
  int v17; // edx
  unsigned int *v18; // r9
  LONG v19; // r13d
  int v20; // r12d
  LONG v21; // r15d
  int x; // esi
  int y; // edi
  LONG v24; // ecx
  DC *v25; // r8
  char *v26; // rcx
  int v27; // eax
  unsigned int v28; // esi
  int v29; // ecx
  signed int v30; // r15d
  int v31; // edi
  int v32; // r13d
  unsigned __int64 v33; // rdx
  signed int v34; // r9d
  int v35; // r10d
  int v36; // r11d
  char *v37; // r14
  struct ECLIPOBJ *v38; // rdx
  __int64 v39; // r12
  int v40; // ecx
  char *v42; // r12
  struct REGION *v43; // rax
  struct _POINTFIX Current; // rax
  DC *v45; // r9
  __int64 v46; // rdi
  DC *v47; // rcx
  int v48; // edx
  DC *v49; // rcx
  int v50; // edx
  __int64 v51; // [rsp+28h] [rbp-D8h]
  DC *v52[2]; // [rsp+50h] [rbp-B0h] BYREF
  LONG v53; // [rsp+60h] [rbp-A0h]
  LONG v54; // [rsp+64h] [rbp-9Ch]
  unsigned int *v55; // [rsp+68h] [rbp-98h]
  LINEATTRS *v56; // [rsp+70h] [rbp-90h]
  struct _POINTL v57[2]; // [rsp+80h] [rbp-80h] BYREF
  struct _POINTL v58; // [rsp+90h] [rbp-70h] BYREF
  int v59; // [rsp+98h] [rbp-68h]
  int v60; // [rsp+9Ch] [rbp-64h]
  int v61; // [rsp+A0h] [rbp-60h]
  BOOL (__stdcall *v62)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // [rsp+A8h] [rbp-58h]
  struct _XFORMOBJ v63[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v64; // [rsp+C0h] [rbp-40h]
  _BYTE v65[32]; // [rsp+D0h] [rbp-30h] BYREF
  _QWORD v66[2]; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v67; // [rsp+100h] [rbp+0h]
  __int128 v68; // [rsp+120h] [rbp+20h] BYREF
  PATHOBJ ppo; // [rsp+130h] [rbp+30h] BYREF
  __int64 v70; // [rsp+138h] [rbp+38h]
  char v71[32]; // [rsp+180h] [rbp+80h] BYREF
  int v72; // [rsp+1A0h] [rbp+A0h]

  v3 = a2;
  v53 = a2;
  v54 = a3;
  v4 = a3;
  v52[1] = 0LL;
  v5 = 1;
  XDCOBJ::vLock((XDCOBJ *)v52, a1);
  if ( !v52[0] )
  {
    v5 = 0;
    EngSetLastError(6u);
    return v5;
  }
  if ( (*((_DWORD *)v52[0] + 9) & 0x10000) != 0 )
  {
    EngSetLastError(6u);
    v5 = 0;
LABEL_58:
    XDCOBJ::vUnlockFast((XDCOBJ *)v52);
    return v5;
  }
  EXFORMOBJ::vQuickInit((EXFORMOBJ *)v63, (struct XDCOBJ *)v52, 516);
  v6 = v52[0];
  v7 = *((_QWORD *)v52[0] + 122);
  v8 = (LINEATTRS *)((char *)v52[0] + 208);
  v56 = (LINEATTRS *)((char *)v52[0] + 208);
  v9 = *(_DWORD *)(v7 + 152);
  if ( (v9 & 0x1000) != 0 )
  {
    GreDCSelectBrush(v52[0], *(_QWORD *)(v7 + 160));
    v6 = v52[0];
  }
  if ( (v9 & 0x2000) != 0 )
  {
    GreDCSelectPen(v6, *(_QWORD *)(*((_QWORD *)v6 + 122) + 168LL));
    v6 = v52[0];
  }
  if ( (v8->fl & 0xB) != 0
    || (*((_DWORD *)v6 + 62) & 1) != 0
    || (*(_DWORD *)(*(_QWORD *)&v63[0].ulReserved + 32LL) & 2) == 0 && *(_DWORD *)(*((_QWORD *)v6 + 122) + 208LL) == 2 )
  {
LABEL_53:
    v58.x = v3;
    v58.y = v4;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&ppo, v52, 1);
    if ( v70 )
    {
      if ( EPATHOBJ::bPolyLineTo((EPATHOBJ *)&ppo, (struct EXFORMOBJ *)v63, &v58, 1u) )
      {
        Current = EPATHOBJ::ptfxGetCurrent((EPATHOBJ *)&ppo);
        v45 = v52[0];
        *(_DWORD *)(*((_QWORD *)v52[0] + 122) + 152LL) &= 0xFFFFFCFF;
        *(struct _POINTL *)(*((_QWORD *)v45 + 122) + 216LL) = v58;
        *(_DWORD *)(*((_QWORD *)v45 + 122) + 8LL) = *(_DWORD *)Current.x;
        *(_DWORD *)(*((_QWORD *)v45 + 122) + 12LL) = *(_DWORD *)(*(_QWORD *)&Current + 4LL);
        if ( (*((_DWORD *)v52[0] + 62) & 1) == 0
          && !(unsigned int)EPATHOBJ::bStrokeAndOrFill(&ppo, (struct XDCOBJ *)v52, v8, v63, 1u) )
        {
          v5 = 0;
        }
      }
    }
    else
    {
      EngSetLastError(8u);
    }
    EPATHOBJ::vUnlock((EPATHOBJ *)&ppo);
    if ( v72 )
      PopThreadGuardedObject(v71);
    goto LABEL_58;
  }
  v66[0] = 0LL;
  v66[1] = 0LL;
  v67 = 256;
  DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v65, (struct XDCOBJ *)v52, 0);
  v10 = v52[0];
  v11 = *((_QWORD *)v52[0] + 6);
  if ( (v65[24] & 1) == 0 )
  {
    v5 = XDCOBJ::bFullScreen((XDCOBJ *)v52);
    goto LABEL_45;
  }
  v12 = *((_QWORD *)v52[0] + 62);
  v64 = v12;
  if ( !v12 )
    goto LABEL_78;
  v13 = *(_DWORD *)(v12 + 112);
  if ( (v13 & 0x100) == 0 )
  {
    if ( !*(_WORD *)(v12 + 100) && (v13 & 0x20) == 0 )
    {
      v14 = EngLineTo;
      goto LABEL_16;
    }
LABEL_78:
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v65);
    if ( v66[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v66);
LABEL_74:
    v8 = v56;
    goto LABEL_53;
  }
  v14 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(v11 + 2936);
LABEL_16:
  v62 = v14;
  if ( !v14 )
    goto LABEL_78;
  if ( (*(_DWORD *)(*(_QWORD *)&v63[0].ulReserved + 32LL) & 2) != 0 )
  {
    v15 = (int *)*((_QWORD *)v52[0] + 122);
    v16 = *(int *)(*(_QWORD *)&v63[0].ulReserved + 28LL) >> 4;
    v17 = *(int *)(*(_QWORD *)&v63[0].ulReserved + 24LL) >> 4;
    v18 = (unsigned int *)(v15 + 38);
    v19 = v4 + v16;
    v20 = v15[38];
    v21 = v3 + v17;
    if ( (v20 & 0x100) != 0 )
    {
      x = v15[2] >> 4;
      y = v15[3] >> 4;
    }
    else
    {
      x = v17 + v15[54];
      y = v16 + v15[55];
    }
  }
  else
  {
    v46 = *((_QWORD *)v52[0] + 122);
    v57[0].y = v4;
    v57[0].x = v3;
    v20 = *(_DWORD *)(v46 + 152);
    v55 = (unsigned int *)(v46 + 152);
    if ( (v20 & 0x200) != 0 )
    {
      v57[1] = *(struct _POINTL *)(v46 + 216);
      EXFORMOBJ::bXform((EXFORMOBJ *)v63, v57);
      x = v57[1].x;
      y = v57[1].y;
    }
    else
    {
      EXFORMOBJ::bXform((EXFORMOBJ *)v63, v57);
      x = *(int *)(v46 + 8) >> 4;
      y = *(int *)(v46 + 12) >> 4;
    }
    v21 = v57[0].x;
    v19 = v57[0].y;
    v18 = v55;
  }
  LODWORD(v55) = y;
  v61 = x;
  v60 = y;
  v59 = x;
  if ( (unsigned int)(v21 + 134217726) > 0xFFFFFFC || (unsigned int)(v19 + 134217726) > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
    goto LABEL_77;
  }
  v24 = v53;
  *v18 = v20 & 0xFFFFFCFF;
  *(_DWORD *)(*((_QWORD *)v10 + 122) + 216LL) = v24;
  *(_DWORD *)(*((_QWORD *)v10 + 122) + 220LL) = v54;
  *(_DWORD *)(*((_QWORD *)v10 + 122) + 8LL) = 16 * v21;
  *(_DWORD *)(*((_QWORD *)v10 + 122) + 12LL) = 16 * v19;
  v25 = v52[0];
  v26 = (char *)v52[0] + 1024;
  if ( (*((_DWORD *)v52[0] + 10) & 1) == 0 )
    v26 = (char *)v52[0] + 1016;
  v27 = *(_DWORD *)v26;
  v28 = *(_DWORD *)v26 + x;
  v29 = *((_DWORD *)v52[0] + 2 * (*((_DWORD *)v52[0] + 10) & 1) + 255);
  v30 = v27 + v21;
  v31 = v29 + y;
  v32 = v29 + v19;
  if ( v28 + 134217726 > 0xFFFFFFC
    || (unsigned int)(v31 + 134217726) > 0xFFFFFFC
    || (unsigned int)(v30 + 134217726) > 0xFFFFFFC
    || (unsigned int)(v32 + 134217726) > 0xFFFFFFC )
  {
    EngSetLastError(0x57u);
    v49 = v52[0];
    v50 = 16 * v61;
    *(_DWORD *)(*((_QWORD *)v52[0] + 122) + 152LL) &= ~0x200u;
    *(_DWORD *)(*((_QWORD *)v49 + 122) + 152LL) |= 0x100u;
    *(_DWORD *)(*((_QWORD *)v49 + 122) + 8LL) = v50;
    *(_DWORD *)(*((_QWORD *)v49 + 122) + 12LL) = 16 * (_DWORD)v55;
LABEL_77:
    v5 = 0;
    goto LABEL_45;
  }
  if ( (int)v28 > v30 )
  {
    v33 = (unsigned int)v30;
    v34 = v28 + 1;
  }
  else
  {
    v33 = v28;
    v34 = v30 + 1;
  }
  DWORD2(v68) = v34;
  LODWORD(v68) = v33;
  if ( v31 > v32 )
  {
    v35 = v32;
    DWORD1(v68) = v32;
    v36 = v31 + 1;
  }
  else
  {
    v35 = v31;
    DWORD1(v68) = v31;
    v36 = v32 + 1;
  }
  HIDWORD(v68) = v36;
  if ( (*((_DWORD *)v52[0] + 9) & 0xE0) != 0 )
  {
    *(_OWORD *)&v57[0].x = v68;
    XDCOBJ::vAccumulate((XDCOBJ *)v52, (struct ECLIPOBJ *)v33, (struct ERECTL *)v57);
    v34 = DWORD2(v68);
    LODWORD(v33) = v68;
    v25 = v52[0];
    v36 = HIDWORD(v68);
    v35 = DWORD1(v68);
  }
  if ( *((struct PEN **)v25 + 18) == gpPenNull )
    goto LABEL_45;
  v55 = 0LL;
  if ( (int)v33 >= *((_DWORD *)v25 + 250)
    && v34 <= *((_DWORD *)v25 + 252)
    && v35 >= *((_DWORD *)v25 + 251)
    && v36 <= *((_DWORD *)v25 + 253) )
  {
    goto LABEL_39;
  }
  v42 = (char *)v25 + 1752;
  v55 = (unsigned int *)((char *)v25 + 1752);
  v43 = XDCOBJ::prgnEffRao(v52);
  XCLIPOBJ::vSetup((XCLIPOBJ *)v42, v43, (struct ERECTL *)&v68, 0);
  if ( !ERECTL::bEmpty((ERECTL *)(v42 + 4)) )
  {
    v25 = v52[0];
LABEL_39:
    v37 = (char *)v25 + 1320;
    if ( *((_DWORD *)v25 + 330) == -1 )
    {
      *(_DWORD *)(*((_QWORD *)v25 + 122) + 152LL) |= 2u;
      v25 = v52[0];
    }
    v38 = (struct ECLIPOBJ *)*((_QWORD *)v25 + 122);
    v39 = v64;
    v40 = *((_DWORD *)v38 + 38);
    if ( (((unsigned __int8)v40 | *((_BYTE *)v25 + 316)) & 2) != 0 )
    {
      v51 = v64;
      *((_DWORD *)v38 + 38) = v40 & 0xFFFFFFFD;
      *((_DWORD *)v52[0] + 79) &= ~2u;
      EBRUSHOBJ::vInitBrush(
        v37,
        v52[0],
        *((_QWORD *)v52[0] + 18),
        *((_QWORD *)v52[0] + 11),
        *(_QWORD *)(v39 + 128),
        v51,
        0);
      v25 = v52[0];
    }
    if ( (*((_DWORD *)v25 + 9) & 0xE0) != 0 && (*((_DWORD *)v37 + 30) & 0x100) == 0 )
    {
      *(_OWORD *)&v57[0].x = v68;
      XDCOBJ::vAccumulateTight((XDCOBJ *)v52, v38, (__m128i *)v57);
    }
    ++*(_DWORD *)(v39 + 92);
    if ( ((unsigned int (__fastcall *)(__int64, unsigned int *, char *, _QWORD, int, signed int, int, __int128 *, int))v62)(
           v39 + 24,
           v55,
           v37,
           v28,
           v31,
           v30,
           v32,
           &v68,
           (((*(_BYTE *)(*((_QWORD *)v52[0] + 122) + 212LL) - 1) & 0xF) + 1) | ((((*(_BYTE *)(*((_QWORD *)v52[0] + 122)
                                                                                            + 212LL)
                                                                                 - 1) & 0xF)
                                                                               + 1) << 8)) )
    {
      goto LABEL_45;
    }
    v47 = v52[0];
    v48 = 16 * v59;
    *(_DWORD *)(*((_QWORD *)v52[0] + 122) + 152LL) &= ~0x200u;
    *(_DWORD *)(*((_QWORD *)v47 + 122) + 152LL) |= 0x100u;
    *(_DWORD *)(*((_QWORD *)v47 + 122) + 8LL) = v48;
    *(_DWORD *)(*((_QWORD *)v47 + 122) + 12LL) = 16 * v60;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v65);
    if ( v66[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v66);
    v4 = v54;
    v3 = v53;
    goto LABEL_74;
  }
LABEL_45:
  XDCOBJ::vUnlockFast((XDCOBJ *)v52);
  DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v65);
  if ( v66[0] )
    DLODCOBJ::vUnlock((DLODCOBJ *)v66);
  return v5;
}
