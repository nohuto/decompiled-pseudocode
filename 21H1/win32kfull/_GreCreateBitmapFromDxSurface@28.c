/*
 * XREFs of _GreCreateBitmapFromDxSurface@28 @ 0x2012E7
 * Callers:
 *     _NtGdiCreateBitmapFromDxSurface2@28 @ 0x21232C (_NtGdiCreateBitmapFromDxSurface2@28.c)
 *     _NtGdiCreateBitmapFromDxSurface@20 @ 0x212354 (_NtGdiCreateBitmapFromDxSurface@20.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ??1DCOBJ@@QAE@XZ @ 0x5E67A (--1DCOBJ@@QAE@XZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vUnlock@SURFREF@@QAEXXZ @ 0x78568 (-vUnlock@SURFREF@@QAEXXZ.c)
 *     _ULongLongToULong@12 @ 0x9D96E (_ULongLongToULong@12.c)
 *     ?bValid@SURFREF@@QBEHXZ @ 0xA8E4A (-bValid@SURFREF@@QBEHXZ.c)
 *     _GreDwmUseDeviceBitmaps@0 @ 0xCEFCA (_GreDwmUseDeviceBitmaps@0.c)
 *     ?vSetPID@SURFREF@@QAEXK@Z @ 0xF5D18 (-vSetPID@SURFREF@@QAEXK@Z.c)
 *     ?CreateCompatibleSurface@@YG?AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z @ 0xF7F90 (-CreateCompatibleSurface@@YG-AVSURFREF@@PAUHDEV__@@KPAUHPALETTE__@@HHHHHHHHHKKPAX@Z.c)
 */

int __fastcall GreCreateBitmapFromDxSurface(HDC a1, int a2, unsigned int a3, int a4, _DWORD *a5, int a6, int a7)
{
  int v7; // ebx
  int v9; // esi
  HPALETTE v10; // eax
  SURFREF *v11; // ecx
  ULONG *v13; // [esp+0h] [ebp-58h]
  int v14; // [esp+Ch] [ebp-4Ch] BYREF
  int v15; // [esp+10h] [ebp-48h] BYREF
  int v16; // [esp+14h] [ebp-44h]
  int v17; // [esp+18h] [ebp-40h] BYREF
  _DWORD v18[3]; // [esp+1Ch] [ebp-3Ch] BYREF
  _BYTE v19[20]; // [esp+28h] [ebp-30h] BYREF
  _DWORD v20[3]; // [esp+3Ch] [ebp-1Ch] BYREF
  __int16 v21; // [esp+48h] [ebp-10h]

  v7 = 0;
  v16 = a2;
  if ( a2 && a3 && ULongLongToULong(a3 * (unsigned __int64)(unsigned int)a2, v13) >= 0 && a1 )
  {
    memset(v18, 0, sizeof(v18));
    XDCOBJ::vLock((XDCOBJ *)v18, a1);
    if ( v18[0] )
    {
      if ( *(_DWORD *)(v18[0] + 20) != 1 )
      {
        v9 = *(_DWORD *)(v18[0] + 36);
        v15 = v9;
        if ( (*(_DWORD *)(v9 + 24) & 0x8000) == 0 )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)((char *)&v14 + 3));
          NEEDGRELOCK::vLock((NEEDGRELOCK *)&v17, (struct XDCOBJ *)v18);
          GreAcquireSemaphoreSharedInternal(_ghsemDwmState);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", _ghsemDwmState);
          memset(v20, 0, sizeof(v20));
          v21 = 256;
          DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v19, (struct PDEVOBJ *)&v15);
          if ( GreDwmUseDeviceBitmaps() )
          {
            v10 = 0;
            if ( (*(_DWORD *)(v9 + 1456) & 0x100) == 0 )
              v10 = **(HPALETTE **)(v9 + 1112);
            CreateCompatibleSurface(
              &v15,
              *(_DWORD **)(v18[0] + 36),
              *(_DWORD *)(v9 + 1404),
              v10,
              v16,
              a3,
              1,
              0,
              0,
              0,
              1,
              a6,
              0,
              a4,
              a5,
              a7);
            if ( SURFREF::bValid((SURFREF *)&v15) )
            {
              SURFREF::vSetPID(v11, 0x80000002);
              v7 = *(_DWORD *)(v15 + 20);
            }
            SURFREF::vUnlock((SURFREF *)&v15);
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v19);
          if ( v20[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v20);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
          GreReleaseSemaphoreInternal(_ghsemDwmState);
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v17);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
          GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
        }
      }
    }
    DCOBJ::~DCOBJ((DCOBJ *)v18);
    return v7;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0;
  }
}
