/*
 * XREFs of GreGetSpriteAttributes @ 0x1C0082C34
 * Callers:
 *     CreateOrGetRedirectionBitmap @ 0x1C0090950 (CreateOrGetRedirectionBitmap.c)
 *     _GetLayeredWindowAttributes @ 0x1C013733C (_GetLayeredWindowAttributes.c)
 * Callees:
 *     ?GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z @ 0x1C0082D90 (-GdiGetSpriteAttributes@@YAHPEAUHDEV__@@PEAUHWND__@@PEAXPEAKPEAU_BLENDFUNCTION@@3@Z.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C008C834 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C008CACC (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1C0093AA8 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 */

__int64 __fastcall GreGetSpriteAttributes(
        HDEV a1,
        struct PDEVOBJ *a2,
        _DWORD *a3,
        unsigned int *a4,
        struct _BLENDFUNCTION *a5,
        unsigned int *a6,
        int a7)
{
  unsigned int *v7; // r14
  unsigned int v8; // ebx
  struct _BLENDFUNCTION *v10; // r15
  _DWORD *v12; // rax
  _DWORD *v14; // [rsp+70h] [rbp+18h] BYREF

  v14 = a3;
  v7 = a6;
  v8 = 0;
  v10 = a5;
  if ( a7 && g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&a7, a2, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v14, (HWND)a2, 0LL);
    v12 = v14;
    if ( v14 )
    {
      v8 = 1;
      *a4 = v14[20];
      *v10 = (struct _BLENDFUNCTION)v12[19];
      *v7 = v12[18];
      _InterlockedDecrement(v12 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&a7);
  }
  else
  {
    return (unsigned int)GdiGetSpriteAttributes(a1, (HWND)a2, a3, a4, a5, a6);
  }
  return v8;
}
