/*
 * XREFs of _GreWindowBeginLayoutUpdate@8 @ 0xC536E
 * Callers:
 *     _NtUserBeginLayoutUpdate@4 @ 0xAD520 (_NtUserBeginLayoutUpdate@4.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

int __thiscall GreWindowBeginLayoutUpdate(void *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v8; // eax
  int v9; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  v9 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    v3 = 0;
    v4 = DWMALTSPRITEREF::hspLookupWindow(this);
    if ( v4 )
    {
      LOBYTE(v5) = 15;
      v6 = HmgLock(v4, v5);
      v3 = v6;
      if ( !v6 )
      {
LABEL_7:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
        GreReleaseSemaphoreInternal(_ghsemDwmState);
        goto LABEL_8;
      }
      v2 = 1;
      if ( *(int *)(v6 + 76) >= 1 )
      {
        v8 = *(_DWORD *)(v6 + 80);
        if ( v8 > 0 )
          *(_DWORD *)(v3 + 80) = v8 + 1;
      }
    }
    if ( v3 )
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 8));
    goto LABEL_7;
  }
LABEL_8:
  SEMOBJ::vUnlock((SEMOBJ *)&v9);
  return v2;
}
