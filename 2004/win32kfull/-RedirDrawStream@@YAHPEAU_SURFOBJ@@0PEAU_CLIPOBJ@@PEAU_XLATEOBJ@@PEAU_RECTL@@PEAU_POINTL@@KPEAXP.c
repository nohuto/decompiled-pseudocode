/*
 * XREFs of ?RedirDrawStream@@YAHPEAU_SURFOBJ@@0PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@KPEAXPEAU_DSSTATE@@@Z @ 0x1C029C6A0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     EngDrawStream @ 0x1C00F3F80 (EngDrawStream.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0299A90 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ?GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z @ 0x1C029B694 (-GetDevBitmap@@YAPEAU_SURFOBJ@@PEAU_DISPSURF@@PEAU1@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029BF28 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029E388 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirDrawStream(
        struct _SURFOBJ *a1,
        struct _SURFOBJ *a2,
        struct _CLIPOBJ *a3,
        struct _XLATEOBJ *a4,
        struct _RECTL *a5,
        struct _POINTL *a6,
        unsigned int a7,
        _DWORD *a8,
        struct _DSSTATE *a9)
{
  struct _DSSTATE *v13; // r12
  _DWORD *v14; // r13
  __int64 HDEV; // rax
  __int64 v16; // rbx
  int v17; // eax
  struct _DISPSURF *i; // rbx
  __int64 v19; // r9
  struct _SURFOBJ *DevBitmap; // rax
  __int64 v21; // r10
  __int64 v22; // r11
  unsigned int v23; // r8d
  __int64 v25; // [rsp+58h] [rbp-61h] BYREF
  struct SURFACE *v26; // [rsp+60h] [rbp-59h] BYREF
  struct SURFACE *v27; // [rsp+68h] [rbp-51h] BYREF
  __int128 v28; // [rsp+78h] [rbp-41h] BYREF
  __int64 v29; // [rsp+88h] [rbp-31h]
  int v30; // [rsp+90h] [rbp-29h]
  __int64 v31; // [rsp+98h] [rbp-21h] BYREF
  int v32; // [rsp+A0h] [rbp-19h]
  int v33; // [rsp+A4h] [rbp-15h]
  __int16 v34; // [rsp+A8h] [rbp-11h]
  __int64 v35; // [rsp+B0h] [rbp-9h]
  __int64 v36; // [rsp+B8h] [rbp-1h]
  __int64 v37; // [rsp+F8h] [rbp+3Fh] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v27, a1);
  REDIROPEN::REDIROPEN((REDIROPEN *)&v26, a2);
  v13 = a9;
  v14 = a8;
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v16 = HDEV;
      if ( HDEV )
      {
        v32 = 0;
        v33 = 0;
        v36 = 0LL;
        v35 = 0LL;
        v31 = 0LL;
        v17 = *(_DWORD *)(HDEV + 40);
        v34 = 256;
        v28 = 0LL;
        v30 = 1;
        if ( (v17 & 1) != 0 )
        {
          *(_QWORD *)&v28 = *(_QWORD *)(v16 + 48);
          v29 = v16;
          GreAcquireSemaphore(v28);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v28, 11LL);
          v17 = *(_DWORD *)(v16 + 40);
        }
        if ( (v17 & 0x20000) != 0 )
        {
          for ( i = **(struct _DISPSURF ***)(v16 + 1800); i; i = *(struct _DISPSURF **)i )
          {
            v19 = *((_QWORD *)i + 6);
            v37 = v19;
            if ( v19 )
            {
              if ( (*(_DWORD *)(v19 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v19 + 2128) & 0x8000) != 0 )
              {
                if ( *(_QWORD *)(*(_QWORD *)(v19 + 1792) + 784LL) )
                {
                  MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                    (MARK_ACCDRV_NOTIFICATION *)&v25,
                    (struct PDEVOBJ *)&v37,
                    a1);
                  GetDevBitmap(i, a2);
                  DevBitmap = GetDevBitmap(i, a1);
                  (*(void (__fastcall **)(struct _SURFOBJ *, __int64, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, unsigned int, _DWORD *, struct _DSSTATE *))(v21 + 784))(
                    DevBitmap,
                    v22,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    v14,
                    v13);
                  if ( v25 )
                    *(_WORD *)(v25 + 78) &= ~0x8000u;
                }
              }
            }
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v28);
        if ( v31 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v31);
      }
    }
  }
  v23 = EngDrawStream((__int64)a1, (__int64)a2, (__int64)a3, (__int64)a4, (int)a5, (int *)a6, a7, v14, v13);
  if ( v26 )
    bMakeOpaque(v26);
  if ( v27 )
    bMakeOpaque(v27);
  return v23;
}
