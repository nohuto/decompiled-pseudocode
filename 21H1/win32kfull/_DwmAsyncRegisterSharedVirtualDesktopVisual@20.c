/*
 * XREFs of _DwmAsyncRegisterSharedVirtualDesktopVisual@20 @ 0x1D26E3
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall DwmAsyncRegisterSharedVirtualDesktopVisual(PVOID Object, int a2, int a3, int a4, int a5)
{
  int v5; // edi
  _WORD v7[3]; // [esp+4h] [ebp-2Ch] BYREF
  int v8; // [esp+Ah] [ebp-26h]
  int v9; // [esp+Eh] [ebp-22h]
  int v10; // [esp+12h] [ebp-1Eh]
  int v11; // [esp+16h] [ebp-1Ah]
  __int16 v12; // [esp+1Ah] [ebp-16h]
  int v13; // [esp+1Ch] [ebp-14h]
  int v14; // [esp+20h] [ebp-10h]
  int v15; // [esp+24h] [ebp-Ch]
  int v16; // [esp+28h] [ebp-8h]
  int v17; // [esp+2Ch] [ebp-4h]

  v5 = -1073741823;
  if ( Object )
  {
    v13 = 1073741904;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v11 = 0;
    v12 = 0;
    v7[0] = 20;
    v7[1] = 44;
    v7[2] = 0x8000;
    v14 = a2;
    v15 = a3;
    v16 = a4;
    v17 = a5;
    v5 = LpcRequestPort(Object, v7);
    ObfDereferenceObject(Object);
  }
  return v5;
}
