/*
 * XREFs of _GreSetDIBitsInternal@40 @ 0x226CEF
 * Callers:
 *     _GreCreateDIBitmapComp@44 @ 0x226A90 (_GreCreateDIBitmapComp@44.c)
 *     _GreSetDIBits@28 @ 0x226C73 (_GreSetDIBits@28.c)
 * Callees:
 *     _GreSetDIBitsToDeviceInternal@64 @ 0x4E312 (_GreSetDIBitsToDeviceInternal@64.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 */

LONG __fastcall GreSetDIBitsInternal(
        HDC a1,
        int a2,
        int a3,
        LONG a4,
        void *a5,
        _DWORD *a6,
        unsigned int a7,
        ULONG a8,
        unsigned int a9,
        int a10)
{
  LONG v11; // edi
  int v13; // eax
  int v14; // eax
  int v15; // edx
  _DWORD *v16; // eax
  _DWORD *v17; // esi
  HDC CompatibleDC; // edi
  _DWORD v20[3]; // [esp+Ch] [ebp-28h] BYREF
  HDC v21; // [esp+18h] [ebp-1Ch]
  int v22; // [esp+1Ch] [ebp-18h]
  int v23; // [esp+20h] [ebp-14h]
  int v24; // [esp+24h] [ebp-10h]
  int v25; // [esp+28h] [ebp-Ch]
  HDC v26; // [esp+2Ch] [ebp-8h]
  LONG v27; // [esp+30h] [ebp-4h]
  int v28; // [esp+48h] [ebp+14h]
  int v29; // [esp+48h] [ebp+14h]

  v11 = 0;
  v26 = a1;
  v24 = 0;
  v23 = a2;
  v27 = 0;
  if ( !a6 || *a6 >= 0x28u && ((v13 = a6[4], v13 == 4) || v13 == 5) )
  {
    EngSetLastError(0x57u);
  }
  else
  {
    v22 = a6[1];
    v14 = a6[2];
    if ( v14 < 0 )
      v14 = -v14;
    v25 = v14;
    GreAcquireSemaphoreSharedInternal(_ghsemDynamicModeChange);
    EtwTraceGreLockAcquireSemaphoreShared(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    LOBYTE(v15) = 5;
    v16 = (_DWORD *)HmgShareLockCheck(a2, v15);
    v17 = v16;
    if ( v16 && (v16[18] & 0x4000000) != 0 )
    {
      if ( v16[28] )
        CompatibleDC = (HDC)v16[27];
      else
        CompatibleDC = 0;
      v21 = CompatibleDC;
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
      if ( CompatibleDC || (CompatibleDC = (HDC)GreCreateCompatibleDC(v26)) != 0 )
      {
        v28 = 1;
        if ( !v26 )
          goto LABEL_21;
        memset(v20, 0, sizeof(v20));
        XDCOBJ::vLock((XDCOBJ *)v20, v26);
        if ( v20[0] )
        {
          v24 = GreSelectPalette(CompatibleDC, *(_DWORD *)(v20[0] + 56), 1);
        }
        else
        {
          EngSetLastError(6u);
          v28 = 0;
        }
        if ( v20[0] )
          XDCOBJ::vUnlockFast((XDCOBJ *)v20);
        if ( v28 )
        {
LABEL_21:
          v29 = GreSelectBitmap(CompatibleDC, v23);
          if ( v29 )
          {
            v27 = GreSetDIBitsToDeviceInternal(
                    CompatibleDC,
                    0,
                    0,
                    v22,
                    v25,
                    0,
                    0,
                    0,
                    a4,
                    a5,
                    (int)a6,
                    a7,
                    a8,
                    a9,
                    0,
                    a10);
            if ( v24 )
              GreSelectPalette(CompatibleDC, v24, 1);
            GreSelectBitmap(CompatibleDC, v29);
          }
        }
        if ( !v21 )
          bDeleteDCInternal(CompatibleDC, 1, 0, 0);
      }
      v11 = v27;
    }
    else
    {
      EngSetLastError(6u);
      EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
      GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
    }
    if ( v17 )
      DEC_SHARE_REF_CNT(v17);
  }
  return v11;
}
