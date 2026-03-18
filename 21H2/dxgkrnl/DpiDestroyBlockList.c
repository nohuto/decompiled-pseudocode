/*
 * XREFs of DpiDestroyBlockList @ 0x1C0387E4C
 * Callers:
 *     DpiInitializeBlockList @ 0x1C01FA674 (DpiInitializeBlockList.c)
 *     DpiFdoStopAdapter @ 0x1C038B430 (DpiFdoStopAdapter.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C000D990 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DpiDestroyBlockList(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 5696);
  if ( v2 )
  {
    operator delete[](v2);
    *(_QWORD *)(a1 + 5696) = 0LL;
  }
  v3 = *(void **)(a1 + 5712);
  if ( v3 )
  {
    operator delete[](v3);
    *(_QWORD *)(a1 + 5712) = 0LL;
  }
}
