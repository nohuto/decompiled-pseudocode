/*
 * XREFs of _GreIsWindowResizeInProgress@8 @ 0xA6C58
 * Callers:
 *     ?xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z @ 0x175D86 (-xxxTM_MoveDragRect@@YGXPAU_MOVESIZEDATA@@J@Z.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

int __thiscall GreIsWindowResizeInProgress(void *this)
{
  int v2; // edi
  int v4; // esi
  int v5; // eax
  int v6; // edx
  int v7; // eax
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  v8 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    v4 = 0;
    v5 = DWMALTSPRITEREF::hspLookupWindow(this);
    if ( v5 )
    {
      LOBYTE(v6) = 15;
      v7 = HmgLock(v5, v6);
      v4 = v7;
      if ( !v7 )
      {
LABEL_3:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
        GreReleaseSemaphoreInternal(_ghsemDwmState);
        goto LABEL_4;
      }
      if ( *(int *)(v7 + 76) >= 1 || *(_DWORD *)(v7 + 84) )
        v2 = 1;
    }
    if ( v4 )
      _InterlockedDecrement((volatile signed __int32 *)(v4 + 8));
    goto LABEL_3;
  }
LABEL_4:
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
  return v2;
}
