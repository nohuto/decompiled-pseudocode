/*
 * XREFs of _UmfdEscape@24 @ 0x24A72A
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 */

int __stdcall UmfdEscape(int a1, int a2, int a3, int a4, int a5, int a6)
{
  _DWORD v7[12]; // [esp+0h] [ebp-3Ch] BYREF
  int v8; // [esp+30h] [ebp-Ch]
  int v9; // [esp+34h] [ebp-8h]
  int v10; // [esp+38h] [ebp-4h]

  FontDriverDdiRequest::FontDriverDdiRequest(v7, 14);
  v9 = 0;
  v10 = 0;
  v8 = -1;
  v7[6] = a1;
  v7[7] = a2;
  v7[8] = a3;
  v7[9] = a4;
  v7[10] = a5;
  v7[0] = &EscapeRequest::`vftable';
  v7[11] = a6;
  if ( UmfdClientSendAndWaitForCompletion(3u, (int)v7) >= 0 )
    return v8;
  else
    return -1;
}
