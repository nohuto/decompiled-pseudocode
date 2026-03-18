/*
 * XREFs of _DwmAsyncDesktopCreate@8 @ 0xE1AE8
 * Callers:
 *     _xxxCreateDesktopEx@24 @ 0x7E854 (_xxxCreateDesktopEx@24.c)
 *     _zzzDwmStartRedirection@0 @ 0xE08D6 (_zzzDwmStartRedirection@0.c)
 * Callees:
 *     <none>
 */

int __fastcall DwmAsyncDesktopCreate(void *a1, int a2)
{
  unsigned int v2; // esi
  PVOID v3; // edi
  _WORD v5[3]; // [esp+10h] [ebp-30h] BYREF
  int v6; // [esp+16h] [ebp-2Ah]
  int v7; // [esp+1Ah] [ebp-26h]
  int v8; // [esp+1Eh] [ebp-22h]
  int v9; // [esp+22h] [ebp-1Eh]
  __int16 v10; // [esp+26h] [ebp-1Ah]
  int v11; // [esp+28h] [ebp-18h]
  int v12; // [esp+2Ch] [ebp-14h]
  int v13; // [esp+30h] [ebp-10h]
  PVOID Object; // [esp+34h] [ebp-Ch]
  unsigned int v15; // [esp+38h] [ebp-8h]
  int v16; // [esp+3Ch] [ebp-4h]

  v13 = a2;
  Object = a1;
  v16 = -1073741823;
  do
  {
    v15 = HIDWORD(g_cDWMWindowUniqueness);
    v2 = g_cDWMWindowUniqueness;
  }
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != __PAIR64__(v15, v2) );
  v3 = Object;
  if ( Object )
  {
    v11 = 1073741838;
    v6 = 0;
    v7 = 0;
    v8 = 0;
    v9 = 0;
    v10 = 0;
    v5[0] = 8;
    v5[1] = 32;
    v5[2] = 0x8000;
    v12 = v13;
    v16 = LpcRequestPort(Object, v5);
    ObfDereferenceObject(v3);
  }
  return v16;
}
