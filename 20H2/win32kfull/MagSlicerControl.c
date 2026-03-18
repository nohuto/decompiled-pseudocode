/*
 * XREFs of MagSlicerControl @ 0x1C01CDB84
 * Callers:
 *     NtUserSlicerControl @ 0x1C02033E0 (NtUserSlicerControl.c)
 * Callees:
 *     IsMessageOnlyWindow @ 0x1C0012C50 (IsMessageOnlyWindow.c)
 *     IsDesktopWindow @ 0x1C0091BB0 (IsDesktopWindow.c)
 *     MagpFindThreadContext @ 0x1C00D39A4 (MagpFindThreadContext.c)
 *     ?MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_CONTEXT_FILTER@@@Z @ 0x1C01CC2D0 (-MagpFindLensContext@@YAPEAU_MAG_LENS_CONTEXT@@PEAU_MAG_THREAD_CONTEXT@@PEAUtagWND@@W4_MAG_LENS_.c)
 *     MagControl @ 0x1C01CC58C (MagControl.c)
 *     MagGetLensContextInformation @ 0x1C01CC690 (MagGetLensContextInformation.c)
 *     MagSetLensContextInformation @ 0x1C01CCDE4 (MagSetLensContextInformation.c)
 *     DwmAsyncMagnSetSlicerDestinationTextures @ 0x1C027420C (DwmAsyncMagnSetSlicerDestinationTextures.c)
 *     DwmAsyncMagnSetWindowSlicer @ 0x1C0274694 (DwmAsyncMagnSetWindowSlicer.c)
 */

__int64 __fastcall MagSlicerControl(_QWORD *a1, __int64 a2, __int64 a3, int a4, _DWORD *a5, unsigned int a6)
{
  unsigned int LensContextInformation; // ebx
  __int64 v10; // r13
  int v11; // r9d
  int v12; // r9d
  __int64 v13; // r9
  _DWORD *v14; // rdx
  _QWORD *ThreadContext; // rax
  __int64 *LensContext; // r10
  __int64 v17; // r11
  int v18; // r8d
  int v19; // ecx
  int v20; // eax
  void *v21; // rax
  unsigned int *v23; // r15
  _QWORD *v24; // rax
  __int64 v25; // r11
  __int64 *v26; // r14
  void *v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rax
  unsigned int v30; // r8d
  int i; // edx
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // rcx
  unsigned int v35; // ecx
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  _OWORD v40[2]; // [rsp+40h] [rbp-40h] BYREF
  __int128 v41; // [rsp+60h] [rbp-20h]
  __int64 v42; // [rsp+70h] [rbp-10h]
  int v43; // [rsp+C8h] [rbp+48h] BYREF

  LensContextInformation = -1073741811;
  v10 = 0LL;
  if ( !a4 )
  {
    LOBYTE(v36) = IsDesktopWindow(a3);
    if ( v36 )
      return LensContextInformation;
    LOBYTE(v38) = IsMessageOnlyWindow(v37);
    if ( v38 )
      return LensContextInformation;
    LensContextInformation = MagControl(a1, a2, 0, 0LL);
    if ( (LensContextInformation & 0x80000000) != 0 )
      return LensContextInformation;
    return (unsigned int)MagSetLensContextInformation(a1, a2, a3, 1, 0, 0LL);
  }
  v11 = a4 - 1;
  if ( !v11 )
  {
    LensContextInformation = MagSetLensContextInformation(a1, a2, a3, 1, 1, 0LL);
    if ( (LensContextInformation & 0x80000000) != 0 )
      return LensContextInformation;
    return (unsigned int)MagControl(a1, a2, 1, 0LL);
  }
  v12 = v11 - 1;
  if ( v12 )
  {
    v13 = (unsigned int)(v12 - 1);
    if ( (_DWORD)v13 )
    {
      if ( (_DWORD)v13 == 1 && a6 >= 0x20 )
      {
        v43 = 56;
        v42 = 0LL;
        memset(v40, 0, sizeof(v40));
        v41 = 0LL;
        LensContextInformation = MagGetLensContextInformation(a1, a2, a3, v13, 8, (__int64)v40, &v43);
        if ( (LensContextInformation & 0x80000000) == 0 )
        {
          v14 = a5;
          *a5 = v40[0];
          v14[1] = DWORD2(v40[0]);
          v14[2] = DWORD1(v41);
          *((_QWORD *)v14 + 2) = *((_QWORD *)&v41 + 1);
          v14[6] = v42;
        }
      }
      return LensContextInformation;
    }
    if ( a6 < 0x18 )
      return LensContextInformation;
    ThreadContext = MagpFindThreadContext(a1, a2);
    if ( !ThreadContext )
      return (unsigned int)-1073741661;
    LensContext = MagpFindLensContext((__int64)ThreadContext, a3, 1);
    if ( !LensContext )
      return LensContextInformation;
    v18 = a5[2];
    if ( v18 <= *a5 )
      return LensContextInformation;
    v19 = a5[3];
    v20 = a5[1];
    if ( v19 <= v20
      || a5[4] > *((_DWORD *)LensContext + 62)
               / (unsigned int)(v18 - *a5)
               * (*((_DWORD *)LensContext + 63)
                / (unsigned int)(v19 - v20)) )
    {
      return LensContextInformation;
    }
    v21 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v17 + 16) + 456LL) + 8LL));
    return (unsigned int)DwmAsyncMagnSetWindowSlicer(v21);
  }
  if ( a6 < 0x10 )
    return LensContextInformation;
  v23 = a5;
  if ( *a5 > 6u || a6 < 32 * *a5 + 16 )
    return LensContextInformation;
  v24 = MagpFindThreadContext(a1, a2);
  if ( !v24 )
    return (unsigned int)-1073741661;
  v26 = MagpFindLensContext((__int64)v24, a3, 1);
  if ( v26 )
  {
    v27 = (void *)ReferenceDwmApiPort(**(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v25 + 16) + 456LL) + 8LL));
    LensContextInformation = DwmAsyncMagnSetSlicerDestinationTextures(v27);
    if ( (LensContextInformation & 0x80000000) == 0 )
    {
      v28 = v26[32];
      if ( v28 )
      {
        Win32FreePool(v28);
        v26[32] = 0LL;
      }
      v29 = *v23;
      if ( !(_DWORD)v29 || (v10 = Win32AllocPool(24 * v29, 1735226197LL)) != 0 )
      {
        v30 = 0;
        *((_DWORD *)v26 + 60) = *v23;
        *((_DWORD *)v26 + 61) = v23[1];
        *((_DWORD *)v26 + 62) = v23[2];
        *((_DWORD *)v26 + 63) = v23[3];
        v26[32] = v10;
        for ( i = *v23; v30 < *v23; i = *v23 )
        {
          v32 = v30;
          v33 = v30++;
          v33 *= 32LL;
          v34 = 3 * v32;
          *(_QWORD *)(v10 + 8 * v34) = *(_QWORD *)((char *)v23 + v33 + 16);
          *(_QWORD *)(v10 + 8 * v34 + 8) = *(_QWORD *)((char *)v23 + v33 + 24);
          *(_QWORD *)(v10 + 8 * v34 + 16) = *(_QWORD *)((char *)v23 + v33 + 32);
        }
        v35 = *((_DWORD *)v26 + 4) | 0x10;
        if ( !i )
          v35 = v26[2] & 0xFFFFFFEF;
        *((_DWORD *)v26 + 4) = v35;
      }
      else
      {
        return (unsigned int)-1073741801;
      }
    }
  }
  return LensContextInformation;
}
