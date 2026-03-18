/*
 * XREFs of ?MapVidPnTargetToVidPnSource@ADAPTER_DISPLAY@@QEAAII@Z @ 0x1C002A27C
 * Callers:
 *     VidSchDdiNotifyInterruptWorker @ 0x1C000D330 (VidSchDdiNotifyInterruptWorker.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ADAPTER_DISPLAY::MapVidPnTargetToVidPnSource(ADAPTER_DISPLAY *this, int a2)
{
  unsigned int v2; // r9d
  unsigned int v3; // r8d

  v2 = *((_DWORD *)this + 20);
  v3 = 0;
  if ( !v2 )
    return 0xFFFFFFFFLL;
  while ( *(_DWORD *)(3968LL * v3 + *((_QWORD *)this + 14) + 1068) != a2 )
  {
    if ( ++v3 >= v2 )
      return 0xFFFFFFFFLL;
  }
  return v3;
}
