/*
 * XREFs of _GreUpdateSpriteClipRgn@16 @ 0x239F2
 * Callers:
 *     _xxxSetLayeredWindow@12 @ 0x1F2B8 (_xxxSetLayeredWindow@12.c)
 *     _SelectWindowRgn@12 @ 0x238DE (_SelectWindowRgn@12.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ??0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z @ 0x23BEC (--0PUSHLOCKEX@@QAE@PAU_EX_PUSH_LOCK@@@Z.c)
 *     ??1DWMSPRITELOCK@@QAE@XZ @ 0x245F8 (--1DWMSPRITELOCK@@QAE@XZ.c)
 *     ??0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z @ 0x2464E (--0DWMSPRITELOCK@@QAE@AAVPDEVOBJ@@HH@Z.c)
 *     ??1RGNOBJAPI@@QAE@XZ @ 0x24D20 (--1RGNOBJAPI@@QAE@XZ.c)
 *     ?vSpDwmFlushSpriteClipRgnChange@@YGXPAVSFMLOGICALSURFACE@@@Z @ 0x25234 (-vSpDwmFlushSpriteClipRgnChange@@YGXPAVSFMLOGICALSURFACE@@@Z.c)
 *     _UserGetWindowRect@8 @ 0x253DA (_UserGetWindowRect@8.c)
 */

void __fastcall GreUpdateSpriteClipRgn(struct PDEVOBJ *a1, void *a2, HRGN a3, int a4)
{
  int v5; // esi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v9; // ebx
  REGION *v10; // ecx
  int *v11; // esi
  struct SFMLOGICALSURFACE *v12; // [esp+Ch] [ebp-48h]
  _DWORD v13[2]; // [esp+18h] [ebp-3Ch] BYREF
  int v14; // [esp+20h] [ebp-34h]
  int v15; // [esp+24h] [ebp-30h] BYREF
  int v16; // [esp+28h] [ebp-2Ch] BYREF
  _BYTE v17[4]; // [esp+2Ch] [ebp-28h] BYREF
  struct _POINTL v18; // [esp+30h] [ebp-24h] BYREF
  _DWORD v19[3]; // [esp+38h] [ebp-1Ch] BYREF
  int v20; // [esp+44h] [ebp-10h] BYREF
  int v21; // [esp+48h] [ebp-Ch]
  int v22; // [esp+4Ch] [ebp-8h]
  int v23; // [esp+50h] [ebp-4h]

  DWMSPRITELOCK::DWMSPRITELOCK((DWMSPRITELOCK *)v17, a1, 0, 0);
  GreAcquireSemaphore(_ghsemDwmState);
  EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
  if ( g_pDwmState )
  {
    RGNOBJAPI::RGNOBJAPI((RGNOBJAPI *)v19, a3, 0);
    v5 = 0;
    v6 = DWMALTSPRITEREF::hspLookupWindow(a2);
    if ( !v6 )
    {
LABEL_20:
      if ( v5 )
        _InterlockedDecrement((volatile signed __int32 *)(v5 + 8));
      goto LABEL_22;
    }
    LOBYTE(v7) = 15;
    v8 = HmgLock(v6, v7);
    v5 = v8;
    v14 = v8;
    if ( !v8 )
    {
LABEL_22:
      RGNOBJAPI::~RGNOBJAPI((RGNOBJAPI *)v19);
      goto LABEL_23;
    }
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v16, (struct _EX_PUSH_LOCK *)(v8 + 60));
    v9 = *(_DWORD *)(v5 + 136);
    PUSHLOCKEX::PUSHLOCKEX((PUSHLOCKEX *)&v15, (struct _EX_PUSH_LOCK *)(v9 + 168));
    if ( v19[0] && UserGetWindowRect(*(_DWORD *)(v5 + 24), &v20) )
    {
      if ( !*(_DWORD *)(v9 + 48) )
      {
        RGNMEMOBJ::RGNMEMOBJ((RGNMEMOBJ *)v13);
        if ( v13[0] )
          *(_DWORD *)(v9 + 48) = v13[0];
        if ( v13[1] == 1 )
          RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v13);
      }
      if ( !*(_DWORD *)(v9 + 48) )
        goto LABEL_14;
      v13[0] = *(_DWORD *)(v9 + 48);
      if ( !RGNOBJ::bCopy((RGNOBJ *)v13, (struct RGNOBJ *)v19) )
        goto LABEL_14;
      v18.x = -v20;
      v18.y = -v21;
      if ( RGNOBJ::bOffset((RGNOBJ *)v13, &v18) )
      {
        if ( (*(_BYTE *)(v5 + 132) & 0x20) != 0 )
        {
          v11 = (int *)(v5 + 116);
          v20 = *v11++;
          v21 = *v11++;
          v22 = *v11;
          v23 = v11[1];
          RGNOBJ::vScale(v13, v20, v21, v22, v23);
          v5 = v14;
        }
        *(_DWORD *)(v9 + 48) = v13[0];
        goto LABEL_13;
      }
      RGNOBJ::vDeleteRGNOBJ((RGNOBJ *)v13);
    }
    else
    {
      v10 = *(REGION **)(v9 + 48);
      if ( !v10 )
        goto LABEL_14;
      REGION::vDeleteREGION(v10);
    }
    *(_DWORD *)(v9 + 48) = 0;
LABEL_13:
    *(_DWORD *)(v9 + 164) |= 0x20u;
LABEL_14:
    if ( v15 )
    {
      ExReleasePushLockExclusiveEx(v15, 0);
      KeLeaveCriticalRegion();
    }
    if ( (*(_BYTE *)(v9 + 164) & 1) == 0 || !a4 )
      vSpDwmFlushSpriteClipRgnChange(v12);
    if ( v16 )
    {
      ExReleasePushLockExclusiveEx(v16, 0);
      KeLeaveCriticalRegion();
    }
    goto LABEL_20;
  }
LABEL_23:
  EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
  GreReleaseSemaphoreInternal(_ghsemDwmState);
  DWMSPRITELOCK::~DWMSPRITELOCK((DWMSPRITELOCK *)v17);
}
