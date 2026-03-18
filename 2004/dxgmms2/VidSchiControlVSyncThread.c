/*
 * XREFs of VidSchiControlVSyncThread @ 0x1C0013490
 * Callers:
 *     <none>
 * Callees:
 *     ?NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z @ 0x1C00135E8 (-NumberOfVSyncWaiter@DXGADAPTER@@QEAAKI@Z.c)
 *     ?VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z @ 0x1C002A958 (-VidSchiControlIndependentVidPnVSyncThread@@YAXPEAU_VIDSCH_GLOBAL@@@Z.c)
 *     VidSchiControlVSync @ 0x1C00866B4 (VidSchiControlVSync.c)
 */

void __fastcall VidSchiControlVSyncThread(__int64 a1)
{
  struct _ERESOURCE *v2; // rbp
  char v3; // cl
  signed __int32 v4; // eax
  int v5; // esi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  if ( *(_BYTE *)(a1 + 2132) )
  {
    VidSchiControlIndependentVidPnVSyncThread((struct _VIDSCH_GLOBAL *)a1);
  }
  else
  {
    v2 = (struct _ERESOURCE *)(a1 + 1072);
    ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 1072), 1u);
    v3 = *(_BYTE *)(a1 + 1792);
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 2192), 0, 0);
    if ( v3
      && !v4
      && !*(_DWORD *)(a1 + 1880)
      && !DXGADAPTER::NumberOfVSyncWaiter(*(DXGADAPTER **)(a1 + 16), 0)
      && !*(_DWORD *)(a1 + 732)
      && !*(_DWORD *)(a1 + 804)
      && !*(_DWORD *)(a1 + 1884) )
    {
      v5 = 0;
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 1712), &LockHandle);
      if ( *(_DWORD *)(a1 + 2256) >= *(_DWORD *)(a1 + 2324) )
      {
        *(_DWORD *)(a1 + 2256) = -1;
        v5 = 1;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      if ( v5 )
      {
        VidSchiControlVSync(a1, 0LL, 3LL, 4294967293LL);
        *(_BYTE *)(a1 + 2133) = 1;
      }
    }
    ExReleaseResourceLite(v2);
    _InterlockedExchange((volatile __int32 *)(a1 + 2184), 0);
  }
}
