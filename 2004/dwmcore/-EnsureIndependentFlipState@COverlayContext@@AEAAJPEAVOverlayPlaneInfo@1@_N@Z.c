/*
 * XREFs of ?EnsureIndependentFlipState@COverlayContext@@AEAAJPEAVOverlayPlaneInfo@1@_N@Z @ 0x18017D580
 * Callers:
 *     ?Reset@COverlayContext@@IEAAXXZ @ 0x180024ABC (-Reset@COverlayContext@@IEAAXXZ.c)
 *     ?PresentNeeded@COverlayContext@@QEAA_NXZ @ 0x180032E98 (-PresentNeeded@COverlayContext@@QEAA_NXZ.c)
 *     ?ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ @ 0x1800DA374 (-ReleaseObsoletePlaneAssignments@COverlayContext@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800393BC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?DoesContain@?$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z @ 0x180092DEC (-DoesContain@-$TMilRect@IUMilRectU@@UMil3DRectU@@UNotNeeded@RectUniqueness@@@@QEBA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800E26A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800EED40 (_guard_dispatch_icall_nop.c)
 *     ?IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z @ 0x18017DDEC (-IsFullscreen@COverlayContext@@AEBA_NAEBVOverlayPlaneInfo@1@@Z.c)
 */

__int64 __fastcall COverlayContext::EnsureIndependentFlipState(
        COverlayContext *this,
        struct COverlayContext::OverlayPlaneInfo *a2,
        char a3)
{
  int v3; // r13d
  unsigned int v4; // r12d
  int v5; // r15d
  char v6; // bp
  int v9; // ecx
  __int64 v10; // rax
  bool IsFullscreen; // bl
  unsigned int v12; // edi
  __int64 v13; // rax
  __int64 v14; // rdi
  __int64 (__fastcall *v15)(__int64, __int64, __int64, _QWORD, int, int); // rbx
  int v16; // eax
  __int64 v17; // r8
  __int64 v18; // rdx
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r8
  _DWORD v23[4]; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v24[16]; // [rsp+50h] [rbp-58h] BYREF

  v3 = *((_DWORD *)a2 + 49);
  v4 = 0;
  v5 = 0;
  v6 = a3;
  if ( a3 )
  {
    if ( !*((_BYTE *)this + 11427) || !*((_BYTE *)a2 + 178) )
      v6 = 0;
    if ( v6 )
    {
      if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)this + 56LL))(*(_QWORD *)this) )
      {
        if ( *((int *)a2 + 13) < 0 || (v9 = *((_DWORD *)a2 + 14), v9 < 0) )
        {
          v6 = 0;
        }
        else
        {
          v23[0] = *((_DWORD *)a2 + 13);
          v23[2] = *((_DWORD *)a2 + 15);
          v23[3] = *((_DWORD *)a2 + 16);
          v23[1] = v9;
          v10 = (*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**(_QWORD **)this + 160LL))(*(_QWORD *)this, v24);
          v6 &= TMilRect<unsigned int,MilRectU,Mil3DRectU,RectUniqueness::NotNeeded>::DoesContain(v10, (__int64)v23);
        }
      }
      if ( v6 )
      {
        IsFullscreen = 0;
        v12 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 96LL))(*((_QWORD *)a2 + 2));
        if ( v12
          && *(_BYTE *)(*((_QWORD *)g_pComposition + 11) + 129LL)
          && (unsigned int)((*((_QWORD *)this + 915) - *((_QWORD *)this + 914)) / 224LL) == 1 )
        {
          if ( *((_BYTE *)this + 11420) )
            IsFullscreen = COverlayContext::IsFullscreen(this, a2);
          else
            IsFullscreen = *((_BYTE *)this + 11032) == 0;
        }
        if ( IsFullscreen )
        {
          if ( v12 == *((_DWORD *)a2 + 50) )
          {
            v5 = *((_DWORD *)a2 + 49);
          }
          else
          {
            v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 192LL))(*(_QWORD *)this);
            v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v13 + 104LL))(v13, v12);
            *((_DWORD *)a2 + 49) = v5;
            *((_DWORD *)a2 + 50) = v12;
          }
        }
        else
        {
          *((_DWORD *)a2 + 50) = 0;
          *((_DWORD *)a2 + 49) = 0;
        }
      }
    }
  }
  if ( v5 != v3
    || v6 != (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 248LL))(
               *((_QWORD *)a2 + 2),
               0LL) )
  {
    if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a2 + 2) + 248LL))(*((_QWORD *)a2 + 2), 0LL) )
      LOBYTE(v4) = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)a2 + 2) + 256LL))(*((_QWORD *)a2 + 2));
    v14 = *((_QWORD *)a2 + 2);
    v15 = *(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD, int, int))(*(_QWORD *)v14 + 272LL);
    v16 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)this + 176LL))(*(_QWORD *)this);
    LOBYTE(v17) = v4;
    LOBYTE(v18) = v6;
    v19 = v15(v14, v18, v17, *((unsigned int *)a2 + 51), v5, v16);
    v4 = v19;
    if ( v19 >= 0 )
    {
      if ( *((_BYTE *)a2 + 219) != v6 )
      {
        LOBYTE(v21) = v6;
        (*(void (__fastcall **)(_QWORD, __int64, __int64))(**((_QWORD **)a2 + 2) + 304LL))(
          *((_QWORD *)a2 + 2),
          3LL,
          v21);
      }
      *((_BYTE *)a2 + 219) = v6;
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(v20, 0LL, 0, v19, 0xB25u, 0LL);
    }
  }
  return v4;
}
