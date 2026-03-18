/*
 * XREFs of _DwmAsyncSignalRedirectionStartComplete@4 @ 0xE1B8A
 * Callers:
 *     _zzzDwmStartRedirection@0 @ 0xE08D6 (_zzzDwmStartRedirection@0.c)
 * Callees:
 *     <none>
 */

int __thiscall DwmAsyncSignalRedirectionStartComplete(PVOID Object)
{
  int v2; // edi
  _WORD v4[3]; // [esp+8h] [ebp-1Ch] BYREF
  int v5; // [esp+Eh] [ebp-16h]
  int v6; // [esp+12h] [ebp-12h]
  int v7; // [esp+16h] [ebp-Eh]
  int v8; // [esp+1Ah] [ebp-Ah]
  __int16 v9; // [esp+1Eh] [ebp-6h]
  int v10; // [esp+20h] [ebp-4h]

  v2 = -1073741823;
  if ( Object )
  {
    v10 = 1073741894;
    v5 = 0;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v4[0] = 4;
    v4[1] = 28;
    v4[2] = 0x8000;
    v2 = LpcRequestPort(Object, v4);
    ObfDereferenceObject(Object);
  }
  return v2;
}
