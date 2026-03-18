/*
 * XREFs of _GreSpDwmSyncCaptureSurfaceBits@28 @ 0x1CE8ED
 * Callers:
 *     _xxxPrintWindow@12 @ 0x153AF9 (_xxxPrintWindow@12.c)
 * Callees:
 *     ?bWrapped@ERECTL@@QBEHXZ @ 0x33892 (-bWrapped@ERECTL@@QBEHXZ.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vOrder@ERECTL@@QAEXXZ @ 0x4E19C (-vOrder@ERECTL@@QAEXXZ.c)
 *     ??XERECTL@@QAEAAV0@ABU_RECTL@@@Z @ 0x4F46A (--XERECTL@@QAEAAV0@ABU_RECTL@@@Z.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z @ 0xB3164 (-bSpDwmUpdateSurface@@YGHPAUHWND__@@_KAAVXDCOBJ@@PAUHSURF__@@MHHAAVERECTL@@PAVREGION@@@Z.c)
 *     @__security_check_cookie@4 @ 0xED840 (@__security_check_cookie@4.c)
 */

BOOL __fastcall GreSpDwmSyncCaptureSurfaceBits(int a1, HDC a2, struct XDCOBJ *a3, HSURF a4, int a5, int a6, int a7)
{
  BOOL updated; // ebx
  int v8; // eax
  int v9; // edx
  _DWORD *v10; // ecx
  int v11; // edi
  unsigned __int64 v13; // [esp+0h] [ebp-94h]
  struct ERECTL *v14; // [esp+1Ch] [ebp-78h]
  struct REGION *v15; // [esp+20h] [ebp-74h]
  _DWORD v16[3]; // [esp+2Ch] [ebp-68h] BYREF
  int v17; // [esp+38h] [ebp-5Ch] BYREF
  int v18; // [esp+3Ch] [ebp-58h]
  int v19[4]; // [esp+40h] [ebp-54h] BYREF
  _BYTE v20[20]; // [esp+50h] [ebp-44h] BYREF
  _DWORD v21[3]; // [esp+64h] [ebp-30h] BYREF
  __int16 v22; // [esp+70h] [ebp-24h]
  int v23[4]; // [esp+80h] [ebp-14h] BYREF

  updated = 0;
  v18 = a1;
  memset(v16, 0, sizeof(v16));
  XDCOBJ::vLock((XDCOBJ *)v16, a2);
  if ( v16[0] )
  {
    v8 = *(_DWORD *)(v16[0] + 28) & 1;
    v9 = *(_DWORD *)(v16[0] + 8 * v8 + 1052);
    v23[0] = *(_DWORD *)(v16[0] + 8 * v8 + 1048);
    v23[2] = v23[0] + a6;
    v23[1] = v9;
    v23[3] = v9 + a7;
    ERECTL::vOrder((ERECTL *)v23);
    GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"hsem", _ghsemDynamicModeChange);
    v17 = _ghsemGreLock;
    GreAcquireSemaphore(_ghsemGreLock);
    memset(v21, 0, sizeof(v21));
    v22 = 256;
    DEVLOCKOBJ::bLock((DEVLOCKOBJ *)v20, (struct XDCOBJ *)v16, 0);
    if ( (v20[12] & 1) != 0 && (v10 = *(_DWORD **)(v16[0] + 504)) != 0 )
    {
      v11 = v10[5];
      v19[2] = v10[8];
      v19[3] = v10[9];
      v19[0] = 0;
      v19[1] = 0;
      ERECTL::operator*=(v23, v19);
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
      if ( v21[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v21);
      SEMOBJ::vUnlock((SEMOBJ *)&v17);
      EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
      if ( !ERECTL::bWrapped((ERECTL *)v23) && !KeAreApcsDisabled() )
      {
        HIDWORD(v13) = v11;
        LODWORD(v13) = 0;
        updated = bSpDwmUpdateSurface((struct XDCOBJ *)v16, v18, 0, v13, a3, a4, a5, (struct ERECTL *)v23, 0, v14, v15);
      }
    }
    else
    {
      DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v20);
      if ( v21[0] )
        DLODCOBJ::vUnlock((DLODCOBJ *)v21);
      SEMOBJ::vUnlock((SEMOBJ *)&v17);
      EtwTraceGreLockReleaseSemaphore(L"hsem", _ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
    }
    if ( v16[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v16);
  }
  return updated;
}
