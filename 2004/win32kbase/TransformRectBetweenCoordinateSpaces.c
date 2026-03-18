/*
 * XREFs of TransformRectBetweenCoordinateSpaces @ 0x1C0011350
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C0010F90 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C001163C (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     Is_MonitorFromRectSupported @ 0x1C0011FC8 (Is_MonitorFromRectSupported.c)
 *     IntersectRect @ 0x1C0012434 (IntersectRect.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C00124A8 (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     Is_GetTopLevelWindowSupported @ 0x1C0012628 (Is_GetTopLevelWindowSupported.c)
 *     HMValidateSharedHandleNoRip @ 0x1C0020888 (HMValidateSharedHandleNoRip.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0083EF8 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     TransformOffscreenAdjacentRect @ 0x1C00C822C (TransformOffscreenAdjacentRect.c)
 *     __security_check_cookie @ 0x1C00CCA30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D3820 (_guard_dispatch_icall_nop.c)
 *     IsDpiAwarenessBoundaryInParentChain @ 0x1C013BB34 (IsDpiAwarenessBoundaryInParentChain.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpaces(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  unsigned int *v7; // r14
  unsigned int CurrentThreadDpiAwarenessContext; // r15d
  unsigned int v10; // edi
  __int128 v11; // xmm1
  unsigned int v12; // esi
  __int64 v13; // r8
  __int64 v14; // rcx
  __int64 v15; // r13
  int v16; // r12d
  int v17; // eax
  unsigned int v18; // r13d
  int v19; // r14d
  __int64 v20; // rax
  __int64 v22; // rax
  int v23; // ecx
  int v24; // eax
  int v25; // ebx
  int v26; // eax
  int v27; // eax
  __int64 v29; // rax
  int v30; // eax
  unsigned int v31; // ecx
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // eax
  int v39; // [rsp+30h] [rbp-89h]
  int v40; // [rsp+40h] [rbp-79h]
  int v41; // [rsp+50h] [rbp-69h]
  __int128 v43; // [rsp+60h] [rbp-59h] BYREF
  tagRECT v44; // [rsp+70h] [rbp-49h] BYREF
  __int128 v45; // [rsp+80h] [rbp-39h] BYREF
  __int128 v46; // [rsp+90h] [rbp-29h] BYREF
  __int128 v47; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v48; // [rsp+B0h] [rbp-9h] BYREF

  v4 = 0;
  v7 = (unsigned int *)a2;
  if ( a3 )
    CurrentThreadDpiAwarenessContext = *(_DWORD *)(*(_QWORD *)(a3 + 40) + 288LL);
  else
    CurrentThreadDpiAwarenessContext = W32GetCurrentThreadDpiAwarenessContext();
  if ( a4 )
    v10 = *(_DWORD *)(*(_QWORD *)(a4 + 40) + 288LL);
  else
    v10 = W32GetCurrentThreadDpiAwarenessContext();
  v11 = *(_OWORD *)v7;
  v39 = 0;
  v12 = 0;
  v13 = 1LL;
  v47 = 0LL;
  v48 = v11;
  v46 = 0LL;
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v10 >> 8)) & 0x1FF) == 0 )
  {
    a2 = 0x20000000LL;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
      || (v23 = 1, (CurrentThreadDpiAwarenessContext & 0x20000000) == 0) )
    {
      v23 = 0;
    }
    if ( (v10 & 0xF) != 2 || (v24 = 1, (v10 & 0x20000000) == 0) )
      v24 = 0;
    if ( v23 == v24 )
      goto LABEL_31;
  }
  v14 = *v7;
  if ( ((int)v14 >= (int)v7[2] || (int)v7[1] >= (int)v7[3]) && !(_DWORD)v14 && !v7[1] )
  {
LABEL_31:
    *a1 = v11;
    return 0LL;
  }
  if ( a3 )
  {
    v22 = (int)Is_GetTopLevelWindowSupported(v14, a2, 1LL) >= 0 && qword_1C02529A0 ? qword_1C02529A0(a3) : 0LL;
    if ( v22 )
    {
      if ( v22 != a3 )
      {
        if ( (unsigned int)IsDpiAwarenessBoundaryInParentChain(a3) )
        {
          v29 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 256LL));
          if ( v29 )
            return TransformRectBetweenCoordinateSpacesPerMonitor(
                     (_DWORD)a1,
                     (_DWORD)v7,
                     CurrentThreadDpiAwarenessContext,
                     v10,
                     v29);
        }
      }
    }
  }
  v15 = *(_QWORD *)(gpDispInfo + 104);
  if ( !v15 )
    goto LABEL_73;
  v16 = DWORD1(v46);
  v41 = DWORD2(v46);
  v40 = v46;
  do
  {
    v45 = 0LL;
    v43 = (__int128)*ExpandedMonitorRect(&v44, (struct tagMONITOR *)v15, v10);
    if ( (unsigned int)IntersectRect(&v45, &v43, v7) )
    {
      if ( v39 )
      {
        v30 = v40;
        v31 = HIDWORD(v46);
        if ( v40 >= (int)v45 )
          v30 = v45;
        v40 = v30;
        if ( v16 >= SDWORD1(v45) )
          v16 = DWORD1(v45);
        *(_QWORD *)&v46 = __PAIR64__(v16, v30);
        v32 = v41;
        if ( v41 <= SDWORD2(v45) )
          v32 = DWORD2(v45);
        v41 = v32;
        if ( SHIDWORD(v46) <= SHIDWORD(v45) )
          v31 = HIDWORD(v45);
        *((_QWORD *)&v46 + 1) = __PAIR64__(v31, v32);
      }
      else
      {
        v46 = v45;
        v16 = DWORD1(v45);
        v41 = DWORD2(v45);
        v40 = v45;
      }
      v12 |= TransformRectBetweenCoordinateSpacesPerMonitor(
               (unsigned int)&v45,
               (unsigned int)&v45,
               CurrentThreadDpiAwarenessContext,
               v10,
               v15);
      if ( !v39 )
      {
        v17 = 1;
        v47 = v45;
        v39 = 1;
        goto LABEL_16;
      }
      v33 = v47;
      if ( (int)v47 >= (int)v45 )
        v33 = v45;
      LODWORD(v47) = v33;
      v34 = DWORD1(v47);
      if ( SDWORD1(v47) >= SDWORD1(v45) )
        v34 = DWORD1(v45);
      DWORD1(v47) = v34;
      v35 = DWORD2(v47);
      if ( SDWORD2(v47) <= SDWORD2(v45) )
        v35 = DWORD2(v45);
      DWORD2(v47) = v35;
      v36 = HIDWORD(v47);
      if ( SHIDWORD(v47) <= SHIDWORD(v45) )
        v36 = HIDWORD(v45);
      HIDWORD(v47) = v36;
    }
    v17 = v39;
LABEL_16:
    v15 = *(_QWORD *)(v15 + 56);
  }
  while ( v15 );
  if ( v17 )
  {
    v19 = DWORD2(v48);
    v18 = v48;
    v20 = v46 - v48;
    if ( (_QWORD)v46 == (_QWORD)v48 )
      v20 = *((_QWORD *)&v46 + 1) - *((_QWORD *)&v48 + 1);
    if ( v20 )
    {
      v25 = DWORD1(v48);
      if ( v40 <= (int)v48 )
      {
        v27 = v41;
      }
      else
      {
        *((_QWORD *)&v45 + 1) = __PAIR64__(HIDWORD(v48), v40);
        *(_QWORD *)&v45 = v48;
        v26 = TransformOffscreenAdjacentRect(
                (unsigned int)&v46,
                (unsigned int)&v47,
                (unsigned int)&v45,
                CurrentThreadDpiAwarenessContext,
                v10);
        v16 = DWORD1(v46);
        v12 |= v26;
        v27 = DWORD2(v46);
      }
      if ( v27 < v19 )
      {
        *(_QWORD *)&v45 = __PAIR64__(v25, v27);
        *((_QWORD *)&v45 + 1) = __PAIR64__(HIDWORD(v48), v19);
        v37 = TransformOffscreenAdjacentRect(
                (unsigned int)&v46,
                (unsigned int)&v47,
                (unsigned int)&v45,
                CurrentThreadDpiAwarenessContext,
                v10);
        v16 = DWORD1(v46);
        v12 |= v37;
      }
      if ( v16 > v25 )
      {
        *(_QWORD *)&v45 = __PAIR64__(v25, v18);
        *((_QWORD *)&v45 + 1) = __PAIR64__(v16, v19);
        v12 |= TransformOffscreenAdjacentRect(
                 (unsigned int)&v46,
                 (unsigned int)&v47,
                 (unsigned int)&v45,
                 CurrentThreadDpiAwarenessContext,
                 v10);
      }
      if ( SHIDWORD(v46) < SHIDWORD(v48) )
      {
        *(_QWORD *)&v48 = __PAIR64__(HIDWORD(v46), v18);
        DWORD2(v48) = v19;
        v38 = TransformOffscreenAdjacentRect(
                (unsigned int)&v46,
                (unsigned int)&v47,
                (unsigned int)&v48,
                CurrentThreadDpiAwarenessContext,
                v10);
        goto LABEL_77;
      }
    }
    goto LABEL_21;
  }
LABEL_73:
  if ( (int)Is_MonitorFromRectSupported(v14, a2, v13) >= 0 )
  {
    if ( qword_1C0252B40 )
      v4 = qword_1C0252B40(v7, 2LL, v10);
    v38 = TransformRectBetweenCoordinateSpacesPerMonitor(
            (unsigned int)&v47,
            (_DWORD)v7,
            CurrentThreadDpiAwarenessContext,
            v10,
            v4);
LABEL_77:
    v12 |= v38;
  }
LABEL_21:
  *a1 = v47;
  return v12;
}
