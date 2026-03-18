/*
 * XREFs of _UmfdQueryFontFile@16 @ 0xDEBA2
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 */

int __stdcall UmfdQueryFontFile(int a1, int a2, int a3, int a4)
{
  _DWORD v5[10]; // [esp+0h] [ebp-30h] BYREF
  int v6; // [esp+28h] [ebp-8h]
  int v7; // [esp+2Ch] [ebp-4h]

  FontDriverDdiRequest::FontDriverDdiRequest(v5, 6);
  v7 = 0;
  v6 = -1;
  v5[7] = a2;
  v5[8] = a3;
  v5[0] = &QueryFontFileRequest::`vftable';
  v5[6] = a1;
  v5[9] = a4;
  if ( UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a1 + 4), (int)v5) < 0 )
    return -1;
  else
    return v6;
}
