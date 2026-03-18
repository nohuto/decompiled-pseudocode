/*
 * XREFs of ?RedirAlphaBlend@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3PEAU_BLENDOBJ@@@Z @ 0x1C029AB20
 * Callers:
 *     <none>
 * Callees:
 *     EngAlphaBlend @ 0x1C0069DA0 (EngAlphaBlend.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0298640 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029A244 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029AAD8 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029CF38 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirAlphaBlend(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDest,
        RECTL *a6,
        BLENDOBJ *a7)
{
  BLENDOBJ *pBlendObj; // r12
  RECTL *prclSrc; // r13
  __int64 HDEV; // rax
  __int64 v14; // rbx
  int v15; // eax
  struct _DISPSURF *i; // rbx
  __int64 v17; // r9
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v19; // r10
  __int64 v20; // r11
  unsigned int v21; // r8d
  __int64 v23; // [rsp+48h] [rbp-51h] BYREF
  struct SURFACE *v24; // [rsp+50h] [rbp-49h] BYREF
  struct SURFACE *v25; // [rsp+58h] [rbp-41h] BYREF
  __int128 v26; // [rsp+68h] [rbp-31h] BYREF
  __int64 v27; // [rsp+78h] [rbp-21h]
  int v28; // [rsp+80h] [rbp-19h]
  __int64 v29; // [rsp+88h] [rbp-11h] BYREF
  int v30; // [rsp+90h] [rbp-9h]
  int v31; // [rsp+94h] [rbp-5h]
  __int16 v32; // [rsp+98h] [rbp-1h]
  __int64 v33; // [rsp+A0h] [rbp+7h]
  __int64 v34; // [rsp+A8h] [rbp+Fh]
  __int64 v35; // [rsp+E8h] [rbp+4Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v24, a2);
  pBlendObj = a7;
  prclSrc = a6;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v14 = HDEV;
      if ( HDEV )
      {
        v30 = 0;
        v31 = 0;
        v34 = 0LL;
        v33 = 0LL;
        v29 = 0LL;
        v15 = *(_DWORD *)(HDEV + 40);
        v32 = 256;
        v26 = 0LL;
        v28 = 1;
        if ( (v15 & 1) != 0 )
        {
          *(_QWORD *)&v26 = *(_QWORD *)(v14 + 48);
          v27 = v14;
          GreAcquireSemaphore(v26);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v26, 11LL);
          v15 = *(_DWORD *)(v14 + 40);
        }
        if ( (v15 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v14 + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v17 = *((_QWORD *)i + 6);
            v35 = v17;
            if ( v17 )
            {
              if ( (*(_DWORD *)(v17 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v17 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v17 + 1792) + 632LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v23,
                    (struct PDEVOBJ *)&v35,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(v19 + 632))(
                    DevBitmap,
                    v20,
                    pco,
                    pxlo,
                    prclDest,
                    prclSrc,
                    pBlendObj);
                  if ( v23 )
                    *(_WORD *)(v23 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v26);
        if ( v29 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v29);
      }
    }
  }
  v21 = EngAlphaBlend(a1, a2, pco, pxlo, prclDest, prclSrc, pBlendObj);
  if ( v24 )
    bMakeOpaque(v24);
  if ( v25 )
    bMakeOpaque(v25);
  return v21;
}
