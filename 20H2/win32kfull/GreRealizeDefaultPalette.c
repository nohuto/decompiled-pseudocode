/*
 * XREFs of GreRealizeDefaultPalette @ 0x1C0121FD0
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z @ 0x1C0073F0C (-xxxDesktopWndProcWorker@@YA_JPEAUtagWND@@I_K_J@Z.c)
 *     xxxFlushPalette @ 0x1C0234DA0 (xxxFlushPalette.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C002120C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C0098F74 (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0098FF0 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C0099034 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C00A1484 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C00A47D0 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C00A5350 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     GreSetSystemPaletteUse @ 0x1C02B6800 (GreSetSystemPaletteUse.c)
 */

// write access to const memory has been detected, the output may be wrong!
__int64 __fastcall GreRealizeDefaultPalette(HDC a1, int a2)
{
  __int64 v3; // rbx
  DYNAMICMODECHANGESHARELOCK *v4; // rcx
  __int64 v6; // rbx
  unsigned int v7; // ecx
  unsigned int v8; // edx
  __int64 v9; // r8
  __int64 v10; // rcx
  signed __int32 v11; // ecx
  __int64 v12; // rax
  signed __int32 v13; // ecx
  __int64 v14; // [rsp+20h] [rbp-29h] BYREF
  _BYTE v15[8]; // [rsp+28h] [rbp-21h] BYREF
  _QWORD v16[2]; // [rsp+30h] [rbp-19h] BYREF
  __int128 v17; // [rsp+40h] [rbp-9h] BYREF
  __int64 v18; // [rsp+50h] [rbp+7h]
  int v19; // [rsp+58h] [rbp+Fh]
  __int64 v20; // [rsp+60h] [rbp+17h] BYREF
  int v21; // [rsp+68h] [rbp+1Fh]
  int v22; // [rsp+6Ch] [rbp+23h]
  __int16 v23; // [rsp+70h] [rbp+27h]
  __int64 v24; // [rsp+78h] [rbp+2Fh]
  __int64 v25; // [rsp+80h] [rbp+37h]
  int v26; // [rsp+B8h] [rbp+6Fh] BYREF
  __int64 v27; // [rsp+C0h] [rbp+77h] BYREF
  __int64 v28; // [rsp+C8h] [rbp+7Fh] BYREF

  v26 = a2;
  DCOBJ::DCOBJ((DCOBJ *)v16, a1);
  if ( v16[0] )
  {
    v27 = *(_QWORD *)(v16[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v26);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v15, (struct PDEVOBJ *)&v27);
    v14 = *(_QWORD *)(v27 + 64);
    GreAcquireSemaphore(v14);
    v21 = 0;
    v22 = 0;
    v25 = 0LL;
    v24 = 0LL;
    v20 = 0LL;
    v3 = v27;
    v23 = 256;
    v17 = 0LL;
    v19 = 1;
    if ( (*(_DWORD *)(v27 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v17 = *(_QWORD *)(v27 + 48);
      v18 = v27;
      GreAcquireSemaphore(v17);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v17, 11LL);
      v3 = v27;
    }
    if ( (*(_DWORD *)(v3 + 2172) & 0x100) != 0 )
    {
      v6 = *(_QWORD *)(v3 + 1808);
      v28 = ghsemPalette;
      GreAcquireSemaphore(ghsemPalette);
      if ( (*(_DWORD *)(v6 + 24) & 0x11000) != 0 )
        GreSetSystemPaletteUse(a1);
      v7 = *(_DWORD *)(v6 + 60) >> 1;
      v8 = *(_DWORD *)(v6 + 28) - v7;
      if ( v7 < v8 )
      {
        v9 = 4LL * v7;
        v10 = v8 - v7;
        do
        {
          v9 += 4LL;
          *(_BYTE *)(v9 + *(_QWORD *)(v6 + 112) - 1) &= ~0x20u;
          --v10;
        }
        while ( v10 );
      }
      hForePalette = 0LL;
      v11 = _InterlockedExchangeAdd(*(volatile signed __int32 **)&ulXlatePalUnique, 1u);
      v12 = *(_QWORD *)(v6 + 120);
      v13 = v11 + 1;
      *(_DWORD *)(v6 + 32) = v13;
      if ( v12 != v6 )
        *(_DWORD *)(v12 + 32) = v13;
      *(_DWORD *)(*(_QWORD *)(v16[0] + 976LL) + 152LL) |= 0xFu;
      SEMOBJ::vUnlock((SEMOBJ *)&v28);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v17);
    if ( v20 )
      DLODCOBJ::vUnlock((DLODCOBJ *)&v20);
    SEMOBJ::vUnlock((SEMOBJ *)&v14);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v15);
    DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v4);
    if ( v16[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  }
  return 0LL;
}
