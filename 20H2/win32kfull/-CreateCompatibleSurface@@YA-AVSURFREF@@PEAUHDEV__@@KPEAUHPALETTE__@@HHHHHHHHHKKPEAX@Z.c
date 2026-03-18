/*
 * XREFs of ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C009B670
 * Callers:
 *     GreCreateCompatibleBitmapInternal @ 0x1C009AB10 (GreCreateCompatibleBitmapInternal.c)
 *     ?SpCreateSurface@@YA?AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z @ 0x1C0115DB8 (-SpCreateSurface@@YA-AVSURFREF@@PEAUHDEV__@@PEAUtagSIZE@@@Z.c)
 *     ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C0120848 (-vProfileDriver@PDEVOBJ@@QEAAXXZ.c)
 *     GreCreateBitmapFromDxSurface @ 0x1C029FFCC (GreCreateBitmapFromDxSurface.c)
 * Callees:
 *     ??0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z @ 0x1C0069D68 (--0EPALOBJ@@QEAA@PEAUHPALETTE__@@@Z.c)
 *     ?pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL@@4PEAU_BRUSHOBJ@@4K@ZXZ @ 0x1C00FC34C (-pfnBitBlt@SURFACE@@QEAAP6AHPEAU_SURFOBJ@@00PEAU_CLIPOBJ@@PEAU_XLATEOBJ@@PEAU_RECTL@@PEAU_POINTL.c)
 *     ?bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z @ 0x1C0115F04 (-bRemoteDriverNeedsDeviceBitmaps@@YAHAEAVPDEVOBJ@@@Z.c)
 *     __security_check_cookie @ 0x1C015A0C0 (__security_check_cookie.c)
 *     ?Feature_MSRC75758_vSetApiBitmapOnbCreateDIB__private_IsEnabled@@YAHXZ @ 0x1C015EA14 (-Feature_MSRC75758_vSetApiBitmapOnbCreateDIB__private_IsEnabled@@YAHXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015F580 (_guard_dispatch_icall_nop.c)
 */

SURFACE **__fastcall CreateCompatibleSurface(
        SURFACE **a1,
        __int64 a2,
        int a3,
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
  unsigned int v17; // r12d
  int v19; // r13d
  unsigned int v20; // ebx
  __int64 (__fastcall *v21)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, __int64 *); // r10
  unsigned int v22; // r12d
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rsi
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rcx
  __int64 (__fastcall *v29)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *); // r10
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 (__fastcall *v32)(_QWORD, unsigned __int64, _QWORD); // rax
  __int64 v33; // rdx
  __int64 v34; // rax
  SURFACE *v35; // rbx
  int (*v36)(struct _SURFOBJ *, struct _SURFOBJ *, struct _SURFOBJ *, struct _CLIPOBJ *, struct _XLATEOBJ *, struct _RECTL *, struct _POINTL *, struct _POINTL *, struct _BRUSHOBJ *, struct _POINTL *, unsigned int); // rax
  int v37; // eax
  __int64 v38; // rcx
  __int64 v40; // [rsp+60h] [rbp-59h] BYREF
  char v41; // [rsp+68h] [rbp-51h]
  int v42; // [rsp+6Ch] [rbp-4Dh]
  int v43; // [rsp+70h] [rbp-49h]
  unsigned __int64 v44; // [rsp+78h] [rbp-41h]
  __int64 v45; // [rsp+80h] [rbp-39h] BYREF
  _DWORD v46[4]; // [rsp+88h] [rbp-31h] BYREF
  HPALETTE v47; // [rsp+98h] [rbp-21h]
  __int64 v48; // [rsp+A0h] [rbp-19h]
  __int64 v49; // [rsp+A8h] [rbp-11h] BYREF
  unsigned int v50; // [rsp+B0h] [rbp-9h]
  unsigned int v51; // [rsp+B4h] [rbp-5h]

  v17 = a5;
  v19 = a14;
  v46[3] = 0;
  v43 = a15;
  v45 = a16;
  v49 = a2;
  v46[1] = a5;
  v46[2] = a6;
  v47 = a4;
  v46[0] = a3;
  v48 = (unsigned int)Feature_MSRC75758_vSetApiBitmapOnbCreateDIB__private_IsEnabled() != 0 ? 67108865 : 1;
  if ( (*(_DWORD *)(a2 + 40) & 0x8000) != 0 )
    LODWORD(v48) = v48 | 0x40000;
  v20 = a7;
  if ( !a7 )
  {
    if ( !a9 )
      goto LABEL_43;
    v20 = bRemoteDriverNeedsDeviceBitmaps((struct PDEVOBJ *)&v49);
    if ( !v20 )
      goto LABEL_43;
  }
  if ( a9 )
  {
    v20 = 0;
    if ( g_pDwmState )
      v20 = gfDwmDeviceBitmapsEnabled;
  }
  if ( !v20 )
    goto LABEL_43;
  v44 = __PAIR64__(a6, a5);
  if ( a9 )
  {
    v21 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, _DWORD, int, __int64 *))(a2 + 3440);
    if ( !a14 )
      v19 = 87;
    if ( !v21 )
      goto LABEL_22;
    v49 = 0LL;
    v22 = (a12 != 0 ? 5 : 1) | 8;
    if ( !a13 )
      v22 = a12 != 0 ? 5 : 1;
    v23 = v21(*(_QWORD *)(a2 + 1800), v44, v46[0], v22, 0LL, 0, v43, &v49);
    v24 = 0LL;
    v25 = v23;
    if ( v23 )
    {
      LOBYTE(v24) = 5;
      v26 = HmgShareLockCheck(v23, v24);
      if ( v26 )
      {
        v27 = *(_DWORD *)(v26 + 116);
        if ( a13 )
          v27 |= 0x400u;
        *(_DWORD *)(v26 + 116) = v27 | 1;
        v28 = v49;
        *(_DWORD *)(v26 + 124) = v19;
        goto LABEL_21;
      }
    }
    else
    {
LABEL_22:
      if ( !a10 )
        goto LABEL_43;
    }
