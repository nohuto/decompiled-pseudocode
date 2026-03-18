/*
 * XREFs of GreWindowResizeComplete @ 0x1C0271130
 * Callers:
 *     xxxDrawDragRectEx @ 0x1C0211F54 (xxxDrawDragRectEx.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1C001FB78 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??1DWMSPRITELOCK@@QEAA@XZ @ 0x1C001FC7C (--1DWMSPRITELOCK@@QEAA@XZ.c)
 *     ??0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z @ 0x1C001FCC4 (--0DWMSPRITELOCK@@QEAA@AEAVPDEVOBJ@@HH@Z.c)
 *     ?bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ @ 0x1C002D7BC (-bDeviceBitmap@SFMLOGICALSURFACE@@QEAAHXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?AdapterLuid@SFMLOGICALSURFACE@@QEAA?AU_LUID@@XZ @ 0x1C0151AE8 (-AdapterLuid@SFMLOGICALSURFACE@@QEAA-AU_LUID@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 *     ?CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z @ 0x1C026E6AC (-CheckAndProcessWindowResizeComplete@@YAXPEAVDWMSPRITE@@HPEAH@Z.c)
 */

__int64 __fastcall GreWindowResizeComplete(__int64 a1, HWND a2)
{
  unsigned int v4; // edi
  struct PDEVOBJ *v5; // rdx
  struct DWMSPRITE *v6; // rbx
  int v7; // eax
  int v8; // r15d
  SFMLOGICALSURFACE *v9; // r14
  __int64 v10; // r9
  int v11; // eax
  __int64 (__fastcall *v12)(_QWORD, _QWORD); // r9
  _QWORD *v13; // rax
  __int64 v14; // rcx
  __int64 v16; // [rsp+20h] [rbp-60h] BYREF
  __int64 v17; // [rsp+28h] [rbp-58h] BYREF
  __int128 v18; // [rsp+30h] [rbp-50h] BYREF
  __int64 v19; // [rsp+40h] [rbp-40h]
  int v20; // [rsp+48h] [rbp-38h]
  _QWORD v21[2]; // [rsp+50h] [rbp-30h] BYREF
  __int16 v22; // [rsp+60h] [rbp-20h]
  __int64 v23; // [rsp+68h] [rbp-18h]
  __int64 v24; // [rsp+70h] [rbp-10h]
  char v25; // [rsp+C0h] [rbp+40h] BYREF
  struct DWMSPRITE *v26; // [rsp+C8h] [rbp+48h] BYREF

  v4 = 0;
  v16 = ghsemGreLock;
  GreAcquireSemaphore(ghsemGreLock);
  if ( g_pDwmState )
  {
    DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)&v25, v5, 0, 0);
    GreAcquireSemaphore(ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", ghsemDwmState, 7LL);
    DWMSPRITEREF::DWMSPRITEREF((DWMSPRITEREF *)&v26, a2);
    v6 = v26;
    if ( v26 )
    {
      v7 = *((_DWORD *)v26 + 29);
      v8 = 0;
      v9 = (SFMLOGICALSURFACE *)*((_QWORD *)v26 + 21);
      if ( v7 >= 1 )
      {
        if ( v7 == 2 )
        {
          if ( (unsigned int)SFMLOGICALSURFACE::bDeviceBitmap(*((SFMLOGICALSURFACE **)v26 + 21)) )
          {
            v11 = *(_DWORD *)(a1 + 40);
            v18 = 0LL;
            v21[1] = 0LL;
            v22 = 256;
            v24 = 0LL;
            v23 = 0LL;
            v21[0] = 0LL;
            v20 = 1;
            if ( (v11 & 1) != 0 )
            {
              *(_QWORD *)&v18 = *(_QWORD *)(a1 + 48);
              v19 = a1;
              GreAcquireSemaphore(v18);
              EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v18, 11LL);
            }
            v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3512);
            if ( v12 )
            {
              if ( (*(_DWORD *)(a1 + 40) & 0x4000000) != 0 )
              {
                v13 = (_QWORD *)SFMLOGICALSURFACE::AdapterLuid(v9, &v17);
                v14 = *(_QWORD *)(a1 + 1800);
                if ( v14 )
                {
                  *(_QWORD *)(v14 + 104) = *v13;
                  v12 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(a1 + 3512);
                }
              }
              v8 = v12(*(_QWORD *)(a1 + 1800), *(_QWORD *)v9);
            }
            DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v18);
            if ( v21[0] )
              DLODCOBJ::vUnlock((DLODCOBJ *)v21);
          }
          if ( v8 )
          {
            *((_DWORD *)v6 + 29) = 3;
          }
          else
          {
            *((_DWORD *)v6 + 29) = 1;
            CheckAndProcessWindowResizeComplete(v6, 0, 0LL, v10);
          }
        }
        v4 = 1;
      }
      _InterlockedDecrement((volatile signed __int32 *)v6 + 3);
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
    GreReleaseSemaphoreInternal(ghsemDwmState);
    DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)&v25);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  return v4;
}
