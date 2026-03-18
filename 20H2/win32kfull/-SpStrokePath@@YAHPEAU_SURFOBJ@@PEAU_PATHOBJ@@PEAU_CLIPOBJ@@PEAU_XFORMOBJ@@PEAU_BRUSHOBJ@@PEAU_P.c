/*
 * XREFs of ?SpStrokePath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@PEAU_LINEATTRS@@K@Z @ 0x1C0138C10
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
 *     ??0PATHSTACKOBJ@@QEAA@XZ @ 0x1C0138E68 (--0PATHSTACKOBJ@@QEAA@XZ.c)
 *     ??1PRECOMPUTE@@QEAA@XZ @ 0x1C013AD50 (--1PRECOMPUTE@@QEAA@XZ.c)
 *     OffStrokePath @ 0x1C013AE38 (OffStrokePath.c)
 *     ?PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z @ 0x1C013AF4C (-PATHOBJ_vOffset@@YAXPEAU_PATHOBJ@@JJ@Z.c)
 *     ?bPreComputedFill@EPATHOBJ@@QEBAHXZ @ 0x1C013C5E0 (-bPreComputedFill@EPATHOBJ@@QEBAHXZ.c)
 *     ?vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEAU_LINEATTRS@@KKW4PRECOMPUTETYPE@@@Z @ 0x1C014F5D4 (-vInit@PRECOMPUTE@@QEAAXPEAVSURFACE@@PEAVPDEVOBJ@@PEAVEPATHOBJ@@PEAU_CLIPOBJ@@PEAU_XFORMOBJ@@PEA.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 */

