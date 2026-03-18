/*
 * XREFs of ?vSpReadFromScreen@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0282E10
 * Callers:
 *     ?vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C0281D0C (-vSpBigUnderlayCopy@@YAXPEAU_SPRITESTATE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     ?vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z @ 0x1C0283A4C (-vSpSmallUnderlayCopy@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@12JJPEAU_RECTL@@3@Z.c)
 *     vSpUnTearDownSprites @ 0x1C0285850 (vSpUnTearDownSprites.c)
 * Callees:
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0084A1C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C009D498 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C009ECF8 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C00A4450 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     ??1ECLIPOBJTMPIFNEEDED@@QEAA@XZ @ 0x1C0159168 (--1ECLIPOBJTMPIFNEEDED@@QEAA@XZ.c)
 *     ?vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z @ 0x1C015923C (-vSetup@ECLIPOBJTMPIFNEEDED@@QEAAXHPEAVREGION@@AEAVERECTL@@H@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?bConcurrent@@YAHPEAU_SPRITESTATE@@@Z @ 0x1C027F560 (-bConcurrent@@YAHPEAU_SPRITESTATE@@@Z.c)
 *     OffCopyBits @ 0x1C02C77F8 (OffCopyBits.c)
 */

void __fastcall vSpReadFromScreen(struct _SPRITESTATE *a1, struct _POINTL *a2, struct _SURFOBJ *a3, struct _RECTL *a4)
{
  struct REGION *v4; // rbx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  int hsurf; // eax
  __int64 v12; // r14
  POINTL *v13; // r13
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 v16; // rdi
  __int64 v17; // rsi
  __int64 v18; // rbx
  BOOL (__stdcall *v19)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rdi
  HDEV hdev; // rax
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  struct _CLIPOBJ *v22; // [rsp+68h] [rbp-98h]
  PVOID *p_pvScan0; // [rsp+70h] [rbp-90h]
  __int64 v24; // [rsp+78h] [rbp-88h]
  __int64 v25; // [rsp+80h] [rbp-80h]
  int v26[2]; // [rsp+88h] [rbp-78h]
  REGION *v27[11]; // [rsp+90h] [rbp-70h] BYREF
  int v28; // [rsp+E8h] [rbp-18h]
  int v29; // [rsp+110h] [rbp+10h]
  __int64 v30; // [rsp+120h] [rbp+20h]
  int v31; // [rsp+128h] [rbp+28h]

  v4 = (struct REGION *)*((_QWORD *)a1 + 129);
  v25 = (__int64)a4;
  *(_QWORD *)v26 = a2;
  v27[10] = 0LL;
  v28 = 0;
  v29 = 1;
  v30 = 0LL;
  v27[7] = 0LL;
  v31 = 0;
  v22 = 0LL;
  if ( v4 )
  {
    v8 = bConcurrent(a1);
    ECLIPOBJTMPIFNEEDED::vSetup((ECLIPOBJTMPIFNEEDED *)v27, v8, v4, (struct ERECTL *)a4, 0);
    if ( ERECTL::bEmpty((ERECTL *)((char *)v27 + 4)) )
      goto LABEL_59;
    v22 = (struct _CLIPOBJ *)v27;
  }
  v9 = *((_QWORD *)a1 + 4);
  v24 = 0LL;
  if ( v9 )
  {
    v10 = *(_DWORD *)(v9 + 88);
    if ( (v10 & 0x80004000) != 0 && (v10 & 0x200) == 0 )
    {
      v24 = v9 - 24;
      GreLockDisplayDevice(*(_QWORD *)(v9 - 24 + 48));
    }
  }
  p_pvScan0 = 0LL;
  if ( a3 )
  {
    hsurf = (int)a3[1].hsurf;
    if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
    {
      p_pvScan0 = &a3[-1].pvScan0;
      GreLockDisplayDevice(a3->hdev);
    }
  }
  v12 = *((_QWORD *)a1 + 4);
  v13 = &gptlZero;
  v21 = 0LL;
  v14 = 0LL;
  v15 = (v12 - 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64);
  if ( !v15 )
    goto LABEL_55;
  if ( (*(_DWORD *)(((v12 - 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64)) + 0x70) & 0x80000) == 0
    || (v16 = *(_QWORD *)(((v12 - 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64)) + 0x30),
        v17 = *(_QWORD *)(v16 + 24),
        v16 == v17) )
  {
    if ( ((__int64)a3[1].hsurf & 0x400) == 0 && *(_QWORD *)(v12 + 24) )
    {
      if ( *(_WORD *)(v12 + 76) != 1 )
      {
LABEL_34:
        if ( (*(_DWORD *)(v12 + 88) & 0x400) != 0 )
        {
          hdev = *(HDEV *)(v12 + 24);
LABEL_52:
          v19 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))*((_QWORD *)hdev + 165);
          goto LABEL_54;
        }
        goto LABEL_53;
      }
      if ( !bAllowShareAccess((struct _SURFOBJ *)v12)
        || !W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        || !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        || !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
        && !*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)
        || (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) == 0 )
      {
        if ( *(_WORD *)(v12 + 76) == 1
          && bAllowShareAccess((struct _SURFOBJ *)v12)
          && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          goto LABEL_53;
        }
        goto LABEL_34;
      }
LABEL_43:
      v19 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
                                                                                                 + 80LL);
      goto LABEL_54;
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x400) != 0 )
      {
        goto LABEL_43;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_53;
      }
    }
    if ( ((__int64)a3[1].hsurf & 0x400) != 0 )
    {
      hdev = a3->hdev;
      goto LABEL_52;
    }
LABEL_53:
    v19 = EngCopyBits;
    goto LABEL_54;
  }
  LODWORD(v13) = v16 + 2584;
  LOBYTE(v15) = 5;
  v18 = HmgShareLockCheck(
          *(_QWORD *)(((v12 - 24) & ((unsigned __int128)-(__int128)(unsigned __int64)v12 >> 64)) + 0x90),
          v15);
  if ( v18 )
  {
    if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v21,
                         0LL,
                         0,
                         *(_QWORD *)(v17 + 1808),
                         *(_QWORD *)(v16 + 1808),
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0x2000) )
    {
      v14 = v21;
      v12 = v18 + 24;
      v19 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(v17 + 2840);
      DEC_SHARE_REF_CNT(v18);
LABEL_54:
      OffCopyBits((int)v19, v26[0], (int)a3, (int)v13, v12, v22, v14, v25, v25);
      goto LABEL_55;
    }
    DEC_SHARE_REF_CNT(v18);
  }
LABEL_55:
  EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v21);
  if ( p_pvScan0 )
    GreUnlockDisplayDevice(p_pvScan0[6]);
  if ( v24 )
    GreUnlockDisplayDevice(*(_QWORD *)(v24 + 48));
LABEL_59:
  ECLIPOBJTMPIFNEEDED::~ECLIPOBJTMPIFNEEDED(v27);
}
