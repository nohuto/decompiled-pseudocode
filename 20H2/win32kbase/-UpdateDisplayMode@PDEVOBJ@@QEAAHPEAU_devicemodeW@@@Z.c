/*
 * XREFs of ?UpdateDisplayMode@PDEVOBJ@@QEAAHPEAU_devicemodeW@@@Z @ 0x1C013FDB0
 * Callers:
 *     ?DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z @ 0x1C0146444 (-DrvUpdateDisplayModeInPdev@@YAHPEAUHDEV__@@PEAUD3DKMT_GETPATHSMODALITY@@@Z.c)
 * Callees:
 *     ?vResetSurfacePalette@@YAXPEAUHDEV__@@@Z @ 0x1C00186AC (-vResetSurfacePalette@@YAXPEAUHDEV__@@@Z.c)
 *     HmgSafeNextObjt @ 0x1C001A270 (HmgSafeNextObjt.c)
 *     ?vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z @ 0x1C001A520 (-vDisableSurface@PDEVOBJ@@QEAAXW4_CLEANUPTYPE@@E@Z.c)
 *     ?pSurface@DC@@QEAAXPEAVSURFACE@@@Z @ 0x1C003E50C (-pSurface@DC@@QEAAXPEAVSURFACE@@@Z.c)
 *     HmgDecrementShareReferenceCountEx @ 0x1C0043DF0 (HmgDecrementShareReferenceCountEx.c)
 *     HmgIncrementShareReferenceCount @ 0x1C00471A0 (HmgIncrementShareReferenceCount.c)
 *     ?sizl@PDEVOBJ@@QEAA?AUtagSIZE@@XZ @ 0x1C0064DAC (-sizl@PDEVOBJ@@QEAA-AUtagSIZE@@XZ.c)
 *     ?bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z @ 0x1C00C1F50 (-bMakeSurface@PDEVOBJ@@QEAAHPEAUHSURF__@@@Z.c)
 *     __security_check_cookie @ 0x1C00CBC40 (__security_check_cookie.c)
 *     ?bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z @ 0x1C00CEC10 (-bDeleteSurface@SURFREF@@QEAAHW4_CLEANUPTYPE@@H@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00D3740 (memset.c)
 *     memmove @ 0x1C00D3840 (memmove.c)
 */