__int64 __fastcall SpStrokePath(
        struct _SURFOBJ *a1,
        struct _PATHOBJ *this,
        struct _CLIPOBJ *a3,
        struct _XFORMOBJ *a4,
        struct _BRUSHOBJ *a5,
        struct _POINTL *a6,
        struct _LINEATTRS *a7,
        unsigned int a8)
{
  unsigned int v9; // r12d
  FLOAT_LONG v10; // edi
  struct _PATHOBJ *v11; // rsi
  struct _SURFOBJ *v12; // r14
  PVOID *p_pvScan0; // r13
  PVOID *v14; // rbx
  PVOID *v15; // r12
  int hsurf; // eax
  USHORT *p_iType; // r12
  BOOL (__stdcall *v18)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX); // rcx
  PVOID v20; // rcx
  LONG x; // ebx
  LONG y; // esi
  LONG v23; // esi
  LONG v24; // ebx
  __int64 ThreadWin32Thread; // rax
  int v26; // [rsp+50h] [rbp-B0h]
  struct _CLIPOBJ *v27; // [rsp+58h] [rbp-A8h] BYREF
  struct _SURFOBJ *v28; // [rsp+60h] [rbp-A0h] BYREF
  PVOID *v29; // [rsp+68h] [rbp-98h] BYREF
  struct _POINTL v30; // [rsp+70h] [rbp-90h] BYREF
  struct _LINEATTRS *v31; // [rsp+78h] [rbp-88h]
  struct _XFORMOBJ *v32; // [rsp+80h] [rbp-80h]
  HDEV hdev; // [rsp+88h] [rbp-78h] BYREF
  struct _POINTL *v34; // [rsp+90h] [rbp-70h]
  struct _BRUSHOBJ *v35; // [rsp+98h] [rbp-68h]
  _OWORD v36[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v37; // [rsp+C0h] [rbp-40h]
  struct _PATHOBJ v38; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v39; // [rsp+D8h] [rbp-28h]
  _BYTE v40[32]; // [rsp+120h] [rbp+20h] BYREF
  int v41; // [rsp+140h] [rbp+40h]
  __int64 *v42[9]; // [rsp+390h] [rbp+290h] BYREF
  int v43; // [rsp+3D8h] [rbp+2D8h]

  v35 = a5;
  v34 = a6;
  v9 = 1;
  v32 = a4;
  v28 = a1;
  v27 = a3;
  LODWORD(v10.e) = a7->elStyleState;
  v31 = a7;
  v26 = 1;
  v30 = 0LL;
  ENUMUNDERLAYS::ENUMUNDERLAYS((ENUMUNDERLAYS *)v42, a1, a3, &a3->rclBounds);
  while ( (unsigned int)ENUMUNDERLAYS::bEnum(v42, &v28, &v30, &v27) )
  {
    v11 = 0LL;
    PATHSTACKOBJ::PATHSTACKOBJ((PATHSTACKOBJ *)&v38);
    v12 = v28;
    v37 = 0LL;
    memset(v36, 0, sizeof(v36));
    p_pvScan0 = &v28[-1].pvScan0;
    if ( v43 == 1
      && (unsigned int)EPATHOBJ::bPreComputedFill((EPATHOBJ *)this)
      && !(unsigned int)SURFACE::bRedirectionBitmap((SURFACE *)p_pvScan0) )
    {
      if ( v39 && EPATHOBJ::bClone((EPATHOBJ *)&v38, (struct EPATHOBJ *)this) )
      {
        x = v30.x;
        y = v30.y;
        CLIPOBJ_vOffset(v27, v30.x, v30.y);
        PATHOBJ_vOffset(&v38, x, y);
        hdev = v12->hdev;
        PRECOMPUTE::vInit(v36, p_pvScan0, &hdev, &v38, v27, v32, v31, a8, 0, 0);
        v23 = -y;
        v24 = -x;
        CLIPOBJ_vOffset(v27, v24, v23);
        PATHOBJ_vOffset(&v38, v24, v23);
        if ( !v37 )
          goto LABEL_18;
        v11 = this;
        this = &v38;
        goto LABEL_4;
      }
      PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v36);
      EPATHOBJ::vUnlock((EPATHOBJ *)&v38);
      if ( v41 )
        PopThreadGuardedObject(v40);
    }
    else
    {
LABEL_4:
      v31->elStyleState = v10;
      PATHOBJ_vEnumStart(this);
      v14 = 0LL;
      v15 = 0LL;
      v29 = 0LL;
      if ( v12 )
      {
        hsurf = (int)v12[1].hsurf;
        if ( (hsurf & 0x80004000) != 0 && (hsurf & 0x200) == 0 )
        {
          v20 = p_pvScan0[6];
          v14 = p_pvScan0;
          v29 = p_pvScan0;
          GreLockDisplayDevice(v20);
          v15 = p_pvScan0;
        }
      }
      if ( NEEDDDILOCK::bRender((NEEDDDILOCK *)&v29, &v27) )
      {
        p_iType = &v12->iType;
        if ( v12->iType == 1 )
        {
          if ( bAllowShareAccess(v12) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108))
              && (*(_DWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280) + 20LL) & 0x20) != 0 )
            {
              ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
              v14 = v29;
              v12 = v28;
              v18 = *(BOOL (__stdcall **)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))(*(_QWORD *)(ThreadWin32Thread + 280) + 48LL);
              goto LABEL_12;
            }
            v14 = v29;
            v12 = v28;
          }
          if ( *p_iType == 1 && bAllowShareAccess(v12) )
          {
            if ( W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
              && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 280)
              && (*(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 104)
               || *(_DWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 108)) )
            {
              v14 = v29;
              v12 = v28;
LABEL_52:
              v18 = EngStrokePath;
              goto LABEL_12;
            }
            v14 = v29;
            v12 = v28;
          }
        }
        if ( ((__int64)v12[1].hsurf & 0x20) == 0 )
          goto LABEL_52;
        v18 = (BOOL (__stdcall *)(SURFOBJ *, PATHOBJ *, CLIPOBJ *, XFORMOBJ *, BRUSHOBJ *, POINTL *, LINEATTRS *, MIX))*((_QWORD *)v12->hdev + 161);
LABEL_12:
        v9 = v26;
        if ( !(unsigned int)OffStrokePath(v18, &v30, v12, this, v27, v32, v35, v34, v31, a8) )
          v9 = -1;
        v26 = v9;
        if ( !v11 )
          v11 = this;
        this = v11;
        if ( v14 )
          GreUnlockDisplayDevice(v14[6]);
LABEL_18:
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v36);
        EPATHOBJ::vUnlock((EPATHOBJ *)&v38);
        if ( v41 )
          PopThreadGuardedObject(v40);
      }
      else
      {
        if ( !v11 )
          v11 = this;
        this = v11;
        if ( v15 )
          GreUnlockDisplayDevice(v14[6]);
        PRECOMPUTE::~PRECOMPUTE((PRECOMPUTE *)v36);
        EPATHOBJ::vUnlock((EPATHOBJ *)&v38);
        if ( v41 )
          PopThreadGuardedObject(v40);
        v9 = v26;
      }
    }
  }
  return v9;
}
