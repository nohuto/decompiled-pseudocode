/*
 * XREFs of pProcessDfbSurfacesInternal @ 0x1C00BF6C0
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x1C00BF5D0 (pProcessDfbSurfaces2.c)
 * Callees:
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C007BEC0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C00821C0 (GreReleaseHmgrSemaphore.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C00822A0 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C00958C0 (--1SURFMEM@@QEAA@XZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5238 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C00A5C20 (GreAcquireHmgrSemaphore.c)
 *     vDynamicConvertNewSurfaceDCs @ 0x1C00BDF20 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C00BF860 (bMigrateSurfaceForConversion.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C8638 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0146170 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

__int64 __fastcall pProcessDfbSurfacesInternal(struct SURFACE *this)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rsi
  int v5; // ecx
  int v6; // eax
  int v7; // edx
  int v8; // r8d
  int v9; // edx
  __int64 v10; // rcx
  int v11; // r8d
  __int64 v12; // rdx
  int v13; // ecx
  int v14; // r8d
  __int64 v15; // rdx
  int v16; // r8d
  __int64 v17; // rax
  __int64 v19; // [rsp+60h] [rbp-49h] BYREF
  char v20; // [rsp+68h] [rbp-41h]
  int v21; // [rsp+6Ch] [rbp-3Dh]
  _DWORD v22[4]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v23; // [rsp+80h] [rbp-29h]
  __int64 v24; // [rsp+88h] [rbp-21h]
  _BYTE v25[32]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v26[2]; // [rsp+B0h] [rbp+7h] BYREF
  __int16 v27; // [rsp+C0h] [rbp+17h]
  __int64 v28; // [rsp+120h] [rbp+77h] BYREF

  v1 = *((_DWORD *)this + 28);
  v2 = 0LL;
  v3 = *((_QWORD *)this + 70);
  if ( (v1 & 0x80100000) == 0 )
  {
    v5 = *((_DWORD *)this + 29) & 1;
    if ( v5 || (v1 & 0x800) == 0 || *((_WORD *)this + 50) != 3 )
    {
      v19 = 0LL;
      v20 = 0;
      v21 = 0;
      if ( !v3 )
      {
        v22[0] = *((_DWORD *)this + 24);
        v22[1] = *((_DWORD *)this + 14);
        v22[2] = *((_DWORD *)this + 15);
        v22[3] = 0;
        v24 = 1LL;
        v23 = 0LL;
        if ( v5 )
        {
          v6 = 1;
          if ( (*((_WORD *)this + 51) & 0x800) != 0 )
            v6 = 2049;
          LODWORD(v24) = v6;
        }
        if ( !(unsigned int)SURFMEM::bCreateDIB(
                              (SURFMEM *)&v19,
                              (struct _DEVBITMAPINFO *)v22,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              0,
                              1,
                              0,
                              0) )
          goto LABEL_26;
        v28 = *((_QWORD *)this + 6);
        v26[0] = 0LL;
        v26[1] = 0LL;
        v27 = 256;
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v25, (struct PDEVOBJ *)&v28);
        GreAcquireHmgrSemaphore(v10, v9, v11);
        v3 = v19;
        if ( (*((_DWORD *)this + 29) & 1) != 0 )
          *(_DWORD *)(v19 + 112) |= 0x800u;
        *(_QWORD *)(v3 + 48) = *((_QWORD *)this + 6);
        GreReleaseHmgrSemaphore(v13, v12, v14);
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v25, v15, v16);
        v17 = v26[0];
        if ( v26[0] )
        {
          if ( (_BYTE)v27 )
          {
            *(_DWORD *)(v26[0] + 40LL) &= ~2u;
            v17 = v26[0];
            LOBYTE(v27) = 0;
          }
          if ( v17 )
            XDCOBJ::vUnlockFast((XDCOBJ *)v26);
          v26[0] = 0LL;
        }
      }
      if ( (unsigned int)bMigrateSurfaceForConversion(this, (struct OBJECT *)v3) )
      {
        if ( v19 )
          v20 |= 1u;
        v2 = v3;
LABEL_16:
        SURFMEM::~SURFMEM((SURFMEM *)&v19, v7, v8);
        return v2;
      }
LABEL_26:
      if ( (*((_DWORD *)this + 29) & 1) != 0 )
        vCleanupRedirectionSurface(this, 0);
      goto LABEL_16;
    }
  }
  return 0LL;
}
