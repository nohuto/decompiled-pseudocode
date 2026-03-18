/*
 * XREFs of _GreWindowLayoutComplete@16 @ 0xA8D24
 * Callers:
 *     _NtUserLayoutCompleted@4 @ 0xA8C00 (_NtUserLayoutCompleted@4.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 *     ?CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z @ 0x1CCD3C (-CheckAndProcessWindowResizeComplete@@YGXPAVDWMSPRITE@@HPAH@Z.c)
 */

int __thiscall GreWindowLayoutComplete(void *this, int a2, _DWORD *a3)
{
  int v3; // edi
  int v4; // ebx
  int v5; // esi
  int v6; // eax
  int v7; // edx
  int v8; // eax
  int v10; // eax
  int v11; // [esp+0h] [ebp-18h]
  int *v12; // [esp+4h] [ebp-14h]
  int v13; // [esp+Ch] [ebp-Ch] BYREF
  void *v14; // [esp+10h] [ebp-8h]
  int v15; // [esp+14h] [ebp-4h] BYREF

  v14 = this;
  v3 = 0;
  v4 = 0;
  v15 = 0;
  v13 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    v5 = 0;
    v6 = DWMALTSPRITEREF::hspLookupWindow(v14);
    if ( v6 )
    {
      LOBYTE(v7) = 15;
      v8 = HmgLock(v6, v7);
      v5 = v8;
      if ( !v8 )
      {
LABEL_7:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
        GreReleaseSemaphoreInternal(_ghsemDwmState);
        goto LABEL_8;
      }
      v3 = 1;
      if ( *(int *)(v8 + 76) >= 1 )
      {
        v10 = *(_DWORD *)(v8 + 80);
        if ( v10 > 0 )
        {
          *(_DWORD *)(v5 + 80) = v10 - 1;
          CheckAndProcessWindowResizeComplete((struct DWMSPRITE *)&v15, v11, v12);
          v4 = v15;
        }
      }
    }
    if ( v5 )
      _InterlockedDecrement((volatile signed __int32 *)(v5 + 8));
    goto LABEL_7;
  }
LABEL_8:
  *a3 = v4;
  SEMOBJ::vUnlock((SEMOBJ *)&v13);
  return v3;
}
