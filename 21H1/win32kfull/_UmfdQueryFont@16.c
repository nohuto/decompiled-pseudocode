/*
 * XREFs of _UmfdQueryFont@16 @ 0xDC592
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 *     _UmfdDrvFreeInternal@12 @ 0x24A6EA (_UmfdDrvFreeInternal@12.c)
 */

int __stdcall UmfdQueryFont(int a1, int a2, int a3, _DWORD *a4)
{
  int result; // eax
  _DWORD v5[7]; // [esp+Ch] [ebp-34h] BYREF
  int v6; // [esp+28h] [ebp-18h]
  int v7; // [esp+2Ch] [ebp-14h]
  _DWORD *v8; // [esp+30h] [ebp-10h]
  int v9; // [esp+34h] [ebp-Ch]
  int v10; // [esp+38h] [ebp-8h]
  int v11; // [esp+3Ch] [ebp-4h]

  *a4 = 0;
  FontDriverDdiRequest::FontDriverDdiRequest(v5, 0);
  v5[6] = a1;
  v5[0] = &QueryFontRequest::`vftable';
  v10 = 0;
  v11 = 0;
  v6 = a2;
  v7 = a3;
  v8 = a4;
  v9 = 0;
  if ( UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a2 + 4), (int)v5) < 0 )
    return 0;
  result = v9;
  if ( !v9 )
  {
    if ( v11 )
      UmfdDrvFreeInternal(*(_DWORD *)(v6 + 4));
    return 0;
  }
  return result;
}
