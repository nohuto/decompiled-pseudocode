/*
 * XREFs of DpiDestroyBlockList @ 0x1C02C7234
 * Callers:
 *     DpiInitializeBlockList @ 0x1C0181CF4 (DpiInitializeBlockList.c)
 *     DpiFdoStopAdapter @ 0x1C02CBAD4 (DpiFdoStopAdapter.c)
 * Callees:
 *     ??_V@YAXPEAX@Z @ 0x1C0002C80 (--_V@YAXPEAX@Z.c)
 */

void __fastcall DpiDestroyBlockList(__int64 a1)
{
  void *v2; // rcx
  void *v3; // rcx

  v2 = *(void **)(a1 + 5904);
  if ( v2 )
  {
    operator delete[](v2);
    *(_QWORD *)(a1 + 5904) = 0LL;
  }
  v3 = *(void **)(a1 + 5920);
  if ( v3 )
  {
    operator delete[](v3);
    *(_QWORD *)(a1 + 5920) = 0LL;
  }
}
