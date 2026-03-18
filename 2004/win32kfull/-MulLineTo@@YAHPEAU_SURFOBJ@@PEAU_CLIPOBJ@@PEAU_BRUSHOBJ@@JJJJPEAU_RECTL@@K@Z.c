/*
 * XREFs of ?MulLineTo@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@JJJJPEAU_RECTL@@K@Z @ 0x1C02A4420
 * Callers:
 *     <none>
 * Callees:
 *     EngLineTo @ 0x1C013C090 (EngLineTo.c)
 *     OffLineTo @ 0x1C014444C (OffLineTo.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027EA70 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C02A1760 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02A1B60 (-IsMetaDevBitmapForMirroring@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02A1BA0 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C02A6194 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02A6E60 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A72B4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A77F4 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 */

__int64 __fastcall MulLineTo(
        struct _SURFOBJ *a1,
        struct _CLIPOBJ *a2,
        struct _BRUSHOBJ *a3,
        LONG a4,
        LONG y1,
        LONG x2,
        LONG y2,
        struct _RECTL *a8,
        MIX mix)
{
  DHPDEV dhpdev; // rsi
  unsigned int v13; // edi
  struct _SURFOBJ *v14; // rcx
  unsigned int v15; // ebx
  int i; // eax
  BOOL (__stdcall *v17)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX); // rcx
  _DWORD v20[14]; // [rsp+68h] [rbp-98h] BYREF
  _BYTE v21[56]; // [rsp+A0h] [rbp-60h] BYREF
  struct _DISPSURF *v22; // [rsp+D8h] [rbp-28h]
  SURFOBJ *v23; // [rsp+E0h] [rbp-20h]
  struct _CLIPOBJ *v24; // [rsp+E8h] [rbp-18h]
  LONG *v25; // [rsp+F0h] [rbp-10h]
  _BYTE v26[40]; // [rsp+100h] [rbp+0h] BYREF
  __int64 v27; // [rsp+128h] [rbp+28h]
  char v28; // [rsp+130h] [rbp+30h]
  int v29; // [rsp+134h] [rbp+34h]
  SURFOBJ *pso; // [rsp+158h] [rbp+58h]
  RECTL *prclBounds; // [rsp+160h] [rbp+60h]

  dhpdev = a1->dhpdev;
  v13 = 1;
  v15 = 0;
  if ( IsMetaDevBitmapForMirroring(a1) )
  {
    v27 = 0LL;
    v28 = 0;
    v29 = 0;
    MULTISURF::vInit((MULTISURF *)v26, v14, a8);
    v13 = EngLineTo(pso, a2, a3, a4, y1, x2, y2, prclBounds, mix);
    MULTISURF::~MULTISURF((MULTISURF *)v26);
  }
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v20,
    a3,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    0);
  if ( v20[0] )
  {
    for ( i = MSURF::bFindSurface((MSURF *)v21, a1, a2, a8); i; i = MSURF::bNextSurface((MSURF *)v21) )
    {
      MULTIBRUSH::LoadElement((MULTIBRUSH *)v20, v22, (struct SURFACE *)&v23[-1].pvScan0);
      if ( ((__int64)v23[1].hsurf & 0x100) != 0 )
        v17 = *(BOOL (__stdcall **)(SURFOBJ *, CLIPOBJ *, BRUSHOBJ *, LONG, LONG, LONG, LONG, RECTL *, MIX))(*((_QWORD *)v22 + 7) + 2936LL);
      else
        v17 = EngLineTo;
      v13 &= OffLineTo(
               (__int64 (__fastcall *)(SURFOBJ *, struct _CLIPOBJ *, BRUSHOBJ *, _QWORD, int, int, int, RECTL *, MIX))v17,
               v25,
               v23,
               v24,
               a3,
               a4,
               y1,
               x2,
               y2,
               a8,
               mix);
      MULTIBRUSH::StoreElement((MULTIBRUSH *)v20, *((_DWORD *)v22 + 4));
    }
    return v13;
  }
  return v15;
}
