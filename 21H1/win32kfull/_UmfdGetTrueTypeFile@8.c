/*
 * XREFs of _UmfdGetTrueTypeFile@8 @ 0x24A7D5
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 */

int __stdcall UmfdGetTrueTypeFile(int a1, _DWORD *a2)
{
  _DWORD v3[8]; // [esp+8h] [ebp-28h] BYREF
  int v4; // [esp+28h] [ebp-8h]
  int v5; // [esp+2Ch] [ebp-4h]

  *a2 = 0;
  FontDriverDdiRequest::FontDriverDdiRequest(v3, 12);
  v5 = 0;
  v4 = 0;
  v3[0] = &GetTrueTypeFileRequest::`vftable';
  v3[6] = a1;
  v3[7] = a2;
  if ( UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a1 + 4), (int)v3) >= 0 )
    return v4;
  else
    return 0;
}
