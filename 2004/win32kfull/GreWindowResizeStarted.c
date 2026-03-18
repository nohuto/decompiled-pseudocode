/*
 * XREFs of GreWindowResizeStarted @ 0x1C0271370
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0211F54 (xxxDrawDragRectEx.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C001FB78 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C001FC7C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C001FCC4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?bRedirectionBitmap@SURFACE@@QEAAHXZ @ 0x1C004F8CC (-bRedirectionBitmap@SURFACE@@QEAAHXZ.c)
 *     DwmAsyncUpdateSprite @ 0x1C00541BC (DwmAsyncUpdateSprite.c)
 *     UserDCompositionCreateSynchronizationObject @ 0x1C0221308 (UserDCompositionCreateSynchronizationObject.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026E6AC (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowResizeStarted(__int64 a1, HWND a2, int a3, unsigned int *a4, unsigned int *a5)
{
  unsigned int v7; // r14d
  unsigned int v8; // r12d
  unsigned int v9; // r15d
  struct PDEVOBJ *v10; // rdx
  __int64 v11; // r9
  struct DWMSPRITE *v12; // rbx
  __int64 *v13; // rsi
  __int64 v14; // rcx
  SURFACE *v15; // rcx
  unsigned __int8 v16; // di
  _DWORD *v17; // r12
  PVOID v18; // rdi
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rdi
  __int64 v24; // rsi
  void *v25; // rax
  unsigned int v26; // ecx
  unsigned int v27; // eax
  struct DWMSPRITE *v29; // [rsp+60h] [rbp-20h] BYREF
  PVOID Object; // [rsp+68h] [rbp-18h] BYREF
  void *v31; // [rsp+70h] [rbp-10h] BYREF
  __int64 v32; // [rsp+78h] [rbp-8h] BYREF
  __int64 v33; // [rsp+C0h] [rbp+40h] BYREF
  unsigned int *v34; // [rsp+D8h] [rbp+58h]

  v34 = a4;
  v33 = a1;
  v7 = 0;
  v8 = gdwDwmResizeOptimizationOptions & 1;
  v9 = gdwDwmResizeOptimizationOptions & 2;
  v32 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v33, v10, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v29, a2);
    v12 = v29;
    if ( v29 )
    {
      v13 = (__int64 *)*((_QWORD *)v29 + 21);
      if ( v13 && (v14 = v13[23]) != 0 )
        v15 = (SURFACE *)(v14 - 24);
      else
        v15 = 0LL;
      if ( !v15 || (v16 = 1, !(unsigned int)SURFACE::bRedirectionBitmap(v15)) )
        v16 = 0;
      if ( v8 && v16 || a3 && v9 )
      {
        if ( *((int *)v12 + 29) >= 1 )
          CheckAndProcessWindowResizeComplete(v12, 1, 0LL, v11);
        v17 = (_DWORD *)((char *)v12 + 120);
        *((_DWORD *)v12 + 29) = v16 + 1;
        *((_DWORD *)v12 + 30) = 0;
        v12 = v29;
        *((_QWORD *)v29 + 18) = MEMORY[0xFFFFF78000000014];
        if ( a3 && v9 )
        {
          Object = 0LL;
          if ( (unsigned int)UserDCompositionCreateSynchronizationObject(&Object) )
          {
            v18 = Object;
            v31 = 0LL;
            if ( (int)CompositionObject::OpenDwmHandle((CompositionObject *)Object, &v31) < 0 )
            {
              ObfDereferenceObject(v18);
            }
            else
            {
              *((_QWORD *)v12 + 13) = v31;
              *((_QWORD *)v12 + 12) = v18;
              *v17 = 1;
              *((_DWORD *)v12 + 31) = 1;
              v23 = *v13;
              v24 = *(_QWORD *)v12;
              v25 = (void *)UserReferenceDwmApiPort(v20, v19, v21, v22);
              DwmAsyncUpdateSprite(v25, v24, v23, 512, 0LL, 0LL, 0, 0, 0, 0, 0LL);
            }
          }
          v26 = gdwDwmResizeTimeoutModern;
          v27 = gdwDwmResizeOptimizationOptions & 8;
        }
        else
        {
          v26 = gdwDwmResizeTimeoutGdi;
          v27 = gdwDwmResizeOptimizationOptions & 4;
        }
        v7 = 1;
        *v34 = v27;
        *a5 = v26;
      }
      _InterlockedDecrement((volatile signed __int32 *)v12 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v33);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v32);
  return v7;
}
