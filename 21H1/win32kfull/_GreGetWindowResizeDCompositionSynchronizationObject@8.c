/*
 * XREFs of _GreGetWindowResizeDCompositionSynchronizationObject@8 @ 0xA6B0E
 * Callers:
 *     ?GetResizeDCompositionSynchronizationObject@@YGHPAUHWND__@@PAPAUCompositionObject@@@Z @ 0xA6A46 (-GetResizeDCompositionSynchronizationObject@@YGHPAUHWND__@@PAPAUCompositionObject@@@Z.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

int __fastcall GreGetWindowResizeDCompositionSynchronizationObject(void *a1, _DWORD *a2)
{
  int v3; // edi
  int v4; // eax
  int v5; // edx
  int v6; // eax
  int v7; // esi
  int v8; // eax
  int v10; // [esp+Ch] [ebp-8h] BYREF
  _DWORD *v11; // [esp+10h] [ebp-4h]

  v11 = a2;
  v3 = 0;
  v10 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    v4 = DWMALTSPRITEREF::hspLookupWindow(a1);
    if ( v4 )
    {
      LOBYTE(v5) = 15;
      v6 = HmgLock(v4, v5);
      v7 = v6;
      if ( v6 )
      {
        v8 = *(_DWORD *)(v6 + 64);
        if ( v8 )
        {
          ObfReferenceObject(*(PVOID *)(v7 + 64));
          v8 = *(_DWORD *)(v7 + 64);
        }
        v3 = 1;
        *v11 = v8;
        _InterlockedDecrement((volatile signed __int32 *)(v7 + 8));
      }
    }
    EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
    GreReleaseSemaphoreInternal(_ghsemDwmState);
  }
  SEMOBJ::vUnlock((SEMOBJ *)&v10);
  return v3;
}
