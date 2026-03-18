/*
 * XREFs of _GreConfirmWindowResizeCommit@4 @ 0x1CDF50
 * Callers:
 *     _NtUserConfirmResizeCommit@4 @ 0x160672 (_NtUserConfirmResizeCommit@4.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

int __thiscall GreConfirmWindowResizeCommit(void *this)
{
  int v2; // edi
  int v3; // esi
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v8; // [esp+Ch] [ebp-4h] BYREF

  v2 = 0;
  v8 = _ghsemGreLock;
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
      *(_DWORD *)(v6 + 84) = 0;
      v2 = 1;
    }
    if ( v3 )
      _InterlockedDecrement((volatile signed __int32 *)(v3 + 8));
    goto LABEL_7;
  }
LABEL_8:
  SEMOBJ::vUnlock((SEMOBJ *)&v8);
  return v2;
}
