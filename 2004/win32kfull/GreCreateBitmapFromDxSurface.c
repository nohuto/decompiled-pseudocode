/*
 * XREFs of GreCreateBitmapFromDxSurface @ 0x1C02A141C
 * Callers:
 *     NtGdiCreateBitmapFromDxSurface @ 0x1C02AEAB0 (NtGdiCreateBitmapFromDxSurface.c)
 *     NtGdiCreateBitmapFromDxSurface2 @ 0x1C02AEAE0 (NtGdiCreateBitmapFromDxSurface2.c)
 * Callees:
 *     ?CreateCompatibleSurface@@YA?AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z @ 0x1C0018F9C (-CreateCompatibleSurface@@YA-AVSURFREF@@PEAUHDEV__@@KPEAUHPALETTE__@@HHHHHHHHHKKPEAX@Z.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
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
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  HPALETTE v20; // r9
  __int64 v21; // r8
  SURFACE *v22; // rbx
  DYNAMICMODECHANGESHARELOCK *v23; // rcx
  SURFACE *v25; // [rsp+80h] [rbp-51h] BYREF
  _BYTE v26[8]; // [rsp+88h] [rbp-49h] BYREF
  _QWORD v27[2]; // [rsp+90h] [rbp-41h] BYREF
  __int128 v28; // [rsp+A0h] [rbp-31h] BYREF
  __int64 v29; // [rsp+B0h] [rbp-21h]
  int v30; // [rsp+B8h] [rbp-19h]
  _QWORD v31[2]; // [rsp+C0h] [rbp-11h] BYREF
  __int16 v32; // [rsp+D0h] [rbp-1h]
  __int64 v33; // [rsp+D8h] [rbp+7h]
  __int64 v34; // [rsp+E0h] [rbp+Fh]
  char v35; // [rsp+128h] [rbp+57h] BYREF

  v10 = 0LL;
  if ( a2 && a3 && a3 * (unsigned __int64)a2 <= 0xFFFFFFFF && a1 )
  {
    DCOBJ::DCOBJ((DCOBJ *)v27, a1);
    v14 = v27[0];
    if ( v27[0] )
    {
      if ( *(_DWORD *)(v27[0] + 32LL) != 1 )
      {
        v15 = *(_QWORD *)(v27[0] + 48LL);
        if ( (*(_DWORD *)(v15 + 40) & 0x8000) == 0 )
        {
          DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v35, v11, v12, v13);
          NEEDGRELOCK::vLock((NEEDGRELOCK *)v26, (struct XDCOBJ *)v27);
          GreAcquireSemaphoreSharedInternal(ghsemDwmState, v16, v17, v18);
          EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDwmState", ghsemDwmState);
          v19 = *(_DWORD *)(v15 + 40);
          v28 = 0LL;
          v31[1] = 0LL;
          v32 = 256;
          v34 = 0LL;
          v33 = 0LL;
          v31[0] = 0LL;
          v30 = 1;
          if ( (v19 & 1) != 0 )
          {
            *(_QWORD *)&v28 = *(_QWORD *)(v15 + 48);
            v29 = v15;
            GreAcquireSemaphore(v28);
            EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v28, 11LL);
          }
          if ( g_pDwmState && gfDwmDeviceBitmapsEnabled )
          {
            v20 = 0LL;
            if ( (*(_DWORD *)(v15 + 2172) & 0x100) == 0 )
              v20 = **(HPALETTE **)(v15 + 1808);
            CreateCompatibleSurface(
              &v25,
              *(_QWORD *)(v27[0] + 48LL),
              *(unsigned int *)(v15 + 2108),
              v20,
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
            v22 = v25;
            if ( v25 )
            {
              LOBYTE(v21) = 5;
              HmgSetOwner(*((_QWORD *)v25 + 4), 2147483650LL, v21);
              v10 = *((_QWORD *)v22 + 4);
              DEC_SHARE_REF_CNT(v22);
            }
          }
          DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v28);
          if ( v31[0] )
            DLODCOBJ::vUnlock((DLODCOBJ *)v31);
          EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", ghsemDwmState);
          GreReleaseSemaphoreInternal(ghsemDwmState);
          NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v26);
          DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v23);
          v14 = v27[0];
        }
      }
      if ( v14 )
        XDCOBJ::vUnlockFast((XDCOBJ *)v27);
    }
    return v10;
  }
  else
  {
    EngSetLastError(0x57u);
    return 0LL;
  }
}
