/*
 * XREFs of _DwmAsyncSetChildRootVisual@12 @ 0x1D291A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall DwmAsyncSetChildRootVisual(PVOID Object, int a2, int a3)
{
  int v3; // edi
  _WORD v5[3]; // [esp+4h] [ebp-24h] BYREF
  int v6; // [esp+Ah] [ebp-1Eh]
  int v7; // [esp+Eh] [ebp-1Ah]
  int v8; // [esp+12h] [ebp-16h]
  int v9; // [esp+16h] [ebp-12h]
  __int16 v10; // [esp+1Ah] [ebp-Eh]
  int v11; // [esp+1Ch] [ebp-Ch]
  int v12; // [esp+20h] [ebp-8h]
  int v13; // [esp+24h] [ebp-4h]

  v3 = -1073741823;
  if ( Object )
  {
    v11 = 1073741853;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v5[0] = 12;
    v5[1] = 36;
    v5[2] = 0x8000;
    v12 = a2;
    v13 = a3;
    v3 = LpcRequestPort(Object, v5);
    ObfDereferenceObject(Object);
  }
  return v3;
}
