/*
 * XREFs of ?vSetPointer@@YAXPEAUHDEV__@@PEAU_CURSINFO@@KKK@Z @ 0x1C00CE308
 * Callers:
 *     GreSetPointer @ 0x1C00CDFB0 (GreSetPointer.c)
 * Callees:
 *     ?vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@@@Z @ 0x1C0086FD8 (-vProcessCursorShape@@YAXPEAUHDEV__@@HHPEAU_SURFOBJ@@1PEAVPALETTE@@PEAU_RECTL@@PEAPEAUHBITMAP__@.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C009D498 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ??XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z @ 0x1C00A2CC0 (--XERECTL@@QEAAAEAV0@AEBU_RECTL@@@Z.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     EngSetPointerShape @ 0x1C0107700 (EngSetPointerShape.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

void __fastcall vSetPointer(HDEV a1, struct _CURSINFO *a2, char a3, unsigned int a4, unsigned int a5)
{
  int v5; // r13d
  int v6; // eax
  struct _CURSINFO *v7; // r12
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbx
  __int64 v15; // rdi
  __int64 v16; // rcx
  __int64 v17; // rax
  struct PALETTE *v18; // rdx
  signed int v19; // eax
  LONG v20; // r8d
  LONG v21; // r9d
  __int64 v22; // rcx
  __int64 v23; // rax
  LONG v24; // ecx
  LONG v25; // edx
  LONG v26; // r8d
  LONG v27; // eax
  int v28; // eax
  int *v29; // rdx
  RECTL *v30; // rcx
  int v31; // r8d
  int v32; // ecx
  int v33; // ebx
  int v34; // edi
  unsigned int v35; // edx
  LONG v36; // r10d
  int v37; // r13d
  LONG v38; // r11d
  int v39; // eax
  __int64 v40; // r14
  __int64 (__fastcall *v41)(SURFOBJ *, __int64, __int64, __int64, int, int, LONG, LONG, RECTL *, unsigned int); // r11
  int v42; // edx
  int v43; // ecx
  int v44; // eax
  SURFOBJ *v45; // rsi
  signed __int32 v46; // eax
  signed __int32 v47; // edx
  signed __int32 v48; // eax
  signed __int32 v49; // edx
  __int64 v50; // r8
  signed __int32 v51; // eax
  signed __int32 v52; // edx
  signed __int32 v53; // eax
  signed __int32 v54; // edx
  int v55; // ecx
  int v56; // eax
  int v57; // r10d
  unsigned int v58; // eax
  int v59; // eax
  unsigned int v60; // eax
  void (__fastcall *v61)(__int64, __int64, __int64, _QWORD); // rax
  signed __int32 v62; // ett
  signed __int32 v63; // ett
  signed __int32 v64; // ett
  int v65; // r13d
  LONG v66; // eax
  LONG v67; // ecx
  SURFOBJ *v68; // r8
  XLATEOBJ *v69; // r9
  SURFOBJ *v70; // rdx
  HDEV v71; // rax
  unsigned __int8 v72; // al
  int v73; // ecx
  char v74; // al
  int v75; // ecx
  int v76; // ecx
  LONG xHot; // [rsp+20h] [rbp-E0h]
  int yHota; // [rsp+28h] [rbp-D8h]
  LONG yHot; // [rsp+28h] [rbp-D8h]
  LONG x; // [rsp+30h] [rbp-D0h]
  LONG y; // [rsp+38h] [rbp-C8h]
  RECTL *prcl; // [rsp+40h] [rbp-C0h]
  int fl; // [rsp+48h] [rbp-B8h]
  LONG v84; // [rsp+60h] [rbp-A0h]
  LONG v85; // [rsp+60h] [rbp-A0h]
  SURFOBJ *pso; // [rsp+68h] [rbp-98h]
  LONG v87; // [rsp+70h] [rbp-90h]
  struct PALETTE *v89; // [rsp+78h] [rbp-88h] BYREF
  __int64 v90; // [rsp+80h] [rbp-80h]
  unsigned int v91; // [rsp+88h] [rbp-78h]
  int v92; // [rsp+8Ch] [rbp-74h]
  int v93; // [rsp+90h] [rbp-70h]
  __int64 v94; // [rsp+98h] [rbp-68h]
  __int64 v95; // [rsp+A0h] [rbp-60h]
  __int64 v96; // [rsp+A8h] [rbp-58h]
  __int64 v97; // [rsp+B0h] [rbp-50h]
  __int64 v98; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v99; // [rsp+C0h] [rbp-40h]
  _DWORD v100[4]; // [rsp+C8h] [rbp-38h] BYREF
  _DWORD v101[4]; // [rsp+D8h] [rbp-28h] BYREF
  __int64 v102; // [rsp+E8h] [rbp-18h]
  RECTL v103; // [rsp+F0h] [rbp-10h] BYREF
  RECTL v104; // [rsp+100h] [rbp+0h] BYREF
  RECTL v105; // [rsp+110h] [rbp+10h] BYREF

  v91 = a4;
  v92 = a3 & 0x20;
  v5 = a3 & 0x10;
  v6 = *((_DWORD *)a1 + 10);
  v7 = a2;
  v84 = 0;
  if ( (v6 & 0x400) == 0 )
  {
    if ( a2 )
    {
      v9 = *((_QWORD *)a2 + 1);
      LOBYTE(a2) = 5;
      v10 = HmgShareLockCheck(v9, a2);
      v102 = v10;
      v11 = v10;
      if ( !v10 )
        return;
      if ( *(_DWORD *)(v10 + 96) != 1 || (*(_DWORD *)(v10 + 60) & 1) != 0 )
        goto LABEL_64;
      v12 = *((_QWORD *)a1 + 319);
      v13 = 0LL;
      v94 = 0LL;
      v14 = 0LL;
      v95 = 0LL;
      v15 = 0LL;
      v98 = 0LL;
      v90 = 0LL;
      v97 = 0LL;
      v99 = 0LL;
      v89 = 0LL;
      pso = (SURFOBJ *)((v12 + 24) & -(__int64)(v12 != 0));
      if ( *((_QWORD *)v7 + 2) || *((_QWORD *)v7 + 6) )
      {
        v16 = *((_QWORD *)v7 + 6);
        LOBYTE(v13) = 5;
        if ( v16 )
        {
          v17 = HmgShareLockCheck(v16, v13);
          v84 = 1;
        }
        else
        {
          v17 = HmgShareLockCheck(*((_QWORD *)v7 + 2), v13);
        }
        v97 = v17;
        v14 = v17;
        if ( !v17 )
          goto LABEL_101;
        if ( *(_DWORD *)(v17 + 60) != *(int *)(v11 + 60) >> 1 || *(_DWORD *)(v17 + 56) < *(_DWORD *)(v11 + 56) )
          goto LABEL_61;
        v18 = *(struct PALETTE **)(v17 + 128);
        v89 = v18;
        if ( !v18 )
        {
          v71 = (HDEV)*((_QWORD *)a1 + 3);
          if ( v71 != a1 )
          {
            v18 = (struct PALETTE *)*((_QWORD *)v71 + 226);
            v89 = v18;
          }
        }
        if ( !(unsigned int)bIsCompatible(&v89, v18, v14, a1, 1) )
          goto LABEL_61;
        if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                             &v98,
                             0LL,
                             0,
                             (__int64)v89,
                             *((_QWORD *)a1 + 226),
                             (__int64)ppalDefault,
                             (__int64)ppalDefault,
                             0,
                             0xFFFFFF,
                             0,
                             0) )
        {
          v13 = v14;
          v95 = v98;
          v90 = v14;
        }
        else
        {
LABEL_101:
          v13 = 0LL;
        }
      }
      if ( *((_DWORD *)v7 + 11) )
      {
        if ( (*(_DWORD *)v7 & 0x400) != 0 )
        {
          if ( v5 )
            goto LABEL_19;
        }
        else if ( !v5 )
        {
          goto LABEL_19;
        }
      }
      vProcessCursorShape(
        (HDEV)(v13 + 24),
        v5,
        v84,
        (struct _SURFOBJ *)(v11 + 24),
        (struct _SURFOBJ *)((v13 + 24) & -(__int64)(v13 != 0)),
        v89,
        (struct _RECTL *)v7 + 2,
        (HBITMAP *)v7 + 3);
      v59 = *(_DWORD *)v7;
      if ( v5 )
        v60 = v59 | 0x400;
      else
        v60 = v59 & 0xFFFFFBFF;
      *(_DWORD *)v7 = v60;
LABEL_19:
      v19 = *((_DWORD *)v7 + 8);
      if ( v19 > *((_DWORD *)v7 + 10) || (v20 = *((_DWORD *)v7 + 9), v21 = *((_DWORD *)v7 + 11), v20 > v21) )
      {
LABEL_61:
        if ( v14 )
          DEC_SHARE_REF_CNT(v14);
        EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v98);
LABEL_64:
        DEC_SHARE_REF_CNT(v11);
        return;
      }
      v104.right = *((_DWORD *)v7 + 10);
      v22 = *((_QWORD *)v7 + 3);
      *(_QWORD *)&v104.left = __PAIR64__(v20, v19);
      v104.bottom = v21;
      if ( v22
        && *((_DWORD *)a1 + 527) > 3u
        && (LOBYTE(v13) = 5, v23 = HmgShareLockCheck(v22, v13), v99 = v23, (v15 = v23) != 0) )
      {
        v24 = *((_DWORD *)v7 + 9);
        v25 = *((_DWORD *)v7 + 10);
        v26 = *((_DWORD *)v7 + 11);
        v94 = v23;
        v27 = *((_DWORD *)v7 + 8);
        v103.left = v27;
        v103.top = v24;
        v103.right = v25;
        v103.bottom = v26;
        if ( v5 )
        {
          v103.left = v27 + 1;
          v103.top = v24 + 1;
          v103.right = v25 + 8;
          v103.bottom = v26 + 6;
        }
        v28 = *(_DWORD *)(v15 + 56);
        v29 = v100;
        v100[0] = 0;
        v30 = &v103;
        v100[1] = 0;
        v100[2] = v28;
        v100[3] = *(_DWORD *)(v15 + 60);
      }
      else
      {
        v55 = *(_DWORD *)(v11 + 56);
        if ( v14 && v55 >= *(_DWORD *)(v14 + 56) )
          v55 = *(_DWORD *)(v14 + 56);
        v101[0] = 0;
        v29 = v101;
        v101[1] = 0;
        v56 = *(int *)(v11 + 60) >> 1;
        v101[2] = v55;
        v30 = &v104;
        v101[3] = v56;
      }
      ERECTL::operator*=(&v30->left, v29);
      v105 = 0LL;
      v31 = v5 != 0 ? 3 : 0;
      v93 = v31;
      if ( ((_DWORD)a1[10] & 0x400) != 0 )
      {
LABEL_59:
        if ( v15 )
          DEC_SHARE_REF_CNT(v15);
        goto LABEL_61;
      }
      v32 = *((__int16 *)v7 + 3);
      v33 = 0;
      v34 = 1;
      v35 = v91;
      v36 = *((_DWORD *)a1 + 18);
      v37 = a3 & 0xC | 1;
      v38 = *((_DWORD *)a1 + 19);
      *((_DWORD *)a1 + 20) = *((__int16 *)v7 + 2);
      v39 = 0;
      v96 = 0LL;
      *((_DWORD *)a1 + 21) = v32;
      v87 = v36;
      v85 = v38;
      if ( v35 )
      {
        v96 = 0LL;
        if ( a5 )
        {
          v72 = -1;
          v96 = 1LL;
          if ( a5 < 0xFF )
            v72 = a5;
          v73 = v72;
          v74 = 16;
          v75 = 16 * v73;
          if ( v35 < 0x10 )
            v74 = v35;
          v76 = v74 & 0xF | v75;
          v39 = 1;
          v37 |= v76 << 8;
        }
      }
      v40 = 0LL;
      if ( v92 )
        goto LABEL_90;
      v41 = (__int64 (__fastcall *)(SURFOBJ *, __int64, __int64, __int64, int, int, LONG, LONG, RECTL *, unsigned int))*((_QWORD *)a1 + 365);
      if ( !v41 || v39 && ((_DWORD)a1[532] & 0x200) == 0 )
      {
LABEL_89:
        v38 = v85;
LABEL_90:
        v65 = a3 & 0x40 | v37;
        if ( v94 )
        {
          v66 = *((__int16 *)v7 + 3) + v31;
          fl = v65 | 0x10;
          v67 = v31 + *((__int16 *)v7 + 2);
          v68 = (SURFOBJ *)(v94 + 24);
          v69 = 0LL;
          prcl = &v103;
          v70 = 0LL;
          y = v38;
          x = v36;
          yHot = v66;
          xHot = v67;
        }
        else
        {
          fl = v65;
          v70 = (SURFOBJ *)(v11 + 24);
          v68 = (SURFOBJ *)((v90 + 24) & -(__int64)(v90 != 0));
          prcl = &v104;
          y = v38;
          x = v36;
          yHot = *((__int16 *)v7 + 3);
          xHot = *((__int16 *)v7 + 2);
          v69 = (XLATEOBJ *)v95;
        }
        v45 = pso;
        EngSetPointerShape(pso, v70, v68, v69, xHot, yHot, x, y, prcl, fl);
LABEL_41:
        if ( !v33 && ((_DWORD)a1[10] & 2) != 0 && *((_QWORD *)a1 + 366) )
          (*((void (__fastcall **)(SURFOBJ *, __int64, __int64, _QWORD))a1 + 366))(v45, 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
        _m_prefetchw(a1 + 10);
        do
        {
          v47 = *((_DWORD *)a1 + 10) | 4;
          if ( !v34 )
            v47 = (_DWORD)a1[10] & 0xFFFFFFFB;
          v46 = *((_DWORD *)a1 + 10);
        }
        while ( v46 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v47, v46) );
        _m_prefetchw(a1 + 10);
        do
        {
          v49 = *((_DWORD *)a1 + 10) | 2;
          if ( !v33 )
            v49 = (_DWORD)a1[10] & 0xFFFFFFFD;
          v48 = *((_DWORD *)a1 + 10);
        }
        while ( v48 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v49, v48) );
        _m_prefetchw(a1 + 10);
        v50 = v96;
        do
        {
          v52 = *((_DWORD *)a1 + 10) | 0x100000;
          if ( !v50 )
            v52 = (_DWORD)a1[10] & 0xFFEFFFFF;
          v51 = *((_DWORD *)a1 + 10);
        }
        while ( v51 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v52, v51) );
        _m_prefetchw(a1 + 10);
        do
        {
          v54 = *((_DWORD *)a1 + 10) | 0x200000;
          if ( !v40 )
            v54 = (_DWORD)a1[10] & 0xFFDFFFFF;
          v53 = *((_DWORD *)a1 + 10);
        }
        while ( v53 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v54, v53) );
        v11 = v102;
        v14 = v97;
        v15 = v99;
        goto LABEL_59;
      }
      if ( v94 )
      {
        v40 = 0LL;
        if ( ((_DWORD)a1[532] & 0x20) == 0 )
          goto LABEL_37;
        v42 = v31 + *((__int16 *)v7 + 3);
        v43 = v31 + *((__int16 *)v7 + 2);
        v105 = v103;
        v44 = v41(pso, 0LL, v94 + 24, 0LL, v43, v42, v36, v85, &v105, v37 | 0x10u);
        if ( v44 != 3 )
          v33 = ((unsigned __int8)v44 >> 1) & 1;
        v34 = v33 ^ 1;
        if ( (v44 & 4) == 0 )
          goto LABEL_37;
      }
      else
      {
        v57 = *((__int16 *)v7 + 2);
        yHota = *((__int16 *)v7 + 3);
        v105 = v104;
        v58 = v41(pso, v11 + 24, (v90 + 24) & -(__int64)(v90 != 0), v95, v57, yHota, v87, v85, &v105, v37);
        if ( v58 == 3 )
        {
          if ( *((_QWORD *)a1 + 366) )
            (*((void (__fastcall **)(SURFOBJ *, __int64, __int64, _QWORD))a1 + 366))(
              pso,
              0xFFFFFFFFLL,
              0xFFFFFFFFLL,
              0LL);
          v58 = 1;
        }
        v33 = (v58 >> 1) & 1;
        v34 = (v58 & 2) == 0;
        if ( (v58 & 4) == 0 )
        {
          v40 = 0LL;
LABEL_37:
          if ( !v34 )
          {
            if ( ((_DWORD)a1[10] & 4) != 0 )
              EngSetPointerShape(
                (SURFOBJ *)((*((_QWORD *)a1 + 319) + 24LL) & -(__int64)(*((_QWORD *)a1 + 319) != 0LL)),
                0LL,
                0LL,
                0LL,
                0,
                0,
                0,
                0,
                0LL,
                0);
            v45 = pso;
            goto LABEL_41;
          }
          v31 = v93;
          v36 = v87;
          goto LABEL_89;
        }
      }
      v40 = 1LL;
      goto LABEL_37;
    }
    if ( (v6 & 4) != 0 )
    {
      EngSetPointerShape(
        (SURFOBJ *)((*((_QWORD *)a1 + 319) + 24LL) & -(__int64)(*((_QWORD *)a1 + 319) != 0LL)),
        0LL,
        0LL,
        0LL,
        0,
        0,
        0,
        0,
        0LL,
        0);
      v6 = *((_DWORD *)a1 + 10);
    }
    if ( (v6 & 2) != 0 )
    {
      v61 = (void (__fastcall *)(__int64, __int64, __int64, _QWORD))*((_QWORD *)a1 + 366);
      if ( v61 )
        v61((*((_QWORD *)a1 + 319) + 24LL) & -(__int64)(*((_QWORD *)a1 + 319) != 0LL), 0xFFFFFFFFLL, 0xFFFFFFFFLL, 0LL);
    }
    _m_prefetchw(a1 + 10);
    do
      v62 = *((_DWORD *)a1 + 10);
    while ( v62 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v62 & 0xFFFFFFFD, v62) );
    _m_prefetchw(a1 + 10);
    do
      v63 = *((_DWORD *)a1 + 10);
    while ( v63 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v63 & 0xFFFFFFFB, v63) );
    _m_prefetchw(a1 + 10);
    do
      v64 = *((_DWORD *)a1 + 10);
    while ( v64 != _InterlockedCompareExchange((volatile signed __int32 *)a1 + 10, v64 & 0xFFEFFFFF, v64) );
  }
}
