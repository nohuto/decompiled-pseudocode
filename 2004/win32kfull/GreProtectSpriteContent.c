/*
 * XREFs of GreProtectSpriteContent @ 0x1C0270B9C
 * Callers:
 *     ?ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z @ 0x1C0249044 (-ProtectWindowBitmap@@YAHPEAUtagWND@@K@Z.c)
 * Callees:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C001FB78 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C001FC7C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C001FCC4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     DwmAsyncUpdateSprite @ 0x1C00541BC (DwmAsyncUpdateSprite.c)
 *     ?GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID@@@Z @ 0x1C0054360 (-GetRedirectionInfo@SFMLOGICALSURFACE@@QEAAXPEAW4_HLSURF_REDIRECTIONSTYLE@@PEAK1PEAPEAXPEAU_LUID.c)
 */

__int64 __fastcall GreProtectSpriteContent(__int64 a1, struct PDEVOBJ *a2, int a3, char a4)
{
  unsigned int v5; // r14d
  int v6; // ebx
  int v7; // esi
  __int64 v8; // rdi
  unsigned int v9; // ecx
  SFMLOGICALSURFACE *v10; // r12
  int v11; // edx
  int v12; // eax
  __int64 v13; // r14
  __int64 v14; // r12
  char v15; // cl
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r13
  int v19; // ebx
  BOOL v20; // esi
  __int64 v21; // r8
  __int64 v22; // r9
  void *v23; // rax
  _BYTE v25[4]; // [rsp+64h] [rbp-Ch] BYREF
  __int64 v26; // [rsp+68h] [rbp-8h] BYREF
  int v27; // [rsp+B0h] [rbp+40h] BYREF
  int v28; // [rsp+B4h] [rbp+44h]
  unsigned int v29; // [rsp+C0h] [rbp+50h] BYREF
  unsigned int v30; // [rsp+C8h] [rbp+58h] BYREF

  v28 = HIDWORD(a1);
  v27 = 0;
  v30 = 0;
  v29 = 0;
  v5 = 0;
  v6 = a4 & 1;
  v7 = (a4 & 0x11) == 17;
  if ( a3 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v25, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v26, (HWND)a2);
    v8 = v26;
    if ( v26 )
    {
      v9 = *(_DWORD *)(v26 + 164);
      v5 = 1;
      v10 = *(SFMLOGICALSURFACE **)(v26 + 168);
      if ( ((v9 >> 3) & 1) != v6 || ((v9 >> 6) & 1) != v7 )
      {
        *(_DWORD *)(v26 + 164) = (v7 << 6) | v9 & 0xFFFFFFB7 | (8 * v6) & 0xFFFFFFBF;
        SFMLOGICALSURFACE::GetRedirectionInfo(v10, (enum _HLSURF_REDIRECTIONSTYLE *)&v27, &v30, &v29, 0LL, 0LL);
        v11 = *((_DWORD *)v10 + 63);
        v12 = *(_DWORD *)(v8 + 164);
        v13 = *(_QWORD *)(v8 + 104);
        *(_QWORD *)(v8 + 104) = 0LL;
        v14 = *(_QWORD *)v10;
        v15 = v11;
        v16 = v11 & 0xC;
        v17 = v15 & 1;
        v18 = *(_QWORD *)v8;
        v19 = v16 | v12 & 1 | (2 * (v17 | v12 & 0x40 | (4 * (v12 & 0xE))));
        v20 = *(_DWORD *)(v8 + 116) >= 1;
        v23 = (void *)UserReferenceDwmApiPort(v17, v16, v21, v22);
        DwmAsyncUpdateSprite(v23, v18, v14, v19, v8 + 72, 0LL, v27, v30, v29, v20, v13);
        v5 = 1;
      }
      _InterlockedDecrement((volatile signed __int32 *)(v8 + 12));
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v25);
  }
  return v5;
}
