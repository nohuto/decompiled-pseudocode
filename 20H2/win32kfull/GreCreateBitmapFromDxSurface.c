/*
 * XREFs of GreCreateBitmapFromDxSurface @ 0x1C029FFCC
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface @ 0x1C02AD530 (NtGdiCreateBitmapFromDxSurface.c)
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1C02AD560 (NtGdiCreateBitmapFromDxSurface2.c)
 * Callees:
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C009B670 (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 */

__int64 __fastcall GreCreateBitmapFromDxSurface(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        int a4,
        int a5,
        int a6,
        __int64 a7)
{
  __int64 v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  HPALETTE v14; // r9
  __int64 v15; // r8
  SURFACE *v16; // rbx
  DYNAMICMODECHANGESHARELOCK *v17; // rcx
  SURFACE *v19; // [rsp+80h] [rbp-51h] BYREF
  _BYTE v20[8]; // [rsp+88h] [rbp-49h] BYREF
  _QWORD v21[2]; // [rsp+90h] [rbp-41h] BYREF
  __int128 v22; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-21h]
  int v24; // [rsp+B8h] [rbp-19h]
  _QWORD v25[2]; // [rsp+C0h] [rbp-11h] BYREF
  __int16 v26; // [rsp+D0h] [rbp-1h]
  __int64 v27; // [rsp+D8h] [rbp+7h]
  __int64 v28; // [rsp+E0h] [rbp+Fh]
  char v29; // [rsp+128h] [rbp+57h] BYREF

  v10 = 0LL;
  if ( a2 && a3 && a3 * (unsigned __int64)a2 <= 0xFFFFFFFF && a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v21, a1);
    v11 = v21[0];
    if ( v21[0] )
    {
      if ( *(_DWORD *)(v21[0] + 32LL) != 1 )
      {
        v12 = *(_QWORD *)(v21[0] + 48LL);
        if ( (*(_DWORD *)(v12 + 40) & 0x8000) == 0 )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v29);
          NEEDGRELOCK::vLock((NEEDGRELOCK *)v20, (struct XDCOBJ *)v21);
          GreAcquireSemaphoreSharedInternal(ghsemDwmState);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
          v13 = *(_DWORD *)(v12 + 40);
          v22 = 0LL;
          v25[1] = 0LL;
          v26 = 256;
          v28 = 0LL;
          v27 = 0LL;
          v25[0] = 0LL;
          v24 = 1;
          if ( (v13 & 1) != 0 )
          {
            *(_QWORD *)&v22 = *(_QWORD *)(v12 + 48);
            v23 = v12;
            GreAcquireSemaphore(v22);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v22, 11LL);
          }
          if ( g_pDwmState && gfDwmDeviceBitmapsEnabled )
          {
            v14 = 0LL;
            if ( (*(_DWORD *)(v12 + 2172) & 0x100) == 0 )
              v14 = **(HPALETTE **)(v12 + 1808);
            CreateCompatibleSurface(
              &v19,
              *(_QWORD *)(v21[0] + 48LL),
              *(_DWORD *)(v12 + 2108),
              v14,
              a2,
              a3,
              1u,
              0,
              0,
              0,
              1,
              a6,
              0,
              a4,
              a5,
              a7);
            v16 = v19;
            if ( v19 )
            {
              LOBYTE(v15) = 5;
              HmgSetOwner(*((_QWORD *)v19 + 4), 2147483650LL, v15);
              v10 = *((_QWORD *)v16 + 4);
              DEC_SHARE_REF_CNT(v16);
            }
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v22);
          if ( v25[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v25);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
          GreReleaseSemaphoreInternal(ghsemDwmState);
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v20);
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v17);
          v11 = v21[0];
        }
      }
      if ( v11 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v21);
    }
    return v10;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
