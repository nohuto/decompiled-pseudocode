/*
 * XREFs of _EditionQueryInertiaWorker@12 @ 0x17CA46
 * Callers:
 *     <none>
 * Callees:
 *     ?IsCompositionInputWindow@@YGHPBUtagWND@@@Z @ 0x6E522 (-IsCompositionInputWindow@@YGHPBUtagWND@@@Z.c)
 *     _DCEHitTestWindow@16 @ 0x150745 (_DCEHitTestWindow@16.c)
 *     _DCEPtInRect@12 @ 0x150BB6 (_DCEPtInRect@12.c)
 *     _MicrosoftTelemetryAssertTriggeredNoArgsKM@0 @ 0x24B8D4 (_MicrosoftTelemetryAssertTriggeredNoArgsKM@0.c)
 */

int __stdcall EditionQueryInertiaWorker(int a1, int a2, int a3)
{
  int v3; // esi
  int v4; // edx
  int *v5; // ecx
  int v8; // [esp+Ch] [ebp-8h] BYREF
  int v9; // [esp+10h] [ebp-4h]

  v3 = ValidateHwnd(*(_DWORD *)(a3 + 112));
  if ( (*(_BYTE *)(a3 + 176) & 4) != 0 )
  {
    v8 = a1;
    v9 = a2;
    if ( !DCEHitTestWindow((int *)(a3 + 32), a3 + 48, &v8, 0) )
      return 0;
  }
  if ( (!v3 || IsCompositionInputWindow()) && (*(_BYTE *)(a3 + 176) & 4) == 0 )
    MicrosoftTelemetryAssertTriggeredNoArgsKM();
  if ( !v3 || IsCompositionInputWindow() )
    return 1;
  v4 = *(_DWORD *)(v3 + 120);
  v5 = (int *)(*(_DWORD *)(v3 + 20) + 52);
  v8 = a1;
  v9 = a2;
  if ( v4 ? DCEHitTestWindow(v5, v4, &v8, 0) : DCEPtInRect(v5, a1, a2) )
    return 1;
  else
    return 0;
}