__int64 __fastcall PDEVOBJ::UpdateDisplayMode(PDEVOBJ *this, struct _devicemodeW *Src, __int64 a3)
{
  __int64 v3; // rdi
  unsigned int v4; // ebx
  struct _devicemodeW *v5; // r15
  unsigned int (__fastcall *v7)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *); // r14
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rax
  SURFACE *v17; // r14
  WORD dmSize; // cx
  __int64 Objt; // rax
  __int64 v20; // rdi
  int v21; // edx
  __int64 *v22; // rax
  __int64 v23; // rcx
  unsigned int v24; // edx
  SURFACE *v26; // [rsp+40h] [rbp-C0h] BYREF
  HSURF v27; // [rsp+48h] [rbp-B8h] BYREF
  _DWORD v28[80]; // [rsp+50h] [rbp-B0h] BYREF

  v3 = *(_QWORD *)this;
  v4 = 0;
  v5 = Src;
  v7 = *(unsigned int (__fastcall **)(_QWORD, _QWORD, struct _devicemodeW *, __int64, _DWORD *, HSURF *))(*(_QWORD *)this + 2680LL);
  if ( v7 )
  {
    if ( qword_1C024F308 )
    {
      qword_1C024F308(v3, 1LL);
      v3 = *(_QWORD *)this;
    }
    memset(v28, 0, sizeof(v28));
    v27 = 0LL;
    if ( v7(*(_QWORD *)(v3 + 1800), *(_QWORD *)(v3 + 2592), v5, v3 + 2136, v28, &v27) )
    {
      *(_DWORD *)(*(_QWORD *)this + 2152LL) = v28[4];
      *(_DWORD *)(*(_QWORD *)this + 2156LL) = v28[5];
      *(_DWORD *)(*(_QWORD *)this + 2144LL) = v28[2];
      *(_DWORD *)(*(_QWORD *)this + 2148LL) = v28[3];
      *(_DWORD *)(*(_QWORD *)this + 2176LL) = v28[10];
      *(_DWORD *)(*(_QWORD *)this + 2180LL) = v28[11];
      *(_DWORD *)(*(_QWORD *)this + 2392LL) = v28[64];
      *(_DWORD *)(*(_QWORD *)this + 2396LL) = v28[65];
      *(_DWORD *)(*(_QWORD *)this + 2200LL) = v28[16];
      *(_DWORD *)(*(_QWORD *)this + 2204LL) = v28[17];
      *(_DWORD *)(*(_QWORD *)this + 2548LL) = (((v5->dmDisplayOrientation - 1) & 0xFFFFFFFD) == 0 ? 0x80 : 0) | *(_DWORD *)(*(_QWORD *)this + 2548LL) & 0xFFFFFF7F;
      v17 = *(SURFACE **)(*(_QWORD *)this + 2552LL);
      PDEVOBJ::vDisableSurface((__int64 *)this, 0, 0);
      if ( v17 )
      {
        v26 = v17;
        HmgIncrementShareReferenceCount((int *)v17);
      }
      HmgDecrementShareReferenceCountEx((__int64)v17, 0LL);
      SURFREF::bDeleteSurface(&v26, 0);
      if ( v26 )
        HmgDecrementShareReferenceCountEx((__int64)v26, 0LL);
      PDEVOBJ::bMakeSurface(this, v27);
      dmSize = *(_WORD *)(*(_QWORD *)(*(_QWORD *)this + 2592LL) + 68LL);
      if ( dmSize >= v5->dmSize )
        dmSize = v5->dmSize;
      memmove(*(void **)(*(_QWORD *)this + 2592LL), v5, dmSize);
      LODWORD(v5) = 0;
      while ( 1 )
      {
        Objt = HmgSafeNextObjt((unsigned int)v5, 1);
        v20 = Objt;
        if ( !Objt )
          break;
        v21 = *(_DWORD *)(Objt + 36);
        v5 = *(struct _devicemodeW **)Objt;
        if ( (v21 & 0x2000) == 0 )
        {
          if ( *(SURFACE **)(Objt + 496) == v17 )
          {
            DC::pSurface((DC *)Objt, *(struct SURFACE **)(*(_QWORD *)this + 2552LL));
            v22 = (__int64 *)PDEVOBJ::sizl(this, &v26);
            v21 = *(_DWORD *)(v20 + 36);
            v23 = *v22;
            *(_DWORD *)(v20 + 316) |= 0xFu;
            *(_QWORD *)(v20 + 512) = v23;
          }
          if ( (v21 & 0x200) != 0 && (*(_DWORD *)(*(_QWORD *)(v20 + 496) + 112LL) & 0x200) != 0 )
            v24 = v21 | 0x8000;
          else
            v24 = v21 & 0xFFFF7FFF;
          *(_DWORD *)(v20 + 36) = v24;
        }
      }
      vResetSurfacePalette(*(_QWORD **)this);
      ++gcModeChanges;
      return 1;
    }
    else
    {
      v12 = WdLogNewEntry5_WdWarning(v10, v9, v11);
      *(_QWORD *)(v12 + 24) = 0LL;
      WdLogEvent5_WdWarning(v12);
      v16 = WdLogNewEntry5_WdWarning(v14, v13, v15);
      WdLogEvent5_WdWarning(v16);
    }
  }
  else
  {
    v8 = WdLogNewEntry5_WdEvent(this, Src, a3);
    *(_QWORD *)(v8 + 24) = 0LL;
    WdLogEvent5_WdEvent(v8);
  }
  return v4;
}
