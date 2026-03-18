/*
 * XREFs of ?vProfileDriver@PDEVOBJ@@QEAAXXZ @ 0x1C011F1A8
 * Callers:
 *     PDEVOBJ_vProfileDriverWrap @ 0x1C011F190 (PDEVOBJ_vProfileDriverWrap.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0018F9C (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QEAAXXZ @ 0x1C001A554 (-vAltUnlock@EXLATEOBJ@@QEAAXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z @ 0x1C0085AA0 (-bInitXlateObj@EXLATEOBJ@@QEAAHPEAXJVXEPALOBJ@@111KKKK@Z.c)
 *     __security_check_cookie @ 0x1C0157760 (__security_check_cookie.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C015A84C (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall PDEVOBJ::vProfileDriver(PDEVOBJ *this)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  __int64 v4; // r15
  __int64 v5; // rsi
  BOOL (__stdcall *v6)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r12
  __int64 v7; // rdx
  signed __int32 v8; // ett
  BOOL (__stdcall *v9)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *); // r10
  __int64 v10; // rdx
  __int64 v11; // rdx
  signed __int32 v12; // ett
  __int64 v13; // rdx
  signed __int32 v14; // ett
  int v15; // eax
  SURFACE *v16; // [rsp+88h] [rbp-80h] BYREF
  __int64 v17; // [rsp+90h] [rbp-78h] BYREF
  __int64 v18; // [rsp+98h] [rbp-70h] BYREF
  __int64 v19; // [rsp+A0h] [rbp-68h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v21; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v22; // [rsp+B8h] [rbp-50h] BYREF
  int v23; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v24; // [rsp+C8h] [rbp-40h]
  __int64 v25; // [rsp+D0h] [rbp-38h]
  __int64 v26; // [rsp+D8h] [rbp-30h]
  __int64 v27; // [rsp+E0h] [rbp-28h] BYREF
  char v28; // [rsp+E8h] [rbp-20h]
  int v29; // [rsp+ECh] [rbp-1Ch]
  __int64 v30; // [rsp+F0h] [rbp-18h] BYREF
  _DWORD v31[4]; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v32; // [rsp+108h] [rbp+0h]
  int v33; // [rsp+110h] [rbp+8h]
  int v34; // [rsp+114h] [rbp+Ch]
  __int128 v35; // [rsp+118h] [rbp+10h] BYREF
  __int64 v36; // [rsp+128h] [rbp+20h]
  int v37; // [rsp+130h] [rbp+28h]
  _QWORD v38[2]; // [rsp+138h] [rbp+30h] BYREF
  __int16 v39; // [rsp+148h] [rbp+40h]
  __int64 v40; // [rsp+150h] [rbp+48h]
  __int64 v41; // [rsp+158h] [rbp+50h]
  __m128i v42; // [rsp+168h] [rbp+60h] BYREF
  int v43; // [rsp+178h] [rbp+70h] BYREF
  __m128i si128; // [rsp+17Ch] [rbp+74h]
  int v45; // [rsp+18Ch] [rbp+84h]

  v1 = *(_QWORD *)this;
  v31[3] = 0;
  v34 = 0;
  if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
  {
    v38[1] = 0LL;
    v35 = 0LL;
    v39 = 256;
    v41 = 0LL;
    v40 = 0LL;
    v38[0] = 0LL;
    v37 = 1;
    if ( (*(_DWORD *)(v1 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v35 = *(_QWORD *)(v1 + 48);
      v36 = v1;
      GreAcquireSemaphore(v35);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v35, 11LL);
    }
    v30 = ghsemSprite;
    GreAcquireSemaphore(ghsemSprite);
    v3 = *(_QWORD *)this;
    v4 = *(_QWORD *)(*(_QWORD *)this + 2552LL);
    v5 = *(_QWORD *)(*(_QWORD *)this + 1808LL);
    v45 = 0;
    v43 = 0;
    si128 = _mm_load_si128((const __m128i *)&_xmm);
    v42 = si128;
    *(_DWORD *)(v3 + 2440) = 0;
    v31[0] = 6;
    v32 = *(_QWORD *)gppalRGB;
    v27 = 0LL;
    v28 = 0;
    v29 = 0;
    v19 = 0LL;
    v18 = 0LL;
    v17 = 0LL;
    v31[1] = 40;
    v31[2] = 40;
    v33 = 1;
    v6 = EngAlphaBlend;
    if ( SURFMEM::bCreateDIB((SURFMEM *)&v27, (struct _DEVBITMAPINFO *)v31, 0LL, 0LL, 0, 0LL, 0LL, 0, 1, 0, 0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v19,
                         0LL,
                         0,
                         (__int64)gppalRGB,
                         (__int64)gppalRGB,
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v18,
                         0LL,
                         0,
                         v5,
                         (__int64)gppalRGB,
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0)
      && (unsigned int)EXLATEOBJ::bInitXlateObj(
                         &v17,
                         0LL,
                         0,
                         (__int64)gppalRGB,
                         v5,
                         (__int64)ppalDefault,
                         (__int64)ppalDefault,
                         0,
                         0,
                         0,
                         0) )
    {
      v7 = *(_QWORD *)this;
      v24 = v19;
      v25 = v18;
      v26 = v17;
      v23 = 33488896;
      _m_prefetchw((const void *)(v7 + 40));
      do
        v8 = *(_DWORD *)(v7 + 40);
      while ( v8 != _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 40), v8 & 0xFFFBFFFF, v8) );
      if ( (*(_DWORD *)(v4 + 112) & 0x10000) != 0 )
        v9 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3256LL);
      else
        v9 = EngAlphaBlend;
      v10 = v27 + 24;
      if ( !v27 )
        v10 = 0LL;
      if ( ((unsigned int (__fastcall *)(__int64, __int64, int *, __int64, __m128i *, __m128i *, int *))v9)(
             v4 + 24,
             v10,
             &v43,
             v17,
             &v42,
             &v42,
             &v23)
        && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
      {
        *(_DWORD *)(*(_QWORD *)this + 2440LL) |= 2u;
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 2u;
      }
    }
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v17);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v18);
    EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v19);
    SURFMEM::~SURFMEM((SURFMEM *)&v27);
    CreateCompatibleSurface(
      &v16,
      *(_QWORD *)this,
      *(unsigned int *)(v4 + 96),
      0LL,
      0x28u,
      0x28u,
      1u,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0,
      0LL);
    if ( v16 )
    {
      v22 = 0LL;
      v21 = 0LL;
      v20 = 0LL;
      if ( (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v22,
                           0LL,
                           0,
                           v5,
                           v5,
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0,
                           0,
                           0)
        && (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v21,
                           0LL,
                           0,
                           v5,
                           (__int64)gppalRGB,
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0,
                           0,
                           0)
        && (unsigned int)EXLATEOBJ::bInitXlateObj(
                           &v20,
                           0LL,
                           0,
                           (__int64)gppalRGB,
                           v5,
                           (__int64)ppalDefault,
                           (__int64)ppalDefault,
                           0,
                           0,
                           0,
                           0) )
      {
        v11 = *(_QWORD *)this;
        v24 = v21;
        v25 = v21;
        v26 = v20;
        v23 = 8716288;
        _m_prefetchw((const void *)(v11 + 40));
        do
          v12 = *(_DWORD *)(v11 + 40);
        while ( v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 40), v12 & 0xFFFBFFFF, v12) );
        if ( (*(_DWORD *)(v4 + 112) & 0x10000) != 0 )
          v6 = *(BOOL (__stdcall **)(SURFOBJ *, SURFOBJ *, CLIPOBJ *, XLATEOBJ *, RECTL *, RECTL *, BLENDOBJ *))(*(_QWORD *)this + 3256LL);
        if ( ((unsigned int (__fastcall *)(__int64, char *, int *, __int64, __m128i *, __m128i *, int *))v6)(
               v4 + 24,
               (char *)v16 + 24,
               &v43,
               v22,
               &v42,
               &v42,
               &v23)
          && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
        {
          *(_DWORD *)(*(_QWORD *)this + 2440LL) |= 1u;
          *(_DWORD *)(*(_QWORD *)this + 44LL) |= 1u;
        }
      }
      v13 = *(_QWORD *)this;
      _m_prefetchw((const void *)(*(_QWORD *)this + 40LL));
      do
        v14 = *(_DWORD *)(v13 + 40);
      while ( v14 != _InterlockedCompareExchange((volatile signed __int32 *)(v13 + 40), v14 & 0xFFFBFFFF, v14) );
      if ( (*(_DWORD *)(v4 + 112) & 0x8000) != 0 )
        v15 = (*(__int64 (__fastcall **)(__int64, char *, _QWORD, _QWORD, __m128i *, __m128i *, int, _DWORD))(*(_QWORD *)this + 3280LL))(
                v4 + 24,
                (char *)v16 + 24,
                0LL,
                0LL,
                &v42,
                &v42,
                1,
                0);
      else
        v15 = ((__int64 (__fastcall *)(__int64, char *, _QWORD, _QWORD, __m128i *, __m128i *, int, _DWORD))EngTransparentBlt)(
                v4 + 24,
                (char *)v16 + 24,
                0LL,
                0LL,
                &v42,
                &v42,
                1,
                0);
      if ( v15 && (*(_DWORD *)(*(_QWORD *)this + 40LL) & 0x40000) == 0 )
        *(_DWORD *)(*(_QWORD *)this + 44LL) |= 4u;
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v20);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v21);
      EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v22);
    }
    SURFREF::bDeleteSurface(&v16, 0LL, 0LL);
    if ( v16 )
      DEC_SHARE_REF_CNT(v16);
    SEMOBJ::vUnlock((SEMOBJ *)&v30);
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v35);
    if ( v38[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v38);
  }
}
