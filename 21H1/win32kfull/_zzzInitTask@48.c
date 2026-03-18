/*
 * XREFs of _zzzInitTask@48 @ 0x142324
 * Callers:
 *     _NtUserInitTask@48 @ 0x165423 (_NtUserInitTask@48.c)
 * Callees:
 *     _zzzEndDeferWinEventNotify@0 @ 0x33948 (_zzzEndDeferWinEventNotify@0.c)
 *     _W32GetThreadWin32Thread@4 @ 0x3FA3E (_W32GetThreadWin32Thread@4.c)
 *     _zzzCalcStartCursorHide@8 @ 0x744FA (_zzzCalcStartCursorHide@8.c)
 *     _SetAppImeCompatFlags@12 @ 0x7C7C6 (_SetAppImeCompatFlags@12.c)
 *     _zzzReattachThreads@12 @ 0xC795C (_zzzReattachThreads@12.c)
 *     __SEH_prolog4 @ 0xF9120 (__SEH_prolog4.c)
 *     _memcpy @ 0xF929B (_memcpy.c)
 *     _zzzShowStartGlass@4 @ 0x142781 (_zzzShowStartGlass@4.c)
 *     _InsertTask@8 @ 0x155B50 (_InsertTask@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __fastcall zzzInitTask(
        int a1,
        int a2,
        int a3,
        unsigned __int16 *a4,
        int a5,
        int a6,
        int a7,
        int a8,
        int a9,
        int a10,
        int a11,
        int a12)
{
  _DWORD *v13; // edx
  _DWORD *v14; // eax
  int v15; // eax
  unsigned int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  int v19; // ecx
  int v20; // ecx
  PKTHREAD CurrentThread; // eax
  PKTHREAD v22; // eax
  _DWORD *v23; // edx
  int v24; // eax
  int v26; // [esp+24h] [ebp-34h]
  _DWORD ProcessInformation[3]; // [esp+30h] [ebp-28h] BYREF
  _DWORD *v30; // [esp+3Ch] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+40h] [ebp-18h]
  int v32; // [esp+60h] [ebp+8h]

  ProcessInformation[0] = 0;
  ProcessInformation[2] = _gptiCurrent;
  v26 = *(_DWORD *)(_gptiCurrent + 232);
  ProcessInformation[1] = v26;
  if ( *(_DWORD *)(_gptiCurrent + 268) )
    Win32FreePool(*(_DWORD *)(_gptiCurrent + 268));
  *(_DWORD *)(_gptiCurrent + 268) = 0;
  if ( *(_DWORD *)(_gptiCurrent + 332)
    || ZwQueryInformationProcess((HANDLE)0xFFFFFFFF, ProcessWx86Information, ProcessInformation, 4u, 0) < 0
    || !ProcessInformation[0] )
  {
    return -1073741790;
  }
  v30 = (_DWORD *)Win32AllocPoolWithQuota(24, 1870099285);
  if ( !v30 )
    return -1073741801;
  v13 = v30;
  memset(v30, 0, 0x18u);
  *(_DWORD *)(_gptiCurrent + 332) = v13;
  v13[4] = 0;
  if ( a8 )
  {
    *(_DWORD *)(_gptiCurrent + 264) |= 0x1000u;
    if ( a8 != -1 )
    {
      v14 = (_DWORD *)_gpwtiFirst;
      while ( 1 )
      {
        v14 = (_DWORD *)*v14;
        if ( !v14 )
          break;
        if ( v14[1] == a8 )
        {
          if ( !v14[5] )
          {
            v14[5] = 1;
            v13[4] = v14;
            break;
          }
          *(_DWORD *)(_gptiCurrent + 264) &= ~0x1000u;
          Win32FreePool(v30);
          *(_DWORD *)(_gptiCurrent + 332) = 0;
          return -1073741790;
        }
      }
    }
  }
  v15 = Win32AllocPoolWithQuota(*a4 + 10, 2020897621);
  *(_DWORD *)(_gptiCurrent + 268) = v15;
  if ( v15 )
  {
    *(_DWORD *)(v15 + 4) = v15 + 8;
    ms_exc.registration.TryLevel = 0;
    memcpy(*(void **)(*(_DWORD *)(_gptiCurrent + 268) + 4), *((const void **)a4 + 1), *a4);
    *(_WORD *)(*(_DWORD *)(*(_DWORD *)(_gptiCurrent + 268) + 4) + 2 * (*a4 >> 1)) = 0;
    ms_exc.registration.TryLevel = -2;
    *(_WORD *)(*(_DWORD *)(_gptiCurrent + 268) + 2) = *a4 + 2;
    **(_WORD **)(_gptiCurrent + 268) = *a4;
    if ( (*(_BYTE *)(v26 + 8) & 0x40) == 0 )
      SetAppStarting(v26);
    v16 = *(_DWORD *)(v26 + 452) & 0xFFFFFFFE;
    if ( a7 )
      *(_DWORD *)(v26 + 376) = a7;
    *(_DWORD *)(v26 + 432) = 28;
    if ( a9 == 0x80000000 || a9 == 0x8000 )
    {
      v17 = v16 & 0xFFFFFFFB;
    }
    else
    {
      *(_DWORD *)(v26 + 436) = a9;
      *(_DWORD *)(v26 + 440) = a10;
      v17 = v16 | 4;
    }
    if ( a11 == 0x80000000 || a11 == 0x8000 )
    {
      v18 = v17 & 0xFFFFFFFD;
    }
    else
    {
      *(_DWORD *)(v26 + 444) = a11;
      *(_DWORD *)(v26 + 448) = a12;
      v18 = v17 | 2;
    }
    *(_DWORD *)(v26 + 452) = v18;
    *((_WORD *)v30 + 10) = a6;
    ms_exc.registration.TryLevel = 1;
    *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 260) + 12) = a2;
    v32 = a3 & 0x10840040;
    *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 260) + 16) = v32;
    *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 260) + 8) = a1;
    *(_DWORD *)(_gptiCurrent + 348) = a2;
    *(_DWORD *)(_gptiCurrent + 352) = v32;
    *(_DWORD *)(_gptiCurrent + 340) = a1;
    *(_DWORD *)(_gptiCurrent + 344) = a1;
    ms_exc.registration.TryLevel = 2;
    if ( SetAppImeCompatFlags(_gptiCurrent, *(const UNICODE_STRING **)(_gptiCurrent + 268), a5) )
    {
      *((_WORD *)v30 + 11) = 1;
      *(_DWORD *)(v26 + 8) |= 0x1000000u;
    }
    ms_exc.registration.TryLevel = -2;
    v19 = *(_DWORD *)(_gptiCurrent + 264);
    if ( (a6 & 0x40000000) != 0 )
      v19 |= 0x800000u;
    v20 = v19 | 0x2002;
    *(_DWORD *)(_gptiCurrent + 264) = v20;
    ms_exc.registration.TryLevel = 3;
    *(_DWORD *)(*(_DWORD *)(_gptiCurrent + 260) + 20) |= v20;
    ms_exc.registration.TryLevel = -2;
    ++_gdwDeferWinEvent;
    CurrentThread = KeGetCurrentThread();
    if ( !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(CurrentThread) + 252) + 24) )
    {
      v22 = KeGetCurrentThread();
      if ( !*(_DWORD *)(*(_DWORD *)(W32GetThreadWin32Thread(v22) + 252) + 28) )
        zzzReattachThreads(0, 0, 0);
    }
    zzzCalcStartCursorHide(v26, 5000);
    v23 = v30;
    v30[2] = 10;
    v23[3] = _gptiCurrent;
    InsertTask(v26, v23);
    zzzEndDeferWinEventNotify();
    *(_DWORD *)(*(_DWORD *)(v26 + 200) + 4) = _gptiCurrent;
    *(_DWORD *)(*(_DWORD *)(v26 + 200) + 36) = -1;
    v24 = *(_DWORD *)(v26 + 200);
    if ( (*(_DWORD *)(v24 + 36))++ == -1 )
      *(_DWORD *)(v24 + 32) = _gptiCurrent;
    zzzShowStartGlass(10000);
    return 0;
  }
  else
  {
    Win32FreePool(v30);
    *(_DWORD *)(_gptiCurrent + 332) = 0;
    if ( a8 )
      *(_DWORD *)(_gptiCurrent + 264) &= ~0x1000u;
    return -1073741773;
  }
}
