/*
 * XREFs of NtGdiGetPixel @ 0x1C010CFB0
 * Callers:
 *     <none>
 * Callees:
 *     ?SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z @ 0x1C00177EC (-SrcSurfaceAccessCheck@@YAHPEAVSURFACE@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z @ 0x1C00199EC (-bXform@EXFORMOBJ@@QEAAHPEAU_POINTL@@_K@Z.c)
 *     ?bEmpty@ERECTL@@QEBAHXZ @ 0x1C0071268 (-bEmpty@ERECTL@@QEBAHXZ.c)
 *     ?prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ @ 0x1C0075A68 (-prgnEffRao@XDCOBJ@@QEAAPEAVREGION@@XZ.c)
 *     ?vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z @ 0x1C0076510 (-vLock@XDCOBJ@@QEAAXPEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     ?bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z @ 0x1C00843B8 (-bSpDwmValidateSurface@@YAHAEAVXDCOBJ@@HHHH@Z.c)
 *     ?vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z @ 0x1C00F7658 (-vQuickInit@EXFORMOBJ@@QEAAXAEAVXDCOBJ@@K@Z.c)
 *     ?bIsCMYKColor@DC@@QEBAHXZ @ 0x1C010D2DC (-bIsCMYKColor@DC@@QEBAHXZ.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtGdiGetPixel(HDC a1, unsigned int a2, unsigned int a3)
{
  __int64 v5; // rbx
  char *v6; // rdx
  struct REGION *v7; // rax
  int IsCMYKColor; // edi
  bool v9; // zf
  int v10; // eax
  unsigned int v12; // [rsp+60h] [rbp-A0h] BYREF
  DC *v13[2]; // [rsp+68h] [rbp-98h] BYREF
  __int64 v14; // [rsp+78h] [rbp-88h] BYREF
  char v15; // [rsp+80h] [rbp-80h]
  int v16; // [rsp+84h] [rbp-7Ch]
  _DWORD v17[2]; // [rsp+88h] [rbp-78h] BYREF
  __int64 v18; // [rsp+90h] [rbp-70h]
  __int64 v19; // [rsp+98h] [rbp-68h]
  __int64 v20; // [rsp+A0h] [rbp-60h]
  __int128 v21; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v22; // [rsp+C0h] [rbp-40h]
  int v23; // [rsp+C8h] [rbp-38h]
  _QWORD v24[2]; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v25; // [rsp+E0h] [rbp-20h]
  __int64 v26; // [rsp+E8h] [rbp-18h]
  __int64 v27; // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  _BYTE v29[16]; // [rsp+100h] [rbp+0h] BYREF
  struct _POINTL v30[2]; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v31[4]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v32[4]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v33[76]; // [rsp+134h] [rbp+34h] BYREF
  __int64 v34; // [rsp+180h] [rbp+80h]
  int v35; // [rsp+188h] [rbp+88h]
  int v36; // [rsp+1B0h] [rbp+B0h]
  __int64 v37; // [rsp+1C0h] [rbp+C0h]

  v12 = -1;
  v13[1] = 0LL;
  XDCOBJ::vLock((XDCOBJ *)v13, a1);
  if ( v13[0] )
  {
    bSpDwmValidateSurface((struct XDCOBJ *)v13, a2, a3, 1, 1);
    v24[1] = 0LL;
    v21 = 0LL;
    v25 = 256;
    v22 = 0LL;
    v23 = 0;
    v24[0] = 0LL;
    v28 = 0LL;
    v27 = 0LL;
    v26 = 0LL;
    if ( DEVLOCKOBJ::bLock((DEVLOCKOBJ *)&v21, (struct XDCOBJ *)v13, 0) )
    {
      v5 = *((_QWORD *)v13[0] + 62);
      if ( v5 )
      {
        if ( (unsigned int)SrcSurfaceAccessCheck(*((struct SURFACE **)v13[0] + 62)) )
        {
          EXFORMOBJ::vQuickInit((EXFORMOBJ *)v29, (struct XDCOBJ *)v13, 516);
          v30[0].x = a2;
          v30[0].y = a3;
          EXFORMOBJ::bXform((EXFORMOBJ *)v29, v30, 1LL);
          v6 = (char *)v13[0] + 1024;
          if ( (*((_DWORD *)v13[0] + 10) & 1) == 0 )
            v6 = (char *)v13[0] + 1016;
          v31[0] = v30[0].x + *(_DWORD *)v6;
          v31[2] = *(_DWORD *)v6 + v30[0].x + 1;
          v31[1] = v30[0].y + *((_DWORD *)v6 + 1);
          v31[3] = *((_DWORD *)v6 + 1) + v30[0].y + 1;
          v7 = XDCOBJ::prgnEffRao(v13);
          v34 = 0LL;
          v35 = 0;
          v36 = 1;
          v37 = 0LL;
          XCLIPOBJ::vSetup((XCLIPOBJ *)v32, v7, (struct ERECTL *)v31, 0);
          if ( !ERECTL::bEmpty((ERECTL *)v33) )
          {
            v12 = 0;
            IsCMYKColor = DC::bIsCMYKColor(v13[0]);
            v17[0] = *(_DWORD *)(v5 + 96);
            v18 = 1LL;
            v20 = 1LL;
            v17[1] = 1;
            v19 = 0LL;
            *(_OWORD *)&v30[0].x = 0LL;
            if ( v17[0] == 1 )
            {
              v30[0].x = 7;
              v30[1].x = 8;
            }
            else if ( v17[0] == 2 )
            {
              v30[0].x = 1;
              v30[1].x = 2;
            }
            else
            {
              v30[1].x = 1;
            }
            v14 = 0LL;
            v15 = 0;
            v16 = 0;
            if ( SURFMEM::bCreateDIB((SURFMEM *)&v14, (struct _DEVBITMAPINFO *)v17, &v12, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0) )
            {
              v9 = (*(_DWORD *)(v5 + 112) & 0x400) == 0;
              v30[0].y = 0;
              v30[1].y = 1;
              v10 = v9
                  ? ((__int64 (__fastcall *)(__int64, __int64, _QWORD, XLATEOBJ *const, struct _POINTL *, _DWORD *))EngCopyBits)(
                      (v14 + 24) & -(__int64)(v14 != 0),
                      v5 + 24,
                      0LL,
                      xloIdent,
                      v30,
                      v31)
                  : (*(unsigned __int64 (__fastcall **)(__int64, __int64, _QWORD, XLATEOBJ *const, struct _POINTL *, _DWORD *))(*(_QWORD *)(v5 + 48) + 2840LL))(
                      (v14 + 24) & -(__int64)(v14 != 0),
                      v5 + 24,
                      0LL,
                      xloIdent,
                      v30,
                      v31);
              if ( v10 && !IsCMYKColor )
                v12 = ulIndexToRGB(*(_QWORD *)(v5 + 128), *((_QWORD *)v13[0] + 11), v12);
            }
            SURFMEM::~SURFMEM((SURFMEM *)&v14);
          }
        }
      }
    }
    XDCOBJ::vUnlockFast((XDCOBJ *)v13);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v21);
    if ( v24[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v24);
  }
  return v12;
}
