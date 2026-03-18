/*
 * XREFs of ?SpFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1C027FFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C004F8CC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C0083518 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C0083800 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C0089C60 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00A7BBC (W32GetThreadWin32Thread.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C01067E4 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C010681C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0136F18 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C0138D58 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C0138F54 (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1C013A5D4 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014CDC4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     OffFillPath @ 0x1C02C8F04 (OffFillPath.c)
 */

__int64 __fastcall SpFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _BRUSHOBJ *a4,
        struct _POINTL *a5,
        unsigned int a6,
        unsigned int a7)
{
  unsigned int v8; // r13d
  struct _PATHOBJ *v9; // rdi
  struct _SURFOBJ *v10; // rsi
  PVOID *p_pvScan0; // r12
  LONG x; // ebx
  LONG y; // edi
  LONG v14; // edi
  LONG v15; // ebx
  PVOID *v16; // rbx
  PVOID *v17; // r15
  int hsurf; // eax
  PVOID v19; // rcx
  bool v20; // zf
  USHORT *p_iType; // r15
  __int64 ThreadWin32Thread; // rax
  BOOL (__stdcall *v23)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  struct _CLIPOBJ *v25; // [rsp+50h] [rbp-B0h] BYREF
  struct _SURFOBJ *v26; // [rsp+58h] [rbp-A8h] BYREF
  PVOID *v27; // [rsp+60h] [rbp-A0h] BYREF
  struct _POINTL v28; // [rsp+68h] [rbp-98h] BYREF
  HDEV hdev; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL *v30; // [rsp+78h] [rbp-88h]
  struct _BRUSHOBJ *v31; // [rsp+80h] [rbp-80h]
  _OWORD v32[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v33; // [rsp+A8h] [rbp-58h]
  struct _PATHOBJ v34; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v35; // [rsp+B8h] [rbp-48h]
  char v36[32]; // [rsp+100h] [rbp+0h] BYREF
  int v37; // [rsp+120h] [rbp+20h]
  __int64 *v38[9]; // [rsp+370h] [rbp+270h] BYREF
  int v39; // [rsp+3B8h] [rbp+2B8h]

  v31 = a4;
  v26 = a1;
  v25 = a3;
  v30 = a5;
  v28 = 0LL;
  v8 = 1;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v38, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v38, &v26, &v28, &v25) )
  {
    v9 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v34);
    v10 = v26;
    v33 = 0LL;
    memset(v32, 0, sizeof(v32));
    p_pvScan0 = &v26[-1].pvScan0;
    if ( v39 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)p_pvScan0) )
    {
      if ( v35 )
      {
        if ( EPATHOBJ::bClone((EPATHOBJ *)&v34, (struct EPATHOBJ *)this) )
        {
          x = v28.x;
          y = v28.y;
          CLIPOBJ_vOffset(v25, v28.x, v28.y);
          PATHOBJ_vOffset(&v34, x, y);
          hdev = v10->hdev;
          PRECOMPUTE::vInit(
            (__int64)v32,
            (SURFACE *)p_pvScan0,
            (PDEVOBJ *)&hdev,
            (struct EPATHOBJ *)&v34,
            (__int64)v25,
            0LL,
            0LL,
            a6,
            a7,
            1);
          v14 = -y;
          v15 = -x;
          CLIPOBJ_vOffset(v25, v15, v14);
          PATHOBJ_vOffset(&v34, v15, v14);
          if ( v33 )
          {
            v9 = this;
            this = &v34;
            goto LABEL_9;
          }
        }
      }
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v32);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v34);
      if ( v37 )
        goto LABEL_44;
    }
    else
    {
LABEL_9:
      PATHOBJ_vEnumStart(this);
      v16 = 0LL;
      v17 = 0LL;
      v27 = 0LL;
      if ( v10 )
      {
        hsurf = (int)v10[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          v19 = p_pvScan0[6];
          v16 = p_pvScan0;
          v27 = p_pvScan0;
          GreLockDisplayDevice(v19);
          v17 = p_pvScan0;
        }
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v27, &v25) )
      {
        p_iType = &v10->iType;
        if ( v10->iType == 1 )
        {
          if ( bAllowShareAccess(v10) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x40) != 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v16 = v27;
              v10 = v26;
              v23 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 56LL);
LABEL_36:
              if ( !(unsigned int)OffFillPath(v23, &v28, v10, this, v25, v31, v30, a6, a7) )
                v8 = -1;
              if ( !v9 )
                v9 = this;
              v20 = v16 == 0LL;
              goto LABEL_41;
            }
            v16 = v27;
            v10 = v26;
          }
          if ( *p_iType == 1 && bAllowShareAccess(v10) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
            {
              v16 = v27;
              v10 = v26;
LABEL_35:
              v23 = EngFillPath;
              goto LABEL_36;
            }
            v16 = v27;
            v10 = v26;
          }
        }
        if ( ((__int64)v10[1].hsurf & 0x40) != 0 )
        {
          v23 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v10->hdev + 162);
          goto LABEL_36;
        }
        goto LABEL_35;
      }
      if ( !v9 )
        v9 = this;
      v20 = v17 == 0LL;
LABEL_41:
      this = v9;
      if ( !v20 )
        GreUnlockDisplayDevice(v16[6]);
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v32);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v34);
      if ( v37 )
LABEL_44:
        PopThreadGuardedObject(v36);
    }
  }
  return v8;
}
