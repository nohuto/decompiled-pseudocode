/*
 * XREFs of TransformRectBetweenCoordinateSpaces @ 0x1C00A69E0
 * Callers:
 *     xxxEnumDisplayMonitors @ 0x1C00A6620 (xxxEnumDisplayMonitors.c)
 * Callees:
 *     HMValidateSharedHandleNoRip @ 0x1C000EC88 (HMValidateSharedHandleNoRip.c)
 *     Is_MonitorFromRectSupported @ 0x1C006C498 (Is_MonitorFromRectSupported.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C006DC9C (W32GetCurrentThreadDpiAwarenessContext.c)
 *     TransformRectBetweenCoordinateSpacesPerMonitor @ 0x1C00A6CCC (TransformRectBetweenCoordinateSpacesPerMonitor.c)
 *     IntersectRect @ 0x1C00A6D20 (IntersectRect.c)
 *     ?ExpandedMonitorRect@@YA?AUtagRECT@@PEAUtagMONITOR@@K@Z @ 0x1C00A6D94 (-ExpandedMonitorRect@@YA-AUtagRECT@@PEAUtagMONITOR@@K@Z.c)
 *     Is_GetTopLevelWindowSupported @ 0x1C00A6EA0 (Is_GetTopLevelWindowSupported.c)
 *     TransformOffscreenAdjacentRect @ 0x1C00C7B0C (TransformOffscreenAdjacentRect.c)
 *     __security_check_cookie @ 0x1C00CC180 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00D2DC0 (_guard_dispatch_icall_nop.c)
 *     IsDpiAwarenessBoundaryInParentChain @ 0x1C0141E80 (IsDpiAwarenessBoundaryInParentChain.c)
 */

