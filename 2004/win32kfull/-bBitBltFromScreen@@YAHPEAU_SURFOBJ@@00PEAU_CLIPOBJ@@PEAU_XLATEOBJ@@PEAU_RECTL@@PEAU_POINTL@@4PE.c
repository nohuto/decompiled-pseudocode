/*
 * XREFs of ?bBitBltFromScreen@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A6228
 * Callers:
 *     ?MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@Z @ 0x1C02A23D0 (-MulBitBlt@@YAHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSH.c)
 * Callees:
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     OffBitBlt @ 0x1C011F830 (OffBitBlt.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ??1MULTISURF@@QEAA@XZ @ 0x1C027EA70 (--1MULTISURF@@QEAA@XZ.c)
 *     ??0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z @ 0x1C02A1760 (--0MULTIBRUSH@@QEAA@PEAU_BRUSHOBJ@@JPEAU_VDEV@@PEAU_SURFOBJ@@H@Z.c)
 *     ?IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z @ 0x1C02A1B80 (-IsMetaRedirectionBitmap@@YAHPEAU_SURFOBJ@@@Z.c)
 *     ?LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z @ 0x1C02A1BA0 (-LoadElement@MULTIBRUSH@@QEAAXPEAU_DISPSURF@@PEAVSURFACE@@@Z.c)
 *     ?StoreElement@MULTIBRUSH@@QEAAXJ@Z @ 0x1C02A6194 (-StoreElement@MULTIBRUSH@@QEAAXJ@Z.c)
 *     ?bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C02A6E60 (-bFindSurface@MSURF@@QEAAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_RECTL@@@Z.c)
 *     ?bNextSurface@MSURF@@QEAAHXZ @ 0x1C02A72B4 (-bNextSurface@MSURF@@QEAAHXZ.c)
 *     ?vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02A77F4 (-vInit@MULTISURF@@AEAAXPEAU_SURFOBJ@@PEAU_RECTL@@@Z.c)
 *     OffCopyBits @ 0x1C02C8C98 (OffCopyBits.c)
 */

