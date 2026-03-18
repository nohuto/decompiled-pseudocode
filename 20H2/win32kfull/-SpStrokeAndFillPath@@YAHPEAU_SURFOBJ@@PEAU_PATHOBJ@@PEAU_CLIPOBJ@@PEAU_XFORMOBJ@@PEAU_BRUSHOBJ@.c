/*
 * XREFs of ?SpStrokeAndFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_LINEATTRS@@4PEAU_POINTL@@KK@Z @ 0x1C0136CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z @ 0x1C00849E4 (-CLIPOBJ_vOffset@@YAXPEAU_CLIPOBJ@@JJ@Z.c)
 *     ?bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0084A1C (-bAllowShareAccess@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z @ 0x1C0084A50 (-bRender@NEEDDDILOCK@@QEAAHPEAPEAU_CLIPOBJ@@@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C00852CC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     ?bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z @ 0x1C00AE788 (-bEnum@ENUMUNDERLAYS@@QEAAHPEAPEAU_SURFOBJ@@PEAU_POINTL@@PEAPEAU_CLIPOBJ@@@Z.c)
 *     ??0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C00AEA70 (--0ENUMUNDERLAYS@@QEAA@PEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     W32GetThreadWin32Thread @ 0x1C00B4FD0 (W32GetThreadWin32Thread.c)
 *     OffStrokeAndFillPath @ 0x1C0137968 (OffStrokeAndFillPath.c)
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0138E68 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C013AD50 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C013AF4C (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1C013C5E0 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014F5D4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall SpStrokeAndFillPath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _LINEATTRS *a6,
        struct _BRUSHOBJ *a7,
        struct _POINTL *a8,
        unsigned int a9,
        unsigned int a10)
{
  struct _XFORMOBJ *v11; // r15
  unsigned int v12; // r13d
  struct _PATHOBJ *v13; // rdi
  struct _SURFOBJ *v14; // rsi
  PVOID *p_pvScan0; // r12
  PVOID *v16; // rbx
  PVOID *v17; // r15
  int hsurf; // eax
  PVOID v19; // rcx
  USHORT *p_iType; // r15
  BOOL (__stdcall *v21)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG); // rcx
  LONG x; // ebx
  LONG y; // edi
  LONG v25; // edi
  LONG v26; // ebx
  __int64 ThreadWin32Thread; // rax
  struct _CLIPOBJ *v28; // [rsp+60h] [rbp-A0h] BYREF
  struct _SURFOBJ *v29; // [rsp+68h] [rbp-98h] BYREF
  PVOID *v30; // [rsp+70h] [rbp-90h] BYREF
  struct _POINTL v31; // [rsp+78h] [rbp-88h] BYREF
  struct _LINEATTRS *v32; // [rsp+80h] [rbp-80h]
  struct _XFORMOBJ *v33; // [rsp+88h] [rbp-78h]
  HDEV hdev; // [rsp+90h] [rbp-70h] BYREF
  struct _POINTL *v35; // [rsp+98h] [rbp-68h]
  struct _BRUSHOBJ *v36; // [rsp+A0h] [rbp-60h]
  struct _BRUSHOBJ *v37; // [rsp+A8h] [rbp-58h]
  _OWORD v38[2]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v39; // [rsp+D0h] [rbp-30h]
  struct _PATHOBJ v40; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v41; // [rsp+E8h] [rbp-18h]
  _BYTE v42[32]; // [rsp+130h] [rbp+30h] BYREF
  int v43; // [rsp+150h] [rbp+50h]
  __int64 *v44[9]; // [rsp+3A0h] [rbp+2A0h] BYREF
  int v45; // [rsp+3E8h] [rbp+2E8h]

  v37 = a5;
  v11 = a4;
  v32 = a6;
  v36 = a7;
  v12 = 1;
  v33 = a4;
  v29 = a1;
  v35 = a8;
  v28 = a3;
  v31 = 0LL;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v44, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v44, &v29, &v31, &v28) )
  {
    v13 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v40);
    v14 = v29;
    v39 = 0LL;
    memset(v38, 0, sizeof(v38));
    p_pvScan0 = &v29[-1].pvScan0;
    if ( v45 == 1
      && (*(_QWORD *)&this[5] || (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this))
      && !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)p_pvScan0) )
    {
      if ( v41 && EPATHOBJ::bClone((EPATHOBJ *)&v40, (struct EPATHOBJ *)this) )
      {
        x = v31.x;
        y = v31.y;
        CLIPOBJ_vOffset(v28, v31.x, v31.y);
        PATHOBJ_vOffset(&v40, x, y);
        hdev = v14->hdev;
        PRECOMPUTE::vInit(v38, p_pvScan0, &hdev, &v40, v28, v11, v32, a9, a10, 2);
        v25 = -y;
        v26 = -x;
        CLIPOBJ_vOffset(v28, v26, v25);
        PATHOBJ_vOffset(&v40, v26, v25);
        if ( !v39 )
          goto LABEL_18;
        v13 = this;
        this = &v40;
        goto LABEL_4;
      }
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v38);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v40);
      if ( v43 )
        PopThreadGuardedObject(v42);
    }
    else
    {
LABEL_4:
      PATHOBJ_vEnumStart(this);
      v16 = 0LL;
      v17 = 0LL;
      v30 = 0LL;
      if ( v14 )
      {
        hsurf = (int)v14[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          v19 = p_pvScan0[6];
          v16 = p_pvScan0;
          v30 = p_pvScan0;
          GreLockDisplayDevice(v19);
          v17 = p_pvScan0;
        }
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v30, &v28) )
      {
        p_iType = &v14->iType;
        if ( v14->iType == 1 )
        {
          if ( bAllowShareAccess(v14) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x80u) != 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v16 = v30;
              v14 = v29;
              v21 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))(*(_QWORD *)(ThreadWin32Thread + 280) + 40LL);
              goto LABEL_12;
            }
            v16 = v30;
            v14 = v29;
          }
          if ( *p_iType == 1 && bAllowShareAccess(v14) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
            {
              v16 = v30;
              v14 = v29;
LABEL_53:
              v21 = EngStrokeAndFillPath;
              goto LABEL_12;
            }
            v16 = v30;
            v14 = v29;
          }
        }
        if ( (LODWORD(v14[1].hsurf) & 0x80u) == 0 )
          goto LABEL_53;
        v21 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, LINEATTRS *, BRUSHOBJ *, POINTL *, MIX, FLONG))*((_QWORD *)v14->hdev + 160);
LABEL_12:
        v11 = v33;
        if ( !(unsigned int)OffStrokeAndFillPath(v21, &v31, v14, this, v28, v33, v37, v32, v36, v35, a9, a10) )
          v12 = -1;
        if ( !v13 )
          v13 = this;
        this = v13;
        if ( v16 )
          GreUnlockDisplayDevice(v16[6]);
LABEL_18:
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v38);
        EPATHOBJ::vUnlock((EPATHOBJ *)&v40);
        if ( v43 )
          PopThreadGuardedObject(v42);
      }
      else
      {
        if ( !v13 )
          v13 = this;
        this = v13;
        if ( v17 )
          GreUnlockDisplayDevice(v16[6]);
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v38);
        EPATHOBJ::vUnlock((EPATHOBJ *)&v40);
        if ( v43 )
          PopThreadGuardedObject(v42);
        v11 = v33;
      }
    }
  }
  return v12;
}
