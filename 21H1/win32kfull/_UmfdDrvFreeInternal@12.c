/*
 * XREFs of _UmfdDrvFreeInternal@12 @ 0x24A6EA
 * Callers:
 *     _UmfdQueryFontTree@20 @ 0x858C8 (_UmfdQueryFontTree@20.c)
 *     _UmfdDrvFree@8 @ 0xCE1D0 (_UmfdDrvFree@8.c)
 *     _UmfdQueryFont@16 @ 0xDC592 (_UmfdQueryFont@16.c)
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 */

int __fastcall UmfdDrvFreeInternal(int a1, int a2, unsigned int a3)
{
  _DWORD v6[8]; // [esp+8h] [ebp-20h] BYREF

  FontDriverDdiRequest::FontDriverDdiRequest(v6, 9);
  v6[0] = &FreeRequest::`vftable';
  v6[6] = a1;
  v6[7] = a2;
  return UmfdClientSendAndWaitForCompletion(a3, (int)v6);
}
