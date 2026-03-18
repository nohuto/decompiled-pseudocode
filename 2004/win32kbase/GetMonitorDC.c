/*
 * XREFs of GetMonitorDC @ 0x1C0093FA0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0010F90 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C00A52E8 (UserGetMonitorDC.c)
 * Callees:
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0010A5C (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0010AE0 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     GetMonitorRect @ 0x1C0011784 (GetMonitorRect.c)
 *     IntersectRect @ 0x1C0012434 (IntersectRect.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C00125B4 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     CreateCacheDC @ 0x1C00141E0 (CreateCacheDC.c)
 *     IsGetStyleWindowSupported @ 0x1C0014408 (IsGetStyleWindowSupported.c)
 *     GreSetRectRgn @ 0x1C0014BB0 (GreSetRectRgn.c)
 *     GreCopyVisRgn @ 0x1C0026650 (GreCopyVisRgn.c)
 *     GreSetDCOrg @ 0x1C0027620 (GreSetDCOrg.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C0030E50 (IsGreSelectRedirectionBitmapSupported.c)
 *     IsSpbCheckDceSupported @ 0x1C003CC40 (IsSpbCheckDceSupported.c)
 *     IsGreHintDCWndSupported @ 0x1C003FF04 (IsGreHintDCWndSupported.c)
 *     IsGetRedirectionBitmapSupported @ 0x1C004428C (IsGetRedirectionBitmapSupported.c)
 *     GreOffsetRgn @ 0x1C007BAB0 (GreOffsetRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C0083440 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C0084B00 (GreCombineRgn.c)
 *     GreGetBounds @ 0x1C00882C0 (GreGetBounds.c)
 *     GreSetDCOwnerEx @ 0x1C0090550 (GreSetDCOwnerEx.c)
 *     GreSelectVisRgn @ 0x1C0092430 (GreSelectVisRgn.c)
 *     GreIsRendering @ 0x1C0093E60 (GreIsRendering.c)
 *     GreGetDCOrgEx @ 0x1C00A4EB0 (GreGetDCOrgEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetMonitorDC(__int64 a1, struct tagMONITOR *a2, int a3)
{
  __int64 *i; // rbx
  int v7; // eax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // r15
  int v11; // eax
  __int64 v12; // rcx
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // rax
  __int64 v15; // rax
  int v16; // edx
  __int64 v17; // r8
  int v18; // ecx
  int v19; // eax
  int v20; // edx
  int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int128 v27; // xmm0
  HDC v28; // rcx
  struct HOBJ__ *RectRgnIndirect; // rax
  __int64 v30; // [rsp+20h] [rbp-30h]
  __int128 v31; // [rsp+30h] [rbp-20h] BYREF
  __int128 v32; // [rsp+40h] [rbp-10h] BYREF

  v31 = 0LL;
  while ( 2 )
  {
    for ( i = *(__int64 **)(gpDispInfo + 24); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x401000) == 0 && !(unsigned int)GreIsRendering((HDC)i[1]) && (struct tagMONITOR *)i[11] == a2 )
      {
        if ( (i[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 && qword_1C02525E0 )
          qword_1C02525E0(i);
        if ( (unsigned int)GreSetDCOwnerEx(i[1], 2147483650LL, 0, 0) )
        {
          i[2] = *(_QWORD *)(a1 + 16);
          i[3] = *(_QWORD *)(a1 + 24);
          i[4] = *(_QWORD *)(a1 + 32);
          i[9] = *(_QWORD *)(a1 + 72);
          i[10] = *(_QWORD *)(a1 + 80);
          v7 = *(_DWORD *)(a1 + 64) & 0x947F9 | 0x1002;
          *((_DWORD *)i + 16) = v7;
          v8 = *(_QWORD *)(a1 + 40);
          if ( v8 > 1 )
          {
            RectRgnIndirect = GreCreateRectRgnIndirect((struct _RECTL *)&gZero);
            i[5] = (__int64)RectRgnIndirect;
            SetMonitorRegion(a2, (HRGN)RectRgnIndirect, *(HRGN *)(a1 + 40));
            v7 = *((_DWORD *)i + 16);
          }
          else
          {
            i[5] = v8;
          }
          v9 = 0LL;
          if ( (v7 & 0x4000) == 0 || (int)IsGetStyleWindowSupported() < 0 )
            goto LABEL_44;
          if ( qword_1C02525B0 )
            v9 = (_QWORD *)qword_1C02525B0(i[2], 2848LL);
          if ( v9 )
          {
            if ( (*(_BYTE *)(v9[5] + 26LL) & 0x20) == 0 && (int)IsGetRedirectionBitmapSupported() >= 0 )
            {
              v10 = qword_1C0252590 ? qword_1C0252590(v9) : 0LL;
              if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
              {
                v11 = (int)qword_1C02519A8;
                v12 = i[1];
                if ( qword_1C02519A8 )
                {
                  v11 = qword_1C02519A8(v12, v10);
                  v12 = i[1];
                }
                if ( !v11 )
                  GreSelectVisRgn(v12, 0LL, 1u);
              }
            }
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            GreOffsetRgn(ghrgnGDC, *(_DWORD *)(v9[5] + 88LL), *(_DWORD *)(v9[5] + 92LL));
            CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
            MonitorRegionForDpi = GetMonitorRegionForDpi(a2, CurrentThreadCompositedDpi);
            if ( !(unsigned int)GreCombineRgn(ghrgnGDC, ghrgnGDC, MonitorRegionForDpi, 1) )
              GreSetRectRgn(ghrgnGDC, 0, 0, 0, 0);
            GreOffsetRgn(ghrgnGDC, -*(_DWORD *)(v9[5] + 88LL), -*(_DWORD *)(v9[5] + 92LL));
            GreSelectVisRgn(i[1], (__int64)ghrgnGDC, 2u);
            GreGetDCOrgEx(*(HDC *)(a1 + 8));
            if ( a3 )
            {
              v15 = v9[5];
              v16 = *(_DWORD *)(v15 + 92);
              LODWORD(v15) = 2 * *(_DWORD *)(v15 + 88);
              LODWORD(v31) = v15 + v31;
              DWORD2(v31) += v15;
              HIDWORD(v31) += 2 * v16;
              DWORD1(v31) += 2 * v16;
              v32 = *GetMonitorRect(&v32, (__int64)a2);
              IntersectRect(&v31, (int *)&v31, (int *)&v32);
              v17 = v9[5];
              v18 = -*(_DWORD *)(v17 + 92);
              v19 = -*(_DWORD *)(v17 + 88);
              DWORD2(v31) -= *(_DWORD *)(v17 + 88);
              v20 = v19 + v31;
              HIDWORD(v31) += v18;
              v21 = v18 + DWORD1(v31);
              LODWORD(v31) = v19 + v31;
              DWORD1(v31) += v18;
            }
            else
            {
              v21 = DWORD1(v31);
              v20 = v31;
            }
            GreSetDCOrg((HDC)i[1], v20, v21, &v31);
            GreGetBounds(i[1], 0LL, 5);
          }
          else
          {
LABEL_44:
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            SetMonitorRegion(a2, ghrgnGDC, ghrgnGDC);
            GreSelectVisRgn(i[1], (__int64)ghrgnGDC, 2u);
            v27 = *GetMonitorRect(&v32, (__int64)a2);
            v32 = v27;
            if ( a3 )
              v31 = v27;
            else
              GreGetDCOrgEx(*(HDC *)(a1 + 8));
            HIDWORD(v31) -= DWORD1(v32);
            DWORD2(v31) -= v32;
            v28 = (HDC)i[1];
            LODWORD(v31) = v31 - v32;
            DWORD1(v31) -= DWORD1(v32);
            GreSetDCOrg(v28, v31, SDWORD1(v31), &v31);
          }
          if ( (int)IsGreHintDCWndSupported() >= 0 && qword_1C02519C8 )
          {
            LODWORD(v30) = 0;
            qword_1C02519C8(i[1], *(_QWORD *)i[2], 0LL, 0LL, v30);
          }
          if ( v9 )
          {
            if ( (*(_BYTE *)(v9[5] + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
            {
              v23 = v9[5];
              if ( qword_1C02519C8 )
              {
                LODWORD(v30) = (*(_WORD *)(v23 + 42) & 0x3FFF) == 669;
                qword_1C02519C8(i[1], *(_QWORD *)i[2], *v9, (*(_BYTE *)(v23 + 27) & 2) == 0, v30);
              }
            }
          }
          --gnDCECount;
          if ( a3 )
          {
            *((_DWORD *)i + 16) |= 0x80000000;
            i[9] = 0LL;
            i[10] = PsGetCurrentProcessWin32Process(v22);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v24);
            *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
          }
          return i[1];
        }
      }
    }
    if ( CreateCacheDC(0LL, *(_DWORD *)(a1 + 64) & 0x4000 | 0x802u, (__int64)a2) )
      continue;
    return 0LL;
  }
}