__int64 __fastcall TransformRectBetweenCoordinateSpaces(_OWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // bl
  unsigned int *v7; // r14
  unsigned int CurrentThreadDpiAwarenessContext; // r15d
  unsigned int v10; // edi
  __int128 v11; // xmm1
  unsigned int v12; // esi
  __int64 v13; // rcx
  __int64 v14; // r13
  int v15; // r12d
  int v16; // eax
  unsigned int v17; // r13d
  int v18; // r14d
  __int64 v19; // rax
  __int64 v21; // rax
  int v22; // ecx
  int v23; // eax
  int v24; // ebx
  int v25; // eax
  int v26; // eax
  __int64 v28; // rax
  int v29; // eax
  unsigned int v30; // ecx
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // [rsp+30h] [rbp-89h]
  int v39; // [rsp+40h] [rbp-79h]
  int v40; // [rsp+50h] [rbp-69h]
  __int128 v42; // [rsp+60h] [rbp-59h] BYREF
  struct tagRECT v43; // [rsp+70h] [rbp-49h] BYREF
  __int128 v44; // [rsp+80h] [rbp-39h] BYREF
  __int128 v45; // [rsp+90h] [rbp-29h] BYREF
  __int128 v46; // [rsp+A0h] [rbp-19h] BYREF
  __int128 v47; // [rsp+B0h] [rbp-9h] BYREF

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
  v38 = 0;
  v12 = 0;
  v46 = 0LL;
  v47 = v11;
  v45 = 0LL;
  if ( (((unsigned __int16)(CurrentThreadDpiAwarenessContext >> 8) ^ (unsigned __int16)(v10 >> 8)) & 0x1FF) == 0 )
  {
    a2 = 0x20000000LL;
    if ( (CurrentThreadDpiAwarenessContext & 0xF) != 2
      || (v22 = 1, (CurrentThreadDpiAwarenessContext & 0x20000000) == 0) )
    {
      v22 = 0;
    }
    if ( (v10 & 0xF) != 2 || (v23 = 1, (v10 & 0x20000000) == 0) )
      v23 = 0;
    if ( v22 == v23 )
      goto LABEL_31;
  }
  v13 = *v7;
  if ( ((int)v13 >= (int)v7[2] || (int)v7[1] >= (int)v7[3]) && !(_DWORD)v13 && !v7[1] )
  {
LABEL_31:
    *a1 = v11;
    return 0LL;
  }
  if ( a3 )
  {
    v21 = (int)Is_GetTopLevelWindowSupported(v13, a2, 1LL) >= 0 && qword_1C0258960 ? qword_1C0258960(a3) : 0LL;
    if ( v21 )
    {
      if ( v21 != a3 )
      {
        if ( (unsigned int)IsDpiAwarenessBoundaryInParentChain(a3) )
        {
          v28 = HMValidateSharedHandleNoRip(*(_QWORD *)(*(_QWORD *)(a3 + 40) + 256LL));
          if ( v28 )
            return TransformRectBetweenCoordinateSpacesPerMonitor(
                     (_DWORD)a1,
                     (_DWORD)v7,
                     CurrentThreadDpiAwarenessContext,
                     v10,
                     v28);
        }
      }
    }
  }
  v14 = *(_QWORD *)(gpDispInfo + 104);
  if ( !v14 )
    goto LABEL_73;
  v15 = DWORD1(v45);
  v40 = DWORD2(v45);
  v39 = v45;
  do
  {
    v44 = 0LL;
    v42 = (__int128)*ExpandedMonitorRect(&v43, (struct tagMONITOR *)v14, v10);
    if ( (unsigned int)IntersectRect(&v44, &v42, v7) )
    {
      if ( v38 )
      {
        v29 = v39;
        v30 = HIDWORD(v45);
        if ( v39 >= (int)v44 )
          v29 = v44;
        v39 = v29;
        if ( v15 >= SDWORD1(v44) )
          v15 = DWORD1(v44);
        *(_QWORD *)&v45 = __PAIR64__(v15, v29);
        v31 = v40;
        if ( v40 <= SDWORD2(v44) )
          v31 = DWORD2(v44);
        v40 = v31;
        if ( SHIDWORD(v45) <= SHIDWORD(v44) )
          v30 = HIDWORD(v44);
        *((_QWORD *)&v45 + 1) = __PAIR64__(v30, v31);
      }
      else
      {
        v45 = v44;
        v15 = DWORD1(v44);
        v40 = DWORD2(v44);
        v39 = v44;
      }
      v12 |= TransformRectBetweenCoordinateSpacesPerMonitor(
               (unsigned int)&v44,
               (unsigned int)&v44,
               CurrentThreadDpiAwarenessContext,
               v10,
               v14);
      if ( !v38 )
      {
        v16 = 1;
        v46 = v44;
        v38 = 1;
        goto LABEL_16;
      }
      v32 = v46;
      if ( (int)v46 >= (int)v44 )
        v32 = v44;
      LODWORD(v46) = v32;
      v33 = DWORD1(v46);
      if ( SDWORD1(v46) >= SDWORD1(v44) )
        v33 = DWORD1(v44);
      DWORD1(v46) = v33;
      v34 = DWORD2(v46);
      if ( SDWORD2(v46) <= SDWORD2(v44) )
        v34 = DWORD2(v44);
      DWORD2(v46) = v34;
      v35 = HIDWORD(v46);
      if ( SHIDWORD(v46) <= SHIDWORD(v44) )
        v35 = HIDWORD(v44);
      HIDWORD(v46) = v35;
    }
    v16 = v38;
LABEL_16:
    v14 = *(_QWORD *)(v14 + 56);
  }
  while ( v14 );
  if ( v16 )
  {
    v18 = DWORD2(v47);
    v17 = v47;
    v19 = v45 - v47;
    if ( (_QWORD)v45 == (_QWORD)v47 )
      v19 = *((_QWORD *)&v45 + 1) - *((_QWORD *)&v47 + 1);
    if ( v19 )
    {
      v24 = DWORD1(v47);
      if ( v39 <= (int)v47 )
      {
        v26 = v40;
      }
      else
      {
        *((_QWORD *)&v44 + 1) = __PAIR64__(HIDWORD(v47), v39);
        *(_QWORD *)&v44 = v47;
        v25 = TransformOffscreenAdjacentRect(
                (unsigned int)&v45,
                (unsigned int)&v46,
                (unsigned int)&v44,
                CurrentThreadDpiAwarenessContext,
                v10);
        v15 = DWORD1(v45);
        v12 |= v25;
        v26 = DWORD2(v45);
      }
      if ( v26 < v18 )
      {
        *(_QWORD *)&v44 = __PAIR64__(v24, v26);
        *((_QWORD *)&v44 + 1) = __PAIR64__(HIDWORD(v47), v18);
        v36 = TransformOffscreenAdjacentRect(
                (unsigned int)&v45,
                (unsigned int)&v46,
                (unsigned int)&v44,
                CurrentThreadDpiAwarenessContext,
                v10);
        v15 = DWORD1(v45);
        v12 |= v36;
      }
      if ( v15 > v24 )
      {
        *(_QWORD *)&v44 = __PAIR64__(v24, v17);
        *((_QWORD *)&v44 + 1) = __PAIR64__(v15, v18);
        v12 |= TransformOffscreenAdjacentRect(
                 (unsigned int)&v45,
                 (unsigned int)&v46,
                 (unsigned int)&v44,
                 CurrentThreadDpiAwarenessContext,
                 v10);
      }
      if ( SHIDWORD(v45) < SHIDWORD(v47) )
      {
        *(_QWORD *)&v47 = __PAIR64__(HIDWORD(v45), v17);
        DWORD2(v47) = v18;
        v37 = TransformOffscreenAdjacentRect(
                (unsigned int)&v45,
                (unsigned int)&v46,
                (unsigned int)&v47,
                CurrentThreadDpiAwarenessContext,
                v10);
        goto LABEL_77;
      }
    }
    goto LABEL_21;
  }
LABEL_73:
  if ( (int)Is_MonitorFromRectSupported() >= 0 )
  {
    if ( qword_1C0258B00 )
      v4 = qword_1C0258B00(v7, 2LL, v10);
    v37 = TransformRectBetweenCoordinateSpacesPerMonitor(
            (unsigned int)&v46,
            (_DWORD)v7,
            CurrentThreadDpiAwarenessContext,
            v10,
            v4);
LABEL_77:
    v12 |= v37;
  }
LABEL_21:
  *a1 = v46;
  return v12;
}