__int64 __fastcall bBitBltFromScreen(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _SURFOBJ *a3,
        struct _CLIPOBJ *a4,
        struct _XLATEOBJ *a5,
        struct _RECTL *a6,
        struct _POINTL *a7,
        struct _POINTL *a8,
        struct _BRUSHOBJ *a9,
        struct _POINTL *a10,
        unsigned int a11)
{
  unsigned int v11; // ebx
  int v13; // r15d
  DHPDEV dhpdev; // rsi
  int v15; // r14d
  int v16; // r12d
  int i; // eax
  __int64 v19; // r9
  struct _DISPSURF *v20; // rdx
  struct _SURFOBJ *v21; // r8
  __int64 v22; // r14
  int v23; // ecx
  struct _XLATEOBJ *v24; // rsi
  HDEV hdev; // r10
  ULONG iUniq; // esi
  int v27; // r11d
  FLONG flXlate; // ecx
  ULONG v29; // r8d
  ULONG *pulXlate; // rdx
  BOOL (__stdcall *v31)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *); // rcx
  BOOL (__stdcall *v32)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4); // rcx
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  int v34; // [rsp+78h] [rbp-88h]
  int v35; // [rsp+7Ch] [rbp-84h]
  struct _SURFOBJ *v36; // [rsp+80h] [rbp-80h]
  struct _XLATEOBJ *v37; // [rsp+88h] [rbp-78h] BYREF
  struct _SURFOBJ *v38; // [rsp+90h] [rbp-70h]
  struct _RECTL *v39; // [rsp+98h] [rbp-68h]
  struct _BRUSHOBJ *v40; // [rsp+A0h] [rbp-60h]
  __int64 *v41; // [rsp+A8h] [rbp-58h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  __int64 v43; // [rsp+B8h] [rbp-48h]
  __int64 v44; // [rsp+C0h] [rbp-40h]
  _DWORD v45[14]; // [rsp+C8h] [rbp-38h] BYREF
  _BYTE v46[56]; // [rsp+100h] [rbp+0h] BYREF
  struct _DISPSURF *v47; // [rsp+138h] [rbp+38h]
  __int64 v48; // [rsp+140h] [rbp+40h]
  __int64 v49; // [rsp+148h] [rbp+48h]
  int v50[4]; // [rsp+150h] [rbp+50h]
  _BYTE v51[40]; // [rsp+160h] [rbp+60h] BYREF
  __int64 v52; // [rsp+188h] [rbp+88h]
  char v53; // [rsp+190h] [rbp+90h]
  int v54; // [rsp+194h] [rbp+94h]
  __int64 v55; // [rsp+1B0h] [rbp+B0h]
  int v56[2]; // [rsp+1B8h] [rbp+B8h]
  struct _RECTL v57; // [rsp+1D0h] [rbp+D0h] BYREF
  __int64 v58[2]; // [rsp+1E0h] [rbp+E0h] BYREF

  v11 = 0;
  v44 = (__int64)a3;
  v43 = (__int64)a8;
  v13 = 1;
  dhpdev = a2->dhpdev;
  v36 = a1;
  v38 = a2;
  *(_OWORD *)v58 = 0LL;
  v15 = a6->left - a7->x;
  v16 = a6->top - a7->y;
  v40 = a9;
  v39 = a6;
  v41 = (__int64 *)a7;
  v42 = (__int64)a10;
  v33 = 0LL;
  v34 = v15;
  v35 = v16;
  v57 = *a6;
  if ( a4 && a4->iDComplexity && !bIntersect(&a4->rclBounds, &v57, &v57) )
    return 1LL;
  v57.top -= v16;
  v57.bottom -= v16;
  v57.left -= v15;
  v57.right -= v15;
  MULTIBRUSH::MULTIBRUSH(
    (MULTIBRUSH *)v45,
    v40,
    *((_DWORD *)dhpdev + 4),
    (struct _VDEV *)dhpdev,
    *((struct _SURFOBJ **)dhpdev + 6),
    ((unsigned __int16)a11 ^ (unsigned __int16)(a11 >> 4)) & 0xF0F);
  if ( !v45[0] )
    return v11;
  v52 = 0LL;
  v53 = 0;
  v54 = 0;
  MULTISURF::vInit((MULTISURF *)v51, v36, v39);
  for ( i = MSURF::bFindSurface((MSURF *)v46, v38, 0LL, &v57); i; i = MSURF::bNextSurface((MSURF *)v46) )
  {
    v19 = v48;
    v20 = v47;
    v21 = v36;
    if ( (*(_DWORD *)(*(_QWORD *)(v48 + 24) + 1824LL) & 0x8000000) == 0 && !IsMetaRedirectionBitmap(v36) )
    {
      v22 = *(_QWORD *)v56;
LABEL_12:
      v23 = 0;
      v37 = 0LL;
      v24 = a5;
      if ( *((_DWORD *)v20 + 6) )
      {
        hdev = *(HDEV *)(v22 + 104);
        if ( !hdev )
        {
          if ( !a5 )
            goto LABEL_19;
          if ( *(_QWORD *)&a5[2].iUniq )
          {
            hdev = *(HDEV *)&a5[2].iUniq;
            goto LABEL_22;
          }
          if ( (a5->flXlate & 1) != 0 )
          {
LABEL_19:
            if ( (struct _SURFOBJ *)v22 == v21 )
              hdev = v38[1].hdev;
          }
          else
          {
            v23 = 1;
          }
        }
        if ( !v23 )
        {
LABEL_22:
          if ( a5 )
            iUniq = a5[1].iUniq;
          else
            iUniq = 0;
          if ( a5 )
            v27 = *(_DWORD *)&a5[1].iSrcType;
          else
            v27 = 0;
          if ( a5 )
            flXlate = a5[1].flXlate;
          else
            flXlate = 0;
          if ( a5 )
            v29 = a5[3].iUniq;
          else
            v29 = 0;
          if ( a5 )
            pulXlate = a5[2].pulXlate;
          else
            pulXlate = 0LL;
          if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                               (__int64 *)&v37,
                               (__int64)pulXlate,
                               v29,
                               *(_QWORD *)(v19 + 104),
                               (__int64)hdev,
                               (__int64)ppalDefault,
                               (__int64)ppalDefault,
                               flXlate,
                               v27,
                               iUniq,
                               0x2000) )
          {
            v24 = v37;
            v19 = v48;
            v20 = v47;
            goto LABEL_39;
          }
        }
        v13 = 0;
      }
      else
      {
LABEL_39:
        if ( *(_BYTE *)(v49 + 20) )
        {
          v33 = *(_QWORD *)(v49 + 4);
          LODWORD(v58[0]) = v34 + *(_DWORD *)(v49 + 4);
          LODWORD(v58[1]) = v34 + *(_DWORD *)(v49 + 12);
          HIDWORD(v58[0]) = v35 + *(_DWORD *)(v49 + 8);
          HIDWORD(v58[1]) = v35 + *(_DWORD *)(v49 + 16);
        }
        else
        {
          v33 = *v41;
          *(struct _RECTL *)v58 = *v39;
        }
        if ( a11 == 52428 )
        {
          if ( (*(_DWORD *)(v19 + 88) & 0x400) != 0 )
            v31 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *))(*((_QWORD *)v20 + 7) + 2840LL);
          else
            v31 = EngCopyBits;
          v13 &= OffCopyBits((int)v31, (int)&gptlZero, v22, v50[0], v19, a4, (__int64)v24, (__int64)v58, (__int64)&v33);
        }
        else
        {
          MULTIBRUSH::LoadElement((MULTIBRUSH *)v45, v20, (struct SURFACE *)(v19 - 24));
          if ( (*(_DWORD *)(v48 + 88) & 1) != 0 )
            v32 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, POINTL *, POINTL *, BRUSHOBJ *, POINTL *, ROP4))(*((_QWORD *)v47 + 7) + 2832LL);
          else
            v32 = EngBitBlt;
          v13 &= OffBitBlt(
                   (__int64 (__fastcall *)(__int64, __int64, __int64, struct _CLIPOBJ *, __int64, _DWORD *, __int64 *, __int64, __int64, __int64 *, int))v32,
                   (LONG *)&gptlZero,
                   v22,
                   *(_DWORD **)v50,
                   v48,
                   v44,
                   a4,
                   (__int64)v24,
                   (int *)v58,
                   &v33,
                   v43,
                   (__int64)v40,
                   (__int64 *)v42,
                   a11);
          MULTIBRUSH::StoreElement((MULTIBRUSH *)v45, *((_DWORD *)v47 + 4));
        }
      }
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v37);
      continue;
    }
    if ( v55 )
    {
      v22 = *(_QWORD *)(*(_QWORD *)(v55 + 8) + 8LL * *((unsigned int *)v20 + 4));
      if ( v22 )
        goto LABEL_12;
    }
  }
  v11 = v13;
  MULTISURF::~MULTISURF((MULTISURF *)v51);
  return v11;
}
