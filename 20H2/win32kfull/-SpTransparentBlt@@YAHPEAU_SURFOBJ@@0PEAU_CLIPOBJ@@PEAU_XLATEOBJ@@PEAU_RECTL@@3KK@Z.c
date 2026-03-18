/*
 * XREFs of ?SpTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C0082550
 * Callers:
 *     <none>
 * Callees:
 *     OffTransparentBlt @ 0x1C0083698 (OffTransparentBlt.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0084A1C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C0084A50 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     EngTransparentBlt @ 0x1C00869D0 (EngTransparentBlt.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00AE788 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00AEA70 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall SpTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG iTransColor,
        ULONG ulReserved)
{
  unsigned int v9; // r12d
  HDEV hdev; // rax
  struct _SURFOBJ *v11; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  HDEV v14; // rcx
  int v15; // eax
  PVOID *v16; // rdi
  USHORT *p_iType; // r14
  BOOL (__stdcall *v18)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG); // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v21; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v22; // [rsp+68h] [rbp-98h] BYREF
  struct _CLIPOBJ *v23; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v24; // [rsp+78h] [rbp-88h] BYREF
  __int64 v25; // [rsp+80h] [rbp-80h]
  __int64 v26; // [rsp+88h] [rbp-78h]
  _BYTE v27[912]; // [rsp+90h] [rbp-70h] BYREF

  v24 = 0LL;
  v9 = 1;
  v26 = (__int64)a4;
  hdev = a2->hdev;
  v21 = a1;
  v23 = a3;
  v25 = (__int64)prclSrc;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 15) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v27, a1, a3, prclDst);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum((ENUMUNDERLAYS *)v27, &v21, &v24, &v23) )
        return v9;
      v11 = v21;
      p_pvScan0 = 0LL;
      v22 = 0LL;
      if ( v21 )
      {
        hsurf = (int)v21[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v21[-1].pvScan0;
          v14 = v21->hdev;
          v22 = &v21[-1].pvScan0;
          GreLockDisplayDevice(v14);
        }
      }
      v15 = (int)a2[1].hsurf;
      v16 = 0LL;
      if ( (v15 & 0x80004000) != 0 && (v15 & 0x200) == 0 )
      {
        v16 = &a2[-1].pvScan0;
        GreLockDisplayDevice(a2->hdev);
      }
      if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v22, &v23) )
        break;
LABEL_17:
      if ( v16 )
        GreUnlockDisplayDevice(v16[6]);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
    p_iType = &v11->iType;
    if ( v11->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280) + 20LL) & 0x8000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread(KeGetCurrentThread());
          p_pvScan0 = v22;
          LODWORD(v11) = (_DWORD)v21;
          v18 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 112LL);
          goto LABEL_16;
        }
        p_pvScan0 = v22;
        v11 = v21;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v11) )
      {
        if ( W32GetThreadWin32Thread(KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 108)) )
        {
          p_pvScan0 = v22;
          LODWORD(v11) = (_DWORD)v21;
          goto LABEL_26;
        }
        p_pvScan0 = v22;
        v11 = v21;
      }
    }
    if ( ((__int64)v11[1].hsurf & 0x8000) != 0 )
    {
      v18 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))*((_QWORD *)v11->hdev + 169);
LABEL_16:
      v9 &= OffTransparentBlt(
              (int)v18,
              (int)&v24,
              (int)v11,
              (int)&gptlZero,
              (__int64)a2,
              v23,
              v26,
              (__int64)prclDst,
              v25,
              iTransColor,
              ulReserved);
      goto LABEL_17;
    }
LABEL_26:
    v18 = EngTransparentBlt;
    goto LABEL_16;
  }
  return EngTransparentBlt(a1, a2, a3, a4, prclDst, prclSrc, iTransColor, ulReserved);
}
