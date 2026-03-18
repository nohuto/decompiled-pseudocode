/*
 * XREFs of ?SpAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C0106450
 * Callers:
 *     <none>
 * Callees:
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0083518 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0083800 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     EngAlphaBlend @ 0x1C00D1A90 (EngAlphaBlend.c)
 *     OffAlphaBlend @ 0x1C01066A0 (OffAlphaBlend.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C01067E4 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C010681C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 */

__int64 __fastcall SpAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        RECTL *prclDest,
        struct _RECTL *prclSrc,
        struct _BLENDOBJ *pBlendObj)
{
  unsigned int v8; // r12d
  HDEV hdev; // rax
  struct _SURFOBJ *v10; // rsi
  PVOID *p_pvScan0; // rbx
  int hsurf; // eax
  int v13; // eax
  PVOID *v14; // rdi
  USHORT *p_iType; // r14
  BOOL (__stdcall *v16)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // rcx
  HDEV v18; // rcx
  __int64 ThreadWin32Thread; // rax
  struct _SURFOBJ *v20; // [rsp+50h] [rbp-B0h] BYREF
  PVOID *v21; // [rsp+58h] [rbp-A8h] BYREF
  struct _CLIPOBJ *v22; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v23; // [rsp+68h] [rbp-98h] BYREF
  __int64 v24; // [rsp+70h] [rbp-90h]
  __int64 v25; // [rsp+78h] [rbp-88h]
  __int64 v26; // [rsp+80h] [rbp-80h]
  __int64 *v27[114]; // [rsp+90h] [rbp-70h] BYREF

  v23 = 0LL;
  v8 = 1;
  hdev = a2->hdev;
  v26 = (__int64)a4;
  v20 = a1;
  v22 = a3;
  v25 = (__int64)prclSrc;
  v24 = (__int64)pBlendObj;
  if ( !hdev || *((struct _SURFOBJ **)hdev + 15) != a2 )
  {
    ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v27, a1, a3, prclDest);
    while ( 1 )
    {
      if ( !(unsigned int)ENUMUNDERLAYS::bEnum(v27, &v20, &v23, &v22) )
        return v8;
      v10 = v20;
      p_pvScan0 = 0LL;
      v21 = 0LL;
      if ( v20 )
      {
        hsurf = (int)v20[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          p_pvScan0 = &v20[-1].pvScan0;
          v18 = v20->hdev;
          v21 = &v20[-1].pvScan0;
          GreLockDisplayDevice(v18);
        }
      }
      v13 = (int)a2[1].hsurf;
      v14 = 0LL;
      if ( (v13 & 0x80004000) != 0 && (v13 & 0x200) == 0 )
      {
        v14 = &a2[-1].pvScan0;
        GreLockDisplayDevice(a2->hdev);
      }
      if ( (unsigned int)NEEDDDILOCK::bRender((NEEDDDILOCK *)&v21, &v22) )
        break;
LABEL_17:
      if ( v14 )
        GreUnlockDisplayDevice(v14[6]);
      if ( p_pvScan0 )
        GreUnlockDisplayDevice(p_pvScan0[6]);
    }
    p_iType = &v10->iType;
    if ( v10->iType == 1 )
    {
      if ( (unsigned int)bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
          && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x10000) != 0 )
        {
          ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
          p_pvScan0 = v21;
          LODWORD(v10) = (_DWORD)v20;
          v16 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)(ThreadWin32Thread + 280) + 120LL);
          goto LABEL_16;
        }
        p_pvScan0 = v21;
        v10 = v20;
      }
      if ( *p_iType == 1 && (unsigned int)bAllowShareAccess(v10) )
      {
        if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
          && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
           || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
        {
          p_pvScan0 = v21;
          LODWORD(v10) = (_DWORD)v20;
          goto LABEL_26;
        }
        p_pvScan0 = v21;
        v10 = v20;
      }
    }
    if ( ((__int64)v10[1].hsurf & 0x10000) != 0 )
    {
      v16 = (BOOL (__stdcall *)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))*((_QWORD *)v10->hdev + 170);
LABEL_16:
      v8 &= OffAlphaBlend(
              (int)v16,
              (int)&v23,
              (int)v10,
              (int)&gptlZero,
              (__int64)a2,
              v22,
              v26,
              (__int64)prclDest,
              v25,
              v24);
      goto LABEL_17;
    }
LABEL_26:
    v16 = EngAlphaBlend;
    goto LABEL_16;
  }
  return EngAlphaBlend(a1, a2, a3, a4, prclDest, prclSrc, pBlendObj);
}
