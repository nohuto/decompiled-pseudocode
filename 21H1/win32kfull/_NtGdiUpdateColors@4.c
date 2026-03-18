/*
 * XREFs of _NtGdiUpdateColors@4 @ 0x21EB48
 * Callers:
 *     <none>
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?bEmpty@ERECTL@@QBEHXZ @ 0x4F396 (-bEmpty@ERECTL@@QBEHXZ.c)
 *     ?prgnVisSnap@DC@@QBEPAVREGION@@XZ @ 0x53684 (-prgnVisSnap@DC@@QBEPAVREGION@@XZ.c)
 *     ?prgnRao@DC@@QBEPAVREGION@@XZ @ 0x538E8 (-prgnRao@DC@@QBEPAVREGION@@XZ.c)
 *     ?vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z @ 0x56734 (-vAccumulateTight@XDCOBJ@@QAEXPAVECLIPOBJ@@AAVERECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?bFullScreen@XDCOBJ@@QAEHXZ @ 0x78918 (-bFullScreen@XDCOBJ@@QAEHXZ.c)
 *     ?bValidSurf@XDCOBJ@@QAEHXZ @ 0x79436 (-bValidSurf@XDCOBJ@@QAEHXZ.c)
 *     ?vAltUnlock@EXLATEOBJ@@QAEXXZ @ 0x794B6 (-vAltUnlock@EXLATEOBJ@@QAEXXZ.c)
 *     ?vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z @ 0x7B8B6 (-vAccumulate@XDCOBJ@@QAEXAAVERECTL@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 *     ?MulUpdateColors@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@@Z @ 0x205367 (-MulUpdateColors@@YGHPAU_SURFOBJ@@PAU_CLIPOBJ@@PAU_XLATEOBJ@@@Z.c)
 *     ??0XLATEMEMOBJ@@QAE@VXEPALOBJ@@0@Z @ 0x225896 (--0XLATEMEMOBJ@@QAE@VXEPALOBJ@@0@Z.c)
 */

int __stdcall NtGdiUpdateColors(HDC a1)
{
  int v1; // ebx
  int v2; // esi
  int v3; // eax
  bool v4; // zf
  struct _SURFOBJ *v5; // eax
  int v6; // edi
  DC *v7; // ecx
  struct REGION *v8; // eax
  int v9; // ecx
  struct ECLIPOBJ *v10; // ecx
  int v11; // eax
  int updated; // eax
  int v13; // eax
  struct _CLIPOBJ *v15; // [esp+4h] [ebp-F8h]
  struct _XLATEOBJ *v16; // [esp+8h] [ebp-F4h]
  struct _SURFOBJ *v17; // [esp+14h] [ebp-E8h] BYREF
  int v18; // [esp+18h] [ebp-E4h]
  DC *v19[3]; // [esp+1Ch] [ebp-E0h] BYREF
  char v20; // [esp+2Bh] [ebp-D1h] BYREF
  int v21; // [esp+2Ch] [ebp-D0h]
  int v22; // [esp+30h] [ebp-CCh]
  _BYTE v23[20]; // [esp+34h] [ebp-C8h] BYREF
  _DWORD v24[3]; // [esp+48h] [ebp-B4h] BYREF
  __int16 v25; // [esp+54h] [ebp-A8h]
  LONG v26[4]; // [esp+64h] [ebp-98h] BYREF
  struct _CLIPOBJ v27[2]; // [esp+74h] [ebp-88h] BYREF
  int v28; // [esp+B8h] [ebp-44h]
  int v29; // [esp+BCh] [ebp-40h]
  int v30; // [esp+E4h] [ebp-18h]
  int v31; // [esp+ECh] [ebp-10h]

  v1 = 0;
  v18 = 0;
  memset(v19, 0, sizeof(v19));
  XDCOBJ::vLock((XDCOBJ *)v19, a1);
  if ( XDCOBJ::bValidSurf(v19) )
  {
    v21 = *((_DWORD *)v19[0] + 9);
    v2 = v21;
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)&v20);
    memset(v24, 0, sizeof(v24));
    v25 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v23, (struct XDCOBJ *)v19, 0);
    if ( (*(_DWORD *)(v2 + 1456) & 0x100) != 0
      && (v3 = *((_DWORD *)v19[0] + 126), v22 = v3, v3 == *(_DWORD *)(v2 + 1820)) )
    {
      v4 = (*((_BYTE *)v19[0] + 24) & 0xE0) == 0;
      v5 = *(struct _SURFOBJ **)(v3 + 88);
      v6 = *((_DWORD *)v19[0] + 15);
      v17 = v5;
      if ( !v4 )
      {
        XDCOBJ::vAccumulate((XDCOBJ *)v19, (DC *)((char *)v19[0] + 1064));
        v5 = v17;
      }
      if ( (v23[12] & 1) != 0 )
      {
        if ( *(_DWORD *)(v6 + 56) && *(_DWORD *)(v6 + 60) )
        {
          XLATEMEMOBJ::XLATEMEMOBJ(&v17, v5, v6);
          if ( v17 )
          {
            if ( DC::prgnRao(v19[0]) )
              v8 = DC::prgnRao(v7);
            else
              v8 = DC::prgnVisSnap(v7);
            v28 = 0;
            v29 = 0;
            v31 = 0;
            v30 = 1;
            XCLIPOBJ::vSetup((XCLIPOBJ *)v27, v8, (struct ERECTL *)(v9 + 1064), 0);
            if ( ERECTL::bEmpty((ERECTL *)&v27[0].rclBounds) )
            {
              v18 = 1;
            }
            else
            {
              if ( (*((_BYTE *)v19[0] + 24) & 0xE0) != 0 )
              {
                v26[0] = *(_DWORD *)v10;
                v26[1] = *((_DWORD *)v10 + 1);
                v26[2] = *((_DWORD *)v10 + 2);
                v26[3] = *((_DWORD *)v10 + 3);
                XDCOBJ::vAccumulateTight((XDCOBJ *)v19, v10, v26);
                v2 = v21;
              }
              v11 = v22;
              ++*(_DWORD *)(v22 + 56);
              if ( ((unsigned int)&loc_20000 & *(_DWORD *)(v2 + 24)) != 0 )
              {
                updated = MulUpdateColors(v27, v11 + 16, v17, v15, v16);
              }
              else if ( (*(_DWORD *)(v11 + 72) & 0x400) != 0 )
              {
                updated = (*(int (__stdcall **)(int, int, struct _CLIPOBJ *, struct _SURFOBJ *, RECTL *, RECTL *))(v2 + 1976))(
                            v11 + 16,
                            v11 + 16,
                            v27,
                            v17,
                            &v27[0].rclBounds,
                            &v27[0].rclBounds);
              }
              else
              {
                updated = EngCopyBits(
                            (SURFOBJ *)(v11 + 16),
                            (SURFOBJ *)(v11 + 16),
                            v27,
                            (XLATEOBJ *)v17,
                            &v27[0].rclBounds,
                            (POINTL *)&v27[0].rclBounds);
              }
              v18 = updated;
            }
            FreeThreadBufferWithTag(v17);
            v17 = 0;
          }
          EXLATEOBJ::vAltUnlock((EXLATEOBJ *)&v17);
          v13 = v18;
        }
        else
        {
          v13 = 1;
        }
      }
      else
      {
        v13 = XDCOBJ::bFullScreen(v19);
      }
    }
    else
    {
      v13 = 0;
    }
    v1 = v13;
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v23);
    if ( v24[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v24);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
  }
  if ( v19[0] )
    XDCOBJ::vUnlockFast((XDCOBJ *)v19);
  return v1;
}
