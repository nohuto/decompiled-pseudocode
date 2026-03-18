/*
 * XREFs of _UmfdQueryFontTree@20 @ 0x858C8
 * Callers:
 *     <none>
 * Callees:
 *     ?UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z @ 0x87410 (-UmfdClientSendAndWaitForCompletion@@YGJW4FontDriverType@@PAVFontDriverDdiRequest@@@Z.c)
 *     ??0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z @ 0x876FC (--0FontDriverDdiRequest@@IAE@W4FontDriverDdiKind@@@Z.c)
 *     _UmfdDrvFreeInternal@12 @ 0x24A6EA (_UmfdDrvFreeInternal@12.c)
 */

int __stdcall UmfdQueryFontTree(int a1, int a2, int a3, int a4, _DWORD *a5)
{
  int result; // eax
  _DWORD v6[7]; // [esp+8h] [ebp-38h] BYREF
  int v7; // [esp+24h] [ebp-1Ch]
  int v8; // [esp+28h] [ebp-18h]
  int v9; // [esp+2Ch] [ebp-14h]
  _DWORD *v10; // [esp+30h] [ebp-10h]
  int v11; // [esp+34h] [ebp-Ch]
  int v12; // [esp+38h] [ebp-8h]
  int v13; // [esp+3Ch] [ebp-4h]

  *a5 = 0;
  FontDriverDdiRequest::FontDriverDdiRequest(v6, 1);
  v6[6] = a1;
  v8 = a3;
  v6[0] = &QueryFontTreeRequest::`vftable';
  v12 = 0;
  v13 = 0;
  v7 = a2;
  v9 = a4;
  v10 = a5;
  v11 = 0;
  if ( UmfdClientSendAndWaitForCompletion(*(_DWORD *)(a2 + 4), v6) < 0 )
    return 0;
  result = v11;
  if ( !v11 )
  {
    if ( v13 )
      UmfdDrvFreeInternal(*(_DWORD *)(v7 + 4));
    return 0;
  }
  return result;
}
