/*
 * XREFs of _DwmAsyncDesktopFree@8 @ 0xCEFDE
 * Callers:
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _xxxDwmStopRedirection@4 @ 0xCEE26 (_xxxDwmStopRedirection@4.c)
 *     _zzzDwmStartRedirection@0 @ 0xE08D6 (_zzzDwmStartRedirection@0.c)
 * Callees:
 *     <none>
 */

int __fastcall DwmAsyncDesktopFree(PVOID Object, int a2)
{
  int v3; // edi
  _WORD v5[3]; // [esp+8h] [ebp-20h] BYREF
  int v6; // [esp+Eh] [ebp-1Ah]
  int v7; // [esp+12h] [ebp-16h]
  int v8; // [esp+16h] [ebp-12h]
  int v9; // [esp+1Ah] [ebp-Eh]
  __int16 v10; // [esp+1Eh] [ebp-Ah]
  int v11; // [esp+20h] [ebp-8h]
  int v12; // [esp+24h] [ebp-4h]

  v3 = -1073741823;
  if ( Object )
  {
    v11 = 1073741840;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v5[0] = 8;
    v5[1] = 32;
    v5[2] = 0x8000;
    v12 = a2;
    v3 = LpcRequestPort(Object, v5);
    ObfDereferenceObject(Object);
  }
  return v3;
}
