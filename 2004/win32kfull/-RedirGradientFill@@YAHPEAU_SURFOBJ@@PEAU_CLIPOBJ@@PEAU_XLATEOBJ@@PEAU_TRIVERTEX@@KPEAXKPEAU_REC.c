/*
 * XREFs of ?RedirGradientFill@@YAHPEAU_SURFOBJ@@PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_TRIVERTEX@@KPEAXKPEAU_RECTL@@PEAU_POINTL@@K@Z @ 0x1C029CB20
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EngGradientFill @ 0x1C00CBFB0 (EngGradientFill.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0299A90 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029BF28 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029E388 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirGradientFill(
        struct _SURFOBJ *a1,
        CLIPOBJ *pco,
        XLATEOBJ *pxlo,
        TRIVERTEX *pVertex,
        ULONG nVertex,
        PVOID pMesh,
        ULONG nMesh,
        RECTL *prclExtents,
        POINTL *a9,
        ULONG a10)
{
  ULONG ulMode; // r12d
  POINTL *pptlDitherOrg; // r13
  __int64 HDEV; // rax
  __int64 v17; // rbx
  int v18; // eax
  _QWORD *i; // rbx
  __int64 v20; // r9
  __int64 v21; // r9
  unsigned int v22; // r8d
  __int64 v24; // [rsp+68h] [rbp-59h] BYREF
  struct SURFACE *v25; // [rsp+70h] [rbp-51h] BYREF
  __int128 v26; // [rsp+78h] [rbp-49h] BYREF
  __int64 v27; // [rsp+88h] [rbp-39h]
  int v28; // [rsp+90h] [rbp-31h]
  __int64 v29; // [rsp+98h] [rbp-29h] BYREF
  int v30; // [rsp+A0h] [rbp-21h]
  int v31; // [rsp+A4h] [rbp-1Dh]
  __int16 v32; // [rsp+A8h] [rbp-19h]
  __int64 v33; // [rsp+B0h] [rbp-11h]
  __int64 v34; // [rsp+B8h] [rbp-9h]
  __int64 v35; // [rsp+F8h] [rbp+37h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v25, a1);
  ulMode = a10;
  pptlDitherOrg = a9;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v17 = HDEV;
      if ( HDEV )
      {
        v30 = 0;
        v31 = 0;
        v34 = 0LL;
        v33 = 0LL;
        v29 = 0LL;
        v18 = *(_DWORD *)(HDEV + 40);
        v32 = 256;
        v26 = 0LL;
        v28 = 1;
        if ( (v18 & 1) != 0 )
        {
          *(_QWORD *)&v26 = *(_QWORD *)(v17 + 48);
          v27 = v17;
          GreAcquireSemaphore(v26);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v26, 11LL);
          v18 = *(_DWORD *)(v17 + 40);
        }
        if ( (v18 & 0x20000) != 0 )
        {
          for ( i = **(_QWORD ***)(v17 + 1800); i; i = (_QWORD *)*i )
          {
            v20 = i[6];
            v35 = v20;
            if ( v20 )
            {
              if ( (*(_DWORD *)(v20 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v20 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v20 + 1792) + 608LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v24,
                    (struct PDEVOBJ *)&v35,
                    a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, CLIPOBJ *, XLATEOBJ *, TRIVERTEX *, ULONG, PVOID, ULONG, RECTL *, POINTL *, ULONG))(*(_QWORD *)(v21 + 1792) + 608LL))(
                    a1,
                    pco,
                    pxlo,
                    pVertex,
                    nVertex,
                    pMesh,
                    nMesh,
                    prclExtents,
                    pptlDitherOrg,
                    ulMode);
                  if ( v24 )
                    *(_WORD *)(v24 + 78) &= ~0x8000u;
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
  v22 = EngGradientFill(a1, pco, pxlo, pVertex, nVertex, pMesh, nMesh, prclExtents, pptlDitherOrg, ulMode);
  if ( v25 )
    bMakeOpaque(v25);
  return v22;
}
