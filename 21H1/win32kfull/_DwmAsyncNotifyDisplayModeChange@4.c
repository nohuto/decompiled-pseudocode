/*
 * XREFs of _DwmAsyncNotifyDisplayModeChange@4 @ 0xAC06E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __stdcall DwmAsyncNotifyDisplayModeChange(PVOID Object)
{
  unsigned int v1; // esi
  int v2; // edi
  _WORD v4[3]; // [esp+Ch] [ebp-20h] BYREF
  int v5; // [esp+12h] [ebp-1Ah]
  int v6; // [esp+16h] [ebp-16h]
  int v7; // [esp+1Ah] [ebp-12h]
  int v8; // [esp+1Eh] [ebp-Eh]
  __int16 v9; // [esp+22h] [ebp-Ah]
  int v10; // [esp+24h] [ebp-8h]
  unsigned int v11; // [esp+28h] [ebp-4h]

  do
  {
    v11 = HIDWORD(g_cDWMWindowUniqueness);
    v1 = g_cDWMWindowUniqueness;
  }
  while ( _InterlockedCompareExchange64(&g_cDWMWindowUniqueness, g_cDWMWindowUniqueness + 1, g_cDWMWindowUniqueness) != __PAIR64__(v11, v1) );
  v2 = -1073741823;
  if ( Object )
  {
    v10 = 1073741878;
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
