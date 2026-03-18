/*
 * XREFs of ?MNCheckScroll@@YAHAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@AEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagMONITOR@@@Z @ 0x1C0235090
 * Callers:
 *     xxxMenuWindowProc @ 0x1C023B6E0 (xxxMenuWindowProc.c)
 * Callees:
 *     GetDPIMetrics @ 0x1C0033368 (GetDPIMetrics.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x1C00FC6EC (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x1C02352B8 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 */

__int64 __fastcall MNCheckScroll(__int64 **a1, __int64 **a2, __int64 a3)
{
  __int64 *v4; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 DPIMetrics; // rax
  int v12; // r8d
  unsigned int v13; // ebx
  __int64 i; // rdx
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 j; // r8
  __int64 v19; // r8
  __int64 v20; // rcx
  bool v21; // zf
  int v22; // eax
  unsigned int v23; // eax
  __int64 v24; // rbx
  __int128 v26; // [rsp+20h] [rbp-28h] BYREF
  _QWORD v27[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = *a1;
  v26 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v27, *v4);
  ((void (__fastcall *)(_QWORD *, __int64, __int128 *, _QWORD))MNGetPopupBoundsRect)(v27, a3, &v26, 0LL);
  v8 = HIDWORD(v26) - DWORD1(v26);
  if ( *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL) && *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL) < v8 )
    v8 = *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 52LL);
  if ( *(_QWORD *)(**a2 + 88)
    && (v9 = **a2, *(_DWORD *)(**(_QWORD **)(v9 + 88) + 72LL) == *(_DWORD *)(v9 + 64))
    && (v10 = **a2, *(_DWORD *)(v10 + 68) + 6 > v8) )
  {
    DPIMetrics = GetDPIMetrics(v10, v9, v6, v7);
    v12 = 0;
    v13 = -6 - 2 * *(_DWORD *)(DPIMetrics + 28) + v8;
    for ( i = *(_QWORD *)(**a2 + 88); v12 < *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL); i += 96LL )
    {
      if ( *(_DWORD *)(*(_QWORD *)i + 68LL) > v13 )
        break;
      ++v12;
    }
    v15 = i - 96;
    if ( !v12 )
      v15 = i;
    v16 = 0LL;
    *(_DWORD *)(**a2 + 68) = *(_DWORD *)(*(_QWORD *)v15 + 68LL);
    v17 = (unsigned int)(*(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) - 1);
    for ( j = *(_QWORD *)(**a2 + 88) + 96LL * (int)v17; (int)v17 >= 0; v17 = (unsigned int)(v17 - 1) )
    {
      v16 = (unsigned int)(*(_DWORD *)(*(_QWORD *)j + 76LL) + v16);
      if ( (unsigned int)v16 > *(_DWORD *)(**a2 + 68) )
        break;
      j -= 96LL;
    }
    v19 = (unsigned int)(v17 + 1);
    if ( (_DWORD)v17 == *(_DWORD *)(*(_QWORD *)(**a2 + 40) + 44LL) - 1 )
      v19 = (unsigned int)v17;
    *(_DWORD *)(**a2 + 120) = v19;
    if ( *(_DWORD *)(**a2 + 116) > (int)v19 )
      *(_DWORD *)(**a2 + 116) = v19;
    v20 = **a2;
    if ( *(_DWORD *)(v20 + 116) == (_DWORD)v19 )
    {
      *(_DWORD *)(v20 + 124) |= 3u;
    }
    else
    {
      v21 = *(_DWORD *)(v20 + 116) == 0;
      v20 = **a2;
      v22 = *(_DWORD *)(v20 + 124);
      if ( v21 )
        v23 = v22 & 0xFFFFFFFC | 2;
      else
        v23 = v22 & 0xFFFFFFFC | 1;
      *(_DWORD *)(v20 + 124) = v23;
    }
    v24 = **a2;
    return (unsigned int)(2 * *(_DWORD *)(GetDPIMetrics(v20, v17, v19, v16) + 28) + *(_DWORD *)(v24 + 68));
  }
  else
  {
    *(_DWORD *)(**a2 + 124) &= 0xFFFFFFFC;
    *(_DWORD *)(**a2 + 116) = 0;
    *(_DWORD *)(**a2 + 120) = 0;
    return *(unsigned int *)(**a2 + 68);
  }
}
