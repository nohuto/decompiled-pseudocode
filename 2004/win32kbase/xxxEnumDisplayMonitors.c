/*
 * XREFs of xxxEnumDisplayMonitors @ 0x1C0010F90
 * Callers:
 *     NtUserEnumDisplayMonitors @ 0x1C0010EF0 (NtUserEnumDisplayMonitors.c)
 * Callees:
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0011350 (TransformRectBetweenCoordinateSpaces.c)
 *     GetMonitorRect @ 0x1C0011784 (GetMonitorRect.c)
 *     IntersectRect @ 0x1C0012434 (IntersectRect.c)
 *     GetScreenRectForDpi @ 0x1C0012530 (GetScreenRectForDpi.c)
 *     ?GetCurrentThreadCompositedDpi@@YAGXZ @ 0x1C00125B4 (-GetCurrentThreadCompositedDpi@@YAGXZ.c)
 *     ??0?$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ @ 0x1C0017700 (--0-$CLockDomainSharedAllowAllRecursion@VDLT_HANDLEMANAGER@@@@QEAA@XZ.c)
 *     ?AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z @ 0x1C005DEAC (-AdjustDisplayMonitor@@YAPEAUtagMONITOR@@PEAU1@PEAUtagRECT@@@Z.c)
 *     GreGetClipBox @ 0x1C007C550 (GreGetClipBox.c)
 *     GreIntersectClipRect @ 0x1C007EB80 (GreIntersectClipRect.c)
 *     GreUnlockVisRgn @ 0x1C00811B0 (GreUnlockVisRgn.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0083EF8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     ThreadUnlock1 @ 0x1C00899B0 (ThreadUnlock1.c)
 *     ReleaseCacheDC @ 0x1C008BB80 (ReleaseCacheDC.c)
 *     GetMonitorDC @ 0x1C0093FA0 (GetMonitorDC.c)
 *     GreGetDCPoint @ 0x1C00A4F40 (GreGetDCPoint.c)
 *     LookupDC @ 0x1C00A53D0 (LookupDC.c)
 *     GreLockVisRgn @ 0x1C00A5B80 (GreLockVisRgn.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall xxxEnumDisplayMonitors(
        HDC a1,
        __int64 a2,
        __int64 (__fastcall *a3)(struct tagMONITOR *, HDC, struct tagRECT *, __int64),
        __int64 a4,
        int a5)
{
  unsigned int v5; // ebx
  __int64 v8; // r13
  __int64 v9; // rdi
  unsigned __int16 CurrentThreadCompositedDpi; // ax
  unsigned int v11; // r15d
  struct tagMONITOR *i; // rdi
  HDC MonitorDC; // r12
  int v14; // eax
  unsigned int v15; // eax
  __int64 v17; // rax
  int v18; // ecx
  int v19; // edx
  struct tagMONITOR *v20; // rax
  __int64 v21; // [rsp+30h] [rbp-A1h]
  __int64 v24; // [rsp+48h] [rbp-89h]
  struct tagTHREADINFO *v25; // [rsp+50h] [rbp-81h]
  __int128 v26; // [rsp+58h] [rbp-79h] BYREF
  __int64 v27; // [rsp+68h] [rbp-69h]
  __int128 v28; // [rsp+70h] [rbp-61h] BYREF
  _BYTE v29[16]; // [rsp+80h] [rbp-51h] BYREF
  _BYTE v30[16]; // [rsp+90h] [rbp-41h] BYREF
  _BYTE v31[16]; // [rsp+A0h] [rbp-31h] BYREF
  _BYTE v32[16]; // [rsp+B0h] [rbp-21h] BYREF
  __int128 v33; // [rsp+C0h] [rbp-11h] BYREF
  struct tagRECT v34; // [rsp+D0h] [rbp-1h] BYREF

  v5 = 0;
  v27 = 0LL;
  v25 = gptiCurrent;
  v21 = 0LL;
  v24 = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v33 = 0LL;
  v34 = 0LL;
  v26 = 0LL;
  if ( !a1 )
  {
    CurrentThreadCompositedDpi = GetCurrentThreadCompositedDpi();
    v33 = *(_OWORD *)GetScreenRectForDpi(v29, CurrentThreadCompositedDpi);
    if ( a2 && !(unsigned int)IntersectRect(&v33, &v33, a2) )
      return 1LL;
    goto LABEL_3;
  }
  GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  v17 = LookupDC(a1, 1LL);
  v8 = v17;
  if ( !v17 )
  {
LABEL_47:
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    return v5;
  }
  v24 = *(_QWORD *)(v17 + 16);
  if ( (*(_DWORD *)(v17 + 64) & 0x4000) != 0 && qword_1C02525B0 )
    v9 = qword_1C02525B0(*(_QWORD *)(v17 + 16), 2848LL);
  if ( (unsigned int)GreGetClipBox(a1) == 1 )
    goto LABEL_46;
  if ( v9
    && (*(_WORD *)(*(_QWORD *)(v9 + 40) + 42LL) & 0x3FFF) == 0x29D
    && (W32GetCurrentThreadDpiAwarenessContext() & 0xF) != 2 )
  {
    TransformRectBetweenCoordinateSpaces(&v33, &v33, 0LL, v9);
  }
  if ( a2 && !(unsigned int)IntersectRect(&v33, &v33, a2) )
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
      v18 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 88LL);
      LODWORD(v21) = v18;
      v19 = *(_DWORD *)(*(_QWORD *)(v9 + 40) + 92LL);
      HIDWORD(v21) = v19;
      goto LABEL_37;
    }
  }
  else
  {
    GreGetDCPoint(a1);
  }
  v18 = 0;
  v19 = 0;
LABEL_37:
  LODWORD(v33) = v18 + v33;
  DWORD2(v33) += v18;
  HIDWORD(v33) += v19;
  DWORD1(v33) += v19;
LABEL_3:
  v11 = 1;
  for ( i = *(struct tagMONITOR **)(gpDispInfo + 104); i; i = (struct tagMONITOR *)*((_QWORD *)i + 7) )
  {
    if ( (*(_DWORD *)(*((_QWORD *)i + 5) + 24LL) & 1) == 0 )
      continue;
    v28 = *(_OWORD *)GetMonitorRect(v30, i);
    if ( !(unsigned int)IntersectRect(&v34, &v33, &v28) )
      continue;
    if ( a1 )
    {
      v20 = AdjustDisplayMonitor(i, &v34);
      MonitorDC = (HDC)GetMonitorDC(v8, v20, v20 != i);
      if ( !MonitorDC )
        goto LABEL_47;
      v34.top -= HIDWORD(v21);
      v34.left -= v21;
      v34.bottom -= HIDWORD(v21);
      v34.right -= v21;
      GreIntersectClipRect(MonitorDC, v34.bottom);
    }
    else
    {
      MonitorDC = 0LL;
    }
    *(_QWORD *)&v26 = *((_QWORD *)v25 + 51);
    *((_QWORD *)v25 + 51) = &v26;
    *((_QWORD *)&v26 + 1) = i;
    CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v31);
    _InterlockedAdd((volatile signed __int32 *)i + 2, 1u);
    if ( a1 )
      GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
    if ( a5 )
    {
      v15 = a3(i, MonitorDC, &v34, a4);
      goto LABEL_17;
    }
    if ( qword_1C0252608 )
      v14 = qword_1C0252608();
    else
      v14 = -1073741637;
    if ( v14 < 0 )
      goto LABEL_18;
    if ( qword_1C0252610 )
    {
      v15 = qword_1C0252610(*(_QWORD *)i, MonitorDC, &v34, a4, a3);
LABEL_17:
      v11 = v15;
      goto LABEL_18;
    }
    v11 = 0;
LABEL_18:
    if ( !ThreadUnlock1()
      || (CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>::CLockDomainSharedAllowAllRecursion<DLT_HANDLEMANAGER>(v32),
          (*((_BYTE *)qword_1C024AD48 + dword_1C024AD50 * (unsigned int)(unsigned __int16)*(_DWORD *)i + 25) & 1) != 0) )
    {
      v11 = 0;
    }
    if ( MonitorDC )
      ReleaseCacheDC(MonitorDC, 0LL);
    if ( !v11 )
      return 0LL;
    if ( a1 )
    {
      GreLockVisRgn(*(_QWORD *)(gpDispInfo + 40));
      v8 = LookupDC(a1, 1LL);
      if ( !v8 || *(_QWORD *)(v8 + 16) != v24 )
        goto LABEL_47;
    }
  }
  if ( a1 )
    GreUnlockVisRgn(*(_QWORD *)(gpDispInfo + 40));
  return v11;
}
