/*
 * XREFs of _GreResetDCInternal@20 @ 0x201023
 * Callers:
 *     _NtGdiResetDC@20 @ 0x213E5F (_NtGdiResetDC@20.c)
 * Callees:
 *     ?pSurface@DC@@QAEXPAVSURFACE@@@Z @ 0x11CAA (-pSurface@DC@@QAEXPAVSURFACE@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

int __fastcall GreResetDCInternal(HDC a1, int a2, int *a3, int a4, int a5)
{
  BOOL v5; // ebx
  int v6; // edi
  DC *v7; // esi
  int v8; // esi
  int v9; // eax
  DC *v10; // eax
  bool v11; // zf
  HDC v12; // eax
  DC *v13; // ecx
  void (__stdcall *v14)(_DWORD, _DWORD); // ecx
  int v15; // eax
  int v16; // ecx
  DC *v17; // edx
  void (__stdcall *v18)(int, _DWORD, _DWORD); // edx
  DC *v20; // [esp+Ch] [ebp-34h] BYREF
  int v21; // [esp+10h] [ebp-30h]
  int v22; // [esp+14h] [ebp-2Ch]
  DC *v23[3]; // [esp+18h] [ebp-28h] BYREF
  int v24; // [esp+24h] [ebp-1Ch]
  int v25; // [esp+28h] [ebp-18h]
  int v26; // [esp+2Ch] [ebp-14h]
  int v27; // [esp+30h] [ebp-10h]
  HDC v28; // [esp+34h] [ebp-Ch]
  HDC v29; // [esp+38h] [ebp-8h]
  BOOL v30; // [esp+3Ch] [ebp-4h]

  v25 = a2;
  v28 = a1;
  v5 = 0;
  v27 = 0;
  v29 = 0;
  v6 = 0;
  memset(v23, 0, sizeof(v23));
  XDCOBJ::vLock((XDCOBJ *)v23, a1);
  v7 = v23[0];
  if ( !v23[0] )
  {
    EngSetLastError(6u);
LABEL_20:
    v10 = v23[0];
    goto LABEL_21;
  }
  v27 = *((_DWORD *)v23[0] + 6) & 0x800;
  if ( v27 )
  {
    DC::bMakeInfoDC(v23[0], 0);
    v7 = v23[0];
  }
  v8 = *((_DWORD *)v7 + 9);
  v9 = *(_DWORD *)(v8 + 1060);
  *(_DWORD *)(v8 + 1060) = 0;
  v26 = v9;
  v10 = v23[0];
  if ( (*((_DWORD *)v23[0] + 6) & 0x100) == 0 && *((_DWORD *)v23[0] + 5) != 1 && *(char *)(v8 + 24) < 0 )
  {
    v11 = *((_DWORD *)v23[0] + 126) == 0;
    v24 = *((_DWORD *)v23[0] + 18);
    v30 = !v11;
    v5 = v30;
    if ( XDCOBJ::bCleanDC((XDCOBJ *)v23, 0) )
    {
      if ( *(_DWORD *)(v8 + 4) == 1 )
      {
        v12 = (HDC)hdcOpenDCW(byte_FC318, v25, 0, 0, *(_DWORD *)(v8 + 1824), v26, a4, a5, 0);
        v29 = v12;
        if ( v12 )
        {
          *(_DWORD *)(v8 + 1824) = 0;
          v20 = 0;
          v21 = 0;
          v22 = 0;
          XDCOBJ::vLock((XDCOBJ *)&v20, v12);
          v13 = v20;
          if ( v20 )
          {
            if ( v24 > 0 )
            {
              *((_DWORD *)v20 + 18) = *((_DWORD *)v20 + 17);
              v13 = v20;
            }
            *((_DWORD *)v13 + 454) = *((_DWORD *)v23[0] + 454);
            *((_DWORD *)v23[0] + 454) = 0;
            *((_DWORD *)v20 + 455) = *((_DWORD *)v23[0] + 455);
            *((_DWORD *)v23[0] + 455) = 0;
            v14 = *(void (__stdcall **)(_DWORD, _DWORD))(v8 + 1928);
            if ( v14 )
              v14(*(_DWORD *)(v8 + 1108), *(_DWORD *)(*((_DWORD *)v20 + 9) + 1108));
            GreAcquireHmgrSemaphore();
            HmgSwapLockedHandleContents(v28, 0, v29, 0, 1);
            GreReleaseHmgrSemaphore();
            v6 = 1;
          }
          else
          {
            EngSetLastError(6u);
          }
          v5 = v30;
          if ( v20 )
            XDCOBJ::vUnlockFast((XDCOBJ *)&v20);
        }
      }
    }
    goto LABEL_20;
  }
LABEL_21:
  if ( v10 )
    XDCOBJ::vUnlockFast((XDCOBJ *)v23);
  if ( v6 )
  {
    bDeleteDCInternal(v29, 1, 0, 0);
    v20 = 0;
    v21 = 0;
    v22 = 0;
    XDCOBJ::vLock((XDCOBJ *)&v20, v28);
    if ( !v20 )
    {
      EngSetLastError(6u);
LABEL_26:
      v6 = 0;
LABEL_38:
      if ( v20 )
        XDCOBJ::vUnlockFast((XDCOBJ *)&v20);
      return v6;
    }
    a5 = *((_DWORD *)v20 + 9);
    if ( v5 )
    {
      if ( !PDEVOBJ::bMakeSurface((PDEVOBJ *)&a5, 0) )
        goto LABEL_26;
      DC::pSurface(v20, *(struct SURFACE **)(a5 + 1820));
      v15 = a5;
      v11 = (*(_DWORD *)(*(_DWORD *)(a5 + 1820) + 72) & 0x2000000) == 0;
      *a3 = *(_DWORD *)(*(_DWORD *)(a5 + 1820) + 72) & 0x2000000;
      if ( !v11 )
      {
        v16 = *(_DWORD *)(v15 + 1820);
        v17 = v20;
        *((_DWORD *)v20 + 128) = *(_DWORD *)(v16 + 32);
        *((_DWORD *)v17 + 129) = *(_DWORD *)(v16 + 36);
        DC::bSetDefaultRegion(v20);
        v15 = a5;
      }
      v18 = *(void (__stdcall **)(int, _DWORD, _DWORD))(v15 + 2040);
      if ( v18 )
        v18(*(_DWORD *)(v15 + 1820) != 0 ? *(_DWORD *)(v15 + 1820) + 16 : 0, 0, 0);
      else
        v6 = 0;
    }
    else
    {
      *a3 = 0;
    }
    if ( v6 && v27 )
      DC::bMakeInfoDC(v20, 1);
    goto LABEL_38;
  }
  return v6;
}
