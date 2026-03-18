/*
 * XREFs of _GreRealizeDefaultPalette@8 @ 0x12656
 * Callers:
 *     ?xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z @ 0x16172 (-xxxDesktopWndProcWorker@@YGJPAUtagWND@@IIJ@Z.c)
 *     _xxxFlushPalette@4 @ 0x1962C9 (_xxxFlushPalette@4.c)
 * Callees:
 *     ??0DYNAMICMODECHANGESHARELOCK@@QAE@XZ @ 0x213BE (--0DYNAMICMODECHANGESHARELOCK@@QAE@XZ.c)
 *     ?vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z @ 0x219D2 (-vLock@DEVLOCKOBJ@@QAEXAAVPDEVOBJ@@@Z.c)
 *     ?vUnlock@DLODCOBJ@@QAEXXZ @ 0x4E14A (-vUnlock@DLODCOBJ@@QAEXXZ.c)
 *     ?vLock@XDCOBJ@@QAEXPAUHDC__@@@Z @ 0x5A410 (-vLock@XDCOBJ@@QAEXPAUHDC__@@@Z.c)
 *     ?vUnlockFast@XDCOBJ@@QAEXXZ @ 0x5E684 (-vUnlockFast@XDCOBJ@@QAEXXZ.c)
 *     ?vDestructor@DEVLOCKOBJ@@QAEXXZ @ 0x5E730 (-vDestructor@DEVLOCKOBJ@@QAEXXZ.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     _GreSetSystemPaletteUse@8 @ 0x21E4BA (_GreSetSystemPaletteUse@8.c)
 */

// write access to const memory has been detected, the output may be wrong!
int __thiscall GreRealizeDefaultPalette(HDC this)
{
  _DWORD *v3; // esi
  unsigned int v4; // ecx
  unsigned int v5; // edx
  signed __int32 v6; // ebx
  _DWORD *v7; // eax
  int v8; // [esp+10h] [ebp-50h] BYREF
  _DWORD *v9; // [esp+14h] [ebp-4Ch] BYREF
  int v10; // [esp+18h] [ebp-48h] BYREF
  int v11; // [esp+1Ch] [ebp-44h] BYREF
  int v12; // [esp+20h] [ebp-40h] BYREF
  _DWORD v13[3]; // [esp+24h] [ebp-3Ch] BYREF
  _BYTE v14[20]; // [esp+30h] [ebp-30h] BYREF
  _DWORD v15[3]; // [esp+44h] [ebp-1Ch] BYREF
  char v16; // [esp+50h] [ebp-10h]
  char v17; // [esp+51h] [ebp-Fh]

  memset(v13, 0, sizeof(v13));
  XDCOBJ::vLock((XDCOBJ *)v13, this);
  if ( v13[0] )
  {
    v9 = *(_DWORD **)(v13[0] + 36);
    DYNAMICMODECHANGESHARELOCK::DYNAMICMODECHANGESHARELOCK((DYNAMICMODECHANGESHARELOCK *)((char *)&v8 + 3));
    NEEDGRELOCK::vLock((NEEDGRELOCK *)&v12, (struct PDEVOBJ *)&v9);
    v11 = v9[10];
    GreAcquireSemaphore(v11);
    memset(v15, 0, sizeof(v15));
    v16 = 0;
    v17 = 1;
    DEVLOCKOBJ::vLock((DEVLOCKOBJ *)v14, (struct PDEVOBJ *)&v9);
    if ( (v9[364] & 0x100) != 0 )
    {
      v3 = (_DWORD *)v9[278];
      v10 = _ghsemPalette;
      GreAcquireSemaphore(_ghsemPalette);
      if ( ((unsigned int)_tlgWriteTemplate<long __stdcall (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<8>> & v3[4]) != 0 )
        GreSetSystemPaletteUse(this);
      v4 = v3[11] >> 1;
      v5 = v3[5] - v4;
      while ( v4 < v5 )
        *(_BYTE *)(v3[19] + 4 * v4++ + 3) &= ~0x20u;
      hForePalette = 0;
      v6 = _InterlockedIncrement((volatile signed __int32 *)ulXlatePalUnique);
      v7 = (_DWORD *)v3[20];
      v3[6] = v6;
      if ( v7 != v3 )
        v7[6] = v6;
      *(_DWORD *)(*(_DWORD *)(v13[0] + 1020) + 184) |= 0xFu;
      SEMOBJ::vUnlock((SEMOBJ *)&v10);
    }
    DEVLOCKOBJ::vDestructor((DEVLOCKOBJ *)v14);
    if ( v15[0] )
      DLODCOBJ::vUnlock((DLODCOBJ *)v15);
    SEMOBJ::vUnlock((SEMOBJ *)&v11);
    NEEDGRELOCK::vUnlock((NEEDGRELOCK *)&v12);
    EtwTraceGreLockReleaseSemaphore(L"ghsemDynamicModeChange", _ghsemDynamicModeChange);
    GreReleaseSemaphoreInternal(_ghsemDynamicModeChange);
    if ( v13[0] )
      XDCOBJ::vUnlockFast((XDCOBJ *)v13);
  }
  return 0;
}
