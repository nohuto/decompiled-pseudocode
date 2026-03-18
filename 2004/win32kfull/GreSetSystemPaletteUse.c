/*
 * XREFs of GreSetSystemPaletteUse @ 0x1C02B7DA0
 * Callers:
 *     GreRealizeDefaultPalette @ 0x1C00BBEF8 (GreRealizeDefaultPalette.c)
 *     NtGdiSetSystemPaletteUse @ 0x1C02B08F0 (NtGdiSetSystemPaletteUse.c)
 * Callees:
 *     ?vUnlock@SEMOBJ@@QEAAXXZ @ 0x1C000F68C (-vUnlock@SEMOBJ@@QEAAXXZ.c)
 *     ?vUnlock@DLODCOBJ@@QEAAXXZ @ 0x1C001936C (-vUnlock@DLODCOBJ@@QEAAXXZ.c)
 *     ??1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002E9B8 (--1DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ @ 0x1C002ECE4 (--0DYNAMICMODECHANGESHARELOCK@@QEAA@XZ.c)
 *     ??0DCOBJ@@QEAA@PEAUHDC__@@@Z @ 0x1C0076414 (--0DCOBJ@@QEAA@PEAUHDC__@@@Z.c)
 *     ?vDestructor@DEVLOCKOBJ@@QEAAXXZ @ 0x1C0079350 (-vDestructor@DEVLOCKOBJ@@QEAAXXZ.c)
 *     ?vUnlockFast@XDCOBJ@@QEAAXXZ @ 0x1C0079EB0 (-vUnlockFast@XDCOBJ@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C015BD10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall GreSetSystemPaletteUse(HDC a1, int a2)
{
  int v2; // edi
  unsigned int v3; // ebx
  int v4; // esi
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ebx
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  __int64 v14; // r9
  __int64 v15; // r10
  __int64 v16; // r11
  __int64 v17; // rdx
  __int64 v18; // r10
  __int64 v19; // r11
  __int64 v20; // rdx
  signed __int32 v21; // ecx
  __int64 v22; // rdx
  int v23; // ecx
  unsigned int v24; // r8d
  __int64 v25; // rdx
  unsigned int v26; // ecx
  __int64 i; // r8
  DYNAMICMODECHANGESHARELOCK *v28; // rcx
  _QWORD v30[2]; // [rsp+30h] [rbp-49h] BYREF
  __int64 v31; // [rsp+40h] [rbp-39h] BYREF
  __int64 v32; // [rsp+48h] [rbp-31h] BYREF
  _BYTE v33[16]; // [rsp+50h] [rbp-29h] BYREF
  __int128 v34; // [rsp+60h] [rbp-19h] BYREF
  __int64 v35; // [rsp+70h] [rbp-9h]
  int v36; // [rsp+78h] [rbp-1h]
  __int64 v37; // [rsp+80h] [rbp+7h] BYREF
  int v38; // [rsp+88h] [rbp+Fh]
  int v39; // [rsp+8Ch] [rbp+13h]
  __int16 v40; // [rsp+90h] [rbp+17h]
  __int64 v41; // [rsp+98h] [rbp+1Fh]
  __int64 v42; // [rsp+A0h] [rbp+27h]
  int v43; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v44; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v45; // [rsp+F8h] [rbp+7Fh] BYREF

  v2 = a2;
  if ( (unsigned int)(a2 - 1) > 2 )
    v2 = 1;
  v3 = 0;
  v4 = 0;
  DCOBJ::DCOBJ((DCOBJ *)v30, a1);
  if ( v30[0] )
  {
    v45 = *(_QWORD *)(v30[0] + 48LL);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v43, v5, v6, v7);
    NEEDGRELOCK::vLock((NEEDGRELOCK *)v33, (struct PDEVOBJ *)&v45);
    v32 = *(_QWORD *)(v45 + 64);
    GreAcquireSemaphore(v32);
    v38 = 0;
    v39 = 0;
    v42 = 0LL;
    v41 = 0LL;
    v37 = 0LL;
    v8 = v45;
    v40 = 256;
    v34 = 0LL;
    v36 = 1;
    if ( (*(_DWORD *)(v45 + 40) & 1) != 0 )
    {
      *(_QWORD *)&v34 = *(_QWORD *)(v45 + 48);
      v35 = v45;
      GreAcquireSemaphore(v34);
      EtwTraceGreLockAcquireSemaphoreExclusive(L"hsemTrg", v34, 11LL);
      v8 = v45;
    }
    v44 = *(_QWORD *)(v8 + 1808);
    if ( (*(_DWORD *)(v8 + 2172) & 0x100) == 0 )
      goto LABEL_39;
    v31 = ghsemPalette;
    GreAcquireSemaphore(ghsemPalette);
    v9 = v44;
    v10 = *(_DWORD *)(v44 + 24);
    v11 = v10;
    v12 = v10 & 0x1000;
    if ( (v10 & 0x1000) != 0 )
      v3 = 2;
    else
      v3 = (v10 & 0x10000 | 0x8000u) >> 15;
    v13 = v11 & 0x10000;
    if ( v2 == 1 )
    {
      if ( v12 || v13 )
      {
        v14 = *(_DWORD *)(v44 + 60) >> 1;
        if ( (unsigned int)v14 > 0xA )
          v14 = 10LL;
        if ( (_DWORD)v14 )
        {
          v15 = 0LL;
          v16 = (unsigned int)v14;
          do
          {
            v17 = *(_QWORD *)(v9 + 112);
            v43 = *(_DWORD *)(v15 + *((_QWORD *)ppalDefault + 14));
            HIBYTE(v43) = 48;
            *(_DWORD *)(v15 + v17) = v43;
            v15 += 4LL;
            v9 = v44;
            --v16;
          }
          while ( v16 );
        }
        LODWORD(v18) = *(_DWORD *)(v9 + 28);
        LODWORD(v19) = 20;
        if ( (_DWORD)v14 )
        {
          while ( 1 )
          {
            v19 = (unsigned int)(v19 - 1);
            v18 = (unsigned int)(v18 - 1);
            v20 = *(_QWORD *)(v9 + 112);
            v43 = *(_DWORD *)(*((_QWORD *)ppalDefault + 14) + 4 * v19);
            HIBYTE(v43) = 48;
            *(_DWORD *)(v20 + 4 * v18) = v43;
            if ( !--v14 )
              break;
            v9 = v44;
          }
        }
        *(_DWORD *)(*(_QWORD *)(v30[0] + 976LL) + 152LL) |= 0xFu;
        *(_DWORD *)(v44 + 24) &= 0xFFFEEFFF;
        v21 = _InterlockedIncrement(*(volatile signed __int32 **)&ulXlatePalUnique);
        *(_DWORD *)(v44 + 32) = v21;
        v22 = *(_QWORD *)(v44 + 120);
        if ( v22 != v44 )
          *(_DWORD *)(v22 + 32) = v21;
        v4 = 1;
      }
      goto LABEL_34;
    }
    if ( v2 == 2 )
    {
      v23 = *(_DWORD *)(v44 + 28);
      if ( !v23 )
      {
        v3 = 0;
LABEL_34:
        SEMOBJ::vUnlock((SEMOBJ *)&v31);
        if ( v4 && (*(_DWORD *)(v45 + 40) & 0x400) == 0 )
        {
          if ( *(_QWORD *)(v45 + 1768) )
            (*(void (__fastcall **)(_QWORD, __int64 *, _QWORD, _QWORD, _DWORD))(v45 + 1768))(
              *(_QWORD *)(*(_QWORD *)(v45 + 24) + 1800LL),
              &v44,
              0LL,
              0LL,
              *(_DWORD *)(v44 + 28));
          else
            v3 = 0;
        }
LABEL_39:
        DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)&v34);
        if ( v37 )
          DLODCOBJ::vUnlock((DLODCOBJ *)&v37);
        SEMOBJ::vUnlock((SEMOBJ *)&v32);
        NEEDGRELOCK::vUnlock((NEEDGRELOCK *)v33);
        DYNAMICMODECHANGESHARELOCK::~DYNAMICMODECHANGESHARELOCK(v28);
        if ( v30[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v30);
        return v3;
      }
      v24 = 1;
      if ( (unsigned int)(v23 - 1) > 1 )
      {
        do
        {
          v25 = v24++;
          *(_BYTE *)(*(_QWORD *)(v9 + 112) + 4 * v25 + 3) = 0;
          v9 = v44;
        }
        while ( v24 < *(_DWORD *)(v44 + 28) - 1 );
      }
      v26 = *(_DWORD *)(v9 + 24) & 0xFFFEEFFF | 0x1000;
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v44 + 28); v9 = v44 )
      {
        *(_BYTE *)(*(_QWORD *)(v9 + 112) + 4 * i + 3) = 0;
        i = (unsigned int)(i + 1);
      }
      v26 = *(_DWORD *)(v9 + 24) & 0xFFFEEFFF | 0x10000;
    }
    *(_DWORD *)(v9 + 24) = v26;
    goto LABEL_34;
  }
  return v3;
}
