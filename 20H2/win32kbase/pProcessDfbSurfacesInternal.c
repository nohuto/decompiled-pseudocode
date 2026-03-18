/*
 * XREFs of pProcessDfbSurfacesInternal @ 0x1C001AA60
 * Callers:
 *     pProcessDfbSurfaces2 @ 0x1C001A970 (pProcessDfbSurfaces2.c)
 * Callees:
 *     vDynamicConvertNewSurfaceDCs @ 0x1C0018F80 (vDynamicConvertNewSurfaceDCs.c)
 *     bMigrateSurfaceForConversion @ 0x1C001AC00 (bMigrateSurfaceForConversion.c)
 *     ?bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z @ 0x1C001DB80 (-bCreateDIB@SURFMEM@@QEAAHPEAU_DEVBITMAPINFO@@PEAX1K1_KHHHH@Z.c)
 *     ??1SURFMEM@@QEAA@XZ @ 0x1C003B6E0 (--1SURFMEM@@QEAA@XZ.c)
 *     GreReleaseHmgrSemaphore @ 0x1C003D970 (GreReleaseHmgrSemaphore.c)
 *     ?vUnlockNoNullSet@XDCOBJ@@QEAAXXZ @ 0x1C0041720 (-vUnlockNoNullSet@XDCOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C004C148 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     GreAcquireHmgrSemaphore @ 0x1C005EA20 (GreAcquireHmgrSemaphore.c)
 *     ?vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z @ 0x1C00C52A4 (-vLock@DEVLOCKOBJ@@QEAAXAEAVPDEVOBJ@@@Z.c)
 *     ?vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z @ 0x1C0143CD0 (-vCleanupRedirectionSurface@@YAXPEAVSURFACE@@_N@Z.c)
 */

__int64 __fastcall pProcessDfbSurfacesInternal(struct SURFACE *this)
{
  int v1; // eax
  __int64 v2; // rbx
  __int64 v3; // rsi
  int v5; // ecx
  int v6; // eax
  __int64 v8; // [rsp+60h] [rbp-49h] BYREF
  char v9; // [rsp+68h] [rbp-41h]
  int v10; // [rsp+6Ch] [rbp-3Dh]
  _DWORD v11[4]; // [rsp+70h] [rbp-39h] BYREF
  __int64 v12; // [rsp+80h] [rbp-29h]
  __int64 v13; // [rsp+88h] [rbp-21h]
  _BYTE v14[32]; // [rsp+90h] [rbp-19h] BYREF
  _QWORD v15[2]; // [rsp+B0h] [rbp+7h] BYREF
  __int16 v16; // [rsp+C0h] [rbp+17h]
  __int64 v17; // [rsp+120h] [rbp+77h] BYREF

  v1 = *((_DWORD *)this + 28);
  v2 = 0LL;
  v3 = *((_QWORD *)this + 70);
  if ( (v1 & 0x80100000) == 0 )
  {
    v5 = *((_DWORD *)this + 29) & 1;
    if ( v5 || (v1 & 0x800) == 0 || *((_WORD *)this + 50) != 3 )
    {
      v8 = 0LL;
      v9 = 0;
      v10 = 0;
      if ( !v3 )
      {
        v11[0] = *((_DWORD *)this + 24);
        v11[1] = *((_DWORD *)this + 14);
        v11[2] = *((_DWORD *)this + 15);
        v11[3] = 0;
        v13 = 1LL;
        v12 = 0LL;
        if ( v5 )
        {
          v6 = 1;
          if ( (*((_WORD *)this + 51) & 0x800) != 0 )
            v6 = 2049;
          LODWORD(v13) = v6;
        }
        if ( !(unsigned int)SURFMEM::bCreateDIB(
                              (SURFMEM *)&v8,
                              (struct _DEVBITMAPINFO *)v11,
                              0LL,
                              0LL,
                              0,
                              0LL,
                              0LL,
                              0,
                              1,
                              0,
                              0) )
          goto LABEL_24;
        v17 = *((_QWORD *)this + 6);
        v15[0] = 0LL;
        v15[1] = 0LL;
        v16 = 256;
        DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v14, (struct PDEVOBJ *)&v17);
        GreAcquireHmgrSemaphore();
        v3 = v8;
        if ( (*((_DWORD *)this + 29) & 1) != 0 )
          *(_DWORD *)(v8 + 112) |= 0x800u;
        *(_QWORD *)(v3 + 48) = *((_QWORD *)this + 6);
        GreReleaseHmgrSemaphore();
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14);
        if ( v15[0] )
        {
          if ( (_BYTE)v16 )
          {
            *(_DWORD *)(v15[0] + 40LL) &= ~2u;
            LOBYTE(v16) = 0;
          }
          XDCOBJ::vUnlockNoNullSet((XDCOBJ *)v15);
          v15[0] = 0LL;
        }
      }
      if ( (unsigned int)bMigrateSurfaceForConversion(this, (struct OBJECT *)v3) )
      {
        if ( v8 )
          v9 |= 1u;
        v2 = v3;
LABEL_16:
        SURFMEM::~SURFMEM((SURFMEM *)&v8);
        return v2;
      }
LABEL_24:
      if ( (*((_DWORD *)this + 29) & 1) != 0 )
        vCleanupRedirectionSurface(this, 0);
      goto LABEL_16;
    }
  }
  return 0LL;
}
