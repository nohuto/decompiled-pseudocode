/*
 * XREFs of ?vSpDrawCursor@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@1@Z @ 0x1C0283EA4
 * Callers:
 *     ?vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C01562AC (-vSpComposite@@YAXPEAVSPRITE@@PEAU_POINTL@@PEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C010681C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     OffBitBlt @ 0x1C011F830 (OffBitBlt.c)
 */

void __fastcall vSpDrawCursor(
        struct SPRITE *a1,
        struct _POINTL *a2,
        struct _SURFOBJ *a3,
        struct _RECTL *a4,
        struct _POINTL *a5)
{
  PVOID *p_pvScan0; // rdi
  int hsurf; // eax
  __int64 v10; // rax
  __int64 v11; // rbx
  int v12; // ecx
  BOOL (__stdcall *v13)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // r12
  BOOL (__stdcall *v14)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  struct _POINTL *v15; // r15
  POINTL *v16; // r13
  __int64 v17; // rbp
  __int64 v18; // r14
  int y; // eax
  __int64 v20; // rbx
  int v21; // eax
  __int64 v22; // [rsp+20h] [rbp-98h]
  __int64 v23; // [rsp+70h] [rbp-48h] BYREF
  __int64 v24; // [rsp+78h] [rbp-40h]
  __int64 v25; // [rsp+C0h] [rbp+8h] BYREF
  LONG *v26; // [rsp+C8h] [rbp+10h]
  __int64 v27; // [rsp+D8h] [rbp+20h]

  v27 = (__int64)a4;
  v26 = (LONG *)a2;
  v25 = 0LL;
  if ( *((_QWORD *)a1 + 15) )
  {
    v22 = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 2) + 32LL) + 104LL);
    v23 = 0LL;
    if ( !(unsigned int)EXLATEOBJ::bInitXlateObj(
                          &v23,
                          0LL,
                          0,
                          (__int64)ppalMono,
                          v22,
                          (__int64)ppalDefault,
                          (__int64)ppalDefault,
                          0,
                          0xFFFFFF,
                          0,
                          0) )
    {
LABEL_57:
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v23);
      return;
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
    v10 = *((_QWORD *)a1 + 15);
    v11 = 0LL;
    if ( v10 )
    {
      v12 = *(_DWORD *)(v10 + 88);
      if ( (v12 & 0x80004000) != 0 && (v12 & 0x200) == 0 )
      {
        v11 = v10 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v10 - 24 + 48));
      }
    }
    v13 = EngBitBlt;
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
      {
        v14 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
        goto LABEL_28;
      }
      if ( a3->iType == 1
        && bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
      {
        goto LABEL_27;
      }
    }
    if ( ((__int64)a3[1].hsurf & 1) == 0 )
LABEL_27:
      v14 = EngBitBlt;
    else
      v14 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
LABEL_28:
    v15 = a5;
    v16 = &gptlZero;
    v24 = v23;
    OffBitBlt(
      (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v14,
      v26,
      (__int64)a3,
      &gptlZero,
      *((_QWORD *)a1 + 15),
      0LL,
      0LL,
      v23,
      &a4->left,
      (__int64 *)a5,
      0LL,
      0LL,
      0LL,
      34952);
    if ( v11 )
      GreUnlockDisplayDevice(*(_QWORD *)(v11 + 48));
    v17 = *((_QWORD *)a1 + 16);
    LODWORD(v25) = v15->x;
    if ( v17 )
    {
      y = v15->y;
      v16 = (POINTL *)((char *)a1 + 136);
      v18 = 0LL;
    }
    else
    {
      v17 = *((_QWORD *)a1 + 15);
      v18 = v24;
      y = v15->y + (*(int *)(v17 + 36) >> 1);
    }
    HIDWORD(v25) = y;
    v20 = 0LL;
    if ( v17 )
    {
      v21 = *(_DWORD *)(v17 + 88);
      if ( (v21 & 0x80004000) != 0 && (v21 & 0x200) == 0 )
      {
        v20 = v17 - 24;
        GreLockDisplayDevice(*(_QWORD *)(v17 - 24 + 48));
      }
    }
    if ( a3->iType == 1 )
    {
      if ( bAllowShareAccess(a3)
        && W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
        && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
         || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
        && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 1) != 0 )
      {
        v13 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 72LL);
LABEL_53:
        OffBitBlt(
          (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v13,
          v26,
          (__int64)a3,
          v16,
          v17,
          0LL,
          0LL,
          v18,
          (int *)v27,
          &v25,
          0LL,
          0LL,
          0LL,
          26214);
        if ( v20 )
          GreUnlockDisplayDevice(*(_QWORD *)(v20 + 48));
        if ( p_pvScan0 )
          GreUnlockDisplayDevice(p_pvScan0[6]);
        goto LABEL_57;
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
    if ( ((__int64)a3[1].hsurf & 1) != 0 )
      v13 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))*((_QWORD *)a3->hdev + 164);
    goto LABEL_53;
  }
}
