/*
 * XREFs of ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0018F9C
 * Callers:
 *     GreCreateCompatibleBitmapInternal @ 0x1C0018AAC (GreCreateCompatibleBitmapInternal.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0114D58 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C011F1A8 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C02A141C (GreCreateBitmapFromDxSurface.c)
 * Callees:
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C001D7A0 (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C00D085C (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0114EA4 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

SURFACE **__fastcall CreateCompatibleSurface(
        SURFACE **a1,
        __int64 a2,
        __int64 a3,
        HPALETTE a4,
        unsigned int a5,
        unsigned int a6,
        unsigned int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        __int64 a16)
{
  unsigned int v16; // r12d
  unsigned int v18; // ebx
  int v20; // r13d
  int v21; // eax
  unsigned int v22; // edx
  __int64 (__fastcall *v23)(_QWORD, unsigned __int64); // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  int v26; // eax
  __int64 v27; // rcx
  __int64 (__fastcall *v29)(_QWORD, unsigned __int64, __int64, _QWORD, _QWORD, _DWORD, int, __int64 *); // r10
  unsigned int v30; // r12d
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rax
  SURFACE *v37; // rbx
  __int64 (__fastcall *v38)(_QWORD, unsigned __int64, __int64, _QWORD, _QWORD, int, int, __int64 *); // r10
  __int64 v39; // rax
  __int64 v40; // rdx
  int (*v41)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  __int64 v42; // [rsp+60h] [rbp-59h] BYREF
  char v43; // [rsp+68h] [rbp-51h]
  int v44; // [rsp+6Ch] [rbp-4Dh]
  unsigned __int64 v45; // [rsp+70h] [rbp-49h]
  __int64 v46; // [rsp+78h] [rbp-41h] BYREF
  _DWORD v47[4]; // [rsp+80h] [rbp-39h] BYREF
  HPALETTE v48; // [rsp+90h] [rbp-29h]
  __int64 v49; // [rsp+98h] [rbp-21h]
  __int64 v50; // [rsp+A0h] [rbp-19h] BYREF
  unsigned int v51; // [rsp+A8h] [rbp-11h]
  unsigned int v52; // [rsp+ACh] [rbp-Dh]

  v16 = a5;
  v18 = a7;
  v20 = a14;
  v46 = a16;
  v21 = 1;
  v49 = 1LL;
  v50 = a2;
  v22 = a6;
  v47[3] = 0;
  v47[1] = a5;
  v47[2] = a6;
  v48 = a4;
  v47[0] = a3;
  if ( (*(_DWORD *)(a2 + 40) & 0x8000) != 0 )
    v21 = 262145;
  LODWORD(v49) = v21;
  if ( !a7 )
  {
    if ( !a9 )
      goto LABEL_11;
    v18 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v50);
    if ( !v18 )
      goto LABEL_11;
    a3 = v47[0];
    v22 = a6;
  }
  if ( a9 )
  {
    v18 = 0;
    if ( g_pDwmState )
      v18 = gfDwmDeviceBitmapsEnabled;
  }
  if ( !v18 )
    goto LABEL_11;
  v45 = __PAIR64__(v22, a5);
  if ( a9 )
  {
    v29 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD, _QWORD, _DWORD, int, __int64 *))(a2 + 3440);
    if ( !a14 )
      v20 = 87;
    if ( !v29 )
      goto LABEL_46;
    v50 = 0LL;
    v30 = (a12 != 0 ? 5 : 1) | 8;
    if ( !a13 )
      v30 = a12 != 0 ? 5 : 1;
    v31 = v29(*(_QWORD *)(a2 + 1800), v45, a3, v30, 0LL, 0, a15, &v50);
    v25 = v31;
    if ( v31 )
    {
      LOBYTE(v32) = 5;
      v33 = HmgShareLockCheck(v31, v32);
      if ( v33 )
      {
        v34 = *(_DWORD *)(v33 + 116);
        if ( a13 )
          v34 |= 0x400u;
        *(_DWORD *)(v33 + 116) = v34 | 1;
        v35 = v50;
        *(_DWORD *)(v33 + 124) = v20;
        goto LABEL_33;
      }
    }
    else
    {
LABEL_46:
      if ( !a10 )
        goto LABEL_11;
    }
LABEL_47:
    *a1 = 0LL;
    return a1;
  }
  if ( a11 )
  {
    v38 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, __int64, _QWORD, _QWORD, int, int, __int64 *))(a2 + 3440);
    if ( v38 )
    {
      v30 = a12 != 0 ? 6 : 2;
      v39 = v38(*(_QWORD *)(a2 + 1800), v45, a3, v30, 0LL, a14, a15, &v46);
      v25 = v39;
      if ( v39 )
      {
        LOBYTE(v40) = 5;
        v33 = HmgShareLockCheck(v39, v40);
        if ( v33 )
        {
          *(_DWORD *)(v33 + 116) |= 8u;
          v35 = v46;
LABEL_33:
          *(_QWORD *)(v33 + 568) = v35;
          *(_DWORD *)(v33 + 120) = v30;
          DEC_SHARE_REF_CNT(v33);
          v16 = a5;
          goto LABEL_10;
        }
      }
    }
    goto LABEL_47;
  }
  v23 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64))(a2 + 2768);
  if ( !v23 )
    goto LABEL_11;
  v25 = v23(*(_QWORD *)(a2 + 1800), v45);
LABEL_10:
  if ( v25 && (_DWORD)v25 != -1 )
  {
    LOBYTE(v24) = 5;
    v36 = HmgShareLockCheck(v25, v24);
    v37 = (SURFACE *)v36;
    if ( v36 )
    {
      *(_DWORD *)(v36 + 112) |= 0x4804000u;
      if ( v48 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v50, v48);
        if ( v50 )
          *((_QWORD *)v37 + 16) = v50;
      }
      if ( !a9 && (!a11 || !v46) )
      {
        v52 = a6;
        v50 = 0LL;
        v51 = v16;
        v41 = SURFACE::pfnBitBlt(v37);
        ((void (__fastcall *)(char *, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v41)(
          (char *)v37 + 24,
          0LL,
          0LL,
          0LL,
          0LL,
          &v50,
          0LL,
          0LL,
          0LL,
          0LL,
          0);
      }
      EtwPhysicalSurfCreateEvent(v25, 1LL, *((_QWORD *)v37 + 71), 1LL);
    }
    *a1 = v37;
    return a1;
  }
LABEL_11:
  v42 = 0LL;
  v26 = 1;
  if ( !a9 )
    v26 = a8;
  v43 = 0;
  v44 = 0;
  LODWORD(v49) = (v26 != 0 ? 0x800 : 0) | v49;
  SURFMEM::bCreateDIB((SURFMEM *)&v42, (struct _DEVBITMAPINFO *)v47, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v42 )
  {
    v43 |= 1u;
    *(_DWORD *)(v42 + 112) |= 0x800000u;
    *(_DWORD *)(v42 + 112) |= 0x4000000u;
    *(_QWORD *)(v42 + 48) = a2;
    if ( *(_QWORD *)(v42 + 248) )
      *(_DWORD *)(v42 + 112) |= 0x4000u;
    else
      *(_DWORD *)(v42 + 112) |= 0x200u;
    EtwPhysicalSurfCreateEvent(*(_QWORD *)(v42 + 32), 0LL, 0LL, v18);
    v27 = v42;
    if ( v42 )
    {
      *a1 = (SURFACE *)v42;
      INC_SHARE_REF_CNT(v27);
    }
  }
  else
  {
    *a1 = 0LL;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v42);
  return a1;
}
