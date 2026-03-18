/*
 * XREFs of _GreGetWindowResizeTelemetry@16 @ 0x1CE370
 * Callers:
 *     ?TraceWindowResizeTelemetry@@YGXPAUtagWND@@@Z @ 0x172453 (-TraceWindowResizeTelemetry@@YGXPAUtagWND@@@Z.c)
 * Callees:
 *     ?hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z @ 0x2387E (-hspLookupWindow@DWMALTSPRITEREF@@SGPAUHSPRITE__@@PAUHWND__@@@Z.c)
 *     ?vUnlock@SEMOBJ@@QAEXXZ @ 0x98AE4 (-vUnlock@SEMOBJ@@QAEXXZ.c)
 */

int __fastcall GreGetWindowResizeTelemetry(void *a1, int *a2, _DWORD *a3, _DWORD *a4)
{
  int v5; // edi
  int v6; // esi
  int v7; // eax
  int v8; // edx
  int v9; // eax
  unsigned int v10; // ecx
  int v11; // eax
  int *v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v16; // [esp+Ch] [ebp-8h] BYREF
  int *v17; // [esp+10h] [ebp-4h]

  v17 = a2;
  v5 = 0;
  v16 = _ghsemGreLock;
  GreAcquireSemaphore(_ghsemGreLock);
  if ( g_pDwmState )
  {
    GreAcquireSemaphore(_ghsemDwmState);
    EtwTraceGreLockAcquireSemaphoreExclusive(L"ghsemDwmState", _ghsemDwmState, 7);
    v6 = 0;
    v7 = DWMALTSPRITEREF::hspLookupWindow(a1);
    if ( v7 )
    {
      LOBYTE(v8) = 15;
      v9 = HmgLock(v7, v8);
      v6 = v9;
      if ( !v9 )
      {
LABEL_8:
        EtwTraceGreLockReleaseSemaphore(L"ghsemDwmState", _ghsemDwmState);
        GreReleaseSemaphoreInternal(_ghsemDwmState);
        goto LABEL_9;
      }
      v10 = *(_DWORD *)(v9 + 96);
      if ( v10 )
      {
        v11 = *(_DWORD *)(v9 + 92) / v10;
        v12 = v17;
        *(_DWORD *)(v6 + 92) = 0;
        *(_DWORD *)(v6 + 96) = 0;
        *v12 = v11;
        v13 = *(_DWORD *)(v6 + 88);
        *(_DWORD *)(v6 + 88) = 0;
        *a3 = v13;
        v14 = *(_DWORD *)(v6 + 112);
        *(_DWORD *)(v6 + 112) = 0;
        v5 = 1;
        *a4 = v14;
      }
    }
    if ( v6 )
      _InterlockedDecrement((volatile signed __int32 *)(v6 + 8));
    goto LABEL_8;
  }
LABEL_9:
  SEMOBJ::vUnlock((SEMOBJ *)&v16);
  return v5;
}
