/*
 * XREFs of GetMonitorDC @ 0x1C00908A8
 * Callers:
 *     UserGetMonitorDC @ 0x1C006A2F0 (UserGetMonitorDC.c)
 *     xxxEnumDisplayMonitors @ 0x1C00A6620 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     GreCopyVisRgn @ 0x1C0016B90 (GreCopyVisRgn.c)
 *     GreSetDCOrg @ 0x1C00178A0 (GreSetDCOrg.c)
 *     IsSpbCheckDceSupported @ 0x1C002E1D8 (IsSpbCheckDceSupported.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C0032DA8 (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C0032E2C (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     IsGetRedirectionBitmapSupported @ 0x1C00349AC (IsGetRedirectionBitmapSupported.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C006BBD4 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GetMonitorRect @ 0x1C006BC48 (GetMonitorRect.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C006C4C4 (IsGreSelectRedirectionBitmapSupported.c)
 *     GreOffsetRgn @ 0x1C0076320 (GreOffsetRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C007CB20 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C007DB50 (GreCombineRgn.c)
 *     GreGetBounds @ 0x1C00811F0 (GreGetBounds.c)
 *     GreSetDCOwnerEx @ 0x1C0089500 (GreSetDCOwnerEx.c)
 *     GreSelectVisRgn @ 0x1C008CC10 (GreSelectVisRgn.c)
 *     GreIsRendering @ 0x1C0090860 (GreIsRendering.c)
 *     IsGreHintDCWndSupported @ 0x1C0091DCC (IsGreHintDCWndSupported.c)
 *     IntersectRect @ 0x1C00A6D20 (IntersectRect.c)
 *     CreateCacheDC @ 0x1C00A8290 (CreateCacheDC.c)
 *     IsGetStyleWindowSupported @ 0x1C00A84B8 (IsGetStyleWindowSupported.c)
 *     GreSetRectRgn @ 0x1C00A97A0 (GreSetRectRgn.c)
 *     GreGetDCOrgEx @ 0x1C00B48E0 (GreGetDCOrgEx.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
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
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // rax
  __int64 v17; // rax
  int v18; // edx
  __int64 v19; // r8
  int v20; // ecx
  int v21; // eax
  int v22; // edx
  int v23; // r8d
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 CurrentProcessWin32Process; // rax
  __int128 v28; // xmm0
  HDC v29; // rcx
  struct HOBJ__ *RectRgnIndirect; // rax
  __int128 v31; // [rsp+30h] [rbp-20h] BYREF
  __int128 v32; // [rsp+40h] [rbp-10h] BYREF

  v31 = 0LL;
  while ( 2 )
  {
    for ( i = *(__int64 **)(gpDispInfo + 24); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x401000) == 0 && !(unsigned int)GreIsRendering((HDC)i[1]) && (struct tagMONITOR *)i[11] == a2 )
      {
        if ( (i[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 && qword_1C02585A0 )
          qword_1C02585A0(i);
        if ( (unsigned int)GreSetDCOwnerEx(i[1], 0x80000002, 0, 0) )
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
          if ( qword_1C0258570 )
            v9 = (_QWORD *)qword_1C0258570(i[2], 2848LL);
          if ( v9 )
          {
            if ( (*(_BYTE *)(v9[5] + 26LL) & 0x20) == 0 && (int)IsGetRedirectionBitmapSupported() >= 0 )
            {
              v10 = qword_1C0258550 ? qword_1C0258550(v9) : 0LL;
              if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
              {
                v11 = (int)qword_1C0257968;
                v12 = i[1];
                if ( qword_1C0257968 )
                {
                  v11 = qword_1C0257968(v12, v10);
                  v12 = i[1];
                }
                if ( !v11 )
                  GreSelectVisRgn(v12, 0LL, 1u);
              }
            }
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            GreOffsetRgn(ghrgnGDC, *(_DWORD *)(v9[5] + 88LL), *(_DWORD *)(v9[5] + 92LL));
            CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi(v14, v13);
            MonitorRegionForDpi = GetMonitorRegionForDpi(a2, CurrentThreadCompositedDpi);
            if ( !(unsigned int)GreCombineRgn(ghrgnGDC, ghrgnGDC, MonitorRegionForDpi, 1) )
              GreSetRectRgn(ghrgnGDC, 0);
            GreOffsetRgn(ghrgnGDC, -*(_DWORD *)(v9[5] + 88LL), -*(_DWORD *)(v9[5] + 92LL));
            GreSelectVisRgn(i[1], (__int64)ghrgnGDC, 2u);
            GreGetDCOrgEx(*(HDC *)(a1 + 8));
            if ( a3 )
            {
              v17 = v9[5];
              v18 = *(_DWORD *)(v17 + 92);
              LODWORD(v17) = 2 * *(_DWORD *)(v17 + 88);
              LODWORD(v31) = v17 + v31;
              DWORD2(v31) += v17;
              HIDWORD(v31) += 2 * v18;
              DWORD1(v31) += 2 * v18;
              v32 = *GetMonitorRect(&v32, (__int64)a2);
              IntersectRect(&v31, &v31, &v32);
              v19 = v9[5];
              v20 = -*(_DWORD *)(v19 + 92);
              v21 = -*(_DWORD *)(v19 + 88);
              DWORD2(v31) -= *(_DWORD *)(v19 + 88);
              v22 = v21 + v31;
              HIDWORD(v31) += v20;
              v23 = v20 + DWORD1(v31);
              LODWORD(v31) = v21 + v31;
              DWORD1(v31) += v20;
            }
            else
            {
              v23 = DWORD1(v31);
              v22 = v31;
            }
            GreSetDCOrg((HDC)i[1], v22, v23, &v31);
            GreGetBounds(i[1], 0LL, 5);
          }
          else
          {
LABEL_44:
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            SetMonitorRegion(a2, ghrgnGDC, ghrgnGDC);
            GreSelectVisRgn(i[1], (__int64)ghrgnGDC, 2u);
            v28 = *GetMonitorRect(&v32, (__int64)a2);
            v32 = v28;
            if ( a3 )
              v31 = v28;
            else
              GreGetDCOrgEx(*(HDC *)(a1 + 8));
            HIDWORD(v31) -= DWORD1(v32);
            DWORD2(v31) -= v32;
            v29 = (HDC)i[1];
            LODWORD(v31) = v31 - v32;
            DWORD1(v31) -= DWORD1(v32);
            GreSetDCOrg(v29, v31, SDWORD1(v31), &v31);
          }
          if ( (int)((__int64 (*)(void))IsGreHintDCWndSupported)() >= 0 && qword_1C0257988 )
            qword_1C0257988(i[1], *(_QWORD *)i[2], 0LL, 0LL);
          if ( v9 && (*(_BYTE *)(v9[5] + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported(v24) >= 0 && qword_1C0257988 )
            qword_1C0257988(i[1], *(_QWORD *)i[2], *v9, (*(_BYTE *)(v9[5] + 27LL) & 2) == 0);
          --gnDCECount;
          if ( a3 )
          {
            *((_DWORD *)i + 16) |= 0x80000000;
            i[9] = 0LL;
            i[10] = PsGetCurrentProcessWin32Process(v24);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v25);
            *(_DWORD *)(CurrentProcessWin32Process + 12) |= 0x200u;
          }
          return i[1];
        }
      }
    }
    if ( CreateCacheDC(0LL, *(_DWORD *)(a1 + 64) & 0x4000 | 0x802u, a2) )
      continue;
    return 0LL;
  }
}
