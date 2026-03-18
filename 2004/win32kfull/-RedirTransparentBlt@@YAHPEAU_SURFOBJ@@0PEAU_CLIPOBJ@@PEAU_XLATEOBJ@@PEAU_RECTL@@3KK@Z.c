/*
 * XREFs of ?RedirTransparentBlt@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@3KK@Z @ 0x1C029E130
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EngTransparentBlt @ 0x1C00C9450 (EngTransparentBlt.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0299A90 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029B694 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029BF28 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029E388 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirTransparentBlt(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        RECTL *prclDst,
        RECTL *prclSrc,
        ULONG a7,
        ULONG a8)
{
  ULONG ulReserved; // r12d
  ULONG iTransColor; // r13d
  __int64 HDEV; // rax
  __int64 v15; // rbx
  int v16; // eax
  struct _DISPSURF *i; // rbx
  __int64 v18; // r9
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v20; // r10
  __int64 v21; // r11
  unsigned int v22; // r8d
  __int64 v24; // [rsp+58h] [rbp-59h] BYREF
  struct SURFACE *v25; // [rsp+60h] [rbp-51h] BYREF
  struct SURFACE *v26; // [rsp+68h] [rbp-49h] BYREF
  __int128 v27; // [rsp+78h] [rbp-39h] BYREF
  __int64 v28; // [rsp+88h] [rbp-29h]
  int v29; // [rsp+90h] [rbp-21h]
  __int64 v30; // [rsp+98h] [rbp-19h] BYREF
  int v31; // [rsp+A0h] [rbp-11h]
  int v32; // [rsp+A4h] [rbp-Dh]
  __int16 v33; // [rsp+A8h] [rbp-9h]
  __int64 v34; // [rsp+B0h] [rbp-1h]
  __int64 v35; // [rsp+B8h] [rbp+7h]
  __int64 v36; // [rsp+F8h] [rbp+47h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a2);
  ulReserved = a8;
  iTransColor = a7;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v15 = HDEV;
      if ( HDEV )
      {
        v31 = 0;
        v32 = 0;
        v35 = 0LL;
        v34 = 0LL;
        v30 = 0LL;
        v16 = *(_DWORD *)(HDEV + 40);
        v33 = 256;
        v27 = 0LL;
        v29 = 1;
        if ( (v16 & 1) != 0 )
        {
          *(_QWORD *)&v27 = *(_QWORD *)(v15 + 48);
          v28 = v15;
          GreAcquireSemaphore(v27);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v27, 11LL);
          v16 = *(_DWORD *)(v15 + 40);
        }
        if ( (v16 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v15 + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v18 = *((_QWORD *)i + 6);
            v36 = v18;
            if ( v18 )
            {
              if ( (*(_DWORD *)(v18 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v18 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v18 + 1792) + 656LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v24,
                    (struct PDEVOBJ *)&v36,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, ULONG, ULONG))(v20 + 656))(
                    DevBitmap,
                    v21,
                    pco,
                    pxlo,
                    prclDst,
                    prclSrc,
                    iTransColor,
                    ulReserved);
                  if ( v24 )
                    *(_WORD *)(v24 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v27);
        if ( v30 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v30);
      }
    }
  }
  v22 = EngTransparentBlt(a1, a2, pco, pxlo, prclDst, prclSrc, iTransColor, ulReserved);
  if ( v25 )
    bMakeOpaque(v25);
  if ( v26 )
    bMakeOpaque(v26);
  return v22;
}
