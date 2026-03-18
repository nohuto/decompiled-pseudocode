/*
 * XREFs of GreRealizeDefaultPalette @ 0x1C00BBEF8
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C00BB6EC (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxFlushPalette @ 0x1C0235C30 (xxxFlushPalette.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreSetSystemPaletteUse @ 0x1C02B7DA0 (GreSetSystemPaletteUse.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreRealizeDefaultPalette(HDC a1, int a2)
{
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rbx
  DYNAMICMODECHANGESHARELOCK *v7; // rcx
  __int64 v9; // rbx
  unsigned int v10; // ecx
  unsigned int v11; // edx
  __int64 v12; // r8
  __int64 v13; // rcx
  signed __int32 v14; // ecx
  __int64 v15; // rax
  signed __int32 v16; // ecx
  __int64 v17; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v18[8]; // [rsp+28h] [rbp-21h] BYREF
  _QWORD v19[2]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v20; // [rsp+40h] [rbp-9h] BYREF
  __int64 v21; // [rsp+50h] [rbp+7h]
  int v22; // [rsp+58h] [rbp+Fh]
  __int64 v23; // [rsp+60h] [rbp+17h] BYREF
  int v24; // [rsp+68h] [rbp+1Fh]
  int v25; // [rsp+6Ch] [rbp+23h]
  __int16 v26; // [rsp+70h] [rbp+27h]
  __int64 v27; // [rsp+78h] [rbp+2Fh]
  __int64 v28; // [rsp+80h] [rbp+37h]
  int v29; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v30; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v31; // [rsp+C8h] [rbp+7Fh] BYREF

  v29 = a2;
  DCOBJ::DCOBJ((DCOBJ *)v19, a1);
  if ( v19[0] )
  {
    v30 = *(_QWORD *)(v19[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v29, v3, v4, v5);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v18, (struct PDEVOBJ *)&v30);
    v17 = *(_QWORD *)(v30 + 64);
    GreAcquireSemaphore(v17);
    v24 = 0;
    v25 = 0;
    v28 = 0LL;
    v27 = 0LL;
    v23 = 0LL;
    v6 = v30;
    v26 = 256;
    v20 = 0LL;
    v22 = 1;
    if ( (*(_DWORD *)(v30 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v20 = *(_QWORD *)(v30 + 48);
      v21 = v30;
      GreAcquireSemaphore(v20);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v20, 11LL);
      v6 = v30;
    }
    if ( (*(_DWORD *)(v6 + 2172) & 0x100) != 0 )
    {
      v9 = *(_QWORD *)(v6 + 1808);
      v31 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      if ( (*(_DWORD *)(v9 + 24) & 0x11000) != 0 )
        GreSetSystemPaletteUse(a1);
      v10 = *(_DWORD *)(v9 + 60) >> 1;
      v11 = *(_DWORD *)(v9 + 28) - v10;
      if ( v10 < v11 )
      {
        v12 = 4LL * v10;
        v13 = v11 - v10;
        do
        {
          v12 += 4LL;
          *(_BYTE *)(v12 + *(_QWORD *)(v9 + 112) - 1) &= ~0x20u;
          --v13;
        }
        while ( v13 );
      }
      hForePalette = 0LL;
      v14 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
      v15 = *(_QWORD *)(v9 + 120);
      v16 = v14 + 1;
      *(_DWORD *)(v9 + 32) = v16;
      if ( v15 != v9 )
        *(_DWORD *)(v15 + 32) = v16;
      *(_DWORD *)(*(_QWORD *)(v19[0] + 976LL) + 152LL) |= 0xFu;
      SEMOBJ::vUnlock((SEMOBJ *)&v31);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v20);
    if ( v23 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v23);
    SEMOBJ::vUnlock((SEMOBJ *)&v17);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v18);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v7);
    if ( v19[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v19);
  }
  return 0LL;
}
