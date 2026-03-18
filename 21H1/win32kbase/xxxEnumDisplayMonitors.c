/*
 * XREFs of xxxEnumDisplayMonitors @ 0x1C00A6620
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C00A6580 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C00503EC (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     LookupDC @ 0x1C006A3E0 (LookupDC.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C006BBD4 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     GetMonitorRect @ 0x1C006BC48 (GetMonitorRect.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C006DC9C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0071754 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     GreLockVisRgn @ 0x1C0076BF0 (GreLockVisRgn.c)
 *     GreIntersectClipRect @ 0x1C00791E0 (GreIntersectClipRect.c)
 *     GreUnlockVisRgn @ 0x1C007A540 (GreUnlockVisRgn.c)
 *     ThreadUnlock1 @ 0x1C00828E0 (ThreadUnlock1.c)
 *     ReleaseCacheDC @ 0x1C0084AB0 (ReleaseCacheDC.c)
 *     GreGetClipBox @ 0x1C008C160 (GreGetClipBox.c)
 *     GetMonitorDC @ 0x1C00908A8 (GetMonitorDC.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C00A69E0 (TransformRectBetweenCoordinateSpaces.c)
 *     IntersectRect @ 0x1C00A6D20 (IntersectRect.c)
 *     GetScreenRectForDpi @ 0x1C00A6E1C (GetScreenRectForDpi.c)
 *     GreGetDCPoint @ 0x1C00B4970 (GreGetDCPoint.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        HDC a1,
        __int64 a2,
        __int64 (__fastcall *a3)(__int64, HDC, struct tagRECT *, __int64),
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  __int64 *v8; // r13
  __int64 v9; // rdi
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  __int64 v11; // rdx
  int v12; // r8d
  unsigned int v13; // r15d
  __int64 i; // rdi
  HDC MonitorDC; // r12
  __int64 v16; // rdx
  __int64 v17; // rcx
  int v18; // r8d
  int v19; // eax
  unsigned int v20; // eax
  __int64 *v22; // rax
  int v23; // ecx
  struct tagMONITOR *v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+30h] [rbp-A1h]
  __int64 v29; // [rsp+48h] [rbp-89h]
  struct tagTHREADINFO *v30; // [rsp+50h] [rbp-81h]
  __int128 v31; // [rsp+58h] [rbp-79h] BYREF
  __int64 v32; // [rsp+68h] [rbp-69h]
  __int128 v33; // [rsp+70h] [rbp-61h] BYREF
  _BYTE v34[16]; // [rsp+80h] [rbp-51h] BYREF
  __int128 v35; // [rsp+90h] [rbp-41h] BYREF
  _BYTE v36[16]; // [rsp+A0h] [rbp-31h] BYREF
  _BYTE v37[16]; // [rsp+B0h] [rbp-21h] BYREF
  __int128 v38; // [rsp+C0h] [rbp-11h] BYREF
  struct tagRECT v39; // [rsp+D0h] [rbp-1h] BYREF

  v5 = 0;
  v32 = 0LL;
  v30 = gptiCurrent;
  v26 = 0LL;
  v29 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v38 = 0LL;
  v39 = 0LL;
  v31 = 0LL;
  if ( !a1 )
  {
    CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi(0LL, a2);
    v38 = *(_OWORD *)GetScreenRectForDpi(v34, CurrentThreadCompositedDpi);
    if ( a2 && !(unsigned int)IntersectRect(&v38, &v38, a2) )
      return 1LL;
    goto LABEL_3;
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), a2, (int)a3);
  v22 = LookupDC((__int64)a1, 1);
  v8 = v22;
  if ( !v22 )
  {
LABEL_47:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v11, v12);
    return v5;
  }
  v29 = v22[2];
  if ( (v22[8] & 0x4000) != 0 && qword_1C0258570 )
    v9 = qword_1C0258570(v22[2], 2848LL);
  if ( (unsigned int)GreGetClipBox(a1, &v38, 0) == 1 )
    goto LABEL_46;
  if ( v9
    && (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFF) == 0x29D
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    TransformRectBetweenCoordinateSpaces(&v38, &v38, 0LL, v9);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v38, &v38, a2) )
  {
LABEL_46:
    v5 = 1;
    goto LABEL_47;
  }
  if ( v9 )
  {
    if ( (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFF) != 0x29D )
    {
      GreGetDCPoint(a1);
      v23 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 88LL);
      LODWORD(v26) = v23;
      v25 = *(_QWORD *)(v9 + 40);
      v11 = *(unsigned int *)(v25 + 92);
      HIDWORD(v26) = *(_DWORD *)(v25 + 92);
      goto LABEL_37;
    }
  }
  else
  {
    GreGetDCPoint(a1);
  }
  v23 = 0;
  v11 = 0LL;
LABEL_37:
  LODWORD(v38) = v23 + v38;
  DWORD2(v38) += v23;
  HIDWORD(v38) += v11;
  DWORD1(v38) += v11;
LABEL_3:
  v13 = 1;
  for ( i = *(_QWORD *)(gpDispInfo + 104); i; i = *(_QWORD *)(i + 56) )
  {
    if ( (*(_DWORD *)(*(_QWORD *)(i + 40) + 24LL) & 1) == 0 )
      continue;
    v33 = *GetMonitorRect(&v35, i);
    if ( !(unsigned int)IntersectRect(&v39, &v38, &v33) )
      continue;
    if ( a1 )
    {
      v24 = AdjustDisplayMonitor((struct tagMONITOR *)i, &v39);
      MonitorDC = (HDC)GetMonitorDC((__int64)v8, v24, v24 != (struct tagMONITOR *)i);
      if ( !MonitorDC )
        goto LABEL_47;
      v39.top -= HIDWORD(v26);
      v39.left -= v26;
      v39.bottom -= HIDWORD(v26);
      v39.right -= v26;
      GreIntersectClipRect(MonitorDC, v39.left, v39.top, v39.right, v39.bottom);
    }
    else
    {
      MonitorDC = 0LL;
    }
    *(_QWORD *)&v31 = *((_QWORD *)v30 + 51);
    *((_QWORD *)v30 + 51) = &v31;
    *((_QWORD *)&v31 + 1) = i;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v36);
    _InterlockedAdd((volatile signed __int32 *)(i + 8), 1u);
    if ( a1 )
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v16, v18);
    if ( a5 )
    {
      v20 = a3(i, MonitorDC, &v39, a4);
      goto LABEL_17;
    }
    if ( qword_1C02585C8 )
      v19 = qword_1C02585C8();
    else
      v19 = -1073741637;
    if ( v19 < 0 )
      goto LABEL_18;
    v17 = *(_QWORD *)i;
    if ( qword_1C02585D0 )
    {
      v20 = qword_1C02585D0(v17, MonitorDC, &v39, a4, a3);
LABEL_17:
      v13 = v20;
      goto LABEL_18;
    }
    v13 = 0;
LABEL_18:
    if ( !ThreadUnlock1(v17)
      || (CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>((__int64)v37),
          (*((_BYTE *)qword_1C0250D48 + dword_1C0250D50 * (unsigned int)(unsigned __int16)*(_DWORD *)i + 25) & 1) != 0) )
    {
      v13 = 0;
    }
    if ( MonitorDC )
      ReleaseCacheDC((__int64)MonitorDC, 0LL, v12);
    if ( !v13 )
      return 0LL;
    if ( a1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40), v11, v12);
      v8 = LookupDC((__int64)a1, 1);
      if ( !v8 || v8[2] != v29 )
        goto LABEL_47;
    }
  }
  if ( a1 )
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40), v11, v12);
  return v13;
}
