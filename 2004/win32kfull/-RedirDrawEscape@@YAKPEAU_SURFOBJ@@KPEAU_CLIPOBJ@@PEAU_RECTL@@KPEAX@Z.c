/*
 * XREFs of ?RedirDrawEscape@@YAKPEAU_SURFOBJ@@KPEAU_CLIPOBJ@@PEAU_RECTL@@KPEAX@Z @ 0x1C029C4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ??0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z @ 0x1C0299A90 (--0MARK_ACCDRV_NOTIFICATION@@QEAA@AEAVPDEVOBJ@@PEAU_SURFOBJ@@@Z.c)
 *     ??0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z @ 0x1C029BF28 (--0REDIROPEN@@QEAA@PEAU_SURFOBJ@@@Z.c)
 *     ?bMakeOpaque@@YAHPEAVSURFACE@@@Z @ 0x1C029E388 (-bMakeOpaque@@YAHPEAVSURFACE@@@Z.c)
 */

__int64 __fastcall RedirDrawEscape(
        struct _SURFOBJ *a1,
        unsigned int a2,
        struct _CLIPOBJ *a3,
        struct _RECTL *a4,
        unsigned int a5,
        void *a6)
{
  __int64 HDEV; // rax
  __int64 v11; // rbx
  int v12; // eax
  _QWORD *v13; // rbx
  void *v14; // rsi
  unsigned int v15; // r14d
  __int64 v16; // r9
  __int64 v17; // r9
  __int64 v19; // [rsp+48h] [rbp-39h] BYREF
  struct SURFACE *v20; // [rsp+50h] [rbp-31h] BYREF
  __int128 v21; // [rsp+58h] [rbp-29h] BYREF
  __int64 v22; // [rsp+68h] [rbp-19h]
  int v23; // [rsp+70h] [rbp-11h]
  _QWORD v24[2]; // [rsp+78h] [rbp-9h] BYREF
  __int16 v25; // [rsp+88h] [rbp+7h]
  __int64 v26; // [rsp+90h] [rbp+Fh]
  __int64 v27; // [rsp+98h] [rbp+17h]
  __int64 v28; // [rsp+D8h] [rbp+57h] BYREF

  REDIROPEN::REDIROPEN((REDIROPEN *)&v20, a1);
  if ( a1 )
  {
    if ( ((__int64)a1[1].hsurf & 0x800) != 0 )
    {
      HDEV = UserGetHDEV();
      v11 = HDEV;
      if ( HDEV )
      {
        v12 = *(_DWORD *)(HDEV + 40);
        v21 = 0LL;
        v24[1] = 0LL;
        v25 = 256;
        v27 = 0LL;
        v26 = 0LL;
        v24[0] = 0LL;
        v23 = 1;
        if ( (v12 & 1) != 0 )
        {
          *(_QWORD *)&v21 = *(_QWORD *)(v11 + 48);
          v22 = v11;
          GreAcquireSemaphore(v21);
          EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v21, 11LL);
          v12 = *(_DWORD *)(v11 + 40);
        }
        if ( (v12 & 0x20000) != 0 )
        {
          v13 = **(_QWORD ***)(v11 + 1800);
          if ( v13 )
          {
            v14 = a6;
            v15 = a5;
            do
            {
              v16 = v13[6];
              v28 = v16;
              if ( v16 )
              {
                if ( (*(_DWORD *)(v16 + 1824) & 0x8000000) != 0 && (*(_DWORD *)(v16 + 2128) & 0x8000) != 0 )
                {
                  if ( *(_QWORD *)(*(_QWORD *)(v16 + 1792) + 264LL) )
                  {
                    MARK_ACCDRV_NOTIFICATION::MARK_ACCDRV_NOTIFICATION(
                      (MARK_ACCDRV_NOTIFICATION *)&v19,
                      (struct PDEVOBJ *)&v28,
                      a1);
                    (*(void (__fastcall **)(struct _SURFOBJ *, _QWORD, struct _CLIPOBJ *, struct _RECTL *, unsigned int, void *))(*(_QWORD *)(v17 + 1792) + 264LL))(
                      a1,
                      a2,
                      a3,
                      a4,
                      v15,
                      v14);
                    if ( v19 )
                      *(_WORD *)(v19 + 78) &= ~0x8000u;
                  }
                }
              }
              v13 = (_QWORD *)*v13;
            }
            while ( v13 );
          }
        }
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v21);
        if ( v24[0] )
          DLODCOBJ::vUnlock((DLODCOBJ *)v24);
      }
    }
  }
  if ( v20 )
    bMakeOpaque(v20);
  return 0LL;
}
