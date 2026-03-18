/*
 * XREFs of GetMonitorDC @ 0x1C004D710
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C002F2E0 (xxxEnumDisplayMonitors.c)
 *     UserGetMonitorDC @ 0x1C005EB90 (UserGetMonitorDC.c)
 * Callees:
 *     GreSetRectRgn @ 0x1C001CDA0 (GreSetRectRgn.c)
 *     CreateCacheDC @ 0x1C001FB00 (CreateCacheDC.c)
 *     IsGetStyleWindowSupported @ 0x1C001FD28 (IsGetStyleWindowSupported.c)
 *     IsGreSelectRedirectionBitmapSupported @ 0x1C0020CA0 (IsGreSelectRedirectionBitmapSupported.c)
 *     IntersectRect @ 0x1C002F724 (IntersectRect.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C0031B50 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GetMonitorRect @ 0x1C0031BC4 (GetMonitorRect.c)
 *     GreOffsetRgn @ 0x1C0037F80 (GreOffsetRgn.c)
 *     GreCreateRectRgnIndirect @ 0x1C003DA50 (GreCreateRectRgnIndirect.c)
 *     GreCombineRgn @ 0x1C003F0E0 (GreCombineRgn.c)
 *     GreGetBounds @ 0x1C0043020 (GreGetBounds.c)
 *     GreSetDCOwnerEx @ 0x1C004A4E0 (GreSetDCOwnerEx.c)
 *     GreSelectVisRgn @ 0x1C004C6C0 (GreSelectVisRgn.c)
 *     GreIsRendering @ 0x1C004D5D0 (GreIsRendering.c)
 *     IsGreHintDCWndSupported @ 0x1C004FBA4 (IsGreHintDCWndSupported.c)
 *     GreSetDCOrg @ 0x1C005E120 (GreSetDCOrg.c)
 *     GreGetDCOrgEx @ 0x1C00608A0 (GreGetDCOrgEx.c)
 *     GreCopyVisRgn @ 0x1C00900F0 (GreCopyVisRgn.c)
 *     IsSpbCheckDceSupported @ 0x1C00A00D8 (IsSpbCheckDceSupported.c)
 *     ?SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z @ 0x1C00A2BEC (-SetMonitorRegion@@YAXPEAUtagMONITOR@@PEAUHRGN__@@1@Z.c)
 *     ?GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z @ 0x1C00A2C70 (-GetMonitorRegionForDpi@@YAPEAUHRGN__@@PEAUtagMONITOR@@G@Z.c)
 *     IsGetRedirectionBitmapSupported @ 0x1C00A516C (IsGetRedirectionBitmapSupported.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D36F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GetMonitorDC(__int64 a1, struct tagMONITOR *a2, int a3)
{
  __int64 *i; // rbx
  int v7; // eax
  unsigned __int64 v8; // rcx
  _QWORD *v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r15
  int v12; // eax
  __int64 v13; // rcx
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  HRGN MonitorRegionForDpi; // rax
  __int64 v16; // rax
  int v17; // edx
  __int64 v18; // r8
  int v19; // ecx
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 CurrentProcessWin32Process; // rax
  __int128 v32; // xmm0
  HDC v33; // rcx
  struct HOBJ__ *RectRgnIndirect; // rax
  __int128 v35; // [rsp+30h] [rbp-20h] BYREF
  __int128 v36; // [rsp+40h] [rbp-10h] BYREF

  v35 = 0LL;
  while ( 2 )
  {
    for ( i = *(__int64 **)(gpDispInfo + 24); i; i = (__int64 *)*i )
    {
      if ( (i[8] & 0x401000) == 0 && !(unsigned int)GreIsRendering((HDC)i[1]) && (struct tagMONITOR *)i[11] == a2 )
      {
        if ( (i[8] & 0x800) == 0 && (int)IsSpbCheckDceSupported() >= 0 && qword_1C02505E0 )
          qword_1C02505E0(i);
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
          v10 = i[2];
          if ( qword_1C02505B0 )
            v9 = (_QWORD *)qword_1C02505B0(v10, 2848LL);
          if ( v9 )
          {
            if ( (*(_BYTE *)(v9[5] + 26LL) & 0x20) == 0 && (int)IsGetRedirectionBitmapSupported(v10) >= 0 )
            {
              v11 = qword_1C0250590 ? qword_1C0250590(v9) : 0LL;
              if ( (int)IsGreSelectRedirectionBitmapSupported() >= 0 )
              {
                v12 = (int)qword_1C024F9A8;
                v13 = i[1];
                if ( qword_1C024F9A8 )
                {
                  v12 = qword_1C024F9A8(v13, v11);
                  v13 = i[1];
                }
                if ( !v12 )
                  GreSelectVisRgn(v13, 0LL, 1u);
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
              v16 = v9[5];
              v17 = *(_DWORD *)(v16 + 92);
              LODWORD(v16) = 2 * *(_DWORD *)(v16 + 88);
              LODWORD(v35) = v16 + v35;
              DWORD2(v35) += v16;
              HIDWORD(v35) += 2 * v17;
              DWORD1(v35) += 2 * v17;
              v36 = *GetMonitorRect(&v36, (__int64)a2);
              IntersectRect(&v35, (int *)&v35, (int *)&v36);
              v18 = v9[5];
              v19 = -*(_DWORD *)(v18 + 92);
              v20 = -*(_DWORD *)(v18 + 88);
              DWORD2(v35) -= *(_DWORD *)(v18 + 88);
              HIDWORD(v35) += v19;
              LODWORD(v35) = v20 + v35;
              DWORD1(v35) += v19;
            }
            GreSetDCOrg((HDC)i[1]);
            GreGetBounds(i[1], 0LL, 5);
          }
          else
          {
LABEL_44:
            GreCopyVisRgn(*(HDC *)(a1 + 8), ghrgnGDC);
            SetMonitorRegion(a2, ghrgnGDC, ghrgnGDC);
            GreSelectVisRgn(i[1], (__int64)ghrgnGDC, 2u);
            v32 = *GetMonitorRect(&v36, (__int64)a2);
            v36 = v32;
            if ( a3 )
              v35 = v32;
            else
              GreGetDCOrgEx(*(HDC *)(a1 + 8));
            HIDWORD(v35) -= DWORD1(v36);
            DWORD2(v35) -= v36;
            v33 = (HDC)i[1];
            LODWORD(v35) = v35 - v36;
            DWORD1(v35) -= DWORD1(v36);
            GreSetDCOrg(v33);
          }
          if ( (int)IsGreHintDCWndSupported() >= 0 && qword_1C024F9C8 )
            qword_1C024F9C8(i[1], *(_QWORD *)i[2], 0LL, 0LL, 0);
          if ( v9 )
          {
            if ( (*(_BYTE *)(v9[5] + 26LL) & 8) != 0 && (int)IsGreHintDCWndSupported() >= 0 )
            {
              v25 = v9[5];
              v21 = *(_WORD *)(v25 + 42) & 0x2FFF;
              LOBYTE(v23) = *(_BYTE *)(v25 + 27) & 2;
              if ( qword_1C024F9C8 )
                qword_1C024F9C8(i[1], *(_QWORD *)i[2], *v9, (_BYTE)v23 == 0, v21 == 669);
            }
          }
          --gnDCECount;
          if ( a3 )
          {
            *((_DWORD *)i + 16) |= 0x80000000;
            i[9] = 0LL;
            i[10] = PsGetCurrentProcessWin32Process(v22, v21, v23, v24);
            CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v27, v26, v28, v29);
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
