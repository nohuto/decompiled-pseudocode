/*
 * XREFs of _DwmAsyncNotifySessionConnected@4 @ 0xEC27A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall DwmAsyncNotifySessionConnected(PVOID Object)
{
  int v1; // edi
  _WORD v3[3]; // [esp+4h] [ebp-1Ch] BYREF
  int v4; // [esp+Ah] [ebp-16h]
  int v5; // [esp+Eh] [ebp-12h]
  int v6; // [esp+12h] [ebp-Eh]
  int v7; // [esp+16h] [ebp-Ah]
  __int16 v8; // [esp+1Ah] [ebp-6h]
  int v9; // [esp+1Ch] [ebp-4h]

  v1 = -1073741823;
  if ( Object )
  {
    v9 = 1073741873;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v3[0] = 4;
    v3[1] = 28;
    v3[2] = 0x8000;
    v1 = LpcRequestPort(Object, v3);
    ObfDereferenceObject(Object);
  }
  return v1;
}