LABEL_23:
    *a1 = 0LL;
    return a1;
  }
  if ( !a11 )
  {
    v32 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD))(a2 + 2768);
    if ( !v32 )
      goto LABEL_43;
    v25 = v32(*(_QWORD *)(a2 + 1800), v44, v46[0]);
    goto LABEL_31;
  }
  v29 = *(__int64 (__fastcall **)(_QWORD, unsigned __int64, _QWORD, _QWORD, _QWORD, int, int, __int64 *))(a2 + 3440);
  if ( !v29 )
    goto LABEL_23;
  v22 = a12 != 0 ? 6 : 2;
  v30 = v29(*(_QWORD *)(a2 + 1800), v44, v46[0], v22, 0LL, a14, v43, &v45);
  v31 = 0LL;
  v25 = v30;
  if ( !v30 )
    goto LABEL_23;
  LOBYTE(v31) = 5;
  v26 = HmgShareLockCheck(v30, v31);
  if ( !v26 )
    goto LABEL_23;
  *(_DWORD *)(v26 + 116) |= 8u;
  v28 = v45;
LABEL_21:
  *(_QWORD *)(v26 + 568) = v28;
  *(_DWORD *)(v26 + 120) = v22;
  DEC_SHARE_REF_CNT(v26);
  v17 = a5;
LABEL_31:
  v33 = 0LL;
  if ( v25 && (_DWORD)v25 != -1 )
  {
    LOBYTE(v33) = 5;
    v34 = HmgShareLockCheck(v25, v33);
    v35 = (SURFACE *)v34;
    if ( v34 )
    {
      *(_DWORD *)(v34 + 112) |= 0x4804000u;
      if ( v47 )
      {
        EPALOBJ::EPALOBJ((EPALOBJ *)&v49, v47);
        if ( v49 )
          *((_QWORD *)v35 + 16) = v49;
      }
      if ( !a9 && (!a11 || !v45) )
      {
        v51 = a6;
        v49 = 0LL;
        v50 = v17;
        v36 = SURFACE::pfnBitBlt(v35);
        ((void (__fastcall *)(char *, _QWORD, _QWORD, _QWORD, _QWORD, __int64 *, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))v36)(
          (char *)v35 + 24,
          0LL,
          0LL,
          0LL,
          0LL,
          &v49,
          0LL,
          0LL,
          0LL,
          0LL,
          0);
      }
      EtwPhysicalSurfCreateEvent(v25, 1LL, *((_QWORD *)v35 + 71), 1LL);
    }
    *a1 = v35;
    return a1;
  }
LABEL_43:
  v37 = 1;
  if ( !a9 )
    v37 = a8;
  v40 = 0LL;
  v41 = 0;
  LODWORD(v48) = (v37 != 0 ? 0x800 : 0) | v48;
  v42 = 0;
  SURFMEM::bCreateDIB((SURFMEM *)&v40, (struct _DEVBITMAPINFO *)v46, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0);
  if ( v40 )
  {
    v41 |= 1u;
    *(_DWORD *)(v40 + 112) |= 0x800000u;
    if ( !(unsigned int)Feature_MSRC75758_vSetApiBitmapOnbCreateDIB__private_IsEnabled() )
      *(_DWORD *)(v40 + 112) |= 0x4000000u;
    *(_QWORD *)(v40 + 48) = a2;
    if ( *(_QWORD *)(v40 + 248) )
      *(_DWORD *)(v40 + 112) |= 0x4000u;
    else
      *(_DWORD *)(v40 + 112) |= 0x200u;
    EtwPhysicalSurfCreateEvent(*(_QWORD *)(v40 + 32), 0LL, 0LL, v20);
    v38 = v40;
    if ( v40 )
    {
      *a1 = (SURFACE *)v40;
      INC_SHARE_REF_CNT(v38);
    }
  }
  else
  {
    *a1 = 0LL;
  }
  SURFMEM::~SURFMEM((SURFMEM *)&v40);
  return a1;
}
